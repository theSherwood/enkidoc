// Punctuation characters as specified in
// https://github.github.com/gfm/#ascii-punctuation-character
const PUNCTUATION_CHARACTERS_REGEX = '!-/:-@\\[-`\\{-~';
const PUNCTUATION_CHARACTERS_ARRAY = [
    '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<',
    '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'
];
// Returns a rule that matches all characters that count as punctuation inside markdown, besides
// a list of excluded punctuation characters. Calling this function with a empty list as the second
// argument returns a rule that matches all punctuation.
function punctuation_without($, chars) {
    return seq(choice(...PUNCTUATION_CHARACTERS_ARRAY.filter(c => !chars.includes(c))));
}

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
    $._non_blank_line,
    $._inline_content_end,
    $._DEBUG,
  ],

  conflicts: $ => [
    [$.inline_text]
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
        $.script_block,
      ),
      $._block_separator,
    ),
    block_list: $ => repeat1(
      $.block,
    ),
    // inline_text: $ => /[^\n]*[^\s]+[^\n]*/,
    inline_text: $ => prec(10, repeat1(prec(10, $._text_base))),
    _inline_whitespace: $ => /[ \t]+/,

    _newline_token: $ => /\n|\r\n?/,

    /* INLINE
    ==========================================================================*/

    _single_whitespace: $ => /[ \t]/,
    _plural_whitespace: $ => /[ \t]{2,}/,
    _whitespace: $ => /[ \t]+/,

    _word: $ => choice($._word_no_digit, $._digits),
    _word_no_digit: $ => new RegExp('[^' + PUNCTUATION_CHARACTERS_REGEX + ' \\t\\n\\r0-9]+(_+[^' + PUNCTUATION_CHARACTERS_REGEX + ' \\t\\n\\r0-9]+)*'),
    _digits: $ => /[0-9][0-9_]*/,

    _text_base: $ => choice(
      // /[^\n]*[^\s]+[^\n]*/,
      /[A-Za-z \t=.,:;'"+\-]+/,
      // /[=.+\-]/,
      $._word,
      $._whitespace,
      /\\<{3,}/,     // escaped scripting
      /\\\${2,}/,    // escaped latex
      /\\\{{2,}/,    // escaped double+ curlies
      /\\\}{2,}/,    // escaped double+ curlies close
      /\\\[{2,}/,    // escaped double+ brackets
      /\\\]{2,}/,    // escaped double+ brackets close
      // punctuation_without($, ['[', ']', '{', '}', '$', '<']),
      // '<!--',
      // /<![A-Z]+/,
      // '<?',
      // '<![CDATA[',
    ),

    _script_text: $ => choice(
      prec(-1, $._word),
      prec(-1, $._whitespace),
      prec(-1, $._newline_token),
      prec(-1, punctuation_without($, ['#', '>'])),
      prec(10, /[^#]#[^#]/),  // match up to 1 consecutive #
      prec(11, /[^>]>>[^>]/), // match up to 2 consecutive >>
    ),

    _raw: $ => /(.|\n)+/,

    // https://github.github.com/gfm/#autolinks
    uri_autolink: $ => /<[a-zA-Z][a-zA-Z0-9+\.\-][a-zA-Z0-9+\.\-]*:[^ \t\r\n<>]*>/,
    email_autolink: $ => /<[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*>/,

    script_interpolation: $ => seq(
      '##', field('content', $.block_list), '##',
    ),

    script_content: $ => repeat1(choice(
      $._script_text,
      $.script_interpolation,
    )),

    scripting: $ => seq(
      '<<<', $.script_content, '>>>'
    ),

    // // TODO - _line_break
    inline_content: $ => seq(
      repeat1(choice(
        prec.left(10, $.inline_text),
        prec.left(10, $.email_autolink),
        prec.left(10, $.uri_autolink),
        prec.left(10, $.scripting),
      )),
      $._inline_content_end,
    ),

    /* BLOCKS
    ==========================================================================*/

    script_block: $ => seq(
      $.scripting,
      optional($._newline_token),
    ),

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
