module.exports = grammar({
  name: 'enkidoc',

  externals: $ => [
    $._line_start,
    $._line_end,
    $._indent,
    $._dedent,
    $._eof,
  ],

  conflicts: $ => [
    [$.ordered_list],
    [$.unordered_list],
    [$.block_list],
    [$.source_file],
    [$.paragraph],
    [$._blank_lines],
  ],

  extras: $ => [],

  rules: {
    source_file: $ => seq(
      optional($.__block_separator),
      optional($.block_list__),
    ),

    __blank_line: $ => seq(/[ \t]*/, $._newline_token),
    __block_separator: $ => choice(
      seq(repeat1($.__blank_line), optional($._eof)),
      $._eof,
    ),
    block__: $ => seq(choice(
        $.paragraph__,
      ),
      $.__block_separator,
    ),
    block_list__: $ => repeat1(
      $.block__,
    ),
    paragraph__: $ => seq(
      $.__inline_text,
      optional(repeat1(seq(
        $._newline_token,
        $.__inline_text,
      ))),
      optional($._newline_token),
    ),
    __inline_text: $ => /[^\n]*[^\s]+[^\n]*/,

    // source_file: $ => $.block_list,
    _source_file: $ => seq(
      // optional(/\s+/),
      prec(1, optional($._blank_line_start)),
      prec(1, optional(repeat1($._blank_line))),
      // optional($._blank_lines),
      // optional($._blank_line),
      // repeat1(optional($._blank_line)),
      prec(-1, optional(repeat1($.block_list))),
      // optional(/\s+/),
      prec(1, optional(repeat1($._blank_line))),
      prec(1, optional($._blank_line_end)),
      $._eof
    ),

    _newline_token: $ => /\n|\r\n?/,

    _block_start: $ => $._newline_token,

    _blank_line_start: $ => seq(
      $._line_start,
      optional($._inline_whitespace),
      $._line_end,
      $._newline_token,
    ),

    _blank_line_end: $ => seq(
      $._newline_token,
      $._line_start,
      optional($._inline_whitespace),
      $._line_end,
    ),

    _blank_line: $ => seq(
      $._newline_token,
      $._line_start,
      optional($._inline_whitespace),
      $._line_end,
      $._newline_token,
    ),

    _blank_lines: $ => seq(
      $._newline_token,
      $._line_start,
      optional($._inline_whitespace),
      $._line_end,
      $._newline_token,
      optional(seq(/\s+/, $._newline_token)),
    ),

    _block_close: $ => choice(
      $._blank_lines,
      // $._eof,
    ),

    _spaces: $ => / +/,
    _tabs: $ => /\t+/,
    _inline_whitespace: $ => /[ \t]+/,

    _line_break: $ => seq(
      $._inline_whitespace,
      /\\/,
      optional($._inline_whitespace),
      $._newline_token,
    ),

    _raw: $ => /.+/,

    block: $ => choice(
      // prec(2, $.scripting),
      // prec(2, $.heading),
      // prec(2, $.ordered_list),
      // prec(2, $.unordered_list),
      // prec(2, $.horizontal_rule),
      $.paragraph,
    ),

    block_list: $ => repeat1(seq(
      // optional(repeat1($._blank_line)),
      // 'Lorem ipsum\n',
      $.block,
      // $._block_close,
      // optional(repeat1($._blank_line)),
    )),

    /* INLINE
    ==========================================================================*/

    // https://github.github.com/gfm/#autolinks
    uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
    email_autolink: $ =>
        /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

    script_interpolation: $ => choice(
      seq(      '#', field('content', $.block_list), '#'      ),
      seq(     '##', field('content', $.block_list), '##'     ),
      seq(    '###', field('content', $.block_list), '###'    ),
      seq(   '####', field('content', $.block_list), '####'   ),
      seq(  '#####', field('content', $.block_list), '#####'  ),
      seq( '######', field('content', $.block_list), '######' ),
      seq('#######', field('content', $.block_list), '#######'),
    ),

    script_content: $ => repeat1(choice(
      $._raw,
      $.script_interpolation,
    )),

    scripting: $ => seq(
      '<',
      choice(
                       field('content', $.script_content),
        seq(      '<', field('content', $.script_content), '>'      ),
        seq(     '<<', field('content', $.script_content), '>>'     ),
        seq(    '<<<', field('content', $.script_content), '>>>'    ),
        seq(   '<<<<', field('content', $.script_content), '>>>>'   ),
        seq(  '<<<<<', field('content', $.script_content), '>>>>>'  ),
        seq( '<<<<<<', field('content', $.script_content), '>>>>>>' ),
        seq('<<<<<<<', field('content', $.script_content), '>>>>>>>'),
      ),
      '>'
    ),

    _inline_text: $ => /[^\n]+/,

    // TODO - _line_break
    _inline_content: $ => repeat1(choice(
      prec(1, $._inline_text),
      prec(1, $.email_autolink),
      prec(1, $.uri_autolink),
      prec(1, $.scripting),
    )),

    /* BLOCKS
    ==========================================================================*/

    paragraph: $ => seq(
      $._line_start,
      $._inline_content,
      $._line_end,
    ),

    heading: $ => seq(
      $._line_start,
      field('token', /=+/),
      field('content', $._inline_content),
      $._line_end,
    ),

    checkbox_done: $ => choice('[x]', '[X]'),
    checkbox_empty: $ => '[ ]',
    checkbox: $ => choice(
      $.checkbox_done,
      $.checkbox_empty,
    ),

    ordered_list_item: $ => seq(
      $._line_start,
      '+',
      $._inline_whitespace,
      field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
      field('content', $._inline_content),
      // field('children', optional(seq(
      //   $._indent,
      //   choice($.ordered_list, $.unordered_list),
      //   $._dedent,
      // ))),
      $._line_end,
    ),
    ordered_list: $ => repeat1(prec(10, $.ordered_list_item)),

    unordered_list_item: $ => seq(
      $._line_start,
      '-',
      $._inline_whitespace,
      field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
      field('content', $._inline_content),
      // field('children', optional(seq(
      //   $._indent,
      //   choice($.ordered_list, $.unordered_list),
      //   $._dedent,
      // ))),
      $._line_end,
    ),
    unordered_list: $ => seq(
      repeat1(
        prec(10, $.unordered_list_item)
      ),
      $._block_close,
    ),

    horizontal_rule: $ => seq(
      $._line_start,
      /-{3,}/,
      optional($._inline_whitespace),
      $._line_end,
    ),
  }
});
