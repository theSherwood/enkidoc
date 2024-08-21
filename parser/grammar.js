module.exports = grammar({
  name: 'enkidoc',

  externals: $ => [
    $._line_start,
    $._line_end,
    $._indent,
    $._dedent,
    $._eof,
    $._next_ordered_list_token,
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
        $.heading,
        $.horizontal_rule,
        $.ordered_list,
        $.paragraph,
      ),
      $._block_separator,
    ),
    block_list: $ => repeat1(
      $.block,
    ),
    _inline_text: $ => /[^\n]*[^\s]+[^\n]*/,
    _inline_whitespace: $ => /[ \t]+/,

    _newline_token: $ => /\n|\r\n?/,

    /* INLINE
    ==========================================================================*/

    // _raw: $ => /(.|\n)+/,

    // // https://github.github.com/gfm/#autolinks
    // uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
    // email_autolink: $ =>
    //     /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

    // script_interpolation: $ => choice(
    //   seq(      '#', field('content', $.block_list), '#'      ),
    //   seq(     '##', field('content', $.block_list), '##'     ),
    //   seq(    '###', field('content', $.block_list), '###'    ),
    //   seq(   '####', field('content', $.block_list), '####'   ),
    //   seq(  '#####', field('content', $.block_list), '#####'  ),
    //   seq( '######', field('content', $.block_list), '######' ),
    //   seq('#######', field('content', $.block_list), '#######'),
    // ),

    // script_content: $ => repeat1(choice(
    //   $._raw,
    //   $.script_interpolation,
    // )),

    // scripting: $ => seq(
    //   '<<<',
    //   choice(
    //                    field('content', $.script_content),
    //     seq(      '<', field('content', $.script_content), '>'      ),
    //     seq(     '<<', field('content', $.script_content), '>>'     ),
    //     seq(    '<<<', field('content', $.script_content), '>>>'    ),
    //     seq(   '<<<<', field('content', $.script_content), '>>>>'   ),
    //     seq(  '<<<<<', field('content', $.script_content), '>>>>>'  ),
    //     seq( '<<<<<<', field('content', $.script_content), '>>>>>>' ),
    //     seq('<<<<<<<', field('content', $.script_content), '>>>>>>>'),
    //   ),
    //   '>>>'
    // ),

    // _inline_text: $ => /[^\n]+/,

    _inline_content: $ => $._inline_text,

    // // TODO - _line_break
    // _inline_content: $ => repeat1(choice(
    //   prec(1, $._inline_text),
    //   prec(1, $.email_autolink),
    //   prec(1, $.uri_autolink),
    //   prec(1, $.scripting),
    // )),

    /* BLOCKS
    ==========================================================================*/

    paragraph: $ => seq(
      field('content', seq(
        $._inline_content,
        optional(repeat1(seq(
          $._newline_token,
          $._inline_content,
        ))),
      )),
      optional($._newline_token),
    ),

    heading: $ => seq(
      field('token', token(prec(10, /={1,6}/))),
      $._inline_whitespace,
      field('content', seq(
        $._inline_content,
        optional(repeat1(seq(
          $._newline_token,
          $._inline_content,
        ))),
      )),
      optional($._newline_token),
    ),

    horizontal_rule: $ => seq(
      token(prec(10, /\-{3,80}/)),
      optional($._newline_token),
    ),

    ordered_list_item: $ => seq(
      field('content', seq(
        $._inline_content,
        optional(repeat1(seq(
          $._newline_token,
          $._inline_content,
        ))),
      )),
    ),

    ordered_list: $ => seq(
      token(prec(10, '+')),
      $._inline_whitespace,
      field('items', seq(
        $.ordered_list_item,
        optional(repeat1(seq(
          $._next_ordered_list_token,
          $.ordered_list_item,
        ))),
      )),
      optional($._newline_token),
    )

    // checkbox_done: $ => choice('[x]', '[X]'),
    // checkbox_empty: $ => '[ ]',
    // checkbox: $ => choice(
    //   $.checkbox_done,
    //   $.checkbox_empty,
    // ),

    // ordered_list_item: $ => seq(
    //   $._line_start,
    //   '+',
    //   $._inline_whitespace,
    //   field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
    //   field('content', $._inline_content),
    //   // field('children', optional(seq(
    //   //   $._indent,
    //   //   choice($.ordered_list, $.unordered_list),
    //   //   $._dedent,
    //   // ))),
    //   $._line_end,
    // ),
    // ordered_list: $ => repeat1(prec(10, $.ordered_list_item)),

    // unordered_list_item: $ => seq(
    //   $._line_start,
    //   '-',
    //   $._inline_whitespace,
    //   field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
    //   field('content', $._inline_content),
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

    // horizontal_rule: $ => seq(
    //   $._line_start,
    //   /-{3,}/,
    //   optional($._inline_whitespace),
    //   $._line_end,
    // ),
  }
});
