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
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 12
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
  aux_sym__script_text_token1 = 16,
  anon_sym_BANG = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_DOLLAR = 19,
  anon_sym_PERCENT = 20,
  anon_sym_AMP = 21,
  anon_sym_SQUOTE = 22,
  anon_sym_LPAREN = 23,
  anon_sym_RPAREN = 24,
  anon_sym_STAR = 25,
  anon_sym_PLUS = 26,
  anon_sym_COMMA = 27,
  anon_sym_DASH = 28,
  anon_sym_DOT = 29,
  anon_sym_SLASH = 30,
  anon_sym_COLON = 31,
  anon_sym_SEMI = 32,
  anon_sym_LT = 33,
  anon_sym_EQ = 34,
  anon_sym_QMARK = 35,
  anon_sym_AT = 36,
  anon_sym_LBRACK = 37,
  anon_sym_BSLASH = 38,
  anon_sym_RBRACK = 39,
  anon_sym_CARET = 40,
  anon_sym__ = 41,
  anon_sym_BQUOTE = 42,
  anon_sym_LBRACE = 43,
  anon_sym_PIPE = 44,
  anon_sym_RBRACE = 45,
  anon_sym_TILDE = 46,
  aux_sym__script_text_token2 = 47,
  aux_sym__script_text_token3 = 48,
  sym_uri_autolink = 49,
  sym_email_autolink = 50,
  anon_sym_POUND_POUND = 51,
  anon_sym_LT_LT_LT = 52,
  anon_sym_GT_GT_GT = 53,
  aux_sym_heading_token1 = 54,
  aux_sym_horizontal_rule_token1 = 55,
  anon_sym_LBRACKx_RBRACK = 56,
  anon_sym_LBRACKX_RBRACK = 57,
  sym_checkbox_empty = 58,
  sym__line_start = 59,
  sym__line_end = 60,
  sym__indent = 61,
  sym__dedent = 62,
  sym__eof = 63,
  sym__first_ordered_list_token = 64,
  sym__next_ordered_list_token = 65,
  sym__list_item_content_cont = 66,
  sym__list_item_content_end = 67,
  sym__non_blank_line = 68,
  sym__inline_content_end = 69,
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
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [aux_sym_heading_token1] = "heading_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [anon_sym_LBRACKx_RBRACK] = "[x]",
  [anon_sym_LBRACKX_RBRACK] = "[X]",
  [sym_checkbox_empty] = "checkbox_empty",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym__first_ordered_list_token] = "_first_ordered_list_token",
  [sym__next_ordered_list_token] = "_next_ordered_list_token",
  [sym__list_item_content_cont] = "_list_item_content_cont",
  [sym__list_item_content_end] = "_list_item_content_end",
  [sym__non_blank_line] = "_non_blank_line",
  [sym__inline_content_end] = "_inline_content_end",
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
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
  [anon_sym_LBRACKx_RBRACK] = anon_sym_LBRACKx_RBRACK,
  [anon_sym_LBRACKX_RBRACK] = anon_sym_LBRACKX_RBRACK,
  [sym_checkbox_empty] = sym_checkbox_empty,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym__first_ordered_list_token] = sym__first_ordered_list_token,
  [sym__next_ordered_list_token] = sym__next_ordered_list_token,
  [sym__list_item_content_cont] = sym__list_item_content_cont,
  [sym__list_item_content_end] = sym__list_item_content_end,
  [sym__non_blank_line] = sym__non_blank_line,
  [sym__inline_content_end] = sym__inline_content_end,
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
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
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
  [sym__line_start] = {
    .visible = false,
    .named = true,
  },
  [sym__line_end] = {
    .visible = false,
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
  [25] = 22,
  [26] = 21,
  [27] = 20,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 32,
  [33] = 29,
  [34] = 28,
  [35] = 35,
  [36] = 29,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 32,
  [43] = 32,
  [44] = 28,
  [45] = 29,
  [46] = 35,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 48,
  [54] = 49,
  [55] = 50,
  [56] = 56,
  [57] = 57,
  [58] = 56,
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
  [72] = 61,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 62,
  [77] = 77,
  [78] = 63,
  [79] = 60,
  [80] = 64,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 60,
  [86] = 86,
  [87] = 61,
  [88] = 63,
  [89] = 89,
  [90] = 90,
  [91] = 62,
  [92] = 70,
  [93] = 93,
  [94] = 68,
  [95] = 95,
  [96] = 96,
  [97] = 68,
  [98] = 98,
  [99] = 77,
  [100] = 100,
  [101] = 75,
  [102] = 74,
  [103] = 103,
  [104] = 68,
  [105] = 70,
  [106] = 96,
  [107] = 86,
  [108] = 90,
  [109] = 81,
  [110] = 84,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 89,
  [115] = 115,
  [116] = 77,
  [117] = 82,
  [118] = 118,
  [119] = 95,
  [120] = 93,
  [121] = 74,
  [122] = 83,
  [123] = 75,
  [124] = 124,
  [125] = 100,
  [126] = 89,
  [127] = 103,
  [128] = 81,
  [129] = 82,
  [130] = 68,
  [131] = 83,
  [132] = 84,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 135,
  [138] = 134,
  [139] = 133,
  [140] = 140,
  [141] = 141,
  [142] = 111,
  [143] = 141,
  [144] = 136,
  [145] = 118,
  [146] = 140,
  [147] = 140,
  [148] = 141,
  [149] = 133,
  [150] = 112,
  [151] = 113,
  [152] = 136,
  [153] = 134,
  [154] = 115,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 157,
  [166] = 166,
  [167] = 157,
  [168] = 168,
  [169] = 159,
  [170] = 160,
  [171] = 161,
  [172] = 162,
  [173] = 166,
  [174] = 174,
  [175] = 159,
  [176] = 118,
  [177] = 177,
  [178] = 178,
  [179] = 111,
  [180] = 180,
  [181] = 160,
  [182] = 182,
  [183] = 183,
  [184] = 162,
  [185] = 178,
  [186] = 178,
  [187] = 161,
  [188] = 188,
  [189] = 189,
  [190] = 183,
  [191] = 189,
  [192] = 177,
  [193] = 182,
  [194] = 183,
  [195] = 189,
  [196] = 177,
  [197] = 182,
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
        : c <= '=')
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
      if (eof) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '!') ADVANCE(190);
      if (lookahead == '"') ADVANCE(191);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '%') ADVANCE(194);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(196);
      if (lookahead == '(') ADVANCE(198);
      if (lookahead == ')') ADVANCE(200);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '?') ADVANCE(218);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '[') ADVANCE(220);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(223);
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == '_') ADVANCE(226);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead == '{') ADVANCE(228);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == '~') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(171);
      if (lookahead == '!') ADVANCE(190);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '$') ADVANCE(193);
      if (lookahead == '%') ADVANCE(194);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead == '(') ADVANCE(199);
      if (lookahead == ')') ADVANCE(201);
      if (lookahead == '*') ADVANCE(202);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == ',') ADVANCE(206);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(217);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '?') ADVANCE(218);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '[') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(222);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '^') ADVANCE(225);
      if (lookahead == '_') ADVANCE(226);
      if (lookahead == '`') ADVANCE(227);
      if (lookahead == '{') ADVANCE(229);
      if (lookahead == '|') ADVANCE(230);
      if (lookahead == '}') ADVANCE(232);
      if (lookahead == '~') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == 'X') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(146);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(238);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(238);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(143);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(42);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 129:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      END_STATE();
    case 130:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '>') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(141);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 133:
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      if (lookahead == '<') ADVANCE(239);
      END_STATE();
    case 135:
      if (lookahead == '<') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == '<') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == '>') ADVANCE(240);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 138:
      if (lookahead == '>') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '>') ADVANCE(137);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 140:
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(141);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(141);
      END_STATE();
    case 142:
      if (lookahead == '[') ADVANCE(187);
      END_STATE();
    case 143:
      if (lookahead == ']') ADVANCE(188);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(327);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(326);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(325);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 148:
      if (lookahead == '{') ADVANCE(185);
      END_STATE();
    case 149:
      if (lookahead == '}') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(170);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(154);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(166);
      if (aux_sym__script_text_token1_character_set_1(lookahead)) ADVANCE(189);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(173);
      if (aux_sym__script_text_token1_character_set_2(lookahead)) ADVANCE(189);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__newline_token);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__interpolated_block_list_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(147);
      if (aux_sym__script_text_token1_character_set_4(lookahead)) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(147);
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
      if (aux_sym__script_text_token1_character_set_5(lookahead)) ADVANCE(189);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(324);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(180);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_base_token2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__text_base_token3);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__text_base_token4);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__text_base_token5);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__text_base_token6);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__text_base_token7);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__script_text_token1);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (aux_sym__script_text_token1_character_set_3(lookahead)) ADVANCE(189);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__script_text_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__script_text_token3);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(241);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
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
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 164, .external_lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 153, .external_lex_state = 3},
  [9] = {.lex_state = 153, .external_lex_state = 3},
  [10] = {.lex_state = 153, .external_lex_state = 3},
  [11] = {.lex_state = 1, .external_lex_state = 3},
  [12] = {.lex_state = 153, .external_lex_state = 3},
  [13] = {.lex_state = 153, .external_lex_state = 3},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 132},
  [19] = {.lex_state = 132},
  [20] = {.lex_state = 157, .external_lex_state = 4},
  [21] = {.lex_state = 157, .external_lex_state = 4},
  [22] = {.lex_state = 157, .external_lex_state = 4},
  [23] = {.lex_state = 157, .external_lex_state = 4},
  [24] = {.lex_state = 162, .external_lex_state = 4},
  [25] = {.lex_state = 162, .external_lex_state = 4},
  [26] = {.lex_state = 162, .external_lex_state = 4},
  [27] = {.lex_state = 162, .external_lex_state = 4},
  [28] = {.lex_state = 132},
  [29] = {.lex_state = 132, .external_lex_state = 5},
  [30] = {.lex_state = 132},
  [31] = {.lex_state = 132, .external_lex_state = 5},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 132, .external_lex_state = 5},
  [34] = {.lex_state = 132},
  [35] = {.lex_state = 164, .external_lex_state = 2},
  [36] = {.lex_state = 132, .external_lex_state = 5},
  [37] = {.lex_state = 132},
  [38] = {.lex_state = 132},
  [39] = {.lex_state = 132, .external_lex_state = 5},
  [40] = {.lex_state = 132},
  [41] = {.lex_state = 164, .external_lex_state = 2},
  [42] = {.lex_state = 132},
  [43] = {.lex_state = 132},
  [44] = {.lex_state = 132},
  [45] = {.lex_state = 132, .external_lex_state = 5},
  [46] = {.lex_state = 164, .external_lex_state = 2},
  [47] = {.lex_state = 164, .external_lex_state = 2},
  [48] = {.lex_state = 164, .external_lex_state = 2},
  [49] = {.lex_state = 155, .external_lex_state = 6},
  [50] = {.lex_state = 155, .external_lex_state = 6},
  [51] = {.lex_state = 132, .external_lex_state = 5},
  [52] = {.lex_state = 132, .external_lex_state = 5},
  [53] = {.lex_state = 164, .external_lex_state = 2},
  [54] = {.lex_state = 161, .external_lex_state = 6},
  [55] = {.lex_state = 161, .external_lex_state = 6},
  [56] = {.lex_state = 153, .external_lex_state = 3},
  [57] = {.lex_state = 153, .external_lex_state = 3},
  [58] = {.lex_state = 153, .external_lex_state = 3},
  [59] = {.lex_state = 132, .external_lex_state = 5},
  [60] = {.lex_state = 156, .external_lex_state = 7},
  [61] = {.lex_state = 156, .external_lex_state = 7},
  [62] = {.lex_state = 156, .external_lex_state = 7},
  [63] = {.lex_state = 156, .external_lex_state = 7},
  [64] = {.lex_state = 156, .external_lex_state = 7},
  [65] = {.lex_state = 158, .external_lex_state = 4},
  [66] = {.lex_state = 158, .external_lex_state = 4},
  [67] = {.lex_state = 158, .external_lex_state = 4},
  [68] = {.lex_state = 156, .external_lex_state = 7},
  [69] = {.lex_state = 158, .external_lex_state = 4},
  [70] = {.lex_state = 156, .external_lex_state = 7},
  [71] = {.lex_state = 158, .external_lex_state = 4},
  [72] = {.lex_state = 161, .external_lex_state = 7},
  [73] = {.lex_state = 161, .external_lex_state = 7},
  [74] = {.lex_state = 156, .external_lex_state = 8},
  [75] = {.lex_state = 156, .external_lex_state = 8},
  [76] = {.lex_state = 161, .external_lex_state = 7},
  [77] = {.lex_state = 156, .external_lex_state = 8},
  [78] = {.lex_state = 161, .external_lex_state = 7},
  [79] = {.lex_state = 161, .external_lex_state = 7},
  [80] = {.lex_state = 153, .external_lex_state = 9},
  [81] = {.lex_state = 156, .external_lex_state = 8},
  [82] = {.lex_state = 156, .external_lex_state = 8},
  [83] = {.lex_state = 156, .external_lex_state = 8},
  [84] = {.lex_state = 156, .external_lex_state = 8},
  [85] = {.lex_state = 153, .external_lex_state = 9},
  [86] = {.lex_state = 156, .external_lex_state = 4},
  [87] = {.lex_state = 153, .external_lex_state = 9},
  [88] = {.lex_state = 153, .external_lex_state = 9},
  [89] = {.lex_state = 156, .external_lex_state = 8},
  [90] = {.lex_state = 156, .external_lex_state = 4},
  [91] = {.lex_state = 153, .external_lex_state = 9},
  [92] = {.lex_state = 161, .external_lex_state = 7},
  [93] = {.lex_state = 156, .external_lex_state = 4},
  [94] = {.lex_state = 161, .external_lex_state = 7},
  [95] = {.lex_state = 156, .external_lex_state = 4},
  [96] = {.lex_state = 156, .external_lex_state = 4},
  [97] = {.lex_state = 156, .external_lex_state = 4},
  [98] = {.lex_state = 164, .external_lex_state = 4},
  [99] = {.lex_state = 161, .external_lex_state = 8},
  [100] = {.lex_state = 156, .external_lex_state = 4},
  [101] = {.lex_state = 161, .external_lex_state = 8},
  [102] = {.lex_state = 161, .external_lex_state = 8},
  [103] = {.lex_state = 156, .external_lex_state = 4},
  [104] = {.lex_state = 153, .external_lex_state = 9},
  [105] = {.lex_state = 153, .external_lex_state = 9},
  [106] = {.lex_state = 161, .external_lex_state = 4},
  [107] = {.lex_state = 161, .external_lex_state = 4},
  [108] = {.lex_state = 161, .external_lex_state = 4},
  [109] = {.lex_state = 161, .external_lex_state = 8},
  [110] = {.lex_state = 161, .external_lex_state = 8},
  [111] = {.lex_state = 158, .external_lex_state = 4},
  [112] = {.lex_state = 158, .external_lex_state = 4},
  [113] = {.lex_state = 158, .external_lex_state = 4},
  [114] = {.lex_state = 161, .external_lex_state = 8},
  [115] = {.lex_state = 158, .external_lex_state = 4},
  [116] = {.lex_state = 153, .external_lex_state = 10},
  [117] = {.lex_state = 161, .external_lex_state = 8},
  [118] = {.lex_state = 158, .external_lex_state = 4},
  [119] = {.lex_state = 161, .external_lex_state = 4},
  [120] = {.lex_state = 161, .external_lex_state = 4},
  [121] = {.lex_state = 153, .external_lex_state = 10},
  [122] = {.lex_state = 161, .external_lex_state = 8},
  [123] = {.lex_state = 153, .external_lex_state = 10},
  [124] = {.lex_state = 158, .external_lex_state = 4},
  [125] = {.lex_state = 161, .external_lex_state = 4},
  [126] = {.lex_state = 153, .external_lex_state = 10},
  [127] = {.lex_state = 161, .external_lex_state = 4},
  [128] = {.lex_state = 153, .external_lex_state = 10},
  [129] = {.lex_state = 153, .external_lex_state = 10},
  [130] = {.lex_state = 161, .external_lex_state = 4},
  [131] = {.lex_state = 153, .external_lex_state = 10},
  [132] = {.lex_state = 153, .external_lex_state = 10},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 150},
  [136] = {.lex_state = 150},
  [137] = {.lex_state = 150},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 164, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 150},
  [145] = {.lex_state = 164, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 164, .external_lex_state = 4},
  [151] = {.lex_state = 164, .external_lex_state = 4},
  [152] = {.lex_state = 150},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 164, .external_lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 11},
  [160] = {.lex_state = 0, .external_lex_state = 11},
  [161] = {.lex_state = 0, .external_lex_state = 11},
  [162] = {.lex_state = 0, .external_lex_state = 11},
  [163] = {.lex_state = 150},
  [164] = {.lex_state = 150},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 153},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 11},
  [170] = {.lex_state = 0, .external_lex_state = 11},
  [171] = {.lex_state = 0, .external_lex_state = 11},
  [172] = {.lex_state = 0, .external_lex_state = 11},
  [173] = {.lex_state = 153},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0, .external_lex_state = 11},
  [176] = {.lex_state = 0, .external_lex_state = 11},
  [177] = {.lex_state = 153},
  [178] = {.lex_state = 153},
  [179] = {.lex_state = 0, .external_lex_state = 11},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0, .external_lex_state = 11},
  [182] = {.lex_state = 153},
  [183] = {.lex_state = 153},
  [184] = {.lex_state = 0, .external_lex_state = 11},
  [185] = {.lex_state = 153},
  [186] = {.lex_state = 153},
  [187] = {.lex_state = 0, .external_lex_state = 11},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 153},
  [190] = {.lex_state = 153},
  [191] = {.lex_state = 153},
  [192] = {.lex_state = 153},
  [193] = {.lex_state = 153},
  [194] = {.lex_state = 153},
  [195] = {.lex_state = 153},
  [196] = {.lex_state = 153},
  [197] = {.lex_state = 153},
};

enum {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__eof = 4,
  ts_external_token__first_ordered_list_token = 5,
  ts_external_token__next_ordered_list_token = 6,
  ts_external_token__list_item_content_cont = 7,
  ts_external_token__list_item_content_end = 8,
  ts_external_token__non_blank_line = 9,
  ts_external_token__inline_content_end = 10,
  ts_external_token__DEBUG = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__line_end] = sym__line_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__first_ordered_list_token] = sym__first_ordered_list_token,
  [ts_external_token__next_ordered_list_token] = sym__next_ordered_list_token,
  [ts_external_token__list_item_content_cont] = sym__list_item_content_cont,
  [ts_external_token__list_item_content_end] = sym__list_item_content_end,
  [ts_external_token__non_blank_line] = sym__non_blank_line,
  [ts_external_token__inline_content_end] = sym__inline_content_end,
  [ts_external_token__DEBUG] = sym__DEBUG,
};

static const bool ts_external_scanner_states[12][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__first_ordered_list_token] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
    [ts_external_token__list_item_content_end] = true,
    [ts_external_token__non_blank_line] = true,
    [ts_external_token__inline_content_end] = true,
    [ts_external_token__DEBUG] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
    [ts_external_token__first_ordered_list_token] = true,
  },
  [3] = {
    [ts_external_token__first_ordered_list_token] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
  },
  [5] = {
    [ts_external_token__inline_content_end] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
    [ts_external_token__inline_content_end] = true,
  },
  [7] = {
    [ts_external_token__indent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [8] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [9] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [10] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [11] = {
    [ts_external_token__dedent] = true,
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
    [aux_sym__script_text_token2] = ACTIONS(1),
    [aux_sym__script_text_token3] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__first_ordered_list_token] = ACTIONS(1),
    [sym__next_ordered_list_token] = ACTIONS(1),
    [sym__list_item_content_cont] = ACTIONS(1),
    [sym__list_item_content_end] = ACTIONS(1),
    [sym__non_blank_line] = ACTIONS(1),
    [sym__inline_content_end] = ACTIONS(1),
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(174),
    [sym__blank_line] = STATE(41),
    [sym__block_separator] = STATE(8),
    [sym_block] = STATE(98),
    [sym_block_list] = STATE(168),
    [sym_inline_text] = STATE(29),
    [sym__whitespace] = STATE(51),
    [sym__word] = STATE(51),
    [sym__text_base] = STATE(51),
    [sym_scripting] = STATE(55),
    [sym_inline_content] = STATE(119),
    [sym_script_block] = STATE(154),
    [sym_paragraph] = STATE(154),
    [sym_heading] = STATE(154),
    [sym_horizontal_rule] = STATE(154),
    [sym_ordered_list] = STATE(154),
    [aux_sym__block_separator_repeat1] = STATE(41),
    [aux_sym_block_list_repeat1] = STATE(9),
    [aux_sym_inline_text_repeat1] = STATE(51),
    [aux_sym_inline_content_repeat1] = STATE(29),
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
    [sym_uri_autolink] = ACTIONS(11),
    [sym_email_autolink] = ACTIONS(11),
    [anon_sym_LT_LT_LT] = ACTIONS(13),
    [aux_sym_heading_token1] = ACTIONS(15),
    [aux_sym_horizontal_rule_token1] = ACTIONS(17),
    [sym__eof] = ACTIONS(19),
    [sym__first_ordered_list_token] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_GT_GT_GT,
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
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
    STATE(165), 1,
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
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
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
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
    STATE(157), 1,
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
      anon_sym_POUND_POUND,
    ACTIONS(44), 1,
      anon_sym_GT_GT_GT,
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
      anon_sym_POUND_POUND,
      anon_sym_GT_GT_GT,
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
  [319] = 16,
    ACTIONS(13), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(15), 1,
      aux_sym_heading_token1,
    ACTIONS(17), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(21), 1,
      sym__first_ordered_list_token,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(98), 1,
      sym_block,
    STATE(119), 1,
      sym_inline_content,
    STATE(156), 1,
      sym_block_list,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(29), 2,
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
    STATE(154), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [385] = 15,
    ACTIONS(13), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(15), 1,
      aux_sym_heading_token1,
    ACTIONS(17), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(21), 1,
      sym__first_ordered_list_token,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(98), 1,
      sym_block,
    STATE(119), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(29), 2,
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
    STATE(154), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [448] = 15,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(68), 1,
      aux_sym_heading_token1,
    ACTIONS(71), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(74), 1,
      sym__first_ordered_list_token,
    STATE(10), 1,
      aux_sym_block_list_repeat1,
    STATE(55), 1,
      sym_scripting,
    STATE(98), 1,
      sym_block,
    STATE(119), 1,
      sym_inline_content,
    ACTIONS(62), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(29), 2,
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
    STATE(154), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(59), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [511] = 15,
    ACTIONS(77), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(81), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      aux_sym_heading_token1,
    ACTIONS(85), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(87), 1,
      sym__first_ordered_list_token,
    STATE(50), 1,
      sym_scripting,
    STATE(65), 1,
      sym_block,
    STATE(95), 1,
      sym_inline_content,
    STATE(188), 1,
      sym__interpolated_block_list,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(33), 2,
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
    STATE(115), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [574] = 13,
    ACTIONS(81), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      aux_sym_heading_token1,
    ACTIONS(85), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(87), 1,
      sym__first_ordered_list_token,
    STATE(50), 1,
      sym_scripting,
    STATE(95), 1,
      sym_inline_content,
    STATE(124), 1,
      sym_block,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(33), 2,
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
    STATE(115), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [631] = 13,
    ACTIONS(81), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      aux_sym_heading_token1,
    ACTIONS(85), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(87), 1,
      sym__first_ordered_list_token,
    STATE(50), 1,
      sym_scripting,
    STATE(67), 1,
      sym_block,
    STATE(95), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(33), 2,
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
    STATE(115), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [688] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(87), 1,
      sym_inline_content,
    STATE(126), 1,
      sym_ordered_list_item,
    STATE(136), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [740] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(72), 1,
      sym_inline_content,
    STATE(114), 1,
      sym_ordered_list_item,
    STATE(152), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(31), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [792] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(87), 1,
      sym_inline_content,
    STATE(123), 1,
      sym_ordered_list_item,
    STATE(136), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(36), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [844] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(72), 1,
      sym_inline_content,
    STATE(101), 1,
      sym_ordered_list_item,
    STATE(152), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(31), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [896] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(61), 1,
      sym_inline_content,
    STATE(89), 1,
      sym_ordered_list_item,
    STATE(144), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(45), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [948] = 12,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      sym_checkbox_empty,
    STATE(61), 1,
      sym_inline_content,
    STATE(75), 1,
      sym_ordered_list_item,
    STATE(144), 1,
      sym_checkbox,
    STATE(163), 1,
      sym_checkbox_done,
    ACTIONS(93), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(45), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1000] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(103), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(101), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(103), 2,
      sym__eof,
      anon_sym_POUND_POUND,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1044] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(103), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(105), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(107), 2,
      sym__eof,
      anon_sym_POUND_POUND,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1088] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(103), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(109), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(111), 2,
      sym__eof,
      anon_sym_POUND_POUND,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1132] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(103), 1,
      sym_inline_content,
    ACTIONS(79), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(113), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(115), 2,
      sym__eof,
      anon_sym_POUND_POUND,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1176] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
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
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1218] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
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
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1260] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
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
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1302] = 9,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
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
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1344] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(80), 1,
      sym_inline_content,
    ACTIONS(89), 2,
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
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1380] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(119), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1416] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(106), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1452] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(121), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1488] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(92), 1,
      sym_inline_content,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(31), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1524] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(123), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1560] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(64), 1,
      sym_inline_content,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(45), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1596] = 4,
    ACTIONS(127), 1,
      aux_sym__blank_line_token1,
    STATE(35), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(130), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(125), 15,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1626] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(132), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1662] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(127), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(29), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1698] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(96), 1,
      sym_inline_content,
    ACTIONS(79), 2,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1734] = 7,
    ACTIONS(143), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(146), 1,
      sym__inline_content_end,
    ACTIONS(140), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(134), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(137), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1770] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(103), 1,
      sym_inline_content,
    ACTIONS(79), 2,
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
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1806] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(152), 1,
      sym__eof,
    STATE(35), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(150), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(148), 14,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1838] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(70), 1,
      sym_inline_content,
    ACTIONS(99), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(45), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1874] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(105), 1,
      sym_inline_content,
    ACTIONS(89), 2,
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
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1910] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    STATE(73), 1,
      sym_inline_content,
    ACTIONS(97), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(31), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1946] = 7,
    ACTIONS(91), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(154), 1,
      sym__inline_content_end,
    ACTIONS(117), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(39), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(51), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(9), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1982] = 4,
    ACTIONS(156), 1,
      aux_sym__blank_line_token1,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(130), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(125), 14,
      sym__eof,
      sym__first_ordered_list_token,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2011] = 5,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(161), 1,
      sym__eof,
    STATE(46), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(150), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(148), 13,
      sym__first_ordered_list_token,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2042] = 2,
    ACTIONS(165), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(163), 15,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2066] = 2,
    ACTIONS(167), 6,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(169), 13,
      sym__eof,
      sym__inline_content_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
  [2090] = 5,
    ACTIONS(175), 1,
      sym__newline_token,
    ACTIONS(171), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(179), 2,
      sym__eof,
      anon_sym_POUND_POUND,
    ACTIONS(173), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(177), 11,
      sym__inline_content_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
  [2120] = 3,
    ACTIONS(181), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(52), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(183), 11,
      sym__inline_content_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
  [2145] = 4,
    ACTIONS(185), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(191), 4,
      sym__inline_content_end,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
    STATE(52), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(188), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [2172] = 2,
    ACTIONS(165), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(163), 14,
      sym__eof,
      sym__first_ordered_list_token,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2195] = 2,
    ACTIONS(167), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(169), 13,
      sym__eof,
      sym__inline_content_end,
      sym__newline_token,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
  [2217] = 5,
    ACTIONS(171), 1,
      aux_sym__blank_line_token1,
    ACTIONS(179), 1,
      sym__eof,
    ACTIONS(193), 1,
      sym__newline_token,
    ACTIONS(173), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(177), 11,
      sym__inline_content_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
  [2245] = 2,
    ACTIONS(197), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(195), 14,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2267] = 2,
    ACTIONS(199), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(54), 14,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2289] = 2,
    ACTIONS(197), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(195), 13,
      sym__first_ordered_list_token,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2310] = 2,
    ACTIONS(167), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(169), 11,
      sym__inline_content_end,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
  [2329] = 5,
    ACTIONS(205), 1,
      sym__indent,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    STATE(62), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(201), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(203), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2349] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(213), 1,
      sym__indent,
    STATE(63), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(209), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(211), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2369] = 4,
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
      anon_sym_POUND_POUND,
  [2387] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(226), 1,
      sym__indent,
    STATE(62), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(222), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(224), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2407] = 5,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    ACTIONS(232), 1,
      sym__indent,
    STATE(60), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(228), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(230), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2427] = 7,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(234), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(236), 1,
      anon_sym_POUND_POUND,
    ACTIONS(238), 1,
      sym__eof,
    STATE(12), 1,
      sym__block_separator,
    STATE(69), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2450] = 7,
    ACTIONS(240), 1,
      aux_sym__blank_line_token1,
    ACTIONS(243), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(245), 1,
      anon_sym_POUND_POUND,
    ACTIONS(247), 1,
      sym__eof,
    STATE(12), 1,
      sym__block_separator,
    STATE(66), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2473] = 7,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(238), 1,
      sym__eof,
    ACTIONS(250), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(252), 1,
      anon_sym_POUND_POUND,
    STATE(12), 1,
      sym__block_separator,
    STATE(71), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2496] = 2,
    ACTIONS(254), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(256), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_POUND_POUND,
  [2509] = 7,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(238), 1,
      sym__eof,
    ACTIONS(250), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(252), 1,
      anon_sym_POUND_POUND,
    STATE(12), 1,
      sym__block_separator,
    STATE(66), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2532] = 2,
    ACTIONS(258), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(260), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_POUND_POUND,
  [2545] = 7,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(238), 1,
      sym__eof,
    ACTIONS(262), 1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND,
    STATE(12), 1,
      sym__block_separator,
    STATE(66), 1,
      aux_sym__interpolated_block_list_repeat1,
    STATE(47), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2568] = 5,
    ACTIONS(209), 1,
      aux_sym__blank_line_token1,
    ACTIONS(266), 1,
      sym__indent,
    ACTIONS(268), 1,
      sym__list_item_content_cont,
    STATE(78), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(211), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2586] = 5,
    ACTIONS(228), 1,
      aux_sym__blank_line_token1,
    ACTIONS(268), 1,
      sym__list_item_content_cont,
    ACTIONS(270), 1,
      sym__indent,
    STATE(79), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(230), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2604] = 5,
    ACTIONS(274), 1,
      sym__newline_token,
    ACTIONS(278), 1,
      sym__next_ordered_list_token,
    STATE(77), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(272), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(276), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2622] = 5,
    ACTIONS(278), 1,
      sym__next_ordered_list_token,
    ACTIONS(282), 1,
      sym__newline_token,
    STATE(74), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(280), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(284), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2640] = 4,
    ACTIONS(215), 1,
      aux_sym__blank_line_token1,
    ACTIONS(286), 1,
      sym__list_item_content_cont,
    STATE(76), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(217), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2656] = 4,
    ACTIONS(293), 1,
      sym__next_ordered_list_token,
    STATE(77), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(291), 2,
      sym__eof,
      anon_sym_POUND_POUND,
    ACTIONS(289), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [2672] = 5,
    ACTIONS(222), 1,
      aux_sym__blank_line_token1,
    ACTIONS(268), 1,
      sym__list_item_content_cont,
    ACTIONS(296), 1,
      sym__indent,
    STATE(76), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(224), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2690] = 5,
    ACTIONS(201), 1,
      aux_sym__blank_line_token1,
    ACTIONS(268), 1,
      sym__list_item_content_cont,
    ACTIONS(298), 1,
      sym__indent,
    STATE(76), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(203), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2708] = 4,
    ACTIONS(300), 1,
      sym__indent,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    STATE(85), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(230), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2723] = 2,
    ACTIONS(304), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(306), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2734] = 2,
    ACTIONS(308), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(310), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2745] = 2,
    ACTIONS(312), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(314), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2756] = 2,
    ACTIONS(316), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(318), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2767] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(320), 1,
      sym__indent,
    STATE(91), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(203), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2782] = 4,
    ACTIONS(324), 1,
      sym__newline_token,
    STATE(90), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(322), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(326), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2797] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(328), 1,
      sym__indent,
    STATE(88), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(211), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2812] = 4,
    ACTIONS(302), 1,
      sym__list_item_content_cont,
    ACTIONS(330), 1,
      sym__indent,
    STATE(91), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(224), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2827] = 2,
    ACTIONS(289), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(291), 3,
      sym__eof,
      sym__next_ordered_list_token,
      anon_sym_POUND_POUND,
  [2838] = 4,
    ACTIONS(334), 1,
      sym__newline_token,
    STATE(90), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(332), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(337), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2853] = 3,
    ACTIONS(339), 1,
      sym__list_item_content_cont,
    STATE(91), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(217), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2866] = 2,
    ACTIONS(258), 1,
      aux_sym__blank_line_token1,
    ACTIONS(260), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [2877] = 4,
    ACTIONS(344), 1,
      sym__newline_token,
    STATE(90), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(342), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(346), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2892] = 2,
    ACTIONS(254), 1,
      aux_sym__blank_line_token1,
    ACTIONS(256), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [2903] = 4,
    ACTIONS(350), 1,
      sym__newline_token,
    STATE(93), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(348), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(352), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2918] = 4,
    ACTIONS(356), 1,
      sym__newline_token,
    STATE(86), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(354), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(358), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2933] = 2,
    ACTIONS(256), 2,
      sym__eof,
      anon_sym_POUND_POUND,
    ACTIONS(254), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [2943] = 4,
    ACTIONS(360), 1,
      aux_sym__blank_line_token1,
    ACTIONS(362), 1,
      sym__eof,
    STATE(57), 1,
      sym__block_separator,
    STATE(41), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [2957] = 4,
    ACTIONS(289), 1,
      aux_sym__blank_line_token1,
    ACTIONS(364), 1,
      sym__next_ordered_list_token,
    STATE(99), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(291), 2,
      sym__eof,
      sym__newline_token,
  [2971] = 3,
    ACTIONS(369), 1,
      sym__newline_token,
    ACTIONS(367), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(371), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [2983] = 5,
    ACTIONS(280), 1,
      aux_sym__blank_line_token1,
    ACTIONS(284), 1,
      sym__eof,
    ACTIONS(373), 1,
      sym__newline_token,
    ACTIONS(375), 1,
      sym__next_ordered_list_token,
    STATE(102), 1,
      aux_sym_ordered_list_repeat1,
  [2999] = 5,
    ACTIONS(272), 1,
      aux_sym__blank_line_token1,
    ACTIONS(276), 1,
      sym__eof,
    ACTIONS(375), 1,
      sym__next_ordered_list_token,
    ACTIONS(377), 1,
      sym__newline_token,
    STATE(99), 1,
      aux_sym_ordered_list_repeat1,
  [3015] = 2,
    ACTIONS(337), 2,
      sym__eof,
      anon_sym_POUND_POUND,
    ACTIONS(332), 3,
      aux_sym__blank_line_token1,
      sym__newline_token,
      aux_sym__interpolated_block_list_token1,
  [3025] = 1,
    ACTIONS(256), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [3033] = 1,
    ACTIONS(260), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [3041] = 4,
    ACTIONS(354), 1,
      aux_sym__blank_line_token1,
    ACTIONS(358), 1,
      sym__eof,
    ACTIONS(379), 1,
      sym__newline_token,
    STATE(107), 1,
      aux_sym_paragraph_repeat1,
  [3054] = 4,
    ACTIONS(322), 1,
      aux_sym__blank_line_token1,
    ACTIONS(326), 1,
      sym__eof,
    ACTIONS(381), 1,
      sym__newline_token,
    STATE(108), 1,
      aux_sym_paragraph_repeat1,
  [3067] = 4,
    ACTIONS(332), 1,
      aux_sym__blank_line_token1,
    ACTIONS(337), 1,
      sym__eof,
    ACTIONS(383), 1,
      sym__newline_token,
    STATE(108), 1,
      aux_sym_paragraph_repeat1,
  [3080] = 2,
    ACTIONS(304), 1,
      aux_sym__blank_line_token1,
    ACTIONS(306), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3089] = 2,
    ACTIONS(316), 1,
      aux_sym__blank_line_token1,
    ACTIONS(318), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3098] = 2,
    ACTIONS(386), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(388), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3107] = 2,
    ACTIONS(390), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(392), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3116] = 2,
    ACTIONS(394), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(396), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3125] = 2,
    ACTIONS(289), 1,
      aux_sym__blank_line_token1,
    ACTIONS(291), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3134] = 2,
    ACTIONS(398), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(400), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3143] = 3,
    ACTIONS(402), 1,
      sym__next_ordered_list_token,
    STATE(116), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(291), 2,
      sym__dedent,
      sym__newline_token,
  [3154] = 2,
    ACTIONS(308), 1,
      aux_sym__blank_line_token1,
    ACTIONS(310), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3163] = 2,
    ACTIONS(405), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(407), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3172] = 4,
    ACTIONS(348), 1,
      aux_sym__blank_line_token1,
    ACTIONS(352), 1,
      sym__eof,
    ACTIONS(409), 1,
      sym__newline_token,
    STATE(120), 1,
      aux_sym_paragraph_repeat1,
  [3185] = 4,
    ACTIONS(342), 1,
      aux_sym__blank_line_token1,
    ACTIONS(346), 1,
      sym__eof,
    ACTIONS(411), 1,
      sym__newline_token,
    STATE(108), 1,
      aux_sym_paragraph_repeat1,
  [3198] = 4,
    ACTIONS(276), 1,
      sym__dedent,
    ACTIONS(413), 1,
      sym__newline_token,
    ACTIONS(415), 1,
      sym__next_ordered_list_token,
    STATE(116), 1,
      aux_sym_ordered_list_repeat1,
  [3211] = 2,
    ACTIONS(312), 1,
      aux_sym__blank_line_token1,
    ACTIONS(314), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3220] = 4,
    ACTIONS(284), 1,
      sym__dedent,
    ACTIONS(415), 1,
      sym__next_ordered_list_token,
    ACTIONS(417), 1,
      sym__newline_token,
    STATE(121), 1,
      aux_sym_ordered_list_repeat1,
  [3233] = 2,
    ACTIONS(243), 2,
      aux_sym__blank_line_token1,
      aux_sym__interpolated_block_list_token1,
    ACTIONS(245), 2,
      sym__eof,
      anon_sym_POUND_POUND,
  [3242] = 3,
    ACTIONS(367), 1,
      aux_sym__blank_line_token1,
    ACTIONS(371), 1,
      sym__eof,
    ACTIONS(419), 1,
      sym__newline_token,
  [3252] = 1,
    ACTIONS(291), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3258] = 2,
    ACTIONS(332), 1,
      aux_sym__blank_line_token1,
    ACTIONS(337), 2,
      sym__eof,
      sym__newline_token,
  [3266] = 1,
    ACTIONS(306), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3272] = 1,
    ACTIONS(310), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3278] = 2,
    ACTIONS(254), 1,
      aux_sym__blank_line_token1,
    ACTIONS(256), 2,
      sym__eof,
      sym__newline_token,
  [3286] = 1,
    ACTIONS(314), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3292] = 1,
    ACTIONS(318), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [3298] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(159), 1,
      sym_ordered_list,
  [3305] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(161), 1,
      sym_ordered_list,
  [3312] = 2,
    ACTIONS(423), 1,
      aux_sym__inline_whitespace_token1,
    STATE(30), 1,
      sym__inline_whitespace,
  [3319] = 2,
    ACTIONS(425), 1,
      aux_sym__inline_whitespace_token1,
    STATE(28), 1,
      sym__inline_whitespace,
  [3326] = 2,
    ACTIONS(427), 1,
      aux_sym__inline_whitespace_token1,
    STATE(38), 1,
      sym__inline_whitespace,
  [3333] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(187), 1,
      sym_ordered_list,
  [3340] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(169), 1,
      sym_ordered_list,
  [3347] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(184), 1,
      sym_ordered_list,
  [3354] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(181), 1,
      sym_ordered_list,
  [3361] = 1,
    ACTIONS(388), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3366] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(170), 1,
      sym_ordered_list,
  [3373] = 2,
    ACTIONS(429), 1,
      aux_sym__inline_whitespace_token1,
    STATE(34), 1,
      sym__inline_whitespace,
  [3380] = 1,
    ACTIONS(407), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3385] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(162), 1,
      sym_ordered_list,
  [3392] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(172), 1,
      sym_ordered_list,
  [3399] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(160), 1,
      sym_ordered_list,
  [3406] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(175), 1,
      sym_ordered_list,
  [3413] = 1,
    ACTIONS(392), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3418] = 1,
    ACTIONS(396), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3423] = 2,
    ACTIONS(431), 1,
      aux_sym__inline_whitespace_token1,
    STATE(44), 1,
      sym__inline_whitespace,
  [3430] = 2,
    ACTIONS(421), 1,
      sym__first_ordered_list_token,
    STATE(171), 1,
      sym_ordered_list,
  [3437] = 1,
    ACTIONS(400), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [3442] = 1,
    ACTIONS(433), 1,
      anon_sym_POUND_POUND,
  [3446] = 1,
    ACTIONS(435), 1,
      ts_builtin_sym_end,
  [3450] = 1,
    ACTIONS(437), 1,
      anon_sym_GT_GT_GT,
  [3454] = 1,
    ACTIONS(252), 1,
      anon_sym_POUND_POUND,
  [3458] = 1,
    ACTIONS(439), 1,
      sym__dedent,
  [3462] = 1,
    ACTIONS(441), 1,
      sym__dedent,
  [3466] = 1,
    ACTIONS(443), 1,
      sym__dedent,
  [3470] = 1,
    ACTIONS(445), 1,
      sym__dedent,
  [3474] = 1,
    ACTIONS(447), 1,
      aux_sym__inline_whitespace_token1,
  [3478] = 1,
    ACTIONS(449), 1,
      aux_sym__inline_whitespace_token1,
  [3482] = 1,
    ACTIONS(451), 1,
      anon_sym_GT_GT_GT,
  [3486] = 1,
    ACTIONS(453), 1,
      sym__newline_token,
  [3490] = 1,
    ACTIONS(455), 1,
      anon_sym_GT_GT_GT,
  [3494] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [3498] = 1,
    ACTIONS(457), 1,
      sym__dedent,
  [3502] = 1,
    ACTIONS(459), 1,
      sym__dedent,
  [3506] = 1,
    ACTIONS(461), 1,
      sym__dedent,
  [3510] = 1,
    ACTIONS(463), 1,
      sym__dedent,
  [3514] = 1,
    ACTIONS(465), 1,
      sym__newline_token,
  [3518] = 1,
    ACTIONS(467), 1,
      ts_builtin_sym_end,
  [3522] = 1,
    ACTIONS(469), 1,
      sym__dedent,
  [3526] = 1,
    ACTIONS(407), 1,
      sym__dedent,
  [3530] = 1,
    ACTIONS(471), 1,
      sym__newline_token,
  [3534] = 1,
    ACTIONS(473), 1,
      sym__newline_token,
  [3538] = 1,
    ACTIONS(388), 1,
      sym__dedent,
  [3542] = 1,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND,
  [3546] = 1,
    ACTIONS(475), 1,
      sym__dedent,
  [3550] = 1,
    ACTIONS(477), 1,
      sym__newline_token,
  [3554] = 1,
    ACTIONS(479), 1,
      sym__newline_token,
  [3558] = 1,
    ACTIONS(481), 1,
      sym__dedent,
  [3562] = 1,
    ACTIONS(483), 1,
      sym__newline_token,
  [3566] = 1,
    ACTIONS(485), 1,
      sym__newline_token,
  [3570] = 1,
    ACTIONS(487), 1,
      sym__dedent,
  [3574] = 1,
    ACTIONS(489), 1,
      anon_sym_POUND_POUND,
  [3578] = 1,
    ACTIONS(491), 1,
      sym__newline_token,
  [3582] = 1,
    ACTIONS(493), 1,
      sym__newline_token,
  [3586] = 1,
    ACTIONS(495), 1,
      sym__newline_token,
  [3590] = 1,
    ACTIONS(497), 1,
      sym__newline_token,
  [3594] = 1,
    ACTIONS(499), 1,
      sym__newline_token,
  [3598] = 1,
    ACTIONS(501), 1,
      sym__newline_token,
  [3602] = 1,
    ACTIONS(503), 1,
      sym__newline_token,
  [3606] = 1,
    ACTIONS(505), 1,
      sym__newline_token,
  [3610] = 1,
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
  [SMALL_STATE(9)] = 385,
  [SMALL_STATE(10)] = 448,
  [SMALL_STATE(11)] = 511,
  [SMALL_STATE(12)] = 574,
  [SMALL_STATE(13)] = 631,
  [SMALL_STATE(14)] = 688,
  [SMALL_STATE(15)] = 740,
  [SMALL_STATE(16)] = 792,
  [SMALL_STATE(17)] = 844,
  [SMALL_STATE(18)] = 896,
  [SMALL_STATE(19)] = 948,
  [SMALL_STATE(20)] = 1000,
  [SMALL_STATE(21)] = 1044,
  [SMALL_STATE(22)] = 1088,
  [SMALL_STATE(23)] = 1132,
  [SMALL_STATE(24)] = 1176,
  [SMALL_STATE(25)] = 1218,
  [SMALL_STATE(26)] = 1260,
  [SMALL_STATE(27)] = 1302,
  [SMALL_STATE(28)] = 1344,
  [SMALL_STATE(29)] = 1380,
  [SMALL_STATE(30)] = 1416,
  [SMALL_STATE(31)] = 1452,
  [SMALL_STATE(32)] = 1488,
  [SMALL_STATE(33)] = 1524,
  [SMALL_STATE(34)] = 1560,
  [SMALL_STATE(35)] = 1596,
  [SMALL_STATE(36)] = 1626,
  [SMALL_STATE(37)] = 1662,
  [SMALL_STATE(38)] = 1698,
  [SMALL_STATE(39)] = 1734,
  [SMALL_STATE(40)] = 1770,
  [SMALL_STATE(41)] = 1806,
  [SMALL_STATE(42)] = 1838,
  [SMALL_STATE(43)] = 1874,
  [SMALL_STATE(44)] = 1910,
  [SMALL_STATE(45)] = 1946,
  [SMALL_STATE(46)] = 1982,
  [SMALL_STATE(47)] = 2011,
  [SMALL_STATE(48)] = 2042,
  [SMALL_STATE(49)] = 2066,
  [SMALL_STATE(50)] = 2090,
  [SMALL_STATE(51)] = 2120,
  [SMALL_STATE(52)] = 2145,
  [SMALL_STATE(53)] = 2172,
  [SMALL_STATE(54)] = 2195,
  [SMALL_STATE(55)] = 2217,
  [SMALL_STATE(56)] = 2245,
  [SMALL_STATE(57)] = 2267,
  [SMALL_STATE(58)] = 2289,
  [SMALL_STATE(59)] = 2310,
  [SMALL_STATE(60)] = 2329,
  [SMALL_STATE(61)] = 2349,
  [SMALL_STATE(62)] = 2369,
  [SMALL_STATE(63)] = 2387,
  [SMALL_STATE(64)] = 2407,
  [SMALL_STATE(65)] = 2427,
  [SMALL_STATE(66)] = 2450,
  [SMALL_STATE(67)] = 2473,
  [SMALL_STATE(68)] = 2496,
  [SMALL_STATE(69)] = 2509,
  [SMALL_STATE(70)] = 2532,
  [SMALL_STATE(71)] = 2545,
  [SMALL_STATE(72)] = 2568,
  [SMALL_STATE(73)] = 2586,
  [SMALL_STATE(74)] = 2604,
  [SMALL_STATE(75)] = 2622,
  [SMALL_STATE(76)] = 2640,
  [SMALL_STATE(77)] = 2656,
  [SMALL_STATE(78)] = 2672,
  [SMALL_STATE(79)] = 2690,
  [SMALL_STATE(80)] = 2708,
  [SMALL_STATE(81)] = 2723,
  [SMALL_STATE(82)] = 2734,
  [SMALL_STATE(83)] = 2745,
  [SMALL_STATE(84)] = 2756,
  [SMALL_STATE(85)] = 2767,
  [SMALL_STATE(86)] = 2782,
  [SMALL_STATE(87)] = 2797,
  [SMALL_STATE(88)] = 2812,
  [SMALL_STATE(89)] = 2827,
  [SMALL_STATE(90)] = 2838,
  [SMALL_STATE(91)] = 2853,
  [SMALL_STATE(92)] = 2866,
  [SMALL_STATE(93)] = 2877,
  [SMALL_STATE(94)] = 2892,
  [SMALL_STATE(95)] = 2903,
  [SMALL_STATE(96)] = 2918,
  [SMALL_STATE(97)] = 2933,
  [SMALL_STATE(98)] = 2943,
  [SMALL_STATE(99)] = 2957,
  [SMALL_STATE(100)] = 2971,
  [SMALL_STATE(101)] = 2983,
  [SMALL_STATE(102)] = 2999,
  [SMALL_STATE(103)] = 3015,
  [SMALL_STATE(104)] = 3025,
  [SMALL_STATE(105)] = 3033,
  [SMALL_STATE(106)] = 3041,
  [SMALL_STATE(107)] = 3054,
  [SMALL_STATE(108)] = 3067,
  [SMALL_STATE(109)] = 3080,
  [SMALL_STATE(110)] = 3089,
  [SMALL_STATE(111)] = 3098,
  [SMALL_STATE(112)] = 3107,
  [SMALL_STATE(113)] = 3116,
  [SMALL_STATE(114)] = 3125,
  [SMALL_STATE(115)] = 3134,
  [SMALL_STATE(116)] = 3143,
  [SMALL_STATE(117)] = 3154,
  [SMALL_STATE(118)] = 3163,
  [SMALL_STATE(119)] = 3172,
  [SMALL_STATE(120)] = 3185,
  [SMALL_STATE(121)] = 3198,
  [SMALL_STATE(122)] = 3211,
  [SMALL_STATE(123)] = 3220,
  [SMALL_STATE(124)] = 3233,
  [SMALL_STATE(125)] = 3242,
  [SMALL_STATE(126)] = 3252,
  [SMALL_STATE(127)] = 3258,
  [SMALL_STATE(128)] = 3266,
  [SMALL_STATE(129)] = 3272,
  [SMALL_STATE(130)] = 3278,
  [SMALL_STATE(131)] = 3286,
  [SMALL_STATE(132)] = 3292,
  [SMALL_STATE(133)] = 3298,
  [SMALL_STATE(134)] = 3305,
  [SMALL_STATE(135)] = 3312,
  [SMALL_STATE(136)] = 3319,
  [SMALL_STATE(137)] = 3326,
  [SMALL_STATE(138)] = 3333,
  [SMALL_STATE(139)] = 3340,
  [SMALL_STATE(140)] = 3347,
  [SMALL_STATE(141)] = 3354,
  [SMALL_STATE(142)] = 3361,
  [SMALL_STATE(143)] = 3366,
  [SMALL_STATE(144)] = 3373,
  [SMALL_STATE(145)] = 3380,
  [SMALL_STATE(146)] = 3385,
  [SMALL_STATE(147)] = 3392,
  [SMALL_STATE(148)] = 3399,
  [SMALL_STATE(149)] = 3406,
  [SMALL_STATE(150)] = 3413,
  [SMALL_STATE(151)] = 3418,
  [SMALL_STATE(152)] = 3423,
  [SMALL_STATE(153)] = 3430,
  [SMALL_STATE(154)] = 3437,
  [SMALL_STATE(155)] = 3442,
  [SMALL_STATE(156)] = 3446,
  [SMALL_STATE(157)] = 3450,
  [SMALL_STATE(158)] = 3454,
  [SMALL_STATE(159)] = 3458,
  [SMALL_STATE(160)] = 3462,
  [SMALL_STATE(161)] = 3466,
  [SMALL_STATE(162)] = 3470,
  [SMALL_STATE(163)] = 3474,
  [SMALL_STATE(164)] = 3478,
  [SMALL_STATE(165)] = 3482,
  [SMALL_STATE(166)] = 3486,
  [SMALL_STATE(167)] = 3490,
  [SMALL_STATE(168)] = 3494,
  [SMALL_STATE(169)] = 3498,
  [SMALL_STATE(170)] = 3502,
  [SMALL_STATE(171)] = 3506,
  [SMALL_STATE(172)] = 3510,
  [SMALL_STATE(173)] = 3514,
  [SMALL_STATE(174)] = 3518,
  [SMALL_STATE(175)] = 3522,
  [SMALL_STATE(176)] = 3526,
  [SMALL_STATE(177)] = 3530,
  [SMALL_STATE(178)] = 3534,
  [SMALL_STATE(179)] = 3538,
  [SMALL_STATE(180)] = 3542,
  [SMALL_STATE(181)] = 3546,
  [SMALL_STATE(182)] = 3550,
  [SMALL_STATE(183)] = 3554,
  [SMALL_STATE(184)] = 3558,
  [SMALL_STATE(185)] = 3562,
  [SMALL_STATE(186)] = 3566,
  [SMALL_STATE(187)] = 3570,
  [SMALL_STATE(188)] = 3574,
  [SMALL_STATE(189)] = 3578,
  [SMALL_STATE(190)] = 3582,
  [SMALL_STATE(191)] = 3586,
  [SMALL_STATE(192)] = 3590,
  [SMALL_STATE(193)] = 3594,
  [SMALL_STATE(194)] = 3598,
  [SMALL_STATE(195)] = 3602,
  [SMALL_STATE(196)] = 3606,
  [SMALL_STATE(197)] = 3610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(51),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(135),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(125),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(173),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(51),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(51),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(39),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(166),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(52),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(52),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(178),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2), SHIFT_REPEAT(166),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpolated_block_list_repeat1, 2), SHIFT_REPEAT(12),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(186),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(18),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 8),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(40),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(185),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 5),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(15),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(37),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(14),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpolated_block_list, 4),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [467] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
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
