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
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__blank_line_token1 = 1,
  aux_sym__inline_whitespace_token1 = 2,
  sym__newline_token = 3,
  sym__single_whitespace = 4,
  sym__plural_whitespace = 5,
  sym__word_no_digit = 6,
  sym__digits = 7,
  aux_sym__text_base_token1 = 8,
  aux_sym__text_base_token2 = 9,
  aux_sym__text_base_token3 = 10,
  aux_sym__text_base_token4 = 11,
  aux_sym__text_base_token5 = 12,
  aux_sym__text_base_token6 = 13,
  aux_sym__text_base_token7 = 14,
  anon_sym_BANG = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_DOLLAR = 17,
  anon_sym_PERCENT = 18,
  anon_sym_AMP = 19,
  anon_sym_SQUOTE = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_STAR = 23,
  anon_sym_PLUS = 24,
  anon_sym_COMMA = 25,
  anon_sym_DASH = 26,
  anon_sym_DOT = 27,
  anon_sym_SLASH = 28,
  anon_sym_COLON = 29,
  anon_sym_SEMI = 30,
  anon_sym_LT = 31,
  anon_sym_EQ = 32,
  anon_sym_QMARK = 33,
  anon_sym_AT = 34,
  anon_sym_LBRACK = 35,
  anon_sym_BSLASH = 36,
  anon_sym_RBRACK = 37,
  anon_sym_CARET = 38,
  anon_sym__ = 39,
  anon_sym_BQUOTE = 40,
  anon_sym_LBRACE = 41,
  anon_sym_PIPE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_TILDE = 44,
  aux_sym__script_text_token1 = 45,
  aux_sym__script_text_token2 = 46,
  sym_uri_autolink = 47,
  sym_email_autolink = 48,
  anon_sym_POUND_POUND = 49,
  anon_sym_LT_LT_LT = 50,
  anon_sym_GT_GT_GT = 51,
  aux_sym_heading_token1 = 52,
  aux_sym_horizontal_rule_token1 = 53,
  anon_sym_LBRACKx_RBRACK = 54,
  anon_sym_LBRACKX_RBRACK = 55,
  sym_checkbox_empty = 56,
  sym__line_start = 57,
  sym__line_end = 58,
  sym__indent = 59,
  sym__dedent = 60,
  sym__eof = 61,
  sym__first_ordered_list_token = 62,
  sym__next_ordered_list_token = 63,
  sym__list_item_content_cont = 64,
  sym__list_item_content_end = 65,
  sym__non_blank_line = 66,
  sym__inline_content_end = 67,
  sym__DEBUG = 68,
  sym_source_file = 69,
  sym__blank_line = 70,
  sym__block_separator = 71,
  sym_block = 72,
  sym_block_list = 73,
  sym_inline_text = 74,
  sym__inline_whitespace = 75,
  sym__whitespace = 76,
  sym__word = 77,
  sym__text_base = 78,
  sym__script_text = 79,
  sym_script_interpolation = 80,
  sym_script_content = 81,
  sym_scripting = 82,
  sym_inline_content = 83,
  sym_script_block = 84,
  sym_paragraph = 85,
  sym_heading = 86,
  sym_horizontal_rule = 87,
  sym_ordered_list_item = 88,
  sym_ordered_list = 89,
  sym_checkbox_done = 90,
  sym_checkbox = 91,
  aux_sym__block_separator_repeat1 = 92,
  aux_sym_block_list_repeat1 = 93,
  aux_sym_inline_text_repeat1 = 94,
  aux_sym_script_content_repeat1 = 95,
  aux_sym_inline_content_repeat1 = 96,
  aux_sym_paragraph_repeat1 = 97,
  aux_sym_ordered_list_item_repeat1 = 98,
  aux_sym_ordered_list_repeat1 = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [aux_sym__inline_whitespace_token1] = "_inline_whitespace_token1",
  [sym__newline_token] = "_newline_token",
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
  [aux_sym__script_text_token1] = "_script_text_token1",
  [aux_sym__script_text_token2] = "_script_text_token2",
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
  [aux_sym__script_text_token1] = aux_sym__script_text_token1,
  [aux_sym__script_text_token2] = aux_sym__script_text_token2,
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
  [aux_sym__script_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__script_text_token2] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 13,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 23,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 39,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 49,
  [52] = 50,
  [53] = 46,
  [54] = 54,
  [55] = 48,
  [56] = 56,
  [57] = 47,
  [58] = 58,
  [59] = 59,
  [60] = 56,
  [61] = 58,
  [62] = 62,
  [63] = 54,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 62,
  [75] = 75,
  [76] = 76,
  [77] = 59,
  [78] = 70,
  [79] = 72,
  [80] = 68,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 54,
  [85] = 73,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 87,
  [92] = 92,
  [93] = 93,
  [94] = 90,
  [95] = 95,
  [96] = 96,
  [97] = 95,
  [98] = 98,
  [99] = 92,
  [100] = 96,
  [101] = 101,
  [102] = 102,
  [103] = 86,
  [104] = 98,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 112,
  [118] = 110,
  [119] = 119,
  [120] = 116,
  [121] = 121,
  [122] = 121,
  [123] = 123,
  [124] = 115,
  [125] = 109,
  [126] = 126,
  [127] = 101,
  [128] = 126,
  [129] = 123,
  [130] = 119,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '!') ADVANCE(184);
      if (lookahead == '"') ADVANCE(186);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '%') ADVANCE(190);
      if (lookahead == '&') ADVANCE(192);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(204);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '>') ADVANCE(140);
      if (lookahead == '?') ADVANCE(219);
      if (lookahead == '@') ADVANCE(221);
      if (lookahead == '[') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '^') ADVANCE(229);
      if (lookahead == '_') ADVANCE(231);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '|') ADVANCE(237);
      if (lookahead == '}') ADVANCE(239);
      if (lookahead == '~') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(168);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '#') ADVANCE(4);
      if (lookahead == '$') ADVANCE(189);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '&') ADVANCE(193);
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(199);
      if (lookahead == '*') ADVANCE(201);
      if (lookahead == '+') ADVANCE(203);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(211);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(218);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '?') ADVANCE(220);
      if (lookahead == '@') ADVANCE(222);
      if (lookahead == '[') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(226);
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(230);
      if (lookahead == '_') ADVANCE(232);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(236);
      if (lookahead == '|') ADVANCE(238);
      if (lookahead == '}') ADVANCE(240);
      if (lookahead == '~') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(173);
      if (lookahead != 0) ADVANCE(170);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == 'X') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(247);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(7);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
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
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
      END_STATE();
    case 130:
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '>') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(142);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '[') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
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
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      if (lookahead == '<') ADVANCE(248);
      END_STATE();
    case 135:
      if (lookahead == '<') ADVANCE(178);
      END_STATE();
    case 136:
      if (lookahead == '<') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == '>') ADVANCE(249);
      END_STATE();
    case 138:
      if (lookahead == '>') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(138);
      END_STATE();
    case 139:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 140:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(142);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 142:
      if (lookahead == '@') ADVANCE(152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(142);
      END_STATE();
    case 143:
      if (lookahead == '[') ADVANCE(182);
      END_STATE();
    case 144:
      if (lookahead == ']') ADVANCE(183);
      END_STATE();
    case 145:
      if (lookahead == ']') ADVANCE(336);
      END_STATE();
    case 146:
      if (lookahead == ']') ADVANCE(335);
      END_STATE();
    case 147:
      if (lookahead == ']') ADVANCE(334);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == '{') ADVANCE(180);
      END_STATE();
    case 150:
      if (lookahead == '}') ADVANCE(181);
      END_STATE();
    case 151:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 154:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(243);
      END_STATE();
    case 155:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(244);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '=')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(157);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
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
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '!' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__digits);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(333);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (lookahead == '-') ADVANCE(175);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      if (aux_sym__text_base_token1_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__text_base_token2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__text_base_token3);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__text_base_token4);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__text_base_token5);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__text_base_token6);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__text_base_token7);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '#') ADVANCE(154);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__script_text_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__script_text_token2);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(252);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
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
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 162, .external_lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 156, .external_lex_state = 3},
  [8] = {.lex_state = 156, .external_lex_state = 3},
  [9] = {.lex_state = 156, .external_lex_state = 3},
  [10] = {.lex_state = 156, .external_lex_state = 3},
  [11] = {.lex_state = 156, .external_lex_state = 3},
  [12] = {.lex_state = 156, .external_lex_state = 3},
  [13] = {.lex_state = 132},
  [14] = {.lex_state = 132},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 159, .external_lex_state = 4},
  [18] = {.lex_state = 159, .external_lex_state = 4},
  [19] = {.lex_state = 159, .external_lex_state = 4},
  [20] = {.lex_state = 159, .external_lex_state = 4},
  [21] = {.lex_state = 162, .external_lex_state = 2},
  [22] = {.lex_state = 162, .external_lex_state = 2},
  [23] = {.lex_state = 132, .external_lex_state = 5},
  [24] = {.lex_state = 132},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 132},
  [27] = {.lex_state = 132},
  [28] = {.lex_state = 132},
  [29] = {.lex_state = 132, .external_lex_state = 5},
  [30] = {.lex_state = 132, .external_lex_state = 5},
  [31] = {.lex_state = 162, .external_lex_state = 2},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 132, .external_lex_state = 5},
  [34] = {.lex_state = 162, .external_lex_state = 2},
  [35] = {.lex_state = 162, .external_lex_state = 2},
  [36] = {.lex_state = 162, .external_lex_state = 2},
  [37] = {.lex_state = 132, .external_lex_state = 5},
  [38] = {.lex_state = 132, .external_lex_state = 5},
  [39] = {.lex_state = 156, .external_lex_state = 3},
  [40] = {.lex_state = 158, .external_lex_state = 6},
  [41] = {.lex_state = 156, .external_lex_state = 3},
  [42] = {.lex_state = 156, .external_lex_state = 3},
  [43] = {.lex_state = 158, .external_lex_state = 6},
  [44] = {.lex_state = 156, .external_lex_state = 3},
  [45] = {.lex_state = 132, .external_lex_state = 5},
  [46] = {.lex_state = 158, .external_lex_state = 7},
  [47] = {.lex_state = 158, .external_lex_state = 7},
  [48] = {.lex_state = 158, .external_lex_state = 7},
  [49] = {.lex_state = 158, .external_lex_state = 7},
  [50] = {.lex_state = 158, .external_lex_state = 7},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 0, .external_lex_state = 8},
  [53] = {.lex_state = 0, .external_lex_state = 8},
  [54] = {.lex_state = 158, .external_lex_state = 7},
  [55] = {.lex_state = 0, .external_lex_state = 8},
  [56] = {.lex_state = 158, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 8},
  [58] = {.lex_state = 162, .external_lex_state = 4},
  [59] = {.lex_state = 158, .external_lex_state = 9},
  [60] = {.lex_state = 0, .external_lex_state = 8},
  [61] = {.lex_state = 162, .external_lex_state = 4},
  [62] = {.lex_state = 158, .external_lex_state = 9},
  [63] = {.lex_state = 0, .external_lex_state = 8},
  [64] = {.lex_state = 158, .external_lex_state = 9},
  [65] = {.lex_state = 158, .external_lex_state = 9},
  [66] = {.lex_state = 158, .external_lex_state = 4},
  [67] = {.lex_state = 0, .external_lex_state = 10},
  [68] = {.lex_state = 158, .external_lex_state = 9},
  [69] = {.lex_state = 158, .external_lex_state = 4},
  [70] = {.lex_state = 158, .external_lex_state = 9},
  [71] = {.lex_state = 158, .external_lex_state = 4},
  [72] = {.lex_state = 158, .external_lex_state = 9},
  [73] = {.lex_state = 158, .external_lex_state = 9},
  [74] = {.lex_state = 0, .external_lex_state = 10},
  [75] = {.lex_state = 158, .external_lex_state = 4},
  [76] = {.lex_state = 158, .external_lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 10},
  [78] = {.lex_state = 0, .external_lex_state = 10},
  [79] = {.lex_state = 0, .external_lex_state = 10},
  [80] = {.lex_state = 0, .external_lex_state = 10},
  [81] = {.lex_state = 158, .external_lex_state = 4},
  [82] = {.lex_state = 158, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 10},
  [84] = {.lex_state = 158, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 10},
  [86] = {.lex_state = 162, .external_lex_state = 4},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 162, .external_lex_state = 4},
  [89] = {.lex_state = 162, .external_lex_state = 4},
  [90] = {.lex_state = 151},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 151},
  [94] = {.lex_state = 151},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 162, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 151},
  [103] = {.lex_state = 0, .external_lex_state = 11},
  [104] = {.lex_state = 0, .external_lex_state = 11},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 151},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0, .external_lex_state = 11},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 11},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0, .external_lex_state = 11},
  [116] = {.lex_state = 0, .external_lex_state = 11},
  [117] = {.lex_state = 0, .external_lex_state = 11},
  [118] = {.lex_state = 0, .external_lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0, .external_lex_state = 11},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0, .external_lex_state = 11},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
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
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [9] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
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
    [sym_source_file] = STATE(114),
    [sym__blank_line] = STATE(34),
    [sym__block_separator] = STATE(7),
    [sym_block] = STATE(11),
    [sym_block_list] = STATE(113),
    [sym_inline_text] = STATE(29),
    [sym__whitespace] = STATE(37),
    [sym__word] = STATE(37),
    [sym__text_base] = STATE(37),
    [sym_scripting] = STATE(40),
    [sym_inline_content] = STATE(69),
    [sym_script_block] = STATE(58),
    [sym_paragraph] = STATE(58),
    [sym_heading] = STATE(58),
    [sym_horizontal_rule] = STATE(58),
    [sym_ordered_list] = STATE(58),
    [aux_sym__block_separator_repeat1] = STATE(34),
    [aux_sym_block_list_repeat1] = STATE(11),
    [aux_sym_inline_text_repeat1] = STATE(37),
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
    STATE(111), 1,
      sym_script_content,
    ACTIONS(25), 2,
      aux_sym__script_text_token1,
      aux_sym__script_text_token2,
    STATE(5), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(23), 34,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [54] = 5,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
    STATE(106), 1,
      sym_script_content,
    ACTIONS(25), 2,
      aux_sym__script_text_token1,
      aux_sym__script_text_token2,
    STATE(5), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(23), 34,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [108] = 5,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND,
    ACTIONS(38), 1,
      anon_sym_GT_GT_GT,
    ACTIONS(32), 2,
      aux_sym__script_text_token1,
      aux_sym__script_text_token2,
    STATE(4), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(29), 34,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [162] = 5,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND,
    ACTIONS(44), 1,
      anon_sym_GT_GT_GT,
    ACTIONS(42), 2,
      aux_sym__script_text_token1,
      aux_sym__script_text_token2,
    STATE(4), 5,
      sym__whitespace,
      sym__word,
      sym__script_text,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
    ACTIONS(40), 34,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [216] = 2,
    ACTIONS(48), 4,
      aux_sym__script_text_token1,
      aux_sym__script_text_token2,
      anon_sym_POUND_POUND,
      anon_sym_GT_GT_GT,
    ACTIONS(46), 34,
      aux_sym__inline_whitespace_token1,
      sym__newline_token,
      sym__word_no_digit,
      sym__digits,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_QMARK,
      anon_sym_AT,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [259] = 15,
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
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    STATE(107), 1,
      sym_block_list,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(58), 5,
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
  [323] = 14,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(66), 1,
      aux_sym_heading_token1,
    ACTIONS(69), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(72), 1,
      sym__first_ordered_list_token,
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    ACTIONS(60), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(54), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(58), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(57), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [384] = 14,
    ACTIONS(13), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(15), 1,
      aux_sym_heading_token1,
    ACTIONS(17), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(21), 1,
      sym__first_ordered_list_token,
    ACTIONS(75), 1,
      anon_sym_POUND_POUND,
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(12), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(61), 5,
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
  [445] = 14,
    ACTIONS(13), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(15), 1,
      aux_sym_heading_token1,
    ACTIONS(17), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(21), 1,
      sym__first_ordered_list_token,
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    STATE(105), 1,
      sym_block_list,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(9), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(61), 5,
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
  [506] = 14,
    ACTIONS(13), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(15), 1,
      aux_sym_heading_token1,
    ACTIONS(17), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(21), 1,
      sym__first_ordered_list_token,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    ACTIONS(11), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(58), 5,
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
  [567] = 14,
    ACTIONS(52), 1,
      anon_sym_POUND_POUND,
    ACTIONS(63), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(66), 1,
      aux_sym_heading_token1,
    ACTIONS(69), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(72), 1,
      sym__first_ordered_list_token,
    STATE(40), 1,
      sym_scripting,
    STATE(69), 1,
      sym_inline_content,
    ACTIONS(60), 2,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(12), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(29), 2,
      sym_inline_text,
      aux_sym_inline_content_repeat1,
    ACTIONS(54), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    STATE(61), 5,
      sym_script_block,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
    ACTIONS(57), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [628] = 12,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      sym_checkbox_empty,
    STATE(46), 1,
      sym_inline_content,
    STATE(59), 1,
      sym_ordered_list_item,
    STATE(90), 1,
      sym_checkbox,
    STATE(102), 1,
      sym_checkbox_done,
    ACTIONS(77), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(81), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(23), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(37), 4,
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
  [680] = 12,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      sym_checkbox_empty,
    STATE(46), 1,
      sym_inline_content,
    STATE(72), 1,
      sym_ordered_list_item,
    STATE(90), 1,
      sym_checkbox,
    STATE(102), 1,
      sym_checkbox_done,
    ACTIONS(77), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(81), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(7), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(23), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(37), 4,
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
  [732] = 12,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      sym_checkbox_empty,
    STATE(53), 1,
      sym_inline_content,
    STATE(79), 1,
      sym_ordered_list_item,
    STATE(94), 1,
      sym_checkbox,
    STATE(102), 1,
      sym_checkbox_done,
    ACTIONS(81), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(85), 2,
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
    STATE(37), 4,
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
  [784] = 12,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(83), 1,
      sym_checkbox_empty,
    STATE(53), 1,
      sym_inline_content,
    STATE(77), 1,
      sym_ordered_list_item,
    STATE(94), 1,
      sym_checkbox,
    STATE(102), 1,
      sym_checkbox_done,
    ACTIONS(81), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    ACTIONS(85), 2,
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
    STATE(37), 4,
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
  [836] = 9,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(87), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      sym__eof,
    STATE(82), 1,
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
    STATE(37), 4,
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
  [878] = 9,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(91), 1,
      aux_sym__blank_line_token1,
    ACTIONS(93), 1,
      sym__eof,
    STATE(82), 1,
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
    STATE(37), 4,
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
  [920] = 9,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(95), 1,
      aux_sym__blank_line_token1,
    ACTIONS(97), 1,
      sym__eof,
    STATE(82), 1,
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
    STATE(37), 4,
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
  [962] = 9,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(99), 1,
      aux_sym__blank_line_token1,
    ACTIONS(101), 1,
      sym__eof,
    STATE(82), 1,
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
    STATE(37), 4,
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
  [1004] = 4,
    ACTIONS(105), 1,
      aux_sym__blank_line_token1,
    STATE(21), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(108), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(103), 15,
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
  [1034] = 4,
    ACTIONS(110), 1,
      aux_sym__blank_line_token1,
    STATE(22), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(108), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(103), 15,
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
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1064] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(115), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
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
    STATE(37), 4,
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
  [1100] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(56), 1,
      sym_inline_content,
    ACTIONS(77), 2,
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
    STATE(37), 4,
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
  [1136] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(60), 1,
      sym_inline_content,
    ACTIONS(85), 2,
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
    STATE(37), 4,
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
  [1172] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(52), 1,
      sym_inline_content,
    ACTIONS(85), 2,
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
    STATE(37), 4,
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
  [1208] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(76), 1,
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
    STATE(37), 4,
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
  [1244] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(50), 1,
      sym_inline_content,
    ACTIONS(77), 2,
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
    STATE(37), 4,
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
  [1280] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(117), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
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
    STATE(37), 4,
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
  [1316] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(119), 1,
      sym__inline_content_end,
    ACTIONS(113), 2,
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
    STATE(37), 4,
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
  [1352] = 5,
    ACTIONS(121), 1,
      aux_sym__blank_line_token1,
    ACTIONS(127), 1,
      sym__eof,
    STATE(22), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(125), 14,
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
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1384] = 7,
    ACTIONS(79), 1,
      anon_sym_LT_LT_LT,
    STATE(82), 1,
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
    STATE(37), 4,
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
  [1420] = 7,
    ACTIONS(138), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(141), 1,
      sym__inline_content_end,
    ACTIONS(135), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(129), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(33), 3,
      sym_inline_text,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    STATE(37), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(132), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1456] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(143), 1,
      sym__eof,
    STATE(21), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(125), 14,
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
  [1488] = 2,
    ACTIONS(145), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(147), 15,
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
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1512] = 2,
    ACTIONS(145), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(147), 15,
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
  [1536] = 3,
    ACTIONS(149), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    STATE(38), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(151), 11,
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
  [1561] = 4,
    ACTIONS(153), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(159), 4,
      sym__inline_content_end,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_LT_LT_LT,
    STATE(38), 4,
      sym__whitespace,
      sym__word,
      sym__text_base,
      aux_sym_inline_text_repeat1,
    ACTIONS(156), 7,
      sym__digits,
      aux_sym__text_base_token2,
      aux_sym__text_base_token3,
      aux_sym__text_base_token4,
      aux_sym__text_base_token5,
      aux_sym__text_base_token6,
      aux_sym__text_base_token7,
  [1588] = 2,
    ACTIONS(163), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(161), 14,
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
  [1610] = 5,
    ACTIONS(165), 1,
      aux_sym__blank_line_token1,
    ACTIONS(169), 1,
      sym__newline_token,
    ACTIONS(173), 1,
      sym__eof,
    ACTIONS(167), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(171), 11,
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
  [1638] = 2,
    ACTIONS(177), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(175), 14,
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
  [1660] = 2,
    ACTIONS(177), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(175), 14,
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
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1682] = 2,
    ACTIONS(179), 4,
      aux_sym__blank_line_token1,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(181), 13,
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
  [1704] = 2,
    ACTIONS(163), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(161), 14,
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
      anon_sym_POUND_POUND,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [1726] = 2,
    ACTIONS(179), 3,
      aux_sym__inline_whitespace_token1,
      sym__word_no_digit,
      aux_sym__text_base_token1,
    ACTIONS(181), 11,
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
  [1745] = 5,
    ACTIONS(183), 1,
      aux_sym__blank_line_token1,
    ACTIONS(187), 1,
      sym__indent,
    ACTIONS(189), 1,
      sym__list_item_content_cont,
    STATE(48), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(185), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1763] = 5,
    ACTIONS(189), 1,
      sym__list_item_content_cont,
    ACTIONS(191), 1,
      aux_sym__blank_line_token1,
    ACTIONS(195), 1,
      sym__indent,
    STATE(49), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(193), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1781] = 5,
    ACTIONS(189), 1,
      sym__list_item_content_cont,
    ACTIONS(197), 1,
      aux_sym__blank_line_token1,
    ACTIONS(201), 1,
      sym__indent,
    STATE(49), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(199), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1799] = 4,
    ACTIONS(203), 1,
      aux_sym__blank_line_token1,
    ACTIONS(207), 1,
      sym__list_item_content_cont,
    STATE(49), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(205), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1815] = 5,
    ACTIONS(189), 1,
      sym__list_item_content_cont,
    ACTIONS(210), 1,
      aux_sym__blank_line_token1,
    ACTIONS(214), 1,
      sym__indent,
    STATE(47), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(212), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1833] = 3,
    ACTIONS(216), 1,
      sym__list_item_content_cont,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(205), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1846] = 4,
    ACTIONS(219), 1,
      sym__indent,
    ACTIONS(221), 1,
      sym__list_item_content_cont,
    STATE(57), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(212), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1861] = 4,
    ACTIONS(221), 1,
      sym__list_item_content_cont,
    ACTIONS(223), 1,
      sym__indent,
    STATE(55), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(185), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1876] = 2,
    ACTIONS(225), 1,
      aux_sym__blank_line_token1,
    ACTIONS(227), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [1887] = 4,
    ACTIONS(221), 1,
      sym__list_item_content_cont,
    ACTIONS(229), 1,
      sym__indent,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(199), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1902] = 2,
    ACTIONS(231), 1,
      aux_sym__blank_line_token1,
    ACTIONS(233), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [1913] = 4,
    ACTIONS(221), 1,
      sym__list_item_content_cont,
    ACTIONS(235), 1,
      sym__indent,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(193), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1928] = 4,
    ACTIONS(237), 1,
      aux_sym__blank_line_token1,
    ACTIONS(239), 1,
      sym__eof,
    STATE(41), 1,
      sym__block_separator,
    STATE(34), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [1942] = 5,
    ACTIONS(241), 1,
      aux_sym__blank_line_token1,
    ACTIONS(243), 1,
      sym__newline_token,
    ACTIONS(245), 1,
      sym__eof,
    ACTIONS(247), 1,
      sym__next_ordered_list_token,
    STATE(64), 1,
      aux_sym_ordered_list_repeat1,
  [1958] = 1,
    ACTIONS(233), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [1966] = 4,
    ACTIONS(249), 1,
      aux_sym__blank_line_token1,
    ACTIONS(251), 1,
      sym__eof,
    STATE(42), 1,
      sym__block_separator,
    STATE(31), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [1980] = 4,
    ACTIONS(253), 1,
      aux_sym__blank_line_token1,
    ACTIONS(257), 1,
      sym__next_ordered_list_token,
    STATE(62), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(255), 2,
      sym__eof,
      sym__newline_token,
  [1994] = 1,
    ACTIONS(227), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [2002] = 5,
    ACTIONS(247), 1,
      sym__next_ordered_list_token,
    ACTIONS(260), 1,
      aux_sym__blank_line_token1,
    ACTIONS(262), 1,
      sym__newline_token,
    ACTIONS(264), 1,
      sym__eof,
    STATE(62), 1,
      aux_sym_ordered_list_repeat1,
  [2018] = 2,
    ACTIONS(266), 1,
      aux_sym__blank_line_token1,
    ACTIONS(268), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2027] = 4,
    ACTIONS(270), 1,
      aux_sym__blank_line_token1,
    ACTIONS(272), 1,
      sym__newline_token,
    ACTIONS(274), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [2040] = 4,
    ACTIONS(264), 1,
      sym__dedent,
    ACTIONS(276), 1,
      sym__newline_token,
    ACTIONS(278), 1,
      sym__next_ordered_list_token,
    STATE(74), 1,
      aux_sym_ordered_list_repeat1,
  [2053] = 2,
    ACTIONS(280), 1,
      aux_sym__blank_line_token1,
    ACTIONS(282), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2062] = 4,
    ACTIONS(284), 1,
      aux_sym__blank_line_token1,
    ACTIONS(286), 1,
      sym__newline_token,
    ACTIONS(288), 1,
      sym__eof,
    STATE(75), 1,
      aux_sym_paragraph_repeat1,
  [2075] = 2,
    ACTIONS(290), 1,
      aux_sym__blank_line_token1,
    ACTIONS(292), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2084] = 4,
    ACTIONS(294), 1,
      aux_sym__blank_line_token1,
    ACTIONS(296), 1,
      sym__newline_token,
    ACTIONS(299), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [2097] = 2,
    ACTIONS(253), 1,
      aux_sym__blank_line_token1,
    ACTIONS(255), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2106] = 2,
    ACTIONS(301), 1,
      aux_sym__blank_line_token1,
    ACTIONS(303), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2115] = 3,
    ACTIONS(305), 1,
      sym__next_ordered_list_token,
    STATE(74), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(255), 2,
      sym__dedent,
      sym__newline_token,
  [2126] = 4,
    ACTIONS(308), 1,
      aux_sym__blank_line_token1,
    ACTIONS(310), 1,
      sym__newline_token,
    ACTIONS(312), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [2139] = 4,
    ACTIONS(314), 1,
      aux_sym__blank_line_token1,
    ACTIONS(316), 1,
      sym__newline_token,
    ACTIONS(318), 1,
      sym__eof,
    STATE(66), 1,
      aux_sym_paragraph_repeat1,
  [2152] = 4,
    ACTIONS(245), 1,
      sym__dedent,
    ACTIONS(278), 1,
      sym__next_ordered_list_token,
    ACTIONS(320), 1,
      sym__newline_token,
    STATE(67), 1,
      aux_sym_ordered_list_repeat1,
  [2165] = 1,
    ACTIONS(292), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2171] = 1,
    ACTIONS(255), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2177] = 1,
    ACTIONS(282), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2183] = 3,
    ACTIONS(322), 1,
      aux_sym__blank_line_token1,
    ACTIONS(324), 1,
      sym__newline_token,
    ACTIONS(326), 1,
      sym__eof,
  [2193] = 2,
    ACTIONS(294), 1,
      aux_sym__blank_line_token1,
    ACTIONS(299), 2,
      sym__eof,
      sym__newline_token,
  [2201] = 1,
    ACTIONS(268), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2207] = 2,
    ACTIONS(225), 1,
      aux_sym__blank_line_token1,
    ACTIONS(227), 2,
      sym__eof,
      sym__newline_token,
  [2215] = 1,
    ACTIONS(303), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [2221] = 1,
    ACTIONS(328), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [2226] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(110), 1,
      sym_ordered_list,
  [2233] = 1,
    ACTIONS(332), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [2238] = 1,
    ACTIONS(334), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [2243] = 2,
    ACTIONS(336), 1,
      aux_sym__inline_whitespace_token1,
    STATE(28), 1,
      sym__inline_whitespace,
  [2250] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(118), 1,
      sym_ordered_list,
  [2257] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(112), 1,
      sym_ordered_list,
  [2264] = 2,
    ACTIONS(338), 1,
      aux_sym__inline_whitespace_token1,
    STATE(27), 1,
      sym__inline_whitespace,
  [2271] = 2,
    ACTIONS(340), 1,
      aux_sym__inline_whitespace_token1,
    STATE(26), 1,
      sym__inline_whitespace,
  [2278] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(120), 1,
      sym_ordered_list,
  [2285] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(115), 1,
      sym_ordered_list,
  [2292] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(116), 1,
      sym_ordered_list,
  [2299] = 1,
    ACTIONS(342), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [2304] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(117), 1,
      sym_ordered_list,
  [2311] = 2,
    ACTIONS(330), 1,
      sym__first_ordered_list_token,
    STATE(124), 1,
      sym_ordered_list,
  [2318] = 1,
    ACTIONS(344), 1,
      sym__newline_token,
  [2322] = 1,
    ACTIONS(346), 1,
      aux_sym__inline_whitespace_token1,
  [2326] = 1,
    ACTIONS(328), 1,
      sym__dedent,
  [2330] = 1,
    ACTIONS(342), 1,
      sym__dedent,
  [2334] = 1,
    ACTIONS(348), 1,
      anon_sym_POUND_POUND,
  [2338] = 1,
    ACTIONS(350), 1,
      anon_sym_GT_GT_GT,
  [2342] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [2346] = 1,
    ACTIONS(354), 1,
      aux_sym__inline_whitespace_token1,
  [2350] = 1,
    ACTIONS(356), 1,
      sym__newline_token,
  [2354] = 1,
    ACTIONS(358), 1,
      sym__dedent,
  [2358] = 1,
    ACTIONS(360), 1,
      anon_sym_GT_GT_GT,
  [2362] = 1,
    ACTIONS(362), 1,
      sym__dedent,
  [2366] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [2370] = 1,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [2374] = 1,
    ACTIONS(366), 1,
      sym__dedent,
  [2378] = 1,
    ACTIONS(368), 1,
      sym__dedent,
  [2382] = 1,
    ACTIONS(370), 1,
      sym__dedent,
  [2386] = 1,
    ACTIONS(372), 1,
      sym__dedent,
  [2390] = 1,
    ACTIONS(374), 1,
      sym__newline_token,
  [2394] = 1,
    ACTIONS(376), 1,
      sym__dedent,
  [2398] = 1,
    ACTIONS(378), 1,
      sym__newline_token,
  [2402] = 1,
    ACTIONS(380), 1,
      sym__newline_token,
  [2406] = 1,
    ACTIONS(382), 1,
      sym__newline_token,
  [2410] = 1,
    ACTIONS(384), 1,
      sym__dedent,
  [2414] = 1,
    ACTIONS(386), 1,
      sym__newline_token,
  [2418] = 1,
    ACTIONS(388), 1,
      sym__newline_token,
  [2422] = 1,
    ACTIONS(390), 1,
      sym__newline_token,
  [2426] = 1,
    ACTIONS(392), 1,
      sym__newline_token,
  [2430] = 1,
    ACTIONS(394), 1,
      sym__newline_token,
  [2434] = 1,
    ACTIONS(396), 1,
      sym__newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 323,
  [SMALL_STATE(9)] = 384,
  [SMALL_STATE(10)] = 445,
  [SMALL_STATE(11)] = 506,
  [SMALL_STATE(12)] = 567,
  [SMALL_STATE(13)] = 628,
  [SMALL_STATE(14)] = 680,
  [SMALL_STATE(15)] = 732,
  [SMALL_STATE(16)] = 784,
  [SMALL_STATE(17)] = 836,
  [SMALL_STATE(18)] = 878,
  [SMALL_STATE(19)] = 920,
  [SMALL_STATE(20)] = 962,
  [SMALL_STATE(21)] = 1004,
  [SMALL_STATE(22)] = 1034,
  [SMALL_STATE(23)] = 1064,
  [SMALL_STATE(24)] = 1100,
  [SMALL_STATE(25)] = 1136,
  [SMALL_STATE(26)] = 1172,
  [SMALL_STATE(27)] = 1208,
  [SMALL_STATE(28)] = 1244,
  [SMALL_STATE(29)] = 1280,
  [SMALL_STATE(30)] = 1316,
  [SMALL_STATE(31)] = 1352,
  [SMALL_STATE(32)] = 1384,
  [SMALL_STATE(33)] = 1420,
  [SMALL_STATE(34)] = 1456,
  [SMALL_STATE(35)] = 1488,
  [SMALL_STATE(36)] = 1512,
  [SMALL_STATE(37)] = 1536,
  [SMALL_STATE(38)] = 1561,
  [SMALL_STATE(39)] = 1588,
  [SMALL_STATE(40)] = 1610,
  [SMALL_STATE(41)] = 1638,
  [SMALL_STATE(42)] = 1660,
  [SMALL_STATE(43)] = 1682,
  [SMALL_STATE(44)] = 1704,
  [SMALL_STATE(45)] = 1726,
  [SMALL_STATE(46)] = 1745,
  [SMALL_STATE(47)] = 1763,
  [SMALL_STATE(48)] = 1781,
  [SMALL_STATE(49)] = 1799,
  [SMALL_STATE(50)] = 1815,
  [SMALL_STATE(51)] = 1833,
  [SMALL_STATE(52)] = 1846,
  [SMALL_STATE(53)] = 1861,
  [SMALL_STATE(54)] = 1876,
  [SMALL_STATE(55)] = 1887,
  [SMALL_STATE(56)] = 1902,
  [SMALL_STATE(57)] = 1913,
  [SMALL_STATE(58)] = 1928,
  [SMALL_STATE(59)] = 1942,
  [SMALL_STATE(60)] = 1958,
  [SMALL_STATE(61)] = 1966,
  [SMALL_STATE(62)] = 1980,
  [SMALL_STATE(63)] = 1994,
  [SMALL_STATE(64)] = 2002,
  [SMALL_STATE(65)] = 2018,
  [SMALL_STATE(66)] = 2027,
  [SMALL_STATE(67)] = 2040,
  [SMALL_STATE(68)] = 2053,
  [SMALL_STATE(69)] = 2062,
  [SMALL_STATE(70)] = 2075,
  [SMALL_STATE(71)] = 2084,
  [SMALL_STATE(72)] = 2097,
  [SMALL_STATE(73)] = 2106,
  [SMALL_STATE(74)] = 2115,
  [SMALL_STATE(75)] = 2126,
  [SMALL_STATE(76)] = 2139,
  [SMALL_STATE(77)] = 2152,
  [SMALL_STATE(78)] = 2165,
  [SMALL_STATE(79)] = 2171,
  [SMALL_STATE(80)] = 2177,
  [SMALL_STATE(81)] = 2183,
  [SMALL_STATE(82)] = 2193,
  [SMALL_STATE(83)] = 2201,
  [SMALL_STATE(84)] = 2207,
  [SMALL_STATE(85)] = 2215,
  [SMALL_STATE(86)] = 2221,
  [SMALL_STATE(87)] = 2226,
  [SMALL_STATE(88)] = 2233,
  [SMALL_STATE(89)] = 2238,
  [SMALL_STATE(90)] = 2243,
  [SMALL_STATE(91)] = 2250,
  [SMALL_STATE(92)] = 2257,
  [SMALL_STATE(93)] = 2264,
  [SMALL_STATE(94)] = 2271,
  [SMALL_STATE(95)] = 2278,
  [SMALL_STATE(96)] = 2285,
  [SMALL_STATE(97)] = 2292,
  [SMALL_STATE(98)] = 2299,
  [SMALL_STATE(99)] = 2304,
  [SMALL_STATE(100)] = 2311,
  [SMALL_STATE(101)] = 2318,
  [SMALL_STATE(102)] = 2322,
  [SMALL_STATE(103)] = 2326,
  [SMALL_STATE(104)] = 2330,
  [SMALL_STATE(105)] = 2334,
  [SMALL_STATE(106)] = 2338,
  [SMALL_STATE(107)] = 2342,
  [SMALL_STATE(108)] = 2346,
  [SMALL_STATE(109)] = 2350,
  [SMALL_STATE(110)] = 2354,
  [SMALL_STATE(111)] = 2358,
  [SMALL_STATE(112)] = 2362,
  [SMALL_STATE(113)] = 2366,
  [SMALL_STATE(114)] = 2370,
  [SMALL_STATE(115)] = 2374,
  [SMALL_STATE(116)] = 2378,
  [SMALL_STATE(117)] = 2382,
  [SMALL_STATE(118)] = 2386,
  [SMALL_STATE(119)] = 2390,
  [SMALL_STATE(120)] = 2394,
  [SMALL_STATE(121)] = 2398,
  [SMALL_STATE(122)] = 2402,
  [SMALL_STATE(123)] = 2406,
  [SMALL_STATE(124)] = 2410,
  [SMALL_STATE(125)] = 2414,
  [SMALL_STATE(126)] = 2418,
  [SMALL_STATE(127)] = 2422,
  [SMALL_STATE(128)] = 2426,
  [SMALL_STATE(129)] = 2430,
  [SMALL_STATE(130)] = 2434,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_interpolation, 3, .production_id = 7),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(37),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(3),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(93),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(81),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(125),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(109),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(37),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(37),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(33),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_text, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_text, 1),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(38),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2), SHIFT_REPEAT(38),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_text_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(121),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(122),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(14),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(15),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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
