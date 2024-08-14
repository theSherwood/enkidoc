module.exports = grammar({
  name: 'enkidoc',

  rules: {
    document: $ => repeat($.content),

    _newline_token: $ => /\n|\r\n?/,

    _eof: $ => '\0',

    _block_start: $ => $._newline_token,

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
      $.scripting,
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

    script_content: $ => repeat1(choice(
      $._raw,
      $.script_interpolation,
    )),

    scripting: $ => choice(
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
      $.scripting,
    )),

    /* BLOCKS
    ==========================================================================*/

    paragraph: $ => seq(
      $._block_start,
      $.inline_content,
      $._block_close,
    ),

    heading: $ => seq(
      $._block_start,
      field('token', /=+/),
      field('content', $.inline_content),
      $._block_close,
    ),

    checkbox_done: $ => choice('[x]', '[X]'),
    checkbox_empty: $ => '[ ]',
    checkbox: $ => choice(
      $.checkbox_done,
      $.checkbox_empty,
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
    ordered_list: $ => repeat1($.ordered_list_item),

    unordered_list_indicator: $ => /\++/,
    unordered_list_item: $ => seq(
      $._block_start,
      field('token', $.unordered_list_indicator),
      $._inline_whitespace,
      field('checkbox', optional(seq($.checkbox, $._inline_whitespace))),
      field('content', $.inline_content),
      $._block_close,
    ),
    unordered_list: $ => repeat1($.unordered_list_item),

    horizontal_rule: $ => seq(
      $._block_start,
      /-{3,}/,
      optional($._inline_whitespace),
      $._block_close,
    ),
  }
});
