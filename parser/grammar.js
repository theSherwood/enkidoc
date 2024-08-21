module.exports = grammar({
  name: 'enkidoc',

  externals: $ => [
    $._line_start,
    $._line_end,
    $._indent,
    $._dedent,
    $._eof,
    $._first_ordered_list_token,
    $._next_ordered_list_token,
    $._list_item_content_cont,
    $._list_item_content_end,
    $._DEBUG,
  ],

  conflicts: $ => [
    [$.ordered_list_item],
    [$.ordered_list],
  ],

  extras: $ => [],

  rules: {
    source_file: $ => seq(
      optional($._block_separator),
      optional($.block_list),
    ),

    _blank_line: $ => seq(/[ \t]*/, $._newline_token),
    _block_separator: $ => choice(
      seq(repeat1($._blank_line), optional($._eof)),
      $._eof,
    ),
    block: $ => seq(choice(
        $.paragraph,
        $.heading,
        $.horizontal_rule,
        $.ordered_list,
        seq($.scripting, optional($._newline_token)),
      ),
      $._block_separator,
    ),
    block_list: $ => repeat1(
      $.block,
    ),
    inline_text: $ => /[^\n]*[^\s]+[^\n]*/,
    _inline_whitespace: $ => /[ \t]+/,

    _newline_token: $ => /\n|\r\n?/,

    /* INLINE
    ==========================================================================*/

    _raw: $ => /(.|\n)+/,

    // https://github.github.com/gfm/#autolinks
    uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
    email_autolink: $ => /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

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
      token(prec(10, '<<<')),
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
      '>>>'
    ),

    // // TODO - _line_break
    inline_content: $ => repeat1(choice(
      prec.left(-1, $.inline_text),
      prec.left(10, $.email_autolink),
      prec.left(10, $.uri_autolink),
      prec.left(10, $.scripting),
    )),

    /* BLOCKS
    ==========================================================================*/

    paragraph: $ => seq(
      field('content', seq(
        $.inline_content,
        optional(repeat1(seq(
          $._newline_token,
          $.inline_content,
        ))),
      )),
      optional($._newline_token),
    ),

    heading: $ => seq(
      field('token', token(prec(10, /={1,6}/))),
      $._inline_whitespace,
      field('content', seq(
        $.inline_content,
        optional(repeat1(seq(
          $._newline_token,
          $.inline_content,
        ))),
      )),
      optional($._newline_token),
    ),

    horizontal_rule: $ => seq(
      token(prec(10, /\-{3,80}/)),
      optional($._newline_token),
    ),

    ordered_list_item: $ => seq(
      field('checkbox', optional(seq(
        $.checkbox,
        $._inline_whitespace,
      ))),
      field('content', seq(
        $.inline_content,
        optional(repeat1(seq(
          $._list_item_content_cont,
          $._newline_token,
          $.inline_content,
        )))
      )),
      field('children', optional(seq(
        $._indent,
        $._newline_token,
        $.ordered_list,
        $._dedent,
      ))),
    ),

    ordered_list: $ => seq(
      $._first_ordered_list_token,
      field('items', seq(
        $.ordered_list_item,
        optional(repeat1(seq(
          $._next_ordered_list_token,
          $.ordered_list_item,
        ))),
      )),
      optional($._newline_token),
    ),

    checkbox_done: $ => choice('[x]', '[X]'),
    checkbox_empty: $ => '[ ]',
    checkbox: $ => choice(
      $.checkbox_done,
      $.checkbox_empty,
    ),

    // unordered_list_item: $ => seq(
    //   $._line_start,
    //   '-',
    //   $._inline_whitespace,
    //   field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
    //   field('content', $.inline_content),
    //   // field('children', optional(seq(
    //   //   $._indent,
    //   //   choice($.ordered_list, $.unordered_list),
    //   //   $._dedent,
    //   // ))),
    //   $._line_end,
    // ),
    // unordered_list: $ => seq(
    //   repeat1(
    //     prec(10, $.unordered_list_item)
    //   ),
    // ),
  }
});
