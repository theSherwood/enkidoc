#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 15
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__blank_line_token1 = 1,
  aux_sym__inline_whitespace_token1 = 2,
  sym__newline_token = 3,
  aux_sym__interpolated_block_end_token1 = 4,
  aux_sym__interpolated_block_list_token1 = 5,
  sym__single_whitespace = 6,
  sym__plural_whitespace = 7,
  sym__word_no_digit = 8,
  sym__digits = 9,
  aux_sym__text_base_token1 = 10,
  aux_sym__text_base_token2 = 11,
  aux_sym__text_base_token3 = 12,
  aux_sym__text_base_token4 = 13,
  aux_sym__text_base_token5 = 14,
  aux_sym__text_base_token6 = 15,
  aux_sym__text_base_token7 = 16,
  aux_sym__text_base_token8 = 17,
  aux_sym__script_text_token1 = 18,
  anon_sym_BANG = 19,
  anon_sym_DQUOTE = 20,
  anon_sym_DOLLAR = 21,
  anon_sym_PERCENT = 22,
  anon_sym_AMP = 23,
  anon_sym_SQUOTE = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_STAR = 27,
  anon_sym_PLUS = 28,
  anon_sym_COMMA = 29,
  anon_sym_DASH = 30,
  anon_sym_DOT = 31,
  anon_sym_SLASH = 32,
  anon_sym_COLON = 33,
  anon_sym_SEMI = 34,
  anon_sym_LT = 35,
  anon_sym_EQ = 36,
  anon_sym_QMARK = 37,
  anon_sym_AT = 38,
  anon_sym_LBRACK = 39,
  anon_sym_BSLASH = 40,
  anon_sym_RBRACK = 41,
  anon_sym_CARET = 42,
  anon_sym__ = 43,
  anon_sym_BQUOTE = 44,
  anon_sym_LBRACE = 45,
  anon_sym_PIPE = 46,
  anon_sym_RBRACE = 47,
  anon_sym_TILDE = 48,
  aux_sym__script_text_token2 = 49,
  aux_sym__script_text_token3 = 50,
  sym_uri_autolink = 51,
  sym_email_autolink = 52,
  aux_sym_heading_token1 = 53,
  aux_sym_horizontal_rule_token1 = 54,
  anon_sym_LBRACKx_RBRACK = 55,
  anon_sym_LBRACKX_RBRACK = 56,
  sym_checkbox_empty = 57,
  sym__indent = 58,
  sym__dedent = 59,
  sym__eof = 60,
  sym__first_ordered_list_token = 61,
  sym__next_ordered_list_token = 62,
  sym__list_item_content_cont = 63,
  sym__list_item_content_end = 64,
  sym__non_blank_line = 65,
  sym__inline_content_end = 66,
  sym__script_open = 67,
  sym__script_close = 68,
  sym__script_interpolation_open = 69,
  sym__script_interpolation_close = 70,
  sym__post_block_separator = 71,
  sym__DEBUG = 72,
  sym_source_file = 73,
  sym__blank_line = 74,
  sym__block_separator = 75,
  sym_block = 76,
  sym_block_list = 77,
  sym_inline_text = 78,
  sym__inline_whitespace = 79,
  sym__interpolated_block_end = 80,
  sym__interpolated_block_list = 81,
  sym__whitespace = 82,
  sym__word = 83,
  sym__text_base = 84,
  sym__script_text = 85,
  sym_script_interpolation = 86,
  sym_script_content = 87,
  sym_scripting = 88,
  sym_inline_content = 89,
  sym_script_block = 90,
  sym_paragraph = 91,
  sym_heading = 92,
  sym_horizontal_rule = 93,
  sym_ordered_list_item = 94,
  sym_ordered_list = 95,
  sym_checkbox_done = 96,
  sym_checkbox = 97,
  aux_sym__block_separator_repeat1 = 98,
  aux_sym_block_list_repeat1 = 99,
  aux_sym_block_list_repeat2 = 100,
  aux_sym_inline_text_repeat1 = 101,
  aux_sym_script_content_repeat1 = 102,
  aux_sym_inline_content_repeat1 = 103,
  aux_sym_paragraph_repeat1 = 104,
  aux_sym_ordered_list_item_repeat1 = 105,
  aux_sym_ordered_list_repeat1 = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [aux_sym__inline_whitespace_token1] = "_inline_whitespace_token1",
  [sym__newline_token] = "_newline_token",
  [aux_sym__interpolated_block_end_token1] = "_interpolated_block_end_token1",
  [aux_sym__interpolated_block_list_token1] = "_interpolated_block_list_token1",
  [sym__single_whitespace] = "_single_whitespace",
  [sym__plural_whitespace] = "_plural_whitespace",
  [sym__word_no_digit] = "_word_no_digit",
  [sym__digits] = "_digits",
  [aux_sym__text_base_token1] = "_text_base_token1",
  [aux_sym__text_base_token2] = "_text_base_token2",
  [aux_sym__text_base_token3] = "_text_base_token3",
  [aux_sym__text_base_token4] = "_text_base_token4",
  [aux_sym__text_base_token5] = "_text_base_token5",
  [aux_sym__text_base_token6] = "_text_base_token6",
  [aux_sym__text_base_token7] = "_text_base_token7",
  [aux_sym__text_base_token8] = "_text_base_token8",
  [aux_sym__script_text_token1] = "_script_text_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LT] = "<",
  [anon_sym_EQ] = "=",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACE] = "{",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TILDE] = "~",
  [aux_sym__script_text_token2] = "_script_text_token2",
  [aux_sym__script_text_token3] = "_script_text_token3",
  [sym_uri_autolink] = "uri_autolink",
  [sym_email_autolink] = "email_autolink",
  [aux_sym_heading_token1] = "heading_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [anon_sym_LBRACKx_RBRACK] = "[x]",
  [anon_sym_LBRACKX_RBRACK] = "[X]",
  [sym_checkbox_empty] = "checkbox_empty",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym__first_ordered_list_token] = "_first_ordered_list_token",
  [sym__next_ordered_list_token] = "_next_ordered_list_token",
  [sym__list_item_content_cont] = "_list_item_content_cont",
  [sym__list_item_content_end] = "_list_item_content_end",
  [sym__non_blank_line] = "_non_blank_line",
  [sym__inline_content_end] = "_inline_content_end",
  [sym__script_open] = "_script_open",
  [sym__script_close] = "_script_close",
  [sym__script_interpolation_open] = "_script_interpolation_open",
  [sym__script_interpolation_close] = "_script_interpolation_close",
  [sym__post_block_separator] = "_post_block_separator",
  [sym__DEBUG] = "_DEBUG",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
  [sym_inline_text] = "inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__interpolated_block_end] = "_interpolated_block_end",
  [sym__interpolated_block_list] = "_interpolated_block_list",
  [sym__whitespace] = "_whitespace",
  [sym__word] = "_word",
  [sym__text_base] = "_text_base",
  [sym__script_text] = "_script_text",
  [sym_script_interpolation] = "script_interpolation",
  [sym_script_content] = "script_content",
  [sym_scripting] = "scripting",
  [sym_inline_content] = "inline_content",
  [sym_script_block] = "script_block",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [sym_horizontal_rule] = "horizontal_rule",
  [sym_ordered_list_item] = "ordered_list_item",
  [sym_ordered_list] = "ordered_list",
  [sym_checkbox_done] = "checkbox_done",
  [sym_checkbox] = "checkbox",
  [aux_sym__block_separator_repeat1] = "_block_separator_repeat1",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_block_list_repeat2] = "block_list_repeat2",
  [aux_sym_inline_text_repeat1] = "inline_text_repeat1",
  [aux_sym_script_content_repeat1] = "script_content_repeat1",
  [aux_sym_inline_content_repeat1] = "inline_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_ordered_list_item_repeat1] = "ordered_list_item_repeat1",
  [aux_sym_ordered_list_repeat1] = "ordered_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [aux_sym__inline_whitespace_token1] = aux_sym__inline_whitespace_token1,
  [sym__newline_token] = sym__newline_token,
  [aux_sym__interpolated_block_end_token1] = aux_sym__interpolated_block_end_token1,
  [aux_sym__interpolated_block_list_token1] = aux_sym__interpolated_block_list_token1,
  [sym__single_whitespace] = sym__single_whitespace,
  [sym__plural_whitespace] = sym__plural_whitespace,
  [sym__word_no_digit] = sym__word_no_digit,
  [sym__digits] = sym__digits,
  [aux_sym__text_base_token1] = aux_sym__text_base_token1,
  [aux_sym__text_base_token2] = aux_sym__text_base_token2,
  [aux_sym__text_base_token3] = aux_sym__text_base_token3,
  [aux_sym__text_base_token4] = aux_sym__text_base_token4,
  [aux_sym__text_base_token5] = aux_sym__text_base_token5,
  [aux_sym__text_base_token6] = aux_sym__text_base_token6,
  [aux_sym__text_base_token7] = aux_sym__text_base_token7,
  [aux_sym__text_base_token8] = aux_sym__text_base_token8,
  [aux_sym__script_text_token1] = aux_sym__script_text_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym__script_text_token2] = aux_sym__script_text_token2,
  [aux_sym__script_text_token3] = aux_sym__script_text_token3,
  [sym_uri_autolink] = sym_uri_autolink,
  [sym_email_autolink] = sym_email_autolink,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
  [anon_sym_LBRACKx_RBRACK] = anon_sym_LBRACKx_RBRACK,
  [anon_sym_LBRACKX_RBRACK] = anon_sym_LBRACKX_RBRACK,
  [sym_checkbox_empty] = sym_checkbox_empty,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym__first_ordered_list_token] = sym__first_ordered_list_token,
  [sym__next_ordered_list_token] = sym__next_ordered_list_token,
  [sym__list_item_content_cont] = sym__list_item_content_cont,
  [sym__list_item_content_end] = sym__list_item_content_end,
  [sym__non_blank_line] = sym__non_blank_line,
  [sym__inline_content_end] = sym__inline_content_end,
  [sym__script_open] = sym__script_open,
  [sym__script_close] = sym__script_close,
  [sym__script_interpolation_open] = sym__script_interpolation_open,
  [sym__script_interpolation_close] = sym__script_interpolation_close,
  [sym__post_block_separator] = sym__post_block_separator,
  [sym__DEBUG] = sym__DEBUG,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
  [sym_inline_text] = sym_inline_text,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym__interpolated_block_end] = sym__interpolated_block_end,
  [sym__interpolated_block_list] = sym__interpolated_block_list,
  [sym__whitespace] = sym__whitespace,
  [sym__word] = sym__word,
  [sym__text_base] = sym__text_base,
  [sym__script_text] = sym__script_text,
  [sym_script_interpolation] = sym_script_interpolation,
  [sym_script_content] = sym_script_content,
  [sym_scripting] = sym_scripting,
  [sym_inline_content] = sym_inline_content,
  [sym_script_block] = sym_script_block,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [sym_ordered_list_item] = sym_ordered_list_item,
  [sym_ordered_list] = sym_ordered_list,
  [sym_checkbox_done] = sym_checkbox_done,
  [sym_checkbox] = sym_checkbox,
  [aux_sym__block_separator_repeat1] = aux_sym__block_separator_repeat1,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
  [aux_sym_block_list_repeat2] = aux_sym_block_list_repeat2,
  [aux_sym_inline_text_repeat1] = aux_sym_inline_text_repeat1,
  [aux_sym_script_content_repeat1] = aux_sym_script_content_repeat1,
  [aux_sym_inline_content_repeat1] = aux_sym_inline_content_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_ordered_list_item_repeat1] = aux_sym_ordered_list_item_repeat1,
  [aux_sym_ordered_list_repeat1] = aux_sym_ordered_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__newline_token] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__interpolated_block_end_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpolated_block_list_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__single_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__plural_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__word_no_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__digits] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text_base_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_base_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__script_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__script_text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__script_text_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_uri_autolink] = {
    .visible = true,
    .named = true,
  },
  [sym_email_autolink] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_horizontal_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACKx_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKX_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_checkbox_empty] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym__first_ordered_list_token] = {
    .visible = false,
    .named = true,
  },
  [sym__next_ordered_list_token] = {
    .visible = false,
    .named = true,
  },
  [sym__list_item_content_cont] = {
    .visible = false,
    .named = true,
  },
  [sym__list_item_content_end] = {
    .visible = false,
    .named = true,
  },
  [sym__non_blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_content_end] = {
    .visible = false,
    .named = true,
  },
  [sym__script_open] = {
    .visible = false,
    .named = true,
  },
  [sym__script_close] = {
    .visible = false,
    .named = true,
  },
  [sym__script_interpolation_open] = {
    .visible = false,
    .named = true,
  },
  [sym__script_interpolation_close] = {
    .visible = false,
    .named = true,
  },
  [sym__post_block_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__DEBUG] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym__block_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_block_end] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolated_block_list] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__text_base] = {
    .visible = false,
    .named = true,
  },
  [sym__script_text] = {
    .visible = false,
    .named = true,
  },
  [sym_script_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_script_content] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_content] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_horizontal_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym_ordered_list] = {
    .visible = true,
    .named = true,
  },
  [sym_checkbox_done] = {
    .visible = true,
    .named = true,
  },
  [sym_checkbox] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_separator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_list_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ordered_list_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ordered_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_checkbox = 1,
  field_children = 2,
  field_content = 3,
  field_items = 4,
  field_token = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_checkbox] = "checkbox",
  [field_children] = "children",
  [field_content] = "content",
  [field_items] = "items",
  [field_token] = "token",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 3},
  [9] = {.index = 15, .length = 4},
  [10] = {.index = 19, .length = 5},
  [11] = {.index = 24, .length = 6},
  [12] = {.index = 30, .length = 7},
  [13] = {.index = 37, .length = 8},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_items, 1},
  [2] =
    {field_content, 0},
    {field_content, 1},
  [4] =
    {field_items, 1},
    {field_items, 2},
  [6] =
    {field_content, 1},
  [7] =
    {field_content, 2},
    {field_token, 0},
  [9] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_content, 2},
  [12] =
    {field_content, 2},
    {field_content, 3},
    {field_token, 0},
  [15] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_content, 2},
    {field_content, 3},
  [19] =
    {field_children, 1},
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_content, 0},
  [24] =
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_children, 5},
    {field_content, 0},
    {field_content, 1},
  [30] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_children, 3},
    {field_children, 4},
    {field_children, 5},
    {field_children, 6},
    {field_content, 2},
  [37] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_children, 4},
    {field_children, 5},
    {field_children, 6},
    {field_children, 7},
    {field_content, 2},
    {field_content, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 23,
  [31] = 22,
  [32] = 28,
  [33] = 33,
  [34] = 34,
  [35] = 23,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 48,
  [52] = 48,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 56,
  [61] = 57,
  [62] = 54,
  [63] = 53,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 59,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 59,
  [77] = 67,
  [78] = 66,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 65,
  [83] = 83,
  [84] = 84,
  [85] = 69,
  [86] = 86,
  [87] = 74,
  [88] = 88,
  [89] = 68,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 70,
  [94] = 71,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 103,
  [104] = 80,
  [105] = 59,
  [106] = 106,
  [107] = 97,
  [108] = 108,
  [109] = 106,
  [110] = 81,
  [111] = 103,
  [112] = 79,
  [113] = 84,
  [114] = 88,
  [115] = 90,
  [116] = 101,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 118,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 123,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 126,
  [137] = 137,
  [138] = 137,
  [139] = 139,
  [140] = 129,
  [141] = 141,
  [142] = 130,
  [143] = 143,
  [144] = 139,
  [145] = 133,
  [146] = 125,
  [147] = 141,
};

static inline bool aux_sym__script_text_token1_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= '"' || (c < '+'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < 'A'
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? (c >= 'a' && c <= '{')
        : c <= '}')))));
}

static inline bool aux_sym__script_text_token1_character_set_2(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '+'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < 'A'
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? (c >= 'a' && c <= '{')
        : c <= '}')))));
}

static inline bool aux_sym__script_text_token1_character_set_3(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '+'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < 'A'
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? (c >= 'a' && c <= '{')
        : c <= '}')))));
}

static inline bool aux_sym__script_text_token1_character_set_4(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '+'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool aux_sym__script_text_token1_character_set_5(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < '+'
        ? (c >= '\'' && c <= ')')
        : c <= '.')))
    : (c <= ';' || (c < ']'
      ? (c < 'A'
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? (c >= 'a' && c <= '{')
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(155);
      if (lookahead == '!') ADVANCE(195);
      if (lookahead == '"') ADVANCE(196);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '(') ADVANCE(203);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(208);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(214);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == ';') ADVANCE(219);
      if (lookahead == '<') ADVANCE(222);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '?') ADVANCE(224);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead == ']') ADVANCE(230);
      if (lookahead == '^') ADVANCE(232);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '~') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '!') ADVANCE(194);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '$') ADVANCE(198);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '&') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead == '(') ADVANCE(204);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == ';') ADVANCE(220);
      if (lookahead == '<') ADVANCE(221);
      if (lookahead == '=') ADVANCE(223);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '?') ADVANCE(224);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead == ']') ADVANCE(231);
      if (lookahead == '^') ADVANCE(232);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(236);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '~') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == 'X') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(144);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '$' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '$' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(147);
      END_STATE();
    case 9:
      if (lookahead == '$') ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 131:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      END_STATE();
    case 132:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '>') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(139);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      if (lookahead == '<') ADVANCE(185);
      END_STATE();
    case 135:
      if (lookahead == '<') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == '>') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '>') ADVANCE(153);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 138:
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(139);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 139:
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(139);
      END_STATE();
    case 140:
      if (lookahead == '[') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(190);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(331);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(330);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(329);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 146:
      if (lookahead == '{') ADVANCE(187);
      END_STATE();
    case 147:
      if (lookahead == '}') ADVANCE(188);
      END_STATE();
    case 148:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 152:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(241);
      END_STATE();
    case 153:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(242);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '$' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(155);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '$' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (aux_sym__script_text_token1_character_set_1(lookahead)) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(170);
      if (aux_sym__script_text_token1_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__newline_token);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__interpolated_block_end_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__interpolated_block_end_token1);
      if (lookahead == '#') ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__interpolated_block_list_token1);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '=') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(174);
      if (lookahead == '!' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '$' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__interpolated_block_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '#' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(145);
      if (aux_sym__script_text_token1_character_set_4(lookahead)) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__digits);
      if (lookahead == '_') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (aux_sym__script_text_token1_character_set_5(lookahead)) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(328);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_base_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_base_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_base_token4);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_base_token5);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__text_base_token6);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__text_base_token7);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__text_base_token8);
      if (lookahead == '#') ADVANCE(172);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__text_base_token8);
      if (lookahead == '#') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__script_text_token1);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '\t' ||
          (' ' <= lookahead && lookahead <= '"') ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '[') ADVANCE(140);
      if (lookahead == ']') ADVANCE(141);
      if (lookahead == '{') ADVANCE(146);
      if (lookahead == '}') ADVANCE(147);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(193);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__script_text_token2);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__script_text_token3);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 159, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 4},
  [4] = {.lex_state = 1, .external_lex_state = 4},
  [5] = {.lex_state = 1, .external_lex_state = 4},
  [6] = {.lex_state = 1, .external_lex_state = 3},
  [7] = {.lex_state = 1, .external_lex_state = 3},
  [8] = {.lex_state = 1, .external_lex_state = 3},
  [9] = {.lex_state = 1, .external_lex_state = 3},
  [10] = {.lex_state = 1, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 154, .external_lex_state = 5},
  [13] = {.lex_state = 173, .external_lex_state = 5},
  [14] = {.lex_state = 154, .external_lex_state = 5},
  [15] = {.lex_state = 159, .external_lex_state = 5},
  [16] = {.lex_state = 154, .external_lex_state = 5},
  [17] = {.lex_state = 154, .external_lex_state = 5},
  [18] = {.lex_state = 7, .external_lex_state = 6},
  [19] = {.lex_state = 7, .external_lex_state = 6},
  [20] = {.lex_state = 7, .external_lex_state = 6},
  [21] = {.lex_state = 7, .external_lex_state = 6},
  [22] = {.lex_state = 7, .external_lex_state = 6},
  [23] = {.lex_state = 7, .external_lex_state = 7},
  [24] = {.lex_state = 7, .external_lex_state = 6},
  [25] = {.lex_state = 7, .external_lex_state = 7},
  [26] = {.lex_state = 7, .external_lex_state = 6},
  [27] = {.lex_state = 7, .external_lex_state = 6},
  [28] = {.lex_state = 7, .external_lex_state = 6},
  [29] = {.lex_state = 7, .external_lex_state = 6},
  [30] = {.lex_state = 7, .external_lex_state = 7},
  [31] = {.lex_state = 7, .external_lex_state = 6},
  [32] = {.lex_state = 7, .external_lex_state = 6},
  [33] = {.lex_state = 159, .external_lex_state = 2},
  [34] = {.lex_state = 159, .external_lex_state = 2},
  [35] = {.lex_state = 7, .external_lex_state = 7},
  [36] = {.lex_state = 7, .external_lex_state = 7},
  [37] = {.lex_state = 159, .external_lex_state = 5},
  [38] = {.lex_state = 159, .external_lex_state = 2},
  [39] = {.lex_state = 159, .external_lex_state = 5},
  [40] = {.lex_state = 7, .external_lex_state = 7},
  [41] = {.lex_state = 7, .external_lex_state = 7},
  [42] = {.lex_state = 159, .external_lex_state = 5},
  [43] = {.lex_state = 159, .external_lex_state = 5},
  [44] = {.lex_state = 154, .external_lex_state = 5},
  [45] = {.lex_state = 154, .external_lex_state = 5},
  [46] = {.lex_state = 159, .external_lex_state = 5},
  [47] = {.lex_state = 154, .external_lex_state = 5},
  [48] = {.lex_state = 4, .external_lex_state = 8},
  [49] = {.lex_state = 4, .external_lex_state = 8},
  [50] = {.lex_state = 7, .external_lex_state = 8},
  [51] = {.lex_state = 7, .external_lex_state = 8},
  [52] = {.lex_state = 7, .external_lex_state = 7},
  [53] = {.lex_state = 2, .external_lex_state = 9},
  [54] = {.lex_state = 2, .external_lex_state = 9},
  [55] = {.lex_state = 2, .external_lex_state = 9},
  [56] = {.lex_state = 2, .external_lex_state = 9},
  [57] = {.lex_state = 2, .external_lex_state = 9},
  [58] = {.lex_state = 0, .external_lex_state = 10},
  [59] = {.lex_state = 2, .external_lex_state = 9},
  [60] = {.lex_state = 0, .external_lex_state = 10},
  [61] = {.lex_state = 0, .external_lex_state = 10},
  [62] = {.lex_state = 0, .external_lex_state = 10},
  [63] = {.lex_state = 0, .external_lex_state = 10},
  [64] = {.lex_state = 2, .external_lex_state = 9},
  [65] = {.lex_state = 2, .external_lex_state = 11},
  [66] = {.lex_state = 2, .external_lex_state = 11},
  [67] = {.lex_state = 2, .external_lex_state = 12},
  [68] = {.lex_state = 2, .external_lex_state = 11},
  [69] = {.lex_state = 2, .external_lex_state = 12},
  [70] = {.lex_state = 2, .external_lex_state = 11},
  [71] = {.lex_state = 2, .external_lex_state = 12},
  [72] = {.lex_state = 0, .external_lex_state = 10},
  [73] = {.lex_state = 0, .external_lex_state = 10},
  [74] = {.lex_state = 2, .external_lex_state = 11},
  [75] = {.lex_state = 2, .external_lex_state = 11},
  [76] = {.lex_state = 2, .external_lex_state = 11},
  [77] = {.lex_state = 0, .external_lex_state = 13},
  [78] = {.lex_state = 154, .external_lex_state = 11},
  [79] = {.lex_state = 2, .external_lex_state = 12},
  [80] = {.lex_state = 2, .external_lex_state = 12},
  [81] = {.lex_state = 2, .external_lex_state = 11},
  [82] = {.lex_state = 154, .external_lex_state = 11},
  [83] = {.lex_state = 2, .external_lex_state = 11},
  [84] = {.lex_state = 2, .external_lex_state = 12},
  [85] = {.lex_state = 0, .external_lex_state = 13},
  [86] = {.lex_state = 157},
  [87] = {.lex_state = 154, .external_lex_state = 11},
  [88] = {.lex_state = 2, .external_lex_state = 12},
  [89] = {.lex_state = 154, .external_lex_state = 11},
  [90] = {.lex_state = 2, .external_lex_state = 12},
  [91] = {.lex_state = 159, .external_lex_state = 14},
  [92] = {.lex_state = 2, .external_lex_state = 11},
  [93] = {.lex_state = 154, .external_lex_state = 11},
  [94] = {.lex_state = 0, .external_lex_state = 13},
  [95] = {.lex_state = 2, .external_lex_state = 11},
  [96] = {.lex_state = 154, .external_lex_state = 14},
  [97] = {.lex_state = 148},
  [98] = {.lex_state = 0, .external_lex_state = 15},
  [99] = {.lex_state = 0, .external_lex_state = 15},
  [100] = {.lex_state = 0, .external_lex_state = 15},
  [101] = {.lex_state = 0, .external_lex_state = 15},
  [102] = {.lex_state = 0, .external_lex_state = 15},
  [103] = {.lex_state = 0, .external_lex_state = 15},
  [104] = {.lex_state = 0, .external_lex_state = 13},
  [105] = {.lex_state = 154, .external_lex_state = 11},
  [106] = {.lex_state = 148},
  [107] = {.lex_state = 148},
  [108] = {.lex_state = 2, .external_lex_state = 11},
  [109] = {.lex_state = 148},
  [110] = {.lex_state = 154, .external_lex_state = 11},
  [111] = {.lex_state = 0, .external_lex_state = 15},
  [112] = {.lex_state = 0, .external_lex_state = 13},
  [113] = {.lex_state = 0, .external_lex_state = 13},
  [114] = {.lex_state = 0, .external_lex_state = 13},
  [115] = {.lex_state = 0, .external_lex_state = 13},
  [116] = {.lex_state = 0, .external_lex_state = 15},
  [117] = {.lex_state = 2, .external_lex_state = 11},
  [118] = {.lex_state = 0, .external_lex_state = 16},
  [119] = {.lex_state = 0, .external_lex_state = 16},
  [120] = {.lex_state = 148},
  [121] = {.lex_state = 0, .external_lex_state = 16},
  [122] = {.lex_state = 148},
  [123] = {.lex_state = 0, .external_lex_state = 17},
  [124] = {.lex_state = 0, .external_lex_state = 17},
  [125] = {.lex_state = 154},
  [126] = {.lex_state = 154},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0, .external_lex_state = 17},
  [129] = {.lex_state = 0, .external_lex_state = 17},
  [130] = {.lex_state = 0, .external_lex_state = 17},
  [131] = {.lex_state = 0, .external_lex_state = 17},
  [132] = {.lex_state = 0, .external_lex_state = 11},
  [133] = {.lex_state = 154},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 154},
  [136] = {.lex_state = 154},
  [137] = {.lex_state = 154},
  [138] = {.lex_state = 154},
  [139] = {.lex_state = 154},
  [140] = {.lex_state = 0, .external_lex_state = 17},
  [141] = {.lex_state = 154},
  [142] = {.lex_state = 0, .external_lex_state = 17},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 154},
  [145] = {.lex_state = 154},
  [146] = {.lex_state = 154},
  [147] = {.lex_state = 154},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__eof = 2,
  ts_external_token__first_ordered_list_token = 3,
  ts_external_token__next_ordered_list_token = 4,
  ts_external_token__list_item_content_cont = 5,
  ts_external_token__list_item_content_end = 6,
  ts_external_token__non_blank_line = 7,
  ts_external_token__inline_content_end = 8,
  ts_external_token__script_open = 9,
  ts_external_token__script_close = 10,
  ts_external_token__script_interpolation_open = 11,
  ts_external_token__script_interpolation_close = 12,
  ts_external_token__post_block_separator = 13,
  ts_external_token__DEBUG = 14,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__first_ordered_list_token] = sym__first_ordered_list_token,
  [ts_external_token__next_ordered_list_token] = sym__next_ordered_list_token,
  [ts_external_token__list_item_content_cont] = sym__list_item_content_cont,
  [ts_external_token__list_item_content_end] = sym__list_item_content_end,
  [ts_external_token__non_blank_line] = sym__non_blank_line,
  [ts_external_token__inline_content_end] = sym__inline_content_end,
  [ts_external_token__script_open] = sym__script_open,
  [ts_external_token__script_close] = sym__script_close,
  [ts_external_token__script_interpolation_open] = sym__script_interpolation_open,
  [ts_external_token__script_interpolation_close] = sym__script_interpolation_close,
  [ts_external_token__post_block_separator] = sym__post_block_separator,
  [ts_external_token__DEBUG] = sym__DEBUG,
};

static const bool ts_external_scanner_states[18][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__first_ordered_list_token] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
    [ts_external_token__list_item_content_end] = true,
    [ts_external_token__non_blank_line] = true,
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
    [ts_external_token__script_close] = true,
    [ts_external_token__script_interpolation_open] = true,
    [ts_external_token__script_interpolation_close] = true,
    [ts_external_token__post_block_separator] = true,
    [ts_external_token__DEBUG] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
    [ts_external_token__first_ordered_list_token] = true,
    [ts_external_token__script_open] = true,
  },
  [3] = {
    [ts_external_token__script_close] = true,
    [ts_external_token__script_interpolation_open] = true,
  },
  [4] = {
    [ts_external_token__script_interpolation_open] = true,
  },
  [5] = {
    [ts_external_token__first_ordered_list_token] = true,
    [ts_external_token__script_open] = true,
  },
  [6] = {
    [ts_external_token__script_open] = true,
  },
  [7] = {
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
  },
  [8] = {
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
    [ts_external_token__post_block_separator] = true,
  },
  [9] = {
    [ts_external_token__indent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
    [ts_external_token__post_block_separator] = true,
  },
  [10] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [11] = {
    [ts_external_token__post_block_separator] = true,
  },
  [12] = {
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__post_block_separator] = true,
  },
  [13] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [14] = {
    [ts_external_token__eof] = true,
  },
  [15] = {
    [ts_external_token__first_ordered_list_token] = true,
  },
  [16] = {
    [ts_external_token__script_close] = true,
  },
  [17] = {
    [ts_external_token__dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
    [aux_sym__inline_whitespace_token1] = ACTIONS(1),
    [aux_sym__interpolated_block_end_token1] = ACTIONS(1),
    [sym__single_whitespace] = ACTIONS(1),
    [sym__plural_whitespace] = ACTIONS(1),
    [sym__word_no_digit] = ACTIONS(1),
    [sym__digits] = ACTIONS(1),
    [aux_sym__text_base_token1] = ACTIONS(1),
    [aux_sym__text_base_token2] = ACTIONS(1),
    [aux_sym__text_base_token3] = ACTIONS(1),
    [aux_sym__text_base_token4] = ACTIONS(1),
    [aux_sym__text_base_token5] = ACTIONS(1),
    [aux_sym__text_base_token6] = ACTIONS(1),
    [aux_sym__text_base_token7] = ACTIONS(1),
    [aux_sym__text_base_token8] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym__script_text_token3] = ACTIONS(1),
    [sym_uri_autolink] = ACTIONS(1),
    [sym_email_autolink] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__first_ordered_list_token] = ACTIONS(1),
    [sym__next_ordered_list_token] = ACTIONS(1),
    [sym__list_item_content_cont] = ACTIONS(1),
    [sym__list_item_content_end] = ACTIONS(1),
    [sym__non_blank_line] = ACTIONS(1),
    [sym__inline_content_end] = ACTIONS(1),
    [sym__script_open] = ACTIONS(1),
    [sym__script_close] = ACTIONS(1),
    [sym__script_interpolation_open] = ACTIONS(1),
    [sym__script_interpolation_close] = ACTIONS(1),
    [sym__post_block_separator] = ACTIONS(1),
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym__blank_line] = STATE(33),
    [sym__block_separator] = STATE(12),
    [sym_block] = STATE(132),
    [sym_block_list] = STATE(127),
    [sym_inline_text] = STATE(23),
    [sym__whitespace] = STATE(41),
    [sym__word] = STATE(41),
    [sym__text_base] = STATE(41),
    [sym_scripting] = STATE(50),
    [sym_inline_content] = STATE(89),
    [sym_script_block] = STATE(95),
    [sym_paragraph] = STATE(117),
    [sym_heading] = STATE(95),
    [sym_horizontal_rule] = STATE(95),
    [sym_ordered_list] = STATE(95),
    [aux_sym__block_separator_repeat1] = STATE(33),
    [aux_sym_block_list_repeat2] = STATE(14),
    [aux_sym_inline_text_repeat1] = STATE(41),
    [aux_sym_inline_content_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [aux_sym__inline_whitespace_token1] = ACTIONS(7),
    [sym__word_no_digit] = ACTIONS(7),
    [sym__digits] = ACTIONS(9),
    [aux_sym__text_base_token1] = ACTIONS(7),
    [aux_sym__text_base_token2] = ACTIONS(9),
    [aux_sym__text_base_token3] = ACTIONS(9),
    [aux_sym__text_base_token4] = ACTIONS(9),
    [aux_sym__text_base_token5] = ACTIONS(9),
    [aux_sym__text_base_token6] = ACTIONS(9),
    [aux_sym__text_base_token7] = ACTIONS(9),
    [aux_sym__text_base_token8] = ACTIONS(9),
    [sym_uri_autolink] = ACTIONS(11),
    [sym_email_autolink] = ACTIONS(11),
    [aux_sym_heading_token1] = ACTIONS(13),
    [aux_sym_horizontal_rule_token1] = ACTIONS(15),
    [sym__eof] = ACTIONS(17),
    [sym__first_ordered_list_token] = ACTIONS(19),
    [sym__script_open] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(27), 1,
      sym__script_close,
    ACTIONS(29), 1,
      sym__script_interpolation_open,
    STATE(6), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(25), 17,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(23), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [55] = 5,
    ACTIONS(29), 1,
      sym__script_interpolation_open,
    STATE(118), 1,
      sym_script_content,
    STATE(2), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(33), 17,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(31), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [110] = 5,
    ACTIONS(29), 1,
      sym__script_interpolation_open,
    STATE(119), 1,
      sym_script_content,
    STATE(2), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(33), 17,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(31), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [165] = 5,
    ACTIONS(29), 1,
      sym__script_interpolation_open,
    STATE(121), 1,
      sym_script_content,
    STATE(2), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(33), 17,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(31), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [220] = 5,
    ACTIONS(41), 1,
      sym__script_close,
    ACTIONS(43), 1,
      sym__script_interpolation_open,
    STATE(6), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(38), 17,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(35), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [275] = 2,
    ACTIONS(48), 19,
      sym__script_close,
      sym__script_interpolation_open,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(46), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [319] = 2,
    ACTIONS(52), 19,
      sym__script_close,
      sym__script_interpolation_open,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(50), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [363] = 2,
    ACTIONS(56), 19,
      sym__script_close,
      sym__script_interpolation_open,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(54), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [407] = 2,
    ACTIONS(60), 19,
      sym__script_close,
      sym__script_interpolation_open,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(58), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [451] = 2,
    ACTIONS(64), 19,
      sym__script_close,
      sym__script_interpolation_open,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_BSLASH,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      aux_sym__script_text_token2,
      aux_sym__script_text_token3,
    ACTIONS(62), 20,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      aux_sym__script_text_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [495] = 17,
    ACTIONS(13), 1,
      aux_sym_heading_token1,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(21), 1,
      sym__script_open,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym_block_list_repeat2,
    STATE(50), 1,
      sym_scripting,
    STATE(89), 1,
      sym_inline_content,
    STATE(117), 1,
      sym_paragraph,
    STATE(132), 1,
      sym_block,
    STATE(143), 1,
      sym_block_list,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(23), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [564] = 16,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(68), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(72), 1,
      aux_sym_heading_token1,
    ACTIONS(74), 1,
      sym__script_open,
    STATE(11), 1,
      sym__interpolated_block_list,
    STATE(49), 1,
      sym_scripting,
    STATE(68), 1,
      sym_inline_content,
    STATE(75), 1,
      sym_block,
    STATE(117), 1,
      sym_paragraph,
    ACTIONS(70), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(25), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [630] = 16,
    ACTIONS(13), 1,
      aux_sym_heading_token1,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(21), 1,
      sym__script_open,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      aux_sym_block_list_repeat2,
    STATE(50), 1,
      sym_scripting,
    STATE(89), 1,
      sym_inline_content,
    STATE(117), 1,
      sym_paragraph,
    STATE(132), 1,
      sym_block,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(23), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [696] = 16,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(72), 1,
      aux_sym_heading_token1,
    ACTIONS(74), 1,
      sym__script_open,
    ACTIONS(78), 1,
      aux_sym__blank_line_token1,
    STATE(43), 1,
      aux_sym_block_list_repeat1,
    STATE(49), 1,
      sym_scripting,
    STATE(68), 1,
      sym_inline_content,
    STATE(83), 1,
      sym_block,
    STATE(117), 1,
      sym_paragraph,
    ACTIONS(70), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(25), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [762] = 16,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_heading_token1,
    ACTIONS(94), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(97), 1,
      sym__first_ordered_list_token,
    ACTIONS(100), 1,
      sym__script_open,
    STATE(16), 1,
      aux_sym_block_list_repeat2,
    STATE(50), 1,
      sym_scripting,
    STATE(89), 1,
      sym_inline_content,
    STATE(117), 1,
      sym_paragraph,
    STATE(132), 1,
      sym_block,
    ACTIONS(88), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(23), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(82), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(85), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [828] = 14,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(72), 1,
      aux_sym_heading_token1,
    ACTIONS(74), 1,
      sym__script_open,
    STATE(49), 1,
      sym_scripting,
    STATE(68), 1,
      sym_inline_content,
    STATE(92), 1,
      sym_block,
    STATE(117), 1,
      sym_paragraph,
    ACTIONS(70), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(25), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(95), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [888] = 12,
    ACTIONS(107), 1,
      sym_checkbox_empty,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(55), 1,
      sym_inline_content,
    STATE(80), 1,
      sym_ordered_list_item,
    STATE(109), 1,
      sym_checkbox,
    STATE(120), 1,
      sym_checkbox_done,
    ACTIONS(103), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(105), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(35), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [941] = 12,
    ACTIONS(107), 1,
      sym_checkbox_empty,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(58), 1,
      sym_inline_content,
    STATE(104), 1,
      sym_ordered_list_item,
    STATE(106), 1,
      sym_checkbox,
    STATE(120), 1,
      sym_checkbox_done,
    ACTIONS(105), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(111), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(30), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [994] = 12,
    ACTIONS(107), 1,
      sym_checkbox_empty,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(55), 1,
      sym_inline_content,
    STATE(71), 1,
      sym_ordered_list_item,
    STATE(109), 1,
      sym_checkbox,
    STATE(120), 1,
      sym_checkbox_done,
    ACTIONS(103), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(105), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(35), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1047] = 12,
    ACTIONS(107), 1,
      sym_checkbox_empty,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(58), 1,
      sym_inline_content,
    STATE(94), 1,
      sym_ordered_list_item,
    STATE(106), 1,
      sym_checkbox,
    STATE(120), 1,
      sym_checkbox_done,
    ACTIONS(105), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(111), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(30), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1100] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(81), 1,
      sym_inline_content,
    ACTIONS(70), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(25), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1137] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    ACTIONS(115), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1174] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(64), 1,
      sym_inline_content,
    ACTIONS(103), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(35), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1211] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    ACTIONS(117), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1248] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(73), 1,
      sym_inline_content,
    ACTIONS(111), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(30), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1285] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(62), 1,
      sym_inline_content,
    ACTIONS(111), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(30), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1322] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(93), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(23), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1359] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(54), 1,
      sym_inline_content,
    ACTIONS(103), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(35), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1396] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    ACTIONS(119), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1433] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(110), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(23), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1470] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    STATE(70), 1,
      sym_inline_content,
    ACTIONS(70), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(25), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1507] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(125), 1,
      sym__eof,
    STATE(34), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(121), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1540] = 4,
    ACTIONS(129), 1,
      aux_sym__blank_line_token1,
    STATE(34), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(132), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(127), 16,
      sym__eof,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1571] = 7,
    ACTIONS(109), 1,
      sym__script_open,
    ACTIONS(134), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1608] = 7,
    ACTIONS(145), 1,
      sym__inline_content_end,
    ACTIONS(147), 1,
      sym__script_open,
    ACTIONS(142), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(136), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(41), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(139), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1645] = 4,
    ACTIONS(152), 1,
      aux_sym__blank_line_token1,
    STATE(39), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(154), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(150), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1674] = 2,
    ACTIONS(158), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(156), 16,
      sym__eof,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1699] = 4,
    ACTIONS(162), 1,
      aux_sym__blank_line_token1,
    STATE(39), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(165), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(160), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1728] = 4,
    ACTIONS(167), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(173), 4,
      sym__inline_content_end,
      sym__script_open,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(40), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(170), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1756] = 3,
    ACTIONS(175), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(177), 12,
      sym__inline_content_end,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
  [1782] = 2,
    ACTIONS(165), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(160), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1806] = 4,
    ACTIONS(179), 1,
      aux_sym__blank_line_token1,
    STATE(43), 1,
      aux_sym_block_list_repeat1,
    ACTIONS(165), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(160), 14,
      sym__first_ordered_list_token,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1834] = 2,
    ACTIONS(184), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(182), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1857] = 2,
    ACTIONS(188), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(186), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1880] = 2,
    ACTIONS(165), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(160), 14,
      sym__first_ordered_list_token,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1903] = 2,
    ACTIONS(154), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(150), 15,
      sym__first_ordered_list_token,
      sym__script_open,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1926] = 2,
    ACTIONS(190), 5,
      aux_sym__inline_whitespace_token1,
      aux_sym__interpolated_block_end_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
      aux_sym__text_base_token8,
    ACTIONS(192), 12,
      sym__inline_content_end,
      sym__script_open,
      sym__post_block_separator,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
  [1948] = 4,
    ACTIONS(196), 1,
      aux_sym__interpolated_block_end_token1,
    ACTIONS(200), 1,
      sym__post_block_separator,
    ACTIONS(194), 4,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
      aux_sym__text_base_token8,
    ACTIONS(198), 11,
      sym__inline_content_end,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
  [1974] = 3,
    ACTIONS(200), 1,
      sym__post_block_separator,
    ACTIONS(194), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(198), 12,
      sym__inline_content_end,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
  [1997] = 2,
    ACTIONS(190), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(192), 13,
      sym__inline_content_end,
      sym__script_open,
      sym__post_block_separator,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
  [2018] = 2,
    ACTIONS(190), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(192), 12,
      sym__inline_content_end,
      sym__script_open,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
      sym_uri_autolink,
      sym_email_autolink,
  [2038] = 4,
    ACTIONS(204), 1,
      sym__indent,
    ACTIONS(206), 1,
      sym__list_item_content_cont,
    STATE(57), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(202), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2053] = 4,
    ACTIONS(206), 1,
      sym__list_item_content_cont,
    ACTIONS(210), 1,
      sym__indent,
    STATE(53), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(208), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2068] = 4,
    ACTIONS(206), 1,
      sym__list_item_content_cont,
    ACTIONS(214), 1,
      sym__indent,
    STATE(56), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(212), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2083] = 4,
    ACTIONS(206), 1,
      sym__list_item_content_cont,
    ACTIONS(218), 1,
      sym__indent,
    STATE(57), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(216), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2098] = 3,
    ACTIONS(222), 1,
      sym__list_item_content_cont,
    STATE(57), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(220), 4,
      sym__indent,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2111] = 4,
    ACTIONS(225), 1,
      sym__indent,
    ACTIONS(227), 1,
      sym__list_item_content_cont,
    STATE(60), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(212), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2125] = 1,
    ACTIONS(229), 5,
      sym__indent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2133] = 4,
    ACTIONS(227), 1,
      sym__list_item_content_cont,
    ACTIONS(231), 1,
      sym__indent,
    STATE(61), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(216), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2147] = 3,
    ACTIONS(233), 1,
      sym__list_item_content_cont,
    STATE(61), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(220), 3,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
  [2159] = 4,
    ACTIONS(227), 1,
      sym__list_item_content_cont,
    ACTIONS(236), 1,
      sym__indent,
    STATE(63), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(208), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2173] = 4,
    ACTIONS(227), 1,
      sym__list_item_content_cont,
    ACTIONS(238), 1,
      sym__indent,
    STATE(61), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(202), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2187] = 1,
    ACTIONS(240), 5,
      sym__indent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2195] = 3,
    ACTIONS(242), 1,
      sym__newline_token,
    STATE(66), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(244), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2206] = 3,
    ACTIONS(246), 1,
      sym__newline_token,
    STATE(66), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(249), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2217] = 3,
    ACTIONS(253), 1,
      sym__next_ordered_list_token,
    STATE(67), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(251), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2228] = 3,
    ACTIONS(242), 1,
      sym__newline_token,
    STATE(74), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(256), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2239] = 3,
    ACTIONS(260), 1,
      sym__next_ordered_list_token,
    STATE(67), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(258), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2250] = 3,
    ACTIONS(242), 1,
      sym__newline_token,
    STATE(65), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(262), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2261] = 3,
    ACTIONS(260), 1,
      sym__next_ordered_list_token,
    STATE(69), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(264), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2272] = 1,
    ACTIONS(229), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [2279] = 1,
    ACTIONS(240), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [2286] = 3,
    ACTIONS(242), 1,
      sym__newline_token,
    STATE(66), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(266), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2297] = 3,
    ACTIONS(268), 1,
      aux_sym__interpolated_block_end_token1,
    ACTIONS(270), 1,
      sym__post_block_separator,
    STATE(8), 1,
      sym__interpolated_block_end,
  [2307] = 2,
    ACTIONS(272), 1,
      sym__newline_token,
    ACTIONS(229), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2315] = 3,
    ACTIONS(251), 1,
      sym__dedent,
    ACTIONS(274), 1,
      sym__next_ordered_list_token,
    STATE(77), 1,
      aux_sym_ordered_list_repeat1,
  [2325] = 3,
    ACTIONS(249), 1,
      sym__post_block_separator,
    ACTIONS(277), 1,
      sym__newline_token,
    STATE(78), 1,
      aux_sym_paragraph_repeat1,
  [2335] = 1,
    ACTIONS(280), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2341] = 1,
    ACTIONS(251), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2347] = 2,
    ACTIONS(282), 1,
      sym__newline_token,
    ACTIONS(249), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2355] = 3,
    ACTIONS(244), 1,
      sym__post_block_separator,
    ACTIONS(284), 1,
      sym__newline_token,
    STATE(78), 1,
      aux_sym_paragraph_repeat1,
  [2365] = 3,
    ACTIONS(270), 1,
      sym__post_block_separator,
    ACTIONS(286), 1,
      aux_sym__interpolated_block_end_token1,
    STATE(10), 1,
      sym__interpolated_block_end,
  [2375] = 1,
    ACTIONS(288), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2381] = 3,
    ACTIONS(258), 1,
      sym__dedent,
    ACTIONS(290), 1,
      sym__next_ordered_list_token,
    STATE(77), 1,
      aux_sym_ordered_list_repeat1,
  [2391] = 3,
    ACTIONS(78), 1,
      aux_sym__blank_line_token1,
    ACTIONS(292), 1,
      aux_sym__interpolated_block_end_token1,
    STATE(15), 1,
      aux_sym_block_list_repeat1,
  [2401] = 3,
    ACTIONS(266), 1,
      sym__post_block_separator,
    ACTIONS(284), 1,
      sym__newline_token,
    STATE(78), 1,
      aux_sym_paragraph_repeat1,
  [2411] = 1,
    ACTIONS(294), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2417] = 3,
    ACTIONS(256), 1,
      sym__post_block_separator,
    ACTIONS(284), 1,
      sym__newline_token,
    STATE(87), 1,
      aux_sym_paragraph_repeat1,
  [2427] = 1,
    ACTIONS(296), 3,
      sym__next_ordered_list_token,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2433] = 3,
    ACTIONS(298), 1,
      aux_sym__blank_line_token1,
    ACTIONS(300), 1,
      sym__eof,
    STATE(37), 1,
      aux_sym_block_list_repeat1,
  [2443] = 3,
    ACTIONS(270), 1,
      sym__post_block_separator,
    ACTIONS(302), 1,
      aux_sym__interpolated_block_end_token1,
    STATE(9), 1,
      sym__interpolated_block_end,
  [2453] = 3,
    ACTIONS(262), 1,
      sym__post_block_separator,
    ACTIONS(284), 1,
      sym__newline_token,
    STATE(82), 1,
      aux_sym_paragraph_repeat1,
  [2463] = 3,
    ACTIONS(264), 1,
      sym__dedent,
    ACTIONS(290), 1,
      sym__next_ordered_list_token,
    STATE(85), 1,
      aux_sym_ordered_list_repeat1,
  [2473] = 1,
    ACTIONS(304), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2478] = 2,
    ACTIONS(306), 1,
      sym__newline_token,
    ACTIONS(308), 1,
      sym__eof,
  [2485] = 2,
    ACTIONS(310), 1,
      aux_sym__inline_whitespace_token1,
    STATE(28), 1,
      sym__inline_whitespace,
  [2492] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(123), 1,
      sym_ordered_list,
  [2499] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(131), 1,
      sym_ordered_list,
  [2506] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(130), 1,
      sym_ordered_list,
  [2513] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(129), 1,
      sym_ordered_list,
  [2520] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(142), 1,
      sym_ordered_list,
  [2527] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(128), 1,
      sym_ordered_list,
  [2534] = 1,
    ACTIONS(251), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2539] = 1,
    ACTIONS(229), 2,
      sym__post_block_separator,
      sym__newline_token,
  [2544] = 2,
    ACTIONS(314), 1,
      aux_sym__inline_whitespace_token1,
    STATE(27), 1,
      sym__inline_whitespace,
  [2551] = 2,
    ACTIONS(316), 1,
      aux_sym__inline_whitespace_token1,
    STATE(32), 1,
      sym__inline_whitespace,
  [2558] = 1,
    ACTIONS(318), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2563] = 2,
    ACTIONS(320), 1,
      aux_sym__inline_whitespace_token1,
    STATE(29), 1,
      sym__inline_whitespace,
  [2570] = 1,
    ACTIONS(249), 2,
      sym__post_block_separator,
      sym__newline_token,
  [2575] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(124), 1,
      sym_ordered_list,
  [2582] = 1,
    ACTIONS(280), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2587] = 1,
    ACTIONS(288), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2592] = 1,
    ACTIONS(294), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2597] = 1,
    ACTIONS(296), 2,
      sym__dedent,
      sym__next_ordered_list_token,
  [2602] = 2,
    ACTIONS(312), 1,
      sym__first_ordered_list_token,
    STATE(140), 1,
      sym_ordered_list,
  [2609] = 1,
    ACTIONS(304), 2,
      sym__post_block_separator,
      aux_sym__interpolated_block_end_token1,
  [2614] = 1,
    ACTIONS(322), 1,
      sym__script_close,
  [2618] = 1,
    ACTIONS(324), 1,
      sym__script_close,
  [2622] = 1,
    ACTIONS(326), 1,
      aux_sym__inline_whitespace_token1,
  [2626] = 1,
    ACTIONS(328), 1,
      sym__script_close,
  [2630] = 1,
    ACTIONS(330), 1,
      aux_sym__inline_whitespace_token1,
  [2634] = 1,
    ACTIONS(332), 1,
      sym__dedent,
  [2638] = 1,
    ACTIONS(334), 1,
      sym__dedent,
  [2642] = 1,
    ACTIONS(336), 1,
      sym__newline_token,
  [2646] = 1,
    ACTIONS(338), 1,
      sym__newline_token,
  [2650] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [2654] = 1,
    ACTIONS(340), 1,
      sym__dedent,
  [2658] = 1,
    ACTIONS(342), 1,
      sym__dedent,
  [2662] = 1,
    ACTIONS(344), 1,
      sym__dedent,
  [2666] = 1,
    ACTIONS(346), 1,
      sym__dedent,
  [2670] = 1,
    ACTIONS(348), 1,
      sym__post_block_separator,
  [2674] = 1,
    ACTIONS(350), 1,
      sym__newline_token,
  [2678] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [2682] = 1,
    ACTIONS(354), 1,
      sym__newline_token,
  [2686] = 1,
    ACTIONS(306), 1,
      sym__newline_token,
  [2690] = 1,
    ACTIONS(356), 1,
      sym__newline_token,
  [2694] = 1,
    ACTIONS(358), 1,
      sym__newline_token,
  [2698] = 1,
    ACTIONS(360), 1,
      sym__newline_token,
  [2702] = 1,
    ACTIONS(362), 1,
      sym__dedent,
  [2706] = 1,
    ACTIONS(364), 1,
      sym__newline_token,
  [2710] = 1,
    ACTIONS(366), 1,
      sym__dedent,
  [2714] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [2718] = 1,
    ACTIONS(370), 1,
      sym__newline_token,
  [2722] = 1,
    ACTIONS(372), 1,
      sym__newline_token,
  [2726] = 1,
    ACTIONS(374), 1,
      sym__newline_token,
  [2730] = 1,
    ACTIONS(376), 1,
      sym__newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 319,
  [SMALL_STATE(9)] = 363,
  [SMALL_STATE(10)] = 407,
  [SMALL_STATE(11)] = 451,
  [SMALL_STATE(12)] = 495,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 630,
  [SMALL_STATE(15)] = 696,
  [SMALL_STATE(16)] = 762,
  [SMALL_STATE(17)] = 828,
  [SMALL_STATE(18)] = 888,
  [SMALL_STATE(19)] = 941,
  [SMALL_STATE(20)] = 994,
  [SMALL_STATE(21)] = 1047,
  [SMALL_STATE(22)] = 1100,
  [SMALL_STATE(23)] = 1137,
  [SMALL_STATE(24)] = 1174,
  [SMALL_STATE(25)] = 1211,
  [SMALL_STATE(26)] = 1248,
  [SMALL_STATE(27)] = 1285,
  [SMALL_STATE(28)] = 1322,
  [SMALL_STATE(29)] = 1359,
  [SMALL_STATE(30)] = 1396,
  [SMALL_STATE(31)] = 1433,
  [SMALL_STATE(32)] = 1470,
  [SMALL_STATE(33)] = 1507,
  [SMALL_STATE(34)] = 1540,
  [SMALL_STATE(35)] = 1571,
  [SMALL_STATE(36)] = 1608,
  [SMALL_STATE(37)] = 1645,
  [SMALL_STATE(38)] = 1674,
  [SMALL_STATE(39)] = 1699,
  [SMALL_STATE(40)] = 1728,
  [SMALL_STATE(41)] = 1756,
  [SMALL_STATE(42)] = 1782,
  [SMALL_STATE(43)] = 1806,
  [SMALL_STATE(44)] = 1834,
  [SMALL_STATE(45)] = 1857,
  [SMALL_STATE(46)] = 1880,
  [SMALL_STATE(47)] = 1903,
  [SMALL_STATE(48)] = 1926,
  [SMALL_STATE(49)] = 1948,
  [SMALL_STATE(50)] = 1974,
  [SMALL_STATE(51)] = 1997,
  [SMALL_STATE(52)] = 2018,
  [SMALL_STATE(53)] = 2038,
  [SMALL_STATE(54)] = 2053,
  [SMALL_STATE(55)] = 2068,
  [SMALL_STATE(56)] = 2083,
  [SMALL_STATE(57)] = 2098,
  [SMALL_STATE(58)] = 2111,
  [SMALL_STATE(59)] = 2125,
  [SMALL_STATE(60)] = 2133,
  [SMALL_STATE(61)] = 2147,
  [SMALL_STATE(62)] = 2159,
  [SMALL_STATE(63)] = 2173,
  [SMALL_STATE(64)] = 2187,
  [SMALL_STATE(65)] = 2195,
  [SMALL_STATE(66)] = 2206,
  [SMALL_STATE(67)] = 2217,
  [SMALL_STATE(68)] = 2228,
  [SMALL_STATE(69)] = 2239,
  [SMALL_STATE(70)] = 2250,
  [SMALL_STATE(71)] = 2261,
  [SMALL_STATE(72)] = 2272,
  [SMALL_STATE(73)] = 2279,
  [SMALL_STATE(74)] = 2286,
  [SMALL_STATE(75)] = 2297,
  [SMALL_STATE(76)] = 2307,
  [SMALL_STATE(77)] = 2315,
  [SMALL_STATE(78)] = 2325,
  [SMALL_STATE(79)] = 2335,
  [SMALL_STATE(80)] = 2341,
  [SMALL_STATE(81)] = 2347,
  [SMALL_STATE(82)] = 2355,
  [SMALL_STATE(83)] = 2365,
  [SMALL_STATE(84)] = 2375,
  [SMALL_STATE(85)] = 2381,
  [SMALL_STATE(86)] = 2391,
  [SMALL_STATE(87)] = 2401,
  [SMALL_STATE(88)] = 2411,
  [SMALL_STATE(89)] = 2417,
  [SMALL_STATE(90)] = 2427,
  [SMALL_STATE(91)] = 2433,
  [SMALL_STATE(92)] = 2443,
  [SMALL_STATE(93)] = 2453,
  [SMALL_STATE(94)] = 2463,
  [SMALL_STATE(95)] = 2473,
  [SMALL_STATE(96)] = 2478,
  [SMALL_STATE(97)] = 2485,
  [SMALL_STATE(98)] = 2492,
  [SMALL_STATE(99)] = 2499,
  [SMALL_STATE(100)] = 2506,
  [SMALL_STATE(101)] = 2513,
  [SMALL_STATE(102)] = 2520,
  [SMALL_STATE(103)] = 2527,
  [SMALL_STATE(104)] = 2534,
  [SMALL_STATE(105)] = 2539,
  [SMALL_STATE(106)] = 2544,
  [SMALL_STATE(107)] = 2551,
  [SMALL_STATE(108)] = 2558,
  [SMALL_STATE(109)] = 2563,
  [SMALL_STATE(110)] = 2570,
  [SMALL_STATE(111)] = 2575,
  [SMALL_STATE(112)] = 2582,
  [SMALL_STATE(113)] = 2587,
  [SMALL_STATE(114)] = 2592,
  [SMALL_STATE(115)] = 2597,
  [SMALL_STATE(116)] = 2602,
  [SMALL_STATE(117)] = 2609,
  [SMALL_STATE(118)] = 2614,
  [SMALL_STATE(119)] = 2618,
  [SMALL_STATE(120)] = 2622,
  [SMALL_STATE(121)] = 2626,
  [SMALL_STATE(122)] = 2630,
  [SMALL_STATE(123)] = 2634,
  [SMALL_STATE(124)] = 2638,
  [SMALL_STATE(125)] = 2642,
  [SMALL_STATE(126)] = 2646,
  [SMALL_STATE(127)] = 2650,
  [SMALL_STATE(128)] = 2654,
  [SMALL_STATE(129)] = 2658,
  [SMALL_STATE(130)] = 2662,
  [SMALL_STATE(131)] = 2666,
  [SMALL_STATE(132)] = 2670,
  [SMALL_STATE(133)] = 2674,
  [SMALL_STATE(134)] = 2678,
  [SMALL_STATE(135)] = 2682,
  [SMALL_STATE(136)] = 2686,
  [SMALL_STATE(137)] = 2690,
  [SMALL_STATE(138)] = 2694,
  [SMALL_STATE(139)] = 2698,
  [SMALL_STATE(140)] = 2702,
  [SMALL_STATE(141)] = 2706,
  [SMALL_STATE(142)] = 2710,
  [SMALL_STATE(143)] = 2714,
  [SMALL_STATE(144)] = 2718,
  [SMALL_STATE(145)] = 2722,
  [SMALL_STATE(146)] = 2726,
  [SMALL_STATE(147)] = 2730,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(13),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpolated_block_end, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_end, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpolated_block_list, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpolated_block_list, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpolated_block_end, 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_end, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 2, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_interpolation, 2, .production_id = 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(41),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(41),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(23),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(97),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(108),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(135),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(41),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(41),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(36),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat2, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(136),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(40),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(126),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat2, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat2, 5),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 7),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(137),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(138),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(22),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(18),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(19),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_enkidoc_external_scanner_create(void);
void tree_sitter_enkidoc_external_scanner_destroy(void *);
bool tree_sitter_enkidoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_enkidoc_external_scanner_serialize(void *, char *);
void tree_sitter_enkidoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_enkidoc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_enkidoc_external_scanner_create,
      tree_sitter_enkidoc_external_scanner_destroy,
      tree_sitter_enkidoc_external_scanner_scan,
      tree_sitter_enkidoc_external_scanner_serialize,
      tree_sitter_enkidoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
