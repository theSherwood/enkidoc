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
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__blank_line_token1 = 1,
  sym_inline_text = 2,
  aux_sym__inline_whitespace_token1 = 3,
  sym__newline_token = 4,
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
  sym__raw = 45,
  sym_uri_autolink = 46,
  sym_email_autolink = 47,
  anon_sym_POUND_POUND = 48,
  anon_sym_LT_LT_LT = 49,
  anon_sym_GT_GT_GT = 50,
  aux_sym_heading_token1 = 51,
  aux_sym_horizontal_rule_token1 = 52,
  anon_sym_LBRACKx_RBRACK = 53,
  anon_sym_LBRACKX_RBRACK = 54,
  sym_checkbox_empty = 55,
  sym__line_start = 56,
  sym__line_end = 57,
  sym__indent = 58,
  sym__dedent = 59,
  sym__eof = 60,
  sym__first_ordered_list_token = 61,
  sym__next_ordered_list_token = 62,
  sym__list_item_content_cont = 63,
  sym__list_item_content_end = 64,
  sym__non_blank_line = 65,
  sym__DEBUG = 66,
  sym_source_file = 67,
  sym__blank_line = 68,
  sym__block_separator = 69,
  sym_block = 70,
  sym_block_list = 71,
  sym__inline_whitespace = 72,
  sym_script_interpolation = 73,
  sym_script_content = 74,
  sym_scripting = 75,
  sym_inline_content = 76,
  sym_paragraph = 77,
  sym_heading = 78,
  sym_horizontal_rule = 79,
  sym_ordered_list_item = 80,
  sym_ordered_list = 81,
  sym_checkbox_done = 82,
  sym_checkbox = 83,
  aux_sym__block_separator_repeat1 = 84,
  aux_sym_block_list_repeat1 = 85,
  aux_sym_script_content_repeat1 = 86,
  aux_sym_inline_content_repeat1 = 87,
  aux_sym_paragraph_repeat1 = 88,
  aux_sym_ordered_list_item_repeat1 = 89,
  aux_sym_ordered_list_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_inline_text] = "inline_text",
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
  [sym__raw] = "_raw",
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
  [sym__DEBUG] = "_DEBUG",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym_script_interpolation] = "script_interpolation",
  [sym_script_content] = "script_content",
  [sym_scripting] = "scripting",
  [sym_inline_content] = "inline_content",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [sym_horizontal_rule] = "horizontal_rule",
  [sym_ordered_list_item] = "ordered_list_item",
  [sym_ordered_list] = "ordered_list",
  [sym_checkbox_done] = "checkbox_done",
  [sym_checkbox] = "checkbox",
  [aux_sym__block_separator_repeat1] = "_block_separator_repeat1",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_script_content_repeat1] = "script_content_repeat1",
  [aux_sym_inline_content_repeat1] = "inline_content_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_ordered_list_item_repeat1] = "ordered_list_item_repeat1",
  [aux_sym_ordered_list_repeat1] = "ordered_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym_inline_text] = sym_inline_text,
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
  [sym__raw] = sym__raw,
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
  [sym__DEBUG] = sym__DEBUG,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym_script_interpolation] = sym_script_interpolation,
  [sym_script_content] = sym_script_content,
  [sym_scripting] = sym_scripting,
  [sym_inline_content] = sym_inline_content,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [sym_ordered_list_item] = sym_ordered_list_item,
  [sym_ordered_list] = sym_ordered_list,
  [sym_checkbox_done] = sym_checkbox_done,
  [sym_checkbox] = sym_checkbox,
  [aux_sym__block_separator_repeat1] = aux_sym__block_separator_repeat1,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
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
  [sym_inline_text] = {
    .visible = true,
    .named = true,
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
  [sym__raw] = {
    .visible = false,
    .named = true,
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
  [sym__inline_whitespace] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 13,
  [17] = 14,
  [18] = 12,
  [19] = 15,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 12,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 15,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 30,
  [35] = 31,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 21,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 39,
  [49] = 45,
  [50] = 47,
  [51] = 46,
  [52] = 52,
  [53] = 38,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 52,
  [58] = 58,
  [59] = 54,
  [60] = 60,
  [61] = 54,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 56,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 58,
  [77] = 55,
  [78] = 65,
  [79] = 79,
  [80] = 80,
  [81] = 70,
  [82] = 69,
  [83] = 68,
  [84] = 67,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 89,
  [94] = 94,
  [95] = 94,
  [96] = 96,
  [97] = 97,
  [98] = 96,
  [99] = 91,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 101,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 103,
  [117] = 117,
  [118] = 106,
  [119] = 117,
  [120] = 109,
  [121] = 100,
  [122] = 92,
  [123] = 123,
  [124] = 124,
  [125] = 97,
  [126] = 114,
  [127] = 115,
  [128] = 124,
  [129] = 107,
  [130] = 105,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(151);
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == '\r') ADVANCE(300);
      if (lookahead == '!') ADVANCE(310);
      if (lookahead == '"') ADVANCE(311);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '$') ADVANCE(312);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(314);
      if (lookahead == '\'') ADVANCE(315);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '*') ADVANCE(318);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(320);
      if (lookahead == '-') ADVANCE(321);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == ';') ADVANCE(325);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '?') ADVANCE(327);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(330);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '^') ADVANCE(332);
      if (lookahead == '_') ADVANCE(333);
      if (lookahead == '`') ADVANCE(334);
      if (lookahead == '{') ADVANCE(335);
      if (lookahead == '|') ADVANCE(336);
      if (lookahead == '}') ADVANCE(337);
      if (lookahead == '~') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(345);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(305);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
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
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      END_STATE();
    case 126:
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '>') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == ':') ADVANCE(134);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(137);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '<') ADVANCE(348);
      END_STATE();
    case 129:
      if (lookahead == '<') ADVANCE(304);
      END_STATE();
    case 130:
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 131:
      if (lookahead == '<') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 133:
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 134:
      if (lookahead == '>') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(134);
      END_STATE();
    case 135:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 136:
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(137);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 137:
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '[') ADVANCE(308);
      END_STATE();
    case 139:
      if (lookahead == ']') ADVANCE(439);
      END_STATE();
    case 140:
      if (lookahead == ']') ADVANCE(437);
      END_STATE();
    case 141:
      if (lookahead == ']') ADVANCE(435);
      END_STATE();
    case 142:
      if (lookahead == ']') ADVANCE(309);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(302);
      END_STATE();
    case 144:
      if (lookahead == '{') ADVANCE(306);
      END_STATE();
    case 145:
      if (lookahead == '}') ADVANCE(307);
      END_STATE();
    case 146:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(342);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '>') ADVANCE(341);
      END_STATE();
    case 150:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(342);
      if (lookahead == '#') ADVANCE(339);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == '\r') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == '\r') ADVANCE(301);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '#') ADVANCE(160);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(151);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == 'X') ADVANCE(293);
      if (lookahead == 'x') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(291);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(348);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(297);
      if (lookahead == '>') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(291);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(440);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(438);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(436);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__inline_whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__word_no_digit);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__text_base_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__text_base_token2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__text_base_token3);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__text_base_token4);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__text_base_token5);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__text_base_token6);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(128);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == 'X') ADVANCE(140);
      if (lookahead == 'x') ADVANCE(141);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '$') ADVANCE(2);
      if (lookahead == '<') ADVANCE(131);
      if (lookahead == '[') ADVANCE(138);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(342);
      if (lookahead == '#') ADVANCE(347);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(342);
      if (lookahead == '>') ADVANCE(350);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(342);
      if (lookahead == '>') ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead != 0) ADVANCE(342);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(355);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(418);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_checkbox_empty);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 158, .external_lex_state = 2},
  [2] = {.lex_state = 158, .external_lex_state = 3},
  [3] = {.lex_state = 154, .external_lex_state = 3},
  [4] = {.lex_state = 154, .external_lex_state = 3},
  [5] = {.lex_state = 158, .external_lex_state = 3},
  [6] = {.lex_state = 158, .external_lex_state = 3},
  [7] = {.lex_state = 158, .external_lex_state = 3},
  [8] = {.lex_state = 130},
  [9] = {.lex_state = 130},
  [10] = {.lex_state = 130},
  [11] = {.lex_state = 130},
  [12] = {.lex_state = 153, .external_lex_state = 4},
  [13] = {.lex_state = 154, .external_lex_state = 2},
  [14] = {.lex_state = 154, .external_lex_state = 2},
  [15] = {.lex_state = 153, .external_lex_state = 4},
  [16] = {.lex_state = 158, .external_lex_state = 2},
  [17] = {.lex_state = 158, .external_lex_state = 2},
  [18] = {.lex_state = 153, .external_lex_state = 5},
  [19] = {.lex_state = 153, .external_lex_state = 5},
  [20] = {.lex_state = 158, .external_lex_state = 2},
  [21] = {.lex_state = 153, .external_lex_state = 4},
  [22] = {.lex_state = 154, .external_lex_state = 2},
  [23] = {.lex_state = 153, .external_lex_state = 6},
  [24] = {.lex_state = 153, .external_lex_state = 5},
  [25] = {.lex_state = 155, .external_lex_state = 6},
  [26] = {.lex_state = 155, .external_lex_state = 6},
  [27] = {.lex_state = 155, .external_lex_state = 6},
  [28] = {.lex_state = 155, .external_lex_state = 6},
  [29] = {.lex_state = 153, .external_lex_state = 6},
  [30] = {.lex_state = 154, .external_lex_state = 3},
  [31] = {.lex_state = 154, .external_lex_state = 3},
  [32] = {.lex_state = 158, .external_lex_state = 3},
  [33] = {.lex_state = 154, .external_lex_state = 3},
  [34] = {.lex_state = 158, .external_lex_state = 3},
  [35] = {.lex_state = 158, .external_lex_state = 3},
  [36] = {.lex_state = 153},
  [37] = {.lex_state = 153},
  [38] = {.lex_state = 152, .external_lex_state = 4},
  [39] = {.lex_state = 152, .external_lex_state = 4},
  [40] = {.lex_state = 153},
  [41] = {.lex_state = 153},
  [42] = {.lex_state = 153, .external_lex_state = 6},
  [43] = {.lex_state = 153},
  [44] = {.lex_state = 153},
  [45] = {.lex_state = 152, .external_lex_state = 4},
  [46] = {.lex_state = 152, .external_lex_state = 4},
  [47] = {.lex_state = 152, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 5},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 5},
  [52] = {.lex_state = 152, .external_lex_state = 4},
  [53] = {.lex_state = 0, .external_lex_state = 5},
  [54] = {.lex_state = 150},
  [55] = {.lex_state = 152, .external_lex_state = 7},
  [56] = {.lex_state = 152, .external_lex_state = 7},
  [57] = {.lex_state = 0, .external_lex_state = 5},
  [58] = {.lex_state = 152, .external_lex_state = 7},
  [59] = {.lex_state = 150},
  [60] = {.lex_state = 157, .external_lex_state = 6},
  [61] = {.lex_state = 150},
  [62] = {.lex_state = 157, .external_lex_state = 6},
  [63] = {.lex_state = 149},
  [64] = {.lex_state = 149},
  [65] = {.lex_state = 152, .external_lex_state = 7},
  [66] = {.lex_state = 152, .external_lex_state = 6},
  [67] = {.lex_state = 152, .external_lex_state = 7},
  [68] = {.lex_state = 152, .external_lex_state = 7},
  [69] = {.lex_state = 152, .external_lex_state = 7},
  [70] = {.lex_state = 152, .external_lex_state = 7},
  [71] = {.lex_state = 152, .external_lex_state = 6},
  [72] = {.lex_state = 0, .external_lex_state = 8},
  [73] = {.lex_state = 152, .external_lex_state = 6},
  [74] = {.lex_state = 152, .external_lex_state = 6},
  [75] = {.lex_state = 152, .external_lex_state = 6},
  [76] = {.lex_state = 0, .external_lex_state = 8},
  [77] = {.lex_state = 0, .external_lex_state = 8},
  [78] = {.lex_state = 0, .external_lex_state = 8},
  [79] = {.lex_state = 152, .external_lex_state = 6},
  [80] = {.lex_state = 152, .external_lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 8},
  [82] = {.lex_state = 0, .external_lex_state = 8},
  [83] = {.lex_state = 0, .external_lex_state = 8},
  [84] = {.lex_state = 0, .external_lex_state = 8},
  [85] = {.lex_state = 149},
  [86] = {.lex_state = 157, .external_lex_state = 6},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 132},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 157, .external_lex_state = 6},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 132},
  [97] = {.lex_state = 157, .external_lex_state = 6},
  [98] = {.lex_state = 132},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0, .external_lex_state = 9},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 9},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 132},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 132},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 132},
  [111] = {.lex_state = 132},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 9},
  [118] = {.lex_state = 132},
  [119] = {.lex_state = 0, .external_lex_state = 9},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 9},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 0, .external_lex_state = 9},
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
  ts_external_token__DEBUG = 10,
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
  [ts_external_token__DEBUG] = sym__DEBUG,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__indent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_cont] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
  },
  [7] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [8] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [9] = {
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
    [aux_sym__text_base_token1] = ACTIONS(1),
    [aux_sym__text_base_token2] = ACTIONS(1),
    [aux_sym__text_base_token3] = ACTIONS(1),
    [aux_sym__text_base_token4] = ACTIONS(1),
    [aux_sym__text_base_token5] = ACTIONS(1),
    [aux_sym__text_base_token6] = ACTIONS(1),
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
    [sym_uri_autolink] = ACTIONS(1),
    [sym_email_autolink] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(1),
    [sym_checkbox_empty] = ACTIONS(1),
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
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym__blank_line] = STATE(16),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(6),
    [sym_block_list] = STATE(112),
    [sym_scripting] = STATE(23),
    [sym_inline_content] = STATE(73),
    [sym_paragraph] = STATE(60),
    [sym_heading] = STATE(60),
    [sym_horizontal_rule] = STATE(60),
    [sym_ordered_list] = STATE(60),
    [aux_sym__block_separator_repeat1] = STATE(16),
    [aux_sym_block_list_repeat1] = STATE(6),
    [aux_sym_inline_content_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym_inline_text] = ACTIONS(7),
    [sym_uri_autolink] = ACTIONS(7),
    [sym_email_autolink] = ACTIONS(7),
    [anon_sym_LT_LT_LT] = ACTIONS(9),
    [aux_sym_heading_token1] = ACTIONS(11),
    [aux_sym_horizontal_rule_token1] = ACTIONS(13),
    [sym__eof] = ACTIONS(15),
    [sym__first_ordered_list_token] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_inline_content,
    STATE(102), 1,
      sym_block_list,
    STATE(6), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(60), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [41] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    STATE(73), 1,
      sym_inline_content,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(62), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [79] = 10,
    ACTIONS(26), 1,
      anon_sym_POUND_POUND,
    ACTIONS(28), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(31), 1,
      aux_sym_heading_token1,
    ACTIONS(34), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(37), 1,
      sym__first_ordered_list_token,
    STATE(73), 1,
      sym_inline_content,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(23), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(62), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [117] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(73), 1,
      sym_inline_content,
    STATE(123), 1,
      sym_block_list,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(62), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [155] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_inline_content,
    STATE(7), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(60), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [193] = 10,
    ACTIONS(28), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(31), 1,
      aux_sym_heading_token1,
    ACTIONS(34), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(37), 1,
      sym__first_ordered_list_token,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_inline_content,
    STATE(7), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(23), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(60), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [231] = 9,
    ACTIONS(46), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(50), 1,
      sym_checkbox_empty,
    STATE(45), 1,
      sym_inline_content,
    STATE(58), 1,
      sym_ordered_list_item,
    STATE(98), 1,
      sym_checkbox,
    STATE(108), 1,
      sym_checkbox_done,
    ACTIONS(48), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(12), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(44), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [263] = 9,
    ACTIONS(50), 1,
      sym_checkbox_empty,
    ACTIONS(54), 1,
      anon_sym_LT_LT_LT,
    STATE(49), 1,
      sym_inline_content,
    STATE(78), 1,
      sym_ordered_list_item,
    STATE(96), 1,
      sym_checkbox,
    STATE(108), 1,
      sym_checkbox_done,
    ACTIONS(48), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(18), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(52), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [295] = 9,
    ACTIONS(50), 1,
      sym_checkbox_empty,
    ACTIONS(54), 1,
      anon_sym_LT_LT_LT,
    STATE(49), 1,
      sym_inline_content,
    STATE(76), 1,
      sym_ordered_list_item,
    STATE(96), 1,
      sym_checkbox,
    STATE(108), 1,
      sym_checkbox_done,
    ACTIONS(48), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(18), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(52), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [327] = 9,
    ACTIONS(46), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(50), 1,
      sym_checkbox_empty,
    STATE(45), 1,
      sym_inline_content,
    STATE(65), 1,
      sym_ordered_list_item,
    STATE(98), 1,
      sym_checkbox,
    STATE(108), 1,
      sym_checkbox_done,
    ACTIONS(48), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(12), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(44), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [359] = 5,
    ACTIONS(46), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(56), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(15), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(58), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(60), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [382] = 5,
    ACTIONS(62), 1,
      aux_sym__blank_line_token1,
    ACTIONS(68), 1,
      sym__eof,
    STATE(14), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(64), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(66), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [405] = 4,
    ACTIONS(70), 1,
      aux_sym__blank_line_token1,
    STATE(14), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(73), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(75), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [426] = 5,
    ACTIONS(82), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(77), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(15), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(79), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(85), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [449] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(87), 1,
      sym__eof,
    STATE(17), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(64), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(66), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [472] = 4,
    ACTIONS(89), 1,
      aux_sym__blank_line_token1,
    STATE(17), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(73), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(75), 6,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [493] = 5,
    ACTIONS(54), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(56), 1,
      sym__newline_token,
    STATE(19), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(92), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(60), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [515] = 5,
    ACTIONS(77), 1,
      sym__newline_token,
    ACTIONS(97), 1,
      anon_sym_LT_LT_LT,
    STATE(19), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(94), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(85), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [537] = 2,
    ACTIONS(102), 4,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(100), 6,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [552] = 2,
    ACTIONS(104), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(106), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [567] = 2,
    ACTIONS(100), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(102), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
  [582] = 5,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(60), 1,
      sym__eof,
    ACTIONS(56), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(29), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(108), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [602] = 2,
    ACTIONS(104), 4,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(106), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [616] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(110), 1,
      aux_sym__blank_line_token1,
    ACTIONS(112), 1,
      sym__eof,
    STATE(79), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [638] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(114), 1,
      aux_sym__blank_line_token1,
    ACTIONS(116), 1,
      sym__eof,
    STATE(79), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [660] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(118), 1,
      aux_sym__blank_line_token1,
    ACTIONS(120), 1,
      sym__eof,
    STATE(79), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [682] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(122), 1,
      aux_sym__blank_line_token1,
    ACTIONS(124), 1,
      sym__eof,
    STATE(79), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [704] = 5,
    ACTIONS(85), 1,
      sym__eof,
    ACTIONS(129), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(77), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(29), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(126), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [724] = 2,
    ACTIONS(132), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(134), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [737] = 2,
    ACTIONS(136), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(138), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [750] = 2,
    ACTIONS(142), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(140), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [763] = 2,
    ACTIONS(140), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(142), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
  [776] = 2,
    ACTIONS(132), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(134), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [789] = 2,
    ACTIONS(136), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(138), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [802] = 4,
    ACTIONS(46), 1,
      anon_sym_LT_LT_LT,
    STATE(52), 1,
      sym_inline_content,
    STATE(12), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(44), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [818] = 4,
    ACTIONS(54), 1,
      anon_sym_LT_LT_LT,
    STATE(57), 1,
      sym_inline_content,
    STATE(18), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(52), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [834] = 5,
    ACTIONS(144), 1,
      aux_sym__blank_line_token1,
    ACTIONS(148), 1,
      sym__indent,
    ACTIONS(150), 1,
      sym__list_item_content_cont,
    STATE(46), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(146), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [852] = 5,
    ACTIONS(150), 1,
      sym__list_item_content_cont,
    ACTIONS(152), 1,
      aux_sym__blank_line_token1,
    ACTIONS(156), 1,
      sym__indent,
    STATE(46), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(154), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [870] = 4,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    STATE(66), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [886] = 4,
    ACTIONS(46), 1,
      anon_sym_LT_LT_LT,
    STATE(47), 1,
      sym_inline_content,
    STATE(12), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(44), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [902] = 2,
    ACTIONS(106), 2,
      sym__eof,
      anon_sym_LT_LT_LT,
    ACTIONS(104), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
  [914] = 4,
    ACTIONS(54), 1,
      anon_sym_LT_LT_LT,
    STATE(50), 1,
      sym_inline_content,
    STATE(18), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(52), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [930] = 4,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    STATE(79), 1,
      sym_inline_content,
    STATE(23), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [946] = 5,
    ACTIONS(150), 1,
      sym__list_item_content_cont,
    ACTIONS(158), 1,
      aux_sym__blank_line_token1,
    ACTIONS(162), 1,
      sym__indent,
    STATE(39), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(160), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [964] = 4,
    ACTIONS(164), 1,
      aux_sym__blank_line_token1,
    ACTIONS(168), 1,
      sym__list_item_content_cont,
    STATE(46), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(166), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [980] = 5,
    ACTIONS(150), 1,
      sym__list_item_content_cont,
    ACTIONS(171), 1,
      aux_sym__blank_line_token1,
    ACTIONS(175), 1,
      sym__indent,
    STATE(38), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(173), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [998] = 4,
    ACTIONS(177), 1,
      sym__indent,
    ACTIONS(179), 1,
      sym__list_item_content_cont,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(154), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1013] = 4,
    ACTIONS(179), 1,
      sym__list_item_content_cont,
    ACTIONS(181), 1,
      sym__indent,
    STATE(48), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(160), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1028] = 4,
    ACTIONS(179), 1,
      sym__list_item_content_cont,
    ACTIONS(183), 1,
      sym__indent,
    STATE(53), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(173), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1043] = 3,
    ACTIONS(185), 1,
      sym__list_item_content_cont,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(166), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1056] = 2,
    ACTIONS(188), 1,
      aux_sym__blank_line_token1,
    ACTIONS(190), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [1067] = 4,
    ACTIONS(179), 1,
      sym__list_item_content_cont,
    ACTIONS(192), 1,
      sym__indent,
    STATE(51), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(146), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1082] = 4,
    ACTIONS(194), 1,
      sym__raw,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    STATE(118), 1,
      sym_script_content,
    STATE(63), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [1096] = 5,
    ACTIONS(198), 1,
      aux_sym__blank_line_token1,
    ACTIONS(200), 1,
      sym__newline_token,
    ACTIONS(202), 1,
      sym__eof,
    ACTIONS(204), 1,
      sym__next_ordered_list_token,
    STATE(56), 1,
      aux_sym_ordered_list_repeat1,
  [1112] = 4,
    ACTIONS(206), 1,
      aux_sym__blank_line_token1,
    ACTIONS(210), 1,
      sym__next_ordered_list_token,
    STATE(56), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(208), 2,
      sym__eof,
      sym__newline_token,
  [1126] = 1,
    ACTIONS(190), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [1134] = 5,
    ACTIONS(204), 1,
      sym__next_ordered_list_token,
    ACTIONS(213), 1,
      aux_sym__blank_line_token1,
    ACTIONS(215), 1,
      sym__newline_token,
    ACTIONS(217), 1,
      sym__eof,
    STATE(55), 1,
      aux_sym_ordered_list_repeat1,
  [1150] = 4,
    ACTIONS(194), 1,
      sym__raw,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    STATE(106), 1,
      sym_script_content,
    STATE(63), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [1164] = 4,
    ACTIONS(219), 1,
      aux_sym__blank_line_token1,
    ACTIONS(221), 1,
      sym__eof,
    STATE(34), 1,
      sym__block_separator,
    STATE(16), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [1178] = 4,
    ACTIONS(194), 1,
      sym__raw,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    STATE(110), 1,
      sym_script_content,
    STATE(63), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [1192] = 4,
    ACTIONS(223), 1,
      aux_sym__blank_line_token1,
    ACTIONS(225), 1,
      sym__eof,
    STATE(30), 1,
      sym__block_separator,
    STATE(13), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [1206] = 4,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    ACTIONS(227), 1,
      sym__raw,
    ACTIONS(229), 1,
      anon_sym_GT_GT_GT,
    STATE(64), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [1220] = 4,
    ACTIONS(231), 1,
      sym__raw,
    ACTIONS(234), 1,
      anon_sym_POUND_POUND,
    ACTIONS(237), 1,
      anon_sym_GT_GT_GT,
    STATE(64), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [1234] = 2,
    ACTIONS(206), 1,
      aux_sym__blank_line_token1,
    ACTIONS(208), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1243] = 4,
    ACTIONS(239), 1,
      aux_sym__blank_line_token1,
    ACTIONS(241), 1,
      sym__newline_token,
    ACTIONS(243), 1,
      sym__eof,
    STATE(74), 1,
      aux_sym_paragraph_repeat1,
  [1256] = 2,
    ACTIONS(245), 1,
      aux_sym__blank_line_token1,
    ACTIONS(247), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1265] = 2,
    ACTIONS(249), 1,
      aux_sym__blank_line_token1,
    ACTIONS(251), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1274] = 2,
    ACTIONS(253), 1,
      aux_sym__blank_line_token1,
    ACTIONS(255), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1283] = 2,
    ACTIONS(257), 1,
      aux_sym__blank_line_token1,
    ACTIONS(259), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1292] = 4,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    ACTIONS(263), 1,
      sym__newline_token,
    ACTIONS(266), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [1305] = 3,
    ACTIONS(268), 1,
      sym__next_ordered_list_token,
    STATE(72), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(208), 2,
      sym__dedent,
      sym__newline_token,
  [1316] = 4,
    ACTIONS(271), 1,
      aux_sym__blank_line_token1,
    ACTIONS(273), 1,
      sym__newline_token,
    ACTIONS(275), 1,
      sym__eof,
    STATE(75), 1,
      aux_sym_paragraph_repeat1,
  [1329] = 4,
    ACTIONS(277), 1,
      aux_sym__blank_line_token1,
    ACTIONS(279), 1,
      sym__newline_token,
    ACTIONS(281), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [1342] = 4,
    ACTIONS(283), 1,
      aux_sym__blank_line_token1,
    ACTIONS(285), 1,
      sym__newline_token,
    ACTIONS(287), 1,
      sym__eof,
    STATE(71), 1,
      aux_sym_paragraph_repeat1,
  [1355] = 4,
    ACTIONS(217), 1,
      sym__dedent,
    ACTIONS(289), 1,
      sym__newline_token,
    ACTIONS(291), 1,
      sym__next_ordered_list_token,
    STATE(77), 1,
      aux_sym_ordered_list_repeat1,
  [1368] = 4,
    ACTIONS(202), 1,
      sym__dedent,
    ACTIONS(291), 1,
      sym__next_ordered_list_token,
    ACTIONS(293), 1,
      sym__newline_token,
    STATE(72), 1,
      aux_sym_ordered_list_repeat1,
  [1381] = 1,
    ACTIONS(208), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1387] = 2,
    ACTIONS(261), 1,
      aux_sym__blank_line_token1,
    ACTIONS(266), 2,
      sym__eof,
      sym__newline_token,
  [1395] = 3,
    ACTIONS(295), 1,
      aux_sym__blank_line_token1,
    ACTIONS(297), 1,
      sym__newline_token,
    ACTIONS(299), 1,
      sym__eof,
  [1405] = 1,
    ACTIONS(259), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1411] = 1,
    ACTIONS(255), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1417] = 1,
    ACTIONS(251), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1423] = 1,
    ACTIONS(247), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [1429] = 1,
    ACTIONS(301), 3,
      sym__raw,
      anon_sym_POUND_POUND,
      anon_sym_GT_GT_GT,
  [1435] = 1,
    ACTIONS(303), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [1440] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(119), 1,
      sym_ordered_list,
  [1447] = 2,
    ACTIONS(307), 1,
      aux_sym__inline_whitespace_token1,
    STATE(40), 1,
      sym__inline_whitespace,
  [1454] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(104), 1,
      sym_ordered_list,
  [1461] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(117), 1,
      sym_ordered_list,
  [1468] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(116), 1,
      sym_ordered_list,
  [1475] = 1,
    ACTIONS(309), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [1480] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(101), 1,
      sym_ordered_list,
  [1487] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(126), 1,
      sym_ordered_list,
  [1494] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(114), 1,
      sym_ordered_list,
  [1501] = 2,
    ACTIONS(311), 1,
      aux_sym__inline_whitespace_token1,
    STATE(43), 1,
      sym__inline_whitespace,
  [1508] = 1,
    ACTIONS(313), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [1513] = 2,
    ACTIONS(315), 1,
      aux_sym__inline_whitespace_token1,
    STATE(41), 1,
      sym__inline_whitespace,
  [1520] = 2,
    ACTIONS(305), 1,
      sym__first_ordered_list_token,
    STATE(103), 1,
      sym_ordered_list,
  [1527] = 1,
    ACTIONS(317), 1,
      sym__newline_token,
  [1531] = 1,
    ACTIONS(319), 1,
      sym__dedent,
  [1535] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1539] = 1,
    ACTIONS(323), 1,
      sym__dedent,
  [1543] = 1,
    ACTIONS(325), 1,
      sym__dedent,
  [1547] = 1,
    ACTIONS(327), 1,
      sym__newline_token,
  [1551] = 1,
    ACTIONS(329), 1,
      anon_sym_GT_GT_GT,
  [1555] = 1,
    ACTIONS(331), 1,
      sym__newline_token,
  [1559] = 1,
    ACTIONS(333), 1,
      aux_sym__inline_whitespace_token1,
  [1563] = 1,
    ACTIONS(335), 1,
      sym__newline_token,
  [1567] = 1,
    ACTIONS(337), 1,
      anon_sym_GT_GT_GT,
  [1571] = 1,
    ACTIONS(339), 1,
      aux_sym__inline_whitespace_token1,
  [1575] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [1579] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1583] = 1,
    ACTIONS(343), 1,
      sym__dedent,
  [1587] = 1,
    ACTIONS(345), 1,
      sym__newline_token,
  [1591] = 1,
    ACTIONS(347), 1,
      sym__dedent,
  [1595] = 1,
    ACTIONS(349), 1,
      sym__dedent,
  [1599] = 1,
    ACTIONS(351), 1,
      anon_sym_GT_GT_GT,
  [1603] = 1,
    ACTIONS(353), 1,
      sym__dedent,
  [1607] = 1,
    ACTIONS(355), 1,
      sym__newline_token,
  [1611] = 1,
    ACTIONS(357), 1,
      sym__newline_token,
  [1615] = 1,
    ACTIONS(309), 1,
      sym__dedent,
  [1619] = 1,
    ACTIONS(359), 1,
      anon_sym_POUND_POUND,
  [1623] = 1,
    ACTIONS(361), 1,
      sym__newline_token,
  [1627] = 1,
    ACTIONS(313), 1,
      sym__dedent,
  [1631] = 1,
    ACTIONS(363), 1,
      sym__dedent,
  [1635] = 1,
    ACTIONS(365), 1,
      sym__newline_token,
  [1639] = 1,
    ACTIONS(367), 1,
      sym__newline_token,
  [1643] = 1,
    ACTIONS(369), 1,
      sym__newline_token,
  [1647] = 1,
    ACTIONS(371), 1,
      sym__newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 231,
  [SMALL_STATE(9)] = 263,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 327,
  [SMALL_STATE(12)] = 359,
  [SMALL_STATE(13)] = 382,
  [SMALL_STATE(14)] = 405,
  [SMALL_STATE(15)] = 426,
  [SMALL_STATE(16)] = 449,
  [SMALL_STATE(17)] = 472,
  [SMALL_STATE(18)] = 493,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 537,
  [SMALL_STATE(21)] = 552,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 582,
  [SMALL_STATE(24)] = 602,
  [SMALL_STATE(25)] = 616,
  [SMALL_STATE(26)] = 638,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 682,
  [SMALL_STATE(29)] = 704,
  [SMALL_STATE(30)] = 724,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 750,
  [SMALL_STATE(33)] = 763,
  [SMALL_STATE(34)] = 776,
  [SMALL_STATE(35)] = 789,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 818,
  [SMALL_STATE(38)] = 834,
  [SMALL_STATE(39)] = 852,
  [SMALL_STATE(40)] = 870,
  [SMALL_STATE(41)] = 886,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 914,
  [SMALL_STATE(44)] = 930,
  [SMALL_STATE(45)] = 946,
  [SMALL_STATE(46)] = 964,
  [SMALL_STATE(47)] = 980,
  [SMALL_STATE(48)] = 998,
  [SMALL_STATE(49)] = 1013,
  [SMALL_STATE(50)] = 1028,
  [SMALL_STATE(51)] = 1043,
  [SMALL_STATE(52)] = 1056,
  [SMALL_STATE(53)] = 1067,
  [SMALL_STATE(54)] = 1082,
  [SMALL_STATE(55)] = 1096,
  [SMALL_STATE(56)] = 1112,
  [SMALL_STATE(57)] = 1126,
  [SMALL_STATE(58)] = 1134,
  [SMALL_STATE(59)] = 1150,
  [SMALL_STATE(60)] = 1164,
  [SMALL_STATE(61)] = 1178,
  [SMALL_STATE(62)] = 1192,
  [SMALL_STATE(63)] = 1206,
  [SMALL_STATE(64)] = 1220,
  [SMALL_STATE(65)] = 1234,
  [SMALL_STATE(66)] = 1243,
  [SMALL_STATE(67)] = 1256,
  [SMALL_STATE(68)] = 1265,
  [SMALL_STATE(69)] = 1274,
  [SMALL_STATE(70)] = 1283,
  [SMALL_STATE(71)] = 1292,
  [SMALL_STATE(72)] = 1305,
  [SMALL_STATE(73)] = 1316,
  [SMALL_STATE(74)] = 1329,
  [SMALL_STATE(75)] = 1342,
  [SMALL_STATE(76)] = 1355,
  [SMALL_STATE(77)] = 1368,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1387,
  [SMALL_STATE(80)] = 1395,
  [SMALL_STATE(81)] = 1405,
  [SMALL_STATE(82)] = 1411,
  [SMALL_STATE(83)] = 1417,
  [SMALL_STATE(84)] = 1423,
  [SMALL_STATE(85)] = 1429,
  [SMALL_STATE(86)] = 1435,
  [SMALL_STATE(87)] = 1440,
  [SMALL_STATE(88)] = 1447,
  [SMALL_STATE(89)] = 1454,
  [SMALL_STATE(90)] = 1461,
  [SMALL_STATE(91)] = 1468,
  [SMALL_STATE(92)] = 1475,
  [SMALL_STATE(93)] = 1480,
  [SMALL_STATE(94)] = 1487,
  [SMALL_STATE(95)] = 1494,
  [SMALL_STATE(96)] = 1501,
  [SMALL_STATE(97)] = 1508,
  [SMALL_STATE(98)] = 1513,
  [SMALL_STATE(99)] = 1520,
  [SMALL_STATE(100)] = 1527,
  [SMALL_STATE(101)] = 1531,
  [SMALL_STATE(102)] = 1535,
  [SMALL_STATE(103)] = 1539,
  [SMALL_STATE(104)] = 1543,
  [SMALL_STATE(105)] = 1547,
  [SMALL_STATE(106)] = 1551,
  [SMALL_STATE(107)] = 1555,
  [SMALL_STATE(108)] = 1559,
  [SMALL_STATE(109)] = 1563,
  [SMALL_STATE(110)] = 1567,
  [SMALL_STATE(111)] = 1571,
  [SMALL_STATE(112)] = 1575,
  [SMALL_STATE(113)] = 1579,
  [SMALL_STATE(114)] = 1583,
  [SMALL_STATE(115)] = 1587,
  [SMALL_STATE(116)] = 1591,
  [SMALL_STATE(117)] = 1595,
  [SMALL_STATE(118)] = 1599,
  [SMALL_STATE(119)] = 1603,
  [SMALL_STATE(120)] = 1607,
  [SMALL_STATE(121)] = 1611,
  [SMALL_STATE(122)] = 1615,
  [SMALL_STATE(123)] = 1619,
  [SMALL_STATE(124)] = 1623,
  [SMALL_STATE(125)] = 1627,
  [SMALL_STATE(126)] = 1631,
  [SMALL_STATE(127)] = 1635,
  [SMALL_STATE(128)] = 1639,
  [SMALL_STATE(129)] = 1643,
  [SMALL_STATE(130)] = 1647,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_list, 1),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(23),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(59),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(88),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(80),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(109),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(120),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(19),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(54),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(29),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(59),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(100),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 3, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(121),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(11),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_content, 1),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(64),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 13),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(44),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 8),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 3, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
