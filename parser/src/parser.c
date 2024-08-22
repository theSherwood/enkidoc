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
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__blank_line_token1 = 1,
  aux_sym__inline_whitespace_token1 = 2,
  sym__newline_token = 3,
  aux_sym__interpolated_block_list_token1 = 4,
  sym__single_whitespace = 5,
  sym__plural_whitespace = 6,
  sym__word_no_digit = 7,
  sym__digits = 8,
  aux_sym__text_base_token1 = 9,
  aux_sym__text_base_token2 = 10,
  aux_sym__text_base_token3 = 11,
  aux_sym__text_base_token4 = 12,
  aux_sym__text_base_token5 = 13,
  aux_sym__text_base_token6 = 14,
  aux_sym__text_base_token7 = 15,
  aux_sym__text_base_token8 = 16,
  aux_sym__script_text_token1 = 17,
  anon_sym_BANG = 18,
  anon_sym_DQUOTE = 19,
  anon_sym_DOLLAR = 20,
  anon_sym_PERCENT = 21,
  anon_sym_AMP = 22,
  anon_sym_SQUOTE = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  anon_sym_COMMA = 28,
  anon_sym_DASH = 29,
  anon_sym_DOT = 30,
  anon_sym_SLASH = 31,
  anon_sym_COLON = 32,
  anon_sym_SEMI = 33,
  anon_sym_LT = 34,
  anon_sym_EQ = 35,
  anon_sym_QMARK = 36,
  anon_sym_AT = 37,
  anon_sym_LBRACK = 38,
  anon_sym_BSLASH = 39,
  anon_sym_RBRACK = 40,
  anon_sym_CARET = 41,
  anon_sym__ = 42,
  anon_sym_BQUOTE = 43,
  anon_sym_LBRACE = 44,
  anon_sym_PIPE = 45,
  anon_sym_RBRACE = 46,
  anon_sym_TILDE = 47,
  aux_sym__script_text_token2 = 48,
  aux_sym__script_text_token3 = 49,
  sym_uri_autolink = 50,
  sym_email_autolink = 51,
  aux_sym_heading_token1 = 52,
  aux_sym_horizontal_rule_token1 = 53,
  anon_sym_LBRACKx_RBRACK = 54,
  anon_sym_LBRACKX_RBRACK = 55,
  sym_checkbox_empty = 56,
  sym__indent = 57,
  sym__dedent = 58,
  sym__eof = 59,
  sym__first_ordered_list_token = 60,
  sym__next_ordered_list_token = 61,
  sym__list_item_content_cont = 62,
  sym__list_item_content_end = 63,
  sym__non_blank_line = 64,
  sym__inline_content_end = 65,
  sym__script_open = 66,
  sym__script_close = 67,
  sym__script_interpolation_open = 68,
  sym__script_interpolation_close = 69,
  sym__DEBUG = 70,
  sym_source_file = 71,
  sym__blank_line = 72,
  sym__block_separator = 73,
  sym_block = 74,
  sym_block_list = 75,
  sym_inline_text = 76,
  sym__inline_whitespace = 77,
  sym__interpolated_block_list = 78,
  sym__whitespace = 79,
  sym__word = 80,
  sym__text_base = 81,
  sym__script_text = 82,
  sym_script_interpolation = 83,
  sym_script_content = 84,
  sym_scripting = 85,
  sym_inline_content = 86,
  sym_script_block = 87,
  sym_paragraph = 88,
  sym_heading = 89,
  sym_horizontal_rule = 90,
  sym_ordered_list_item = 91,
  sym_ordered_list = 92,
  sym_checkbox_done = 93,
  sym_checkbox = 94,
  aux_sym__block_separator_repeat1 = 95,
  aux_sym_block_list_repeat1 = 96,
  aux_sym_inline_text_repeat1 = 97,
  aux_sym__interpolated_block_list_repeat1 = 98,
  aux_sym_script_content_repeat1 = 99,
  aux_sym_inline_content_repeat1 = 100,
  aux_sym_paragraph_repeat1 = 101,
  aux_sym_ordered_list_item_repeat1 = 102,
  aux_sym_ordered_list_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [aux_sym__inline_whitespace_token1] = "_inline_whitespace_token1",
  [sym__newline_token] = "_newline_token",
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
  [sym__DEBUG] = "_DEBUG",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
  [sym_inline_text] = "inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
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
  [aux_sym_inline_text_repeat1] = "inline_text_repeat1",
  [aux_sym__interpolated_block_list_repeat1] = "_interpolated_block_list_repeat1",
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
  [sym__DEBUG] = sym__DEBUG,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
  [sym_inline_text] = sym_inline_text,
  [sym__inline_whitespace] = sym__inline_whitespace,
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
  [aux_sym_inline_text_repeat1] = aux_sym_inline_text_repeat1,
  [aux_sym__interpolated_block_list_repeat1] = aux_sym__interpolated_block_list_repeat1,
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
  [aux_sym_inline_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpolated_block_list_repeat1] = {
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
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
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
    {field_content, 2},
    {field_token, 0},
  [8] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_content, 2},
  [11] =
    {field_content, 1},
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
  [15] = 14,
  [16] = 16,
  [17] = 16,
  [18] = 14,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 21,
  [26] = 20,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 29,
  [36] = 36,
  [37] = 33,
  [38] = 33,
  [39] = 29,
  [40] = 40,
  [41] = 33,
  [42] = 32,
  [43] = 33,
  [44] = 44,
  [45] = 32,
  [46] = 44,
  [47] = 36,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 48,
  [56] = 49,
  [57] = 57,
  [58] = 54,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 61,
  [74] = 63,
  [75] = 60,
  [76] = 76,
  [77] = 62,
  [78] = 78,
  [79] = 64,
  [80] = 60,
  [81] = 64,
  [82] = 63,
  [83] = 62,
  [84] = 61,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 70,
  [94] = 69,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 70,
  [100] = 100,
  [101] = 69,
  [102] = 76,
  [103] = 78,
  [104] = 72,
  [105] = 69,
  [106] = 106,
  [107] = 90,
  [108] = 108,
  [109] = 95,
  [110] = 92,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 91,
  [115] = 96,
  [116] = 85,
  [117] = 78,
  [118] = 118,
  [119] = 72,
  [120] = 120,
  [121] = 76,
  [122] = 89,
  [123] = 88,
  [124] = 87,
  [125] = 86,
  [126] = 89,
  [127] = 97,
  [128] = 95,
  [129] = 98,
  [130] = 87,
  [131] = 88,
  [132] = 69,
  [133] = 90,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 113,
  [139] = 134,
  [140] = 108,
  [141] = 118,
  [142] = 142,
  [143] = 142,
  [144] = 142,
  [145] = 134,
  [146] = 137,
  [147] = 120,
  [148] = 148,
  [149] = 136,
  [150] = 135,
  [151] = 136,
  [152] = 112,
  [153] = 137,
  [154] = 148,
  [155] = 106,
  [156] = 148,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 158,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 166,
  [168] = 166,
  [169] = 159,
  [170] = 170,
  [171] = 158,
  [172] = 162,
  [173] = 163,
  [174] = 164,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 120,
  [182] = 162,
  [183] = 118,
  [184] = 184,
  [185] = 185,
  [186] = 163,
  [187] = 180,
  [188] = 164,
  [189] = 189,
  [190] = 180,
  [191] = 191,
  [192] = 189,
  [193] = 177,
  [194] = 178,
  [195] = 184,
  [196] = 189,
  [197] = 177,
  [198] = 178,
  [199] = 184,
};

static inline bool aux_sym__text_base_token1_character_set_1(int32_t c) {
  return (c < '+'
    ? (c < '"'
      ? (c < ' '
        ? c == '\t'
        : c <= ' ')
      : (c <= '"' || c == '\''))
    : (c <= '.' || (c < 'A'
      ? (c < '='
        ? (c >= ':' && c <= ';')
        : c <= '>')
      : (c <= 'Z' || (c >= 'a' && c <= 'z')))));
}

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
      if (eof) ADVANCE(152);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(201);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '?') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(218);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(221);
      if (lookahead == '^') ADVANCE(223);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == '`') ADVANCE(225);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '}') ADVANCE(229);
      if (lookahead == '~') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(170);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '$') ADVANCE(191);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(214);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead == '?') ADVANCE(216);
      if (lookahead == '@') ADVANCE(217);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(220);
      if (lookahead == ']') ADVANCE(222);
      if (lookahead == '^') ADVANCE(223);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == '`') ADVANCE(225);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead == '|') ADVANCE(228);
      if (lookahead == '}') ADVANCE(230);
      if (lookahead == '~') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == 'X') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == '{') ADVANCE(143);
      if (lookahead == '}') ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(91);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 128:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      END_STATE();
    case 129:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 130:
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(136);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '<') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == '<') ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 134:
      if (lookahead == '>') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(136);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 136:
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(136);
      END_STATE();
    case 137:
      if (lookahead == '[') ADVANCE(184);
      END_STATE();
    case 138:
      if (lookahead == ']') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(322);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(321);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(320);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 143:
      if (lookahead == '{') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == '}') ADVANCE(183);
      END_STATE();
    case 145:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 146:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(232);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(233);
      END_STATE();
    case 151:
      if (eof) ADVANCE(152);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(152);
      if (lookahead == '#') ADVANCE(186);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '>')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (aux_sym__script_text_token1_character_set_1(lookahead)) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(170);
      if (aux_sym__script_text_token1_character_set_2(lookahead)) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__newline_token);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__interpolated_block_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(142);
      if (aux_sym__script_text_token1_character_set_4(lookahead)) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__digits);
      if (lookahead == '_') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (aux_sym__script_text_token1_character_set_5(lookahead)) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(319);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(177);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_base_token2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_base_token3);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_base_token4);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_base_token5);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_base_token6);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_base_token7);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_base_token8);
      if (lookahead == '#') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__script_text_token1);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(187);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__script_text_token2);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__script_text_token3);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(250);
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
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 161, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 3},
  [3] = {.lex_state = 2, .external_lex_state = 4},
  [4] = {.lex_state = 2, .external_lex_state = 4},
  [5] = {.lex_state = 2, .external_lex_state = 4},
  [6] = {.lex_state = 2, .external_lex_state = 3},
  [7] = {.lex_state = 2, .external_lex_state = 3},
  [8] = {.lex_state = 151, .external_lex_state = 5},
  [9] = {.lex_state = 151, .external_lex_state = 5},
  [10] = {.lex_state = 151, .external_lex_state = 5},
  [11] = {.lex_state = 1, .external_lex_state = 5},
  [12] = {.lex_state = 151, .external_lex_state = 5},
  [13] = {.lex_state = 151, .external_lex_state = 5},
  [14] = {.lex_state = 4, .external_lex_state = 6},
  [15] = {.lex_state = 4, .external_lex_state = 6},
  [16] = {.lex_state = 4, .external_lex_state = 6},
  [17] = {.lex_state = 4, .external_lex_state = 6},
  [18] = {.lex_state = 4, .external_lex_state = 6},
  [19] = {.lex_state = 4, .external_lex_state = 6},
  [20] = {.lex_state = 155, .external_lex_state = 7},
  [21] = {.lex_state = 155, .external_lex_state = 7},
  [22] = {.lex_state = 155, .external_lex_state = 7},
  [23] = {.lex_state = 155, .external_lex_state = 7},
  [24] = {.lex_state = 159, .external_lex_state = 8},
  [25] = {.lex_state = 159, .external_lex_state = 8},
  [26] = {.lex_state = 159, .external_lex_state = 8},
  [27] = {.lex_state = 159, .external_lex_state = 8},
  [28] = {.lex_state = 4, .external_lex_state = 6},
  [29] = {.lex_state = 4, .external_lex_state = 6},
  [30] = {.lex_state = 4, .external_lex_state = 6},
  [31] = {.lex_state = 4, .external_lex_state = 6},
  [32] = {.lex_state = 4, .external_lex_state = 6},
  [33] = {.lex_state = 4, .external_lex_state = 9},
  [34] = {.lex_state = 4, .external_lex_state = 6},
  [35] = {.lex_state = 4, .external_lex_state = 6},
  [36] = {.lex_state = 161, .external_lex_state = 2},
  [37] = {.lex_state = 4, .external_lex_state = 9},
  [38] = {.lex_state = 4, .external_lex_state = 9},
  [39] = {.lex_state = 4, .external_lex_state = 6},
  [40] = {.lex_state = 4, .external_lex_state = 9},
  [41] = {.lex_state = 4, .external_lex_state = 9},
  [42] = {.lex_state = 4, .external_lex_state = 6},
  [43] = {.lex_state = 4, .external_lex_state = 9},
  [44] = {.lex_state = 161, .external_lex_state = 2},
  [45] = {.lex_state = 4, .external_lex_state = 6},
  [46] = {.lex_state = 161, .external_lex_state = 2},
  [47] = {.lex_state = 161, .external_lex_state = 2},
  [48] = {.lex_state = 153, .external_lex_state = 10},
  [49] = {.lex_state = 153, .external_lex_state = 10},
  [50] = {.lex_state = 161, .external_lex_state = 2},
  [51] = {.lex_state = 4, .external_lex_state = 9},
  [52] = {.lex_state = 4, .external_lex_state = 9},
  [53] = {.lex_state = 161, .external_lex_state = 2},
  [54] = {.lex_state = 151, .external_lex_state = 5},
  [55] = {.lex_state = 158, .external_lex_state = 11},
  [56] = {.lex_state = 158, .external_lex_state = 11},
  [57] = {.lex_state = 151, .external_lex_state = 5},
  [58] = {.lex_state = 151, .external_lex_state = 5},
  [59] = {.lex_state = 4, .external_lex_state = 9},
  [60] = {.lex_state = 154, .external_lex_state = 12},
  [61] = {.lex_state = 154, .external_lex_state = 12},
  [62] = {.lex_state = 154, .external_lex_state = 12},
  [63] = {.lex_state = 154, .external_lex_state = 12},
  [64] = {.lex_state = 154, .external_lex_state = 12},
  [65] = {.lex_state = 156, .external_lex_state = 13},
  [66] = {.lex_state = 156, .external_lex_state = 13},
  [67] = {.lex_state = 156, .external_lex_state = 13},
  [68] = {.lex_state = 156, .external_lex_state = 13},
  [69] = {.lex_state = 154, .external_lex_state = 12},
  [70] = {.lex_state = 154, .external_lex_state = 12},
  [71] = {.lex_state = 156, .external_lex_state = 13},
  [72] = {.lex_state = 154, .external_lex_state = 14},
  [73] = {.lex_state = 158, .external_lex_state = 15},
  [74] = {.lex_state = 158, .external_lex_state = 15},
  [75] = {.lex_state = 158, .external_lex_state = 15},
  [76] = {.lex_state = 154, .external_lex_state = 14},
  [77] = {.lex_state = 158, .external_lex_state = 15},
  [78] = {.lex_state = 154, .external_lex_state = 14},
  [79] = {.lex_state = 158, .external_lex_state = 15},
  [80] = {.lex_state = 151, .external_lex_state = 16},
  [81] = {.lex_state = 151, .external_lex_state = 16},
  [82] = {.lex_state = 151, .external_lex_state = 16},
  [83] = {.lex_state = 151, .external_lex_state = 16},
  [84] = {.lex_state = 151, .external_lex_state = 16},
  [85] = {.lex_state = 154, .external_lex_state = 13},
  [86] = {.lex_state = 154, .external_lex_state = 13},
  [87] = {.lex_state = 154, .external_lex_state = 14},
  [88] = {.lex_state = 154, .external_lex_state = 14},
  [89] = {.lex_state = 154, .external_lex_state = 14},
  [90] = {.lex_state = 154, .external_lex_state = 14},
  [91] = {.lex_state = 154, .external_lex_state = 13},
  [92] = {.lex_state = 154, .external_lex_state = 13},
  [93] = {.lex_state = 158, .external_lex_state = 15},
  [94] = {.lex_state = 158, .external_lex_state = 15},
  [95] = {.lex_state = 154, .external_lex_state = 14},
  [96] = {.lex_state = 154, .external_lex_state = 13},
  [97] = {.lex_state = 154, .external_lex_state = 13},
  [98] = {.lex_state = 154, .external_lex_state = 13},
  [99] = {.lex_state = 151, .external_lex_state = 16},
  [100] = {.lex_state = 161, .external_lex_state = 17},
  [101] = {.lex_state = 151, .external_lex_state = 16},
  [102] = {.lex_state = 158, .external_lex_state = 18},
  [103] = {.lex_state = 158, .external_lex_state = 18},
  [104] = {.lex_state = 158, .external_lex_state = 18},
  [105] = {.lex_state = 154, .external_lex_state = 13},
  [106] = {.lex_state = 156, .external_lex_state = 13},
  [107] = {.lex_state = 158, .external_lex_state = 18},
  [108] = {.lex_state = 156, .external_lex_state = 13},
  [109] = {.lex_state = 158, .external_lex_state = 18},
  [110] = {.lex_state = 158, .external_lex_state = 17},
  [111] = {.lex_state = 156, .external_lex_state = 13},
  [112] = {.lex_state = 156, .external_lex_state = 13},
  [113] = {.lex_state = 156, .external_lex_state = 13},
  [114] = {.lex_state = 158, .external_lex_state = 17},
  [115] = {.lex_state = 158, .external_lex_state = 17},
  [116] = {.lex_state = 158, .external_lex_state = 17},
  [117] = {.lex_state = 151, .external_lex_state = 19},
  [118] = {.lex_state = 156, .external_lex_state = 13},
  [119] = {.lex_state = 151, .external_lex_state = 19},
  [120] = {.lex_state = 156, .external_lex_state = 13},
  [121] = {.lex_state = 151, .external_lex_state = 19},
  [122] = {.lex_state = 158, .external_lex_state = 18},
  [123] = {.lex_state = 158, .external_lex_state = 18},
  [124] = {.lex_state = 158, .external_lex_state = 18},
  [125] = {.lex_state = 158, .external_lex_state = 17},
  [126] = {.lex_state = 151, .external_lex_state = 19},
  [127] = {.lex_state = 158, .external_lex_state = 17},
  [128] = {.lex_state = 151, .external_lex_state = 19},
  [129] = {.lex_state = 158, .external_lex_state = 17},
  [130] = {.lex_state = 151, .external_lex_state = 19},
  [131] = {.lex_state = 151, .external_lex_state = 19},
  [132] = {.lex_state = 158, .external_lex_state = 17},
  [133] = {.lex_state = 151, .external_lex_state = 19},
  [134] = {.lex_state = 0, .external_lex_state = 20},
  [135] = {.lex_state = 145},
  [136] = {.lex_state = 0, .external_lex_state = 20},
  [137] = {.lex_state = 145},
  [138] = {.lex_state = 161, .external_lex_state = 17},
  [139] = {.lex_state = 0, .external_lex_state = 20},
  [140] = {.lex_state = 161, .external_lex_state = 17},
  [141] = {.lex_state = 161, .external_lex_state = 17},
  [142] = {.lex_state = 0, .external_lex_state = 20},
  [143] = {.lex_state = 0, .external_lex_state = 20},
  [144] = {.lex_state = 0, .external_lex_state = 20},
  [145] = {.lex_state = 0, .external_lex_state = 20},
  [146] = {.lex_state = 145},
  [147] = {.lex_state = 161, .external_lex_state = 17},
  [148] = {.lex_state = 0, .external_lex_state = 20},
  [149] = {.lex_state = 0, .external_lex_state = 20},
  [150] = {.lex_state = 145},
  [151] = {.lex_state = 0, .external_lex_state = 20},
  [152] = {.lex_state = 161, .external_lex_state = 17},
  [153] = {.lex_state = 145},
  [154] = {.lex_state = 0, .external_lex_state = 20},
  [155] = {.lex_state = 161, .external_lex_state = 17},
  [156] = {.lex_state = 0, .external_lex_state = 20},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0, .external_lex_state = 21},
  [159] = {.lex_state = 151},
  [160] = {.lex_state = 145},
  [161] = {.lex_state = 0, .external_lex_state = 21},
  [162] = {.lex_state = 0, .external_lex_state = 21},
  [163] = {.lex_state = 0, .external_lex_state = 21},
  [164] = {.lex_state = 0, .external_lex_state = 21},
  [165] = {.lex_state = 145},
  [166] = {.lex_state = 0, .external_lex_state = 22},
  [167] = {.lex_state = 0, .external_lex_state = 22},
  [168] = {.lex_state = 0, .external_lex_state = 22},
  [169] = {.lex_state = 151},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0, .external_lex_state = 21},
  [172] = {.lex_state = 0, .external_lex_state = 21},
  [173] = {.lex_state = 0, .external_lex_state = 21},
  [174] = {.lex_state = 0, .external_lex_state = 21},
  [175] = {.lex_state = 0, .external_lex_state = 23},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 151},
  [178] = {.lex_state = 151},
  [179] = {.lex_state = 0, .external_lex_state = 23},
  [180] = {.lex_state = 151},
  [181] = {.lex_state = 0, .external_lex_state = 21},
  [182] = {.lex_state = 0, .external_lex_state = 21},
  [183] = {.lex_state = 0, .external_lex_state = 21},
  [184] = {.lex_state = 151},
  [185] = {.lex_state = 0, .external_lex_state = 23},
  [186] = {.lex_state = 0, .external_lex_state = 21},
  [187] = {.lex_state = 151},
  [188] = {.lex_state = 0, .external_lex_state = 21},
  [189] = {.lex_state = 151},
  [190] = {.lex_state = 151},
  [191] = {.lex_state = 0, .external_lex_state = 23},
  [192] = {.lex_state = 151},
  [193] = {.lex_state = 151},
  [194] = {.lex_state = 151},
  [195] = {.lex_state = 151},
  [196] = {.lex_state = 151},
  [197] = {.lex_state = 151},
  [198] = {.lex_state = 151},
  [199] = {.lex_state = 151},
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
  ts_external_token__DEBUG = 13,
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
  [ts_external_token__DEBUG] = sym__DEBUG,
};

static const bool ts_external_scanner_states[24][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__eof] = true,
    [ts_external_token__script_open] = true,
    [ts_external_token__script_interpolation_close] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
    [ts_external_token__script_open] = true,
  },
  [9] = {
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
  },
  [10] = {
    [ts_external_token__eof] = true,
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
    [ts_external_token__script_interpolation_close] = true,
  },
  [11] = {
    [ts_external_token__eof] = true,
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__script_open] = true,
  },
  [12] = {
    [ts_external_token__indent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
    [ts_external_token__script_interpolation_close] = true,
  },
  [13] = {
    [ts_external_token__eof] = true,
    [ts_external_token__script_interpolation_close] = true,
  },
  [14] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__script_interpolation_close] = true,
  },
  [15] = {
    [ts_external_token__indent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [16] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [17] = {
    [ts_external_token__eof] = true,
  },
  [18] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [19] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [20] = {
    [ts_external_token__first_ordered_list_token] = true,
  },
  [21] = {
    [ts_external_token__dedent] = true,
  },
  [22] = {
    [ts_external_token__script_close] = true,
  },
  [23] = {
    [ts_external_token__script_interpolation_close] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
    [aux_sym__inline_whitespace_token1] = ACTIONS(1),
    [sym__newline_token] = ACTIONS(1),
    [aux_sym__interpolated_block_list_token1] = ACTIONS(1),
    [sym__single_whitespace] = ACTIONS(1),
    [sym__plural_whitespace] = ACTIONS(1),
    [sym__word_no_digit] = ACTIONS(1),
    [sym__digits] = ACTIONS(1),
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
    [aux_sym_heading_token1] = ACTIONS(1),
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
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(176),
    [sym__blank_line] = STATE(44),
    [sym__block_separator] = STATE(8),
    [sym_block] = STATE(100),
    [sym_block_list] = STATE(170),
    [sym_inline_text] = STATE(43),
    [sym__whitespace] = STATE(51),
    [sym__word] = STATE(51),
    [sym__text_base] = STATE(51),
    [sym_scripting] = STATE(55),
    [sym_inline_content] = STATE(115),
    [sym_script_block] = STATE(140),
    [sym_paragraph] = STATE(155),
    [sym_heading] = STATE(140),
    [sym_horizontal_rule] = STATE(140),
    [sym_ordered_list] = STATE(140),
    [aux_sym__block_separator_repeat1] = STATE(44),
    [aux_sym_block_list_repeat1] = STATE(9),
    [aux_sym_inline_text_repeat1] = STATE(51),
    [aux_sym_inline_content_repeat1] = STATE(43),
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
    STATE(168), 1,
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
    STATE(167), 1,
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
    STATE(166), 1,
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
  [319] = 17,
    ACTIONS(13), 1,
      aux_sym_heading_token1,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(21), 1,
      sym__script_open,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(100), 1,
      sym_block,
    STATE(115), 1,
      sym_inline_content,
    STATE(155), 1,
      sym_paragraph,
    STATE(157), 1,
      sym_block_list,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(43), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(140), 4,
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
  [388] = 16,
    ACTIONS(13), 1,
      aux_sym_heading_token1,
    ACTIONS(15), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(19), 1,
      sym__first_ordered_list_token,
    ACTIONS(21), 1,
      sym__script_open,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(100), 1,
      sym_block,
    STATE(115), 1,
      sym_inline_content,
    STATE(155), 1,
      sym_paragraph,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(43), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(140), 4,
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
  [454] = 16,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym_heading_token1,
    ACTIONS(68), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(71), 1,
      sym__first_ordered_list_token,
    ACTIONS(74), 1,
      sym__script_open,
    STATE(10), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(100), 1,
      sym_block,
    STATE(115), 1,
      sym_inline_content,
    STATE(155), 1,
      sym_paragraph,
    ACTIONS(62), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(43), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(56), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(140), 4,
      sym_script_block,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(59), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [520] = 16,
    ACTIONS(77), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(81), 1,
      aux_sym_heading_token1,
    ACTIONS(83), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(85), 1,
      sym__first_ordered_list_token,
    ACTIONS(87), 1,
      sym__script_open,
    STATE(48), 1,
      sym_scripting,
    STATE(65), 1,
      sym_block,
    STATE(96), 1,
      sym_inline_content,
    STATE(106), 1,
      sym_paragraph,
    STATE(191), 1,
      sym__interpolated_block_list,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(38), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(108), 4,
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
  [586] = 14,
    ACTIONS(81), 1,
      aux_sym_heading_token1,
    ACTIONS(83), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(85), 1,
      sym__first_ordered_list_token,
    ACTIONS(87), 1,
      sym__script_open,
    STATE(48), 1,
      sym_scripting,
    STATE(96), 1,
      sym_inline_content,
    STATE(106), 1,
      sym_paragraph,
    STATE(111), 1,
      sym_block,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(38), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(108), 4,
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
  [646] = 14,
    ACTIONS(81), 1,
      aux_sym_heading_token1,
    ACTIONS(83), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(85), 1,
      sym__first_ordered_list_token,
    ACTIONS(87), 1,
      sym__script_open,
    STATE(48), 1,
      sym_scripting,
    STATE(67), 1,
      sym_block,
    STATE(96), 1,
      sym_inline_content,
    STATE(106), 1,
      sym_paragraph,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(38), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(108), 4,
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
  [706] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(80), 1,
      sym_inline_content,
    STATE(128), 1,
      sym_ordered_list_item,
    STATE(146), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [759] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(75), 1,
      sym_inline_content,
    STATE(109), 1,
      sym_ordered_list_item,
    STATE(153), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [812] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(80), 1,
      sym_inline_content,
    STATE(121), 1,
      sym_ordered_list_item,
    STATE(146), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [865] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(75), 1,
      sym_inline_content,
    STATE(102), 1,
      sym_ordered_list_item,
    STATE(153), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [918] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(60), 1,
      sym_inline_content,
    STATE(95), 1,
      sym_ordered_list_item,
    STATE(137), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(33), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [971] = 12,
    ACTIONS(93), 1,
      sym_checkbox_empty,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(60), 1,
      sym_inline_content,
    STATE(76), 1,
      sym_ordered_list_item,
    STATE(137), 1,
      sym_checkbox,
    STATE(160), 1,
      sym_checkbox_done,
    ACTIONS(91), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(33), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1024] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(97), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(101), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(103), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1069] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(97), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(105), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(107), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1114] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(97), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(109), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(111), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1159] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(97), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(113), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(115), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1204] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(113), 1,
      aux_sym__blank_line_token1,
    ACTIONS(115), 1,
      sym__eof,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1247] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(105), 1,
      aux_sym__blank_line_token1,
    ACTIONS(107), 1,
      sym__eof,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1290] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(101), 1,
      aux_sym__blank_line_token1,
    ACTIONS(103), 1,
      sym__eof,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1333] = 9,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(109), 1,
      aux_sym__blank_line_token1,
    ACTIONS(111), 1,
      sym__eof,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1376] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(97), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1413] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(99), 1,
      sym_inline_content,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1450] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(85), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1487] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(116), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1524] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(82), 1,
      sym_inline_content,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1561] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(119), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1598] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(43), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1635] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(70), 1,
      sym_inline_content,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(33), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1672] = 4,
    ACTIONS(123), 1,
      aux_sym__blank_line_token1,
    STATE(36), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(126), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(121), 16,
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
  [1703] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(128), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1740] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(130), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1777] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(93), 1,
      sym_inline_content,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1814] = 7,
    ACTIONS(141), 1,
      sym__inline_content_end,
    ACTIONS(143), 1,
      sym__script_open,
    ACTIONS(138), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(132), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(135), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [1851] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(146), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1888] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(63), 1,
      sym_inline_content,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(33), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1925] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    ACTIONS(148), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(40), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [1962] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(154), 1,
      sym__eof,
    STATE(36), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(152), 3,
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
  [1995] = 7,
    ACTIONS(95), 1,
      sym__script_open,
    STATE(74), 1,
      sym_inline_content,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(41), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
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
  [2032] = 5,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    ACTIONS(158), 1,
      sym__eof,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(152), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(150), 14,
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
  [2064] = 4,
    ACTIONS(160), 1,
      aux_sym__blank_line_token1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(126), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(121), 15,
      sym__eof,
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
  [2094] = 5,
    ACTIONS(167), 1,
      sym__newline_token,
    ACTIONS(163), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(171), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(165), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(169), 12,
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
  [2125] = 2,
    ACTIONS(173), 6,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(175), 14,
      sym__eof,
      sym__inline_content_end,
      sym__script_open,
      sym__script_interpolation_close,
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
  [2150] = 2,
    ACTIONS(179), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(177), 16,
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
  [2175] = 3,
    ACTIONS(181), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(52), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(183), 12,
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
  [2201] = 4,
    ACTIONS(185), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(191), 4,
      sym__inline_content_end,
      sym__script_open,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(52), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(188), 8,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      aux_sym__text_base_token8,
  [2229] = 2,
    ACTIONS(179), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(177), 15,
      sym__eof,
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
  [2253] = 2,
    ACTIONS(195), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(193), 15,
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
  [2276] = 5,
    ACTIONS(163), 1,
      aux_sym__blank_line_token1,
    ACTIONS(171), 1,
      sym__eof,
    ACTIONS(197), 1,
      sym__newline_token,
    ACTIONS(165), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(169), 12,
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
  [2305] = 2,
    ACTIONS(173), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(175), 14,
      sym__eof,
      sym__inline_content_end,
      sym__script_open,
      sym__newline_token,
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
  [2328] = 2,
    ACTIONS(199), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(54), 15,
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
  [2351] = 2,
    ACTIONS(195), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(193), 14,
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
  [2373] = 2,
    ACTIONS(173), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(175), 12,
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
  [2393] = 5,
    ACTIONS(203), 1,
      sym__indent,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    STATE(61), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(201), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(205), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2413] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(211), 1,
      sym__indent,
    STATE(62), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(209), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(213), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2433] = 4,
    ACTIONS(219), 1,
      sym__list_item_content_cont,
    STATE(62), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(215), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(217), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2451] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(224), 1,
      sym__indent,
    STATE(64), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(222), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(226), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2471] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(230), 1,
      sym__indent,
    STATE(62), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(228), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(232), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2491] = 7,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    ACTIONS(234), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(236), 1,
      sym__eof,
    ACTIONS(238), 1,
      sym__script_interpolation_close,
    STATE(12), 1,
      sym__block_separator,
    STATE(68), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2514] = 7,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    ACTIONS(236), 1,
      sym__eof,
    ACTIONS(240), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(242), 1,
      sym__script_interpolation_close,
    STATE(12), 1,
      sym__block_separator,
    STATE(71), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2537] = 7,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    ACTIONS(236), 1,
      sym__eof,
    ACTIONS(244), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(246), 1,
      sym__script_interpolation_close,
    STATE(12), 1,
      sym__block_separator,
    STATE(66), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2560] = 7,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    ACTIONS(236), 1,
      sym__eof,
    ACTIONS(244), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(246), 1,
      sym__script_interpolation_close,
    STATE(12), 1,
      sym__block_separator,
    STATE(71), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2583] = 2,
    ACTIONS(248), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(250), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__script_interpolation_close,
  [2596] = 2,
    ACTIONS(252), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(254), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__script_interpolation_close,
  [2609] = 7,
    ACTIONS(256), 1,
      aux_sym__blank_line_token1,
    ACTIONS(259), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(261), 1,
      sym__eof,
    ACTIONS(264), 1,
      sym__script_interpolation_close,
    STATE(12), 1,
      sym__block_separator,
    STATE(71), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2632] = 5,
    ACTIONS(268), 1,
      sym__newline_token,
    ACTIONS(272), 1,
      sym__next_ordered_list_token,
    STATE(78), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(266), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(270), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2650] = 5,
    ACTIONS(209), 1,
      aux_sym__blank_line_token1,
    ACTIONS(274), 1,
      sym__indent,
    ACTIONS(276), 1,
      sym__list_item_content_cont,
    STATE(77), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(213), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2668] = 5,
    ACTIONS(222), 1,
      aux_sym__blank_line_token1,
    ACTIONS(276), 1,
      sym__list_item_content_cont,
    ACTIONS(278), 1,
      sym__indent,
    STATE(79), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(226), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2686] = 5,
    ACTIONS(201), 1,
      aux_sym__blank_line_token1,
    ACTIONS(276), 1,
      sym__list_item_content_cont,
    ACTIONS(280), 1,
      sym__indent,
    STATE(73), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(205), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2704] = 5,
    ACTIONS(272), 1,
      sym__next_ordered_list_token,
    ACTIONS(284), 1,
      sym__newline_token,
    STATE(72), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(282), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(286), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2722] = 4,
    ACTIONS(215), 1,
      aux_sym__blank_line_token1,
    ACTIONS(288), 1,
      sym__list_item_content_cont,
    STATE(77), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(217), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2738] = 4,
    ACTIONS(295), 1,
      sym__next_ordered_list_token,
    STATE(78), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(293), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(291), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [2754] = 5,
    ACTIONS(228), 1,
      aux_sym__blank_line_token1,
    ACTIONS(276), 1,
      sym__list_item_content_cont,
    ACTIONS(298), 1,
      sym__indent,
    STATE(77), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(232), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2772] = 4,
    ACTIONS(300), 1,
      sym__indent,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    STATE(84), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(205), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2787] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(304), 1,
      sym__indent,
    STATE(83), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(232), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2802] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(306), 1,
      sym__indent,
    STATE(81), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(226), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2817] = 3,
    ACTIONS(308), 1,
      sym__list_item_content_cont,
    STATE(83), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(217), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2830] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(311), 1,
      sym__indent,
    STATE(83), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(213), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2845] = 4,
    ACTIONS(315), 1,
      sym__newline_token,
    STATE(92), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(313), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(317), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2860] = 4,
    ACTIONS(321), 1,
      sym__newline_token,
    STATE(91), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(319), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(323), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2875] = 2,
    ACTIONS(325), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(327), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2886] = 2,
    ACTIONS(329), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(331), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2897] = 2,
    ACTIONS(333), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(335), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2908] = 2,
    ACTIONS(337), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(339), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2919] = 4,
    ACTIONS(343), 1,
      sym__newline_token,
    STATE(91), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(341), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(346), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2934] = 4,
    ACTIONS(350), 1,
      sym__newline_token,
    STATE(91), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(348), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(352), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2949] = 2,
    ACTIONS(252), 1,
      aux_sym__blank_line_token1,
    ACTIONS(254), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [2960] = 2,
    ACTIONS(248), 1,
      aux_sym__blank_line_token1,
    ACTIONS(250), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [2971] = 2,
    ACTIONS(291), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(293), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__script_interpolation_close,
  [2982] = 4,
    ACTIONS(356), 1,
      sym__newline_token,
    STATE(86), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(354), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(358), 2,
      sym__eof,
      sym__script_interpolation_close,
  [2997] = 2,
    ACTIONS(346), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(341), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [3007] = 3,
    ACTIONS(362), 1,
      sym__newline_token,
    ACTIONS(360), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(364), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3019] = 1,
    ACTIONS(254), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [3027] = 4,
    ACTIONS(366), 1,
      aux_sym__blank_line_token1,
    ACTIONS(368), 1,
      sym__eof,
    STATE(57), 1,
      sym__block_separator,
    STATE(44), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [3041] = 1,
    ACTIONS(250), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [3049] = 5,
    ACTIONS(282), 1,
      aux_sym__blank_line_token1,
    ACTIONS(286), 1,
      sym__eof,
    ACTIONS(370), 1,
      sym__newline_token,
    ACTIONS(372), 1,
      sym__next_ordered_list_token,
    STATE(104), 1,
      aux_sym_ordered_list_repeat1,
  [3065] = 4,
    ACTIONS(291), 1,
      aux_sym__blank_line_token1,
    ACTIONS(374), 1,
      sym__next_ordered_list_token,
    STATE(103), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(293), 2,
      sym__eof,
      sym__newline_token,
  [3079] = 5,
    ACTIONS(266), 1,
      aux_sym__blank_line_token1,
    ACTIONS(270), 1,
      sym__eof,
    ACTIONS(372), 1,
      sym__next_ordered_list_token,
    ACTIONS(377), 1,
      sym__newline_token,
    STATE(103), 1,
      aux_sym_ordered_list_repeat1,
  [3095] = 2,
    ACTIONS(250), 2,
      sym__eof,
      sym__script_interpolation_close,
    ACTIONS(248), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [3105] = 2,
    ACTIONS(379), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(381), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3114] = 2,
    ACTIONS(337), 1,
      aux_sym__blank_line_token1,
    ACTIONS(339), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3123] = 2,
    ACTIONS(379), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(381), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3132] = 2,
    ACTIONS(291), 1,
      aux_sym__blank_line_token1,
    ACTIONS(293), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3141] = 4,
    ACTIONS(348), 1,
      aux_sym__blank_line_token1,
    ACTIONS(352), 1,
      sym__eof,
    ACTIONS(383), 1,
      sym__newline_token,
    STATE(114), 1,
      aux_sym_paragraph_repeat1,
  [3154] = 2,
    ACTIONS(259), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(264), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3163] = 2,
    ACTIONS(385), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(387), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3172] = 2,
    ACTIONS(389), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(391), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3181] = 4,
    ACTIONS(341), 1,
      aux_sym__blank_line_token1,
    ACTIONS(346), 1,
      sym__eof,
    ACTIONS(393), 1,
      sym__newline_token,
    STATE(114), 1,
      aux_sym_paragraph_repeat1,
  [3194] = 4,
    ACTIONS(354), 1,
      aux_sym__blank_line_token1,
    ACTIONS(358), 1,
      sym__eof,
    ACTIONS(396), 1,
      sym__newline_token,
    STATE(125), 1,
      aux_sym_paragraph_repeat1,
  [3207] = 4,
    ACTIONS(313), 1,
      aux_sym__blank_line_token1,
    ACTIONS(317), 1,
      sym__eof,
    ACTIONS(398), 1,
      sym__newline_token,
    STATE(110), 1,
      aux_sym_paragraph_repeat1,
  [3220] = 3,
    ACTIONS(400), 1,
      sym__next_ordered_list_token,
    STATE(117), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(293), 2,
      sym__dedent,
      sym__newline_token,
  [3231] = 2,
    ACTIONS(403), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(405), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3240] = 4,
    ACTIONS(270), 1,
      sym__dedent,
    ACTIONS(407), 1,
      sym__newline_token,
    ACTIONS(409), 1,
      sym__next_ordered_list_token,
    STATE(117), 1,
      aux_sym_ordered_list_repeat1,
  [3253] = 2,
    ACTIONS(411), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(413), 2,
      sym__eof,
      sym__script_interpolation_close,
  [3262] = 4,
    ACTIONS(286), 1,
      sym__dedent,
    ACTIONS(409), 1,
      sym__next_ordered_list_token,
    ACTIONS(415), 1,
      sym__newline_token,
    STATE(119), 1,
      aux_sym_ordered_list_repeat1,
  [3275] = 2,
    ACTIONS(333), 1,
      aux_sym__blank_line_token1,
    ACTIONS(335), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3284] = 2,
    ACTIONS(329), 1,
      aux_sym__blank_line_token1,
    ACTIONS(331), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3293] = 2,
    ACTIONS(325), 1,
      aux_sym__blank_line_token1,
    ACTIONS(327), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3302] = 4,
    ACTIONS(319), 1,
      aux_sym__blank_line_token1,
    ACTIONS(323), 1,
      sym__eof,
    ACTIONS(417), 1,
      sym__newline_token,
    STATE(114), 1,
      aux_sym_paragraph_repeat1,
  [3315] = 1,
    ACTIONS(335), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3321] = 2,
    ACTIONS(341), 1,
      aux_sym__blank_line_token1,
    ACTIONS(346), 2,
      sym__eof,
      sym__newline_token,
  [3329] = 1,
    ACTIONS(293), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3335] = 3,
    ACTIONS(360), 1,
      aux_sym__blank_line_token1,
    ACTIONS(364), 1,
      sym__eof,
    ACTIONS(419), 1,
      sym__newline_token,
  [3345] = 1,
    ACTIONS(327), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3351] = 1,
    ACTIONS(331), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3357] = 2,
    ACTIONS(248), 1,
      aux_sym__blank_line_token1,
    ACTIONS(250), 2,
      sym__eof,
      sym__newline_token,
  [3365] = 1,
    ACTIONS(339), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3371] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(163), 1,
      sym_ordered_list,
  [3378] = 2,
    ACTIONS(423), 1,
      aux_sym__inline_whitespace_token1,
    STATE(30), 1,
      sym__inline_whitespace,
  [3385] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(162), 1,
      sym_ordered_list,
  [3392] = 2,
    ACTIONS(425), 1,
      aux_sym__inline_whitespace_token1,
    STATE(42), 1,
      sym__inline_whitespace,
  [3399] = 1,
    ACTIONS(391), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3404] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(173), 1,
      sym_ordered_list,
  [3411] = 1,
    ACTIONS(381), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3416] = 1,
    ACTIONS(405), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3421] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(161), 1,
      sym_ordered_list,
  [3428] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(171), 1,
      sym_ordered_list,
  [3435] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(158), 1,
      sym_ordered_list,
  [3442] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(186), 1,
      sym_ordered_list,
  [3449] = 2,
    ACTIONS(427), 1,
      aux_sym__inline_whitespace_token1,
    STATE(32), 1,
      sym__inline_whitespace,
  [3456] = 1,
    ACTIONS(413), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3461] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(164), 1,
      sym_ordered_list,
  [3468] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(172), 1,
      sym_ordered_list,
  [3475] = 2,
    ACTIONS(429), 1,
      aux_sym__inline_whitespace_token1,
    STATE(31), 1,
      sym__inline_whitespace,
  [3482] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(182), 1,
      sym_ordered_list,
  [3489] = 1,
    ACTIONS(387), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3494] = 2,
    ACTIONS(431), 1,
      aux_sym__inline_whitespace_token1,
    STATE(45), 1,
      sym__inline_whitespace,
  [3501] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(174), 1,
      sym_ordered_list,
  [3508] = 1,
    ACTIONS(381), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3513] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(188), 1,
      sym_ordered_list,
  [3520] = 1,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
  [3524] = 1,
    ACTIONS(435), 1,
      sym__dedent,
  [3528] = 1,
    ACTIONS(437), 1,
      sym__newline_token,
  [3532] = 1,
    ACTIONS(439), 1,
      aux_sym__inline_whitespace_token1,
  [3536] = 1,
    ACTIONS(441), 1,
      sym__dedent,
  [3540] = 1,
    ACTIONS(443), 1,
      sym__dedent,
  [3544] = 1,
    ACTIONS(445), 1,
      sym__dedent,
  [3548] = 1,
    ACTIONS(447), 1,
      sym__dedent,
  [3552] = 1,
    ACTIONS(449), 1,
      aux_sym__inline_whitespace_token1,
  [3556] = 1,
    ACTIONS(451), 1,
      sym__script_close,
  [3560] = 1,
    ACTIONS(453), 1,
      sym__script_close,
  [3564] = 1,
    ACTIONS(455), 1,
      sym__script_close,
  [3568] = 1,
    ACTIONS(457), 1,
      sym__newline_token,
  [3572] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [3576] = 1,
    ACTIONS(459), 1,
      sym__dedent,
  [3580] = 1,
    ACTIONS(461), 1,
      sym__dedent,
  [3584] = 1,
    ACTIONS(463), 1,
      sym__dedent,
  [3588] = 1,
    ACTIONS(465), 1,
      sym__dedent,
  [3592] = 1,
    ACTIONS(246), 1,
      sym__script_interpolation_close,
  [3596] = 1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
  [3600] = 1,
    ACTIONS(469), 1,
      sym__newline_token,
  [3604] = 1,
    ACTIONS(471), 1,
      sym__newline_token,
  [3608] = 1,
    ACTIONS(242), 1,
      sym__script_interpolation_close,
  [3612] = 1,
    ACTIONS(473), 1,
      sym__newline_token,
  [3616] = 1,
    ACTIONS(413), 1,
      sym__dedent,
  [3620] = 1,
    ACTIONS(475), 1,
      sym__dedent,
  [3624] = 1,
    ACTIONS(405), 1,
      sym__dedent,
  [3628] = 1,
    ACTIONS(477), 1,
      sym__newline_token,
  [3632] = 1,
    ACTIONS(479), 1,
      sym__script_interpolation_close,
  [3636] = 1,
    ACTIONS(481), 1,
      sym__dedent,
  [3640] = 1,
    ACTIONS(483), 1,
      sym__newline_token,
  [3644] = 1,
    ACTIONS(485), 1,
      sym__dedent,
  [3648] = 1,
    ACTIONS(487), 1,
      sym__newline_token,
  [3652] = 1,
    ACTIONS(489), 1,
      sym__newline_token,
  [3656] = 1,
    ACTIONS(491), 1,
      sym__script_interpolation_close,
  [3660] = 1,
    ACTIONS(493), 1,
      sym__newline_token,
  [3664] = 1,
    ACTIONS(495), 1,
      sym__newline_token,
  [3668] = 1,
    ACTIONS(497), 1,
      sym__newline_token,
  [3672] = 1,
    ACTIONS(499), 1,
      sym__newline_token,
  [3676] = 1,
    ACTIONS(501), 1,
      sym__newline_token,
  [3680] = 1,
    ACTIONS(503), 1,
      sym__newline_token,
  [3684] = 1,
    ACTIONS(505), 1,
      sym__newline_token,
  [3688] = 1,
    ACTIONS(507), 1,
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
  [SMALL_STATE(9)] = 388,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 520,
  [SMALL_STATE(12)] = 586,
  [SMALL_STATE(13)] = 646,
  [SMALL_STATE(14)] = 706,
  [SMALL_STATE(15)] = 759,
  [SMALL_STATE(16)] = 812,
  [SMALL_STATE(17)] = 865,
  [SMALL_STATE(18)] = 918,
  [SMALL_STATE(19)] = 971,
  [SMALL_STATE(20)] = 1024,
  [SMALL_STATE(21)] = 1069,
  [SMALL_STATE(22)] = 1114,
  [SMALL_STATE(23)] = 1159,
  [SMALL_STATE(24)] = 1204,
  [SMALL_STATE(25)] = 1247,
  [SMALL_STATE(26)] = 1290,
  [SMALL_STATE(27)] = 1333,
  [SMALL_STATE(28)] = 1376,
  [SMALL_STATE(29)] = 1413,
  [SMALL_STATE(30)] = 1450,
  [SMALL_STATE(31)] = 1487,
  [SMALL_STATE(32)] = 1524,
  [SMALL_STATE(33)] = 1561,
  [SMALL_STATE(34)] = 1598,
  [SMALL_STATE(35)] = 1635,
  [SMALL_STATE(36)] = 1672,
  [SMALL_STATE(37)] = 1703,
  [SMALL_STATE(38)] = 1740,
  [SMALL_STATE(39)] = 1777,
  [SMALL_STATE(40)] = 1814,
  [SMALL_STATE(41)] = 1851,
  [SMALL_STATE(42)] = 1888,
  [SMALL_STATE(43)] = 1925,
  [SMALL_STATE(44)] = 1962,
  [SMALL_STATE(45)] = 1995,
  [SMALL_STATE(46)] = 2032,
  [SMALL_STATE(47)] = 2064,
  [SMALL_STATE(48)] = 2094,
  [SMALL_STATE(49)] = 2125,
  [SMALL_STATE(50)] = 2150,
  [SMALL_STATE(51)] = 2175,
  [SMALL_STATE(52)] = 2201,
  [SMALL_STATE(53)] = 2229,
  [SMALL_STATE(54)] = 2253,
  [SMALL_STATE(55)] = 2276,
  [SMALL_STATE(56)] = 2305,
  [SMALL_STATE(57)] = 2328,
  [SMALL_STATE(58)] = 2351,
  [SMALL_STATE(59)] = 2373,
  [SMALL_STATE(60)] = 2393,
  [SMALL_STATE(61)] = 2413,
  [SMALL_STATE(62)] = 2433,
  [SMALL_STATE(63)] = 2451,
  [SMALL_STATE(64)] = 2471,
  [SMALL_STATE(65)] = 2491,
  [SMALL_STATE(66)] = 2514,
  [SMALL_STATE(67)] = 2537,
  [SMALL_STATE(68)] = 2560,
  [SMALL_STATE(69)] = 2583,
  [SMALL_STATE(70)] = 2596,
  [SMALL_STATE(71)] = 2609,
  [SMALL_STATE(72)] = 2632,
  [SMALL_STATE(73)] = 2650,
  [SMALL_STATE(74)] = 2668,
  [SMALL_STATE(75)] = 2686,
  [SMALL_STATE(76)] = 2704,
  [SMALL_STATE(77)] = 2722,
  [SMALL_STATE(78)] = 2738,
  [SMALL_STATE(79)] = 2754,
  [SMALL_STATE(80)] = 2772,
  [SMALL_STATE(81)] = 2787,
  [SMALL_STATE(82)] = 2802,
  [SMALL_STATE(83)] = 2817,
  [SMALL_STATE(84)] = 2830,
  [SMALL_STATE(85)] = 2845,
  [SMALL_STATE(86)] = 2860,
  [SMALL_STATE(87)] = 2875,
  [SMALL_STATE(88)] = 2886,
  [SMALL_STATE(89)] = 2897,
  [SMALL_STATE(90)] = 2908,
  [SMALL_STATE(91)] = 2919,
  [SMALL_STATE(92)] = 2934,
  [SMALL_STATE(93)] = 2949,
  [SMALL_STATE(94)] = 2960,
  [SMALL_STATE(95)] = 2971,
  [SMALL_STATE(96)] = 2982,
  [SMALL_STATE(97)] = 2997,
  [SMALL_STATE(98)] = 3007,
  [SMALL_STATE(99)] = 3019,
  [SMALL_STATE(100)] = 3027,
  [SMALL_STATE(101)] = 3041,
  [SMALL_STATE(102)] = 3049,
  [SMALL_STATE(103)] = 3065,
  [SMALL_STATE(104)] = 3079,
  [SMALL_STATE(105)] = 3095,
  [SMALL_STATE(106)] = 3105,
  [SMALL_STATE(107)] = 3114,
  [SMALL_STATE(108)] = 3123,
  [SMALL_STATE(109)] = 3132,
  [SMALL_STATE(110)] = 3141,
  [SMALL_STATE(111)] = 3154,
  [SMALL_STATE(112)] = 3163,
  [SMALL_STATE(113)] = 3172,
  [SMALL_STATE(114)] = 3181,
  [SMALL_STATE(115)] = 3194,
  [SMALL_STATE(116)] = 3207,
  [SMALL_STATE(117)] = 3220,
  [SMALL_STATE(118)] = 3231,
  [SMALL_STATE(119)] = 3240,
  [SMALL_STATE(120)] = 3253,
  [SMALL_STATE(121)] = 3262,
  [SMALL_STATE(122)] = 3275,
  [SMALL_STATE(123)] = 3284,
  [SMALL_STATE(124)] = 3293,
  [SMALL_STATE(125)] = 3302,
  [SMALL_STATE(126)] = 3315,
  [SMALL_STATE(127)] = 3321,
  [SMALL_STATE(128)] = 3329,
  [SMALL_STATE(129)] = 3335,
  [SMALL_STATE(130)] = 3345,
  [SMALL_STATE(131)] = 3351,
  [SMALL_STATE(132)] = 3357,
  [SMALL_STATE(133)] = 3365,
  [SMALL_STATE(134)] = 3371,
  [SMALL_STATE(135)] = 3378,
  [SMALL_STATE(136)] = 3385,
  [SMALL_STATE(137)] = 3392,
  [SMALL_STATE(138)] = 3399,
  [SMALL_STATE(139)] = 3404,
  [SMALL_STATE(140)] = 3411,
  [SMALL_STATE(141)] = 3416,
  [SMALL_STATE(142)] = 3421,
  [SMALL_STATE(143)] = 3428,
  [SMALL_STATE(144)] = 3435,
  [SMALL_STATE(145)] = 3442,
  [SMALL_STATE(146)] = 3449,
  [SMALL_STATE(147)] = 3456,
  [SMALL_STATE(148)] = 3461,
  [SMALL_STATE(149)] = 3468,
  [SMALL_STATE(150)] = 3475,
  [SMALL_STATE(151)] = 3482,
  [SMALL_STATE(152)] = 3489,
  [SMALL_STATE(153)] = 3494,
  [SMALL_STATE(154)] = 3501,
  [SMALL_STATE(155)] = 3508,
  [SMALL_STATE(156)] = 3513,
  [SMALL_STATE(157)] = 3520,
  [SMALL_STATE(158)] = 3524,
  [SMALL_STATE(159)] = 3528,
  [SMALL_STATE(160)] = 3532,
  [SMALL_STATE(161)] = 3536,
  [SMALL_STATE(162)] = 3540,
  [SMALL_STATE(163)] = 3544,
  [SMALL_STATE(164)] = 3548,
  [SMALL_STATE(165)] = 3552,
  [SMALL_STATE(166)] = 3556,
  [SMALL_STATE(167)] = 3560,
  [SMALL_STATE(168)] = 3564,
  [SMALL_STATE(169)] = 3568,
  [SMALL_STATE(170)] = 3572,
  [SMALL_STATE(171)] = 3576,
  [SMALL_STATE(172)] = 3580,
  [SMALL_STATE(173)] = 3584,
  [SMALL_STATE(174)] = 3588,
  [SMALL_STATE(175)] = 3592,
  [SMALL_STATE(176)] = 3596,
  [SMALL_STATE(177)] = 3600,
  [SMALL_STATE(178)] = 3604,
  [SMALL_STATE(179)] = 3608,
  [SMALL_STATE(180)] = 3612,
  [SMALL_STATE(181)] = 3616,
  [SMALL_STATE(182)] = 3620,
  [SMALL_STATE(183)] = 3624,
  [SMALL_STATE(184)] = 3628,
  [SMALL_STATE(185)] = 3632,
  [SMALL_STATE(186)] = 3636,
  [SMALL_STATE(187)] = 3640,
  [SMALL_STATE(188)] = 3644,
  [SMALL_STATE(189)] = 3648,
  [SMALL_STATE(190)] = 3652,
  [SMALL_STATE(191)] = 3656,
  [SMALL_STATE(192)] = 3660,
  [SMALL_STATE(193)] = 3664,
  [SMALL_STATE(194)] = 3668,
  [SMALL_STATE(195)] = 3672,
  [SMALL_STATE(196)] = 3676,
  [SMALL_STATE(197)] = 3680,
  [SMALL_STATE(198)] = 3684,
  [SMALL_STATE(199)] = 3688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(11),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(51),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(43),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(150),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(129),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(17),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(159),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(51),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(51),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(40),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(169),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(52),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(180),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2), SHIFT_REPEAT(169),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2), SHIFT_REPEAT(12),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(190),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(18),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(187),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 5),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(28),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 8),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(15),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(34),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(14),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [467] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
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
