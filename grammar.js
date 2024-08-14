module.exports = grammar({
  name: 'enkidoc',

  rules: {
    document: $ => repeat($.content),

    _newline_token: $ => /\n|\r\n?/,

    _eof: $ => /\Z/,

    _block_start: $ => choice(
      seq($._newline_token, /^/m),
      /\A/m,
    ),

    _block_close: $ => choice(
      $._newline_token,
      $._eof,
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

    content: $ => repeat1(choice(
      $.script,
      $.heading,
      $.paragraph,
      $.ordered_list,
      $.unordered_list,
      $.horizontal_rule,
    )),

    /* INLINE
    ==========================================================================*/

    // https://github.github.com/gfm/#autolinks
    uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
    email_autolink: $ =>
        /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

    script_interpolation: $ => choice(
      seq(      '#', field('content', $.content), '#'      ),
      seq(     '##', field('content', $.content), '##'     ),
      seq(    '###', field('content', $.content), '###'    ),
      seq(   '####', field('content', $.content), '####'   ),
      seq(  '#####', field('content', $.content), '#####'  ),
      seq( '######', field('content', $.content), '######' ),
      seq('#######', field('content', $.content), '#######'),
    ),

    script_content: $ => repeat(choice(
      $._raw,
      $.script_interpolation,
    )),

    script: $ => $ => choice(
      seq(      '<', field('content', $.script_content), '>'      ),
      seq(     '<<', field('content', $.script_content), '>>'     ),
      seq(    '<<<', field('content', $.script_content), '>>>'    ),
      seq(   '<<<<', field('content', $.script_content), '>>>>'   ),
      seq(  '<<<<<', field('content', $.script_content), '>>>>>'  ),
      seq( '<<<<<<', field('content', $.script_content), '>>>>>>' ),
      seq('<<<<<<<', field('content', $.script_content), '>>>>>>>'),
    ),

    inline_text: $ => /[^\n]+/,

    // TODO - _line_break
    inline_content: $ => repeat1(choice(
      $.inline_text,
      $.email_autolink,
      $.uri_autolink,
      $.script,
    )),

    checkbox_done: $ => choice('[x]', '[X]'),
    checkbox_empty: $ => '[ ]',
    checkbox: $ => choice(
      $.checkbox_done,
      $.checkbox_empty,
    ),

    /* BLOCKS
    ==========================================================================*/

    paragraph: $ => seq(
      $.inline_content,
      $._block_close,
    ),

    heading: $ => seq(
      $._block_start,
      field('token', $ => /=+/),
      field('content', $.inline_content),
      $._block_close,
    ),

    ordered_list_indicator: $ => /(\.+)|(\-+)/,
    ordered_list_item: $ => seq(
      $._block_start,
      field('token', $.ordered_list_indicator),
      $._inline_whitespace,
      field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
      field('content', $.inline_content),
      $._block_close,
    ),
    ordered_list: $ => repeat($.ordered_list_item),

    unordered_list_indicator: $ => /\++/,
    unordered_list_item: $ => seq(
      $._block_start,
      field('token', $.unordered_list_indicator),
      $._inline_whitespace,
      field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
      field('content', $.inline_content),
      $._block_close,
    ),
    unordered_list: $ => repeat($.unordered_list_item),

    horizontal_rule: $ => /$-{3,}\n/,
  }
});
