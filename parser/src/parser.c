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
#define STATE_COUNT 353
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 15

enum {
  aux_sym__blank_line_token1 = 1,
  sym_inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  sym__raw = 5,
  sym_uri_autolink = 6,
  sym_email_autolink = 7,
  anon_sym_POUND = 8,
  anon_sym_POUND_POUND = 9,
  anon_sym_POUND_POUND_POUND = 10,
  anon_sym_POUND_POUND_POUND_POUND = 11,
  anon_sym_POUND_POUND_POUND_POUND_POUND = 12,
  anon_sym_POUND_POUND_POUND_POUND_POUND_POUND = 13,
  anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND = 14,
  anon_sym_LT_LT_LT = 15,
  anon_sym_LT = 16,
  anon_sym_GT = 17,
  anon_sym_LT_LT = 18,
  anon_sym_GT_GT = 19,
  anon_sym_LT_LT_LT2 = 20,
  anon_sym_GT_GT_GT = 21,
  anon_sym_LT_LT_LT_LT = 22,
  anon_sym_GT_GT_GT_GT = 23,
  anon_sym_LT_LT_LT_LT_LT = 24,
  anon_sym_GT_GT_GT_GT_GT = 25,
  anon_sym_LT_LT_LT_LT_LT_LT = 26,
  anon_sym_GT_GT_GT_GT_GT_GT = 27,
  anon_sym_LT_LT_LT_LT_LT_LT_LT = 28,
  anon_sym_GT_GT_GT_GT_GT_GT_GT = 29,
  aux_sym_heading_token1 = 30,
  aux_sym_horizontal_rule_token1 = 31,
  anon_sym_LBRACKx_RBRACK = 32,
  anon_sym_LBRACKX_RBRACK = 33,
  sym_checkbox_empty = 34,
  sym__line_start = 35,
  sym__line_end = 36,
  sym__indent = 37,
  sym__dedent = 38,
  sym__eof = 39,
  sym__first_ordered_list_token = 40,
  sym__next_ordered_list_token = 41,
  sym__list_item_content_cont = 42,
  sym__list_item_content_end = 43,
  sym__DEBUG = 44,
  sym_source_file = 45,
  sym__blank_line = 46,
  sym__block_separator = 47,
  sym_block = 48,
  sym_block_list = 49,
  sym_script_interpolation = 50,
  sym_script_content = 51,
  sym_scripting = 52,
  sym_inline_content = 53,
  sym_paragraph = 54,
  sym_heading = 55,
  sym_horizontal_rule = 56,
  sym_ordered_list_item = 57,
  sym_ordered_list = 58,
  sym_checkbox_done = 59,
  sym_checkbox = 60,
  aux_sym__block_separator_repeat1 = 61,
  aux_sym_block_list_repeat1 = 62,
  aux_sym_script_content_repeat1 = 63,
  aux_sym_inline_content_repeat1 = 64,
  aux_sym_paragraph_repeat1 = 65,
  aux_sym_ordered_list_item_repeat1 = 66,
  aux_sym_ordered_list_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym_inline_text] = "inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
  [sym__raw] = "_raw",
  [sym_uri_autolink] = "uri_autolink",
  [sym_email_autolink] = "email_autolink",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_POUND_POUND] = "###",
  [anon_sym_POUND_POUND_POUND_POUND] = "####",
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = "#####",
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = "######",
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND] = "#######",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT_LT2] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_LT_LT_LT_LT] = "<<<<",
  [anon_sym_GT_GT_GT_GT] = ">>>>",
  [anon_sym_LT_LT_LT_LT_LT] = "<<<<<",
  [anon_sym_GT_GT_GT_GT_GT] = ">>>>>",
  [anon_sym_LT_LT_LT_LT_LT_LT] = "<<<<<<",
  [anon_sym_GT_GT_GT_GT_GT_GT] = ">>>>>>",
  [anon_sym_LT_LT_LT_LT_LT_LT_LT] = "<<<<<<<",
  [anon_sym_GT_GT_GT_GT_GT_GT_GT] = ">>>>>>>",
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
  [sym__DEBUG] = "_DEBUG",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
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
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym__newline_token] = sym__newline_token,
  [sym__raw] = sym__raw,
  [sym_uri_autolink] = sym_uri_autolink,
  [sym_email_autolink] = sym_email_autolink,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT_LT2] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_LT_LT_LT_LT] = anon_sym_LT_LT_LT_LT,
  [anon_sym_GT_GT_GT_GT] = anon_sym_GT_GT_GT_GT,
  [anon_sym_LT_LT_LT_LT_LT] = anon_sym_LT_LT_LT_LT_LT,
  [anon_sym_GT_GT_GT_GT_GT] = anon_sym_GT_GT_GT_GT_GT,
  [anon_sym_LT_LT_LT_LT_LT_LT] = anon_sym_LT_LT_LT_LT_LT_LT,
  [anon_sym_GT_GT_GT_GT_GT_GT] = anon_sym_GT_GT_GT_GT_GT_GT,
  [anon_sym_LT_LT_LT_LT_LT_LT_LT] = anon_sym_LT_LT_LT_LT_LT_LT_LT,
  [anon_sym_GT_GT_GT_GT_GT_GT_GT] = anon_sym_GT_GT_GT_GT_GT_GT_GT,
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
  [sym__DEBUG] = sym__DEBUG,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
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
  [sym__inline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__newline_token] = {
    .visible = false,
    .named = true,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LT_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_GT_GT_GT_GT] = {
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
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 5},
  [12] = {.index = 25, .length = 6},
  [13] = {.index = 31, .length = 7},
  [14] = {.index = 38, .length = 8},
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
    {field_content, 2},
  [20] =
    {field_children, 1},
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_content, 0},
  [25] =
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_children, 5},
    {field_content, 0},
    {field_content, 1},
  [31] =
    {field_checkbox, 0},
    {field_checkbox, 1},
    {field_children, 3},
    {field_children, 4},
    {field_children, 5},
    {field_children, 6},
    {field_content, 2},
  [38] =
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
  [10] = 7,
  [11] = 8,
  [12] = 12,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 9,
  [17] = 17,
  [18] = 8,
  [19] = 15,
  [20] = 9,
  [21] = 21,
  [22] = 6,
  [23] = 17,
  [24] = 7,
  [25] = 12,
  [26] = 14,
  [27] = 15,
  [28] = 8,
  [29] = 8,
  [30] = 21,
  [31] = 9,
  [32] = 12,
  [33] = 8,
  [34] = 7,
  [35] = 9,
  [36] = 6,
  [37] = 8,
  [38] = 17,
  [39] = 15,
  [40] = 9,
  [41] = 17,
  [42] = 15,
  [43] = 12,
  [44] = 6,
  [45] = 9,
  [46] = 14,
  [47] = 14,
  [48] = 12,
  [49] = 14,
  [50] = 21,
  [51] = 7,
  [52] = 17,
  [53] = 9,
  [54] = 6,
  [55] = 21,
  [56] = 15,
  [57] = 14,
  [58] = 12,
  [59] = 7,
  [60] = 17,
  [61] = 6,
  [62] = 21,
  [63] = 15,
  [64] = 14,
  [65] = 12,
  [66] = 7,
  [67] = 17,
  [68] = 6,
  [69] = 21,
  [70] = 21,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 71,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 75,
  [80] = 75,
  [81] = 76,
  [82] = 82,
  [83] = 76,
  [84] = 75,
  [85] = 76,
  [86] = 75,
  [87] = 76,
  [88] = 75,
  [89] = 75,
  [90] = 76,
  [91] = 76,
  [92] = 75,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 94,
  [104] = 99,
  [105] = 100,
  [106] = 101,
  [107] = 102,
  [108] = 98,
  [109] = 93,
  [110] = 97,
  [111] = 100,
  [112] = 100,
  [113] = 95,
  [114] = 101,
  [115] = 94,
  [116] = 94,
  [117] = 99,
  [118] = 102,
  [119] = 100,
  [120] = 93,
  [121] = 95,
  [122] = 94,
  [123] = 94,
  [124] = 78,
  [125] = 100,
  [126] = 100,
  [127] = 82,
  [128] = 97,
  [129] = 98,
  [130] = 130,
  [131] = 131,
  [132] = 130,
  [133] = 130,
  [134] = 130,
  [135] = 130,
  [136] = 130,
  [137] = 130,
  [138] = 138,
  [139] = 130,
  [140] = 131,
  [141] = 141,
  [142] = 141,
  [143] = 143,
  [144] = 82,
  [145] = 138,
  [146] = 141,
  [147] = 141,
  [148] = 141,
  [149] = 149,
  [150] = 78,
  [151] = 141,
  [152] = 152,
  [153] = 141,
  [154] = 154,
  [155] = 155,
  [156] = 155,
  [157] = 157,
  [158] = 155,
  [159] = 157,
  [160] = 160,
  [161] = 160,
  [162] = 160,
  [163] = 157,
  [164] = 160,
  [165] = 155,
  [166] = 157,
  [167] = 155,
  [168] = 157,
  [169] = 160,
  [170] = 160,
  [171] = 157,
  [172] = 160,
  [173] = 157,
  [174] = 155,
  [175] = 157,
  [176] = 155,
  [177] = 155,
  [178] = 160,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 182,
  [186] = 138,
  [187] = 131,
  [188] = 188,
  [189] = 179,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 183,
  [194] = 180,
  [195] = 190,
  [196] = 188,
  [197] = 181,
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 198,
  [202] = 198,
  [203] = 198,
  [204] = 198,
  [205] = 205,
  [206] = 192,
  [207] = 207,
  [208] = 198,
  [209] = 198,
  [210] = 210,
  [211] = 205,
  [212] = 212,
  [213] = 200,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 207,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 216,
  [224] = 220,
  [225] = 225,
  [226] = 226,
  [227] = 219,
  [228] = 221,
  [229] = 222,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 231,
  [238] = 236,
  [239] = 235,
  [240] = 230,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 241,
  [247] = 242,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 243,
  [252] = 244,
  [253] = 245,
  [254] = 241,
  [255] = 242,
  [256] = 248,
  [257] = 249,
  [258] = 250,
  [259] = 243,
  [260] = 244,
  [261] = 245,
  [262] = 262,
  [263] = 242,
  [264] = 248,
  [265] = 249,
  [266] = 250,
  [267] = 243,
  [268] = 244,
  [269] = 245,
  [270] = 241,
  [271] = 242,
  [272] = 248,
  [273] = 249,
  [274] = 250,
  [275] = 243,
  [276] = 243,
  [277] = 277,
  [278] = 262,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 243,
  [289] = 250,
  [290] = 249,
  [291] = 248,
  [292] = 234,
  [293] = 293,
  [294] = 242,
  [295] = 295,
  [296] = 296,
  [297] = 296,
  [298] = 241,
  [299] = 299,
  [300] = 281,
  [301] = 282,
  [302] = 283,
  [303] = 284,
  [304] = 285,
  [305] = 286,
  [306] = 287,
  [307] = 307,
  [308] = 296,
  [309] = 299,
  [310] = 245,
  [311] = 311,
  [312] = 295,
  [313] = 250,
  [314] = 249,
  [315] = 248,
  [316] = 279,
  [317] = 287,
  [318] = 286,
  [319] = 285,
  [320] = 284,
  [321] = 283,
  [322] = 282,
  [323] = 281,
  [324] = 250,
  [325] = 249,
  [326] = 248,
  [327] = 242,
  [328] = 241,
  [329] = 245,
  [330] = 244,
  [331] = 241,
  [332] = 244,
  [333] = 280,
  [334] = 334,
  [335] = 245,
  [336] = 336,
  [337] = 337,
  [338] = 337,
  [339] = 277,
  [340] = 244,
  [341] = 341,
  [342] = 334,
  [343] = 307,
  [344] = 311,
  [345] = 293,
  [346] = 346,
  [347] = 233,
  [348] = 337,
  [349] = 349,
  [350] = 350,
  [351] = 243,
  [352] = 352,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(61);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '<') ADVANCE(289);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead == 'X') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(269);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(273);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(265);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(277);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(281);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(295);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(299);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(307);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(311);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(315);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(36);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == '>') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == '>') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '>') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == ']') ADVANCE(405);
      END_STATE();
    case 49:
      if (lookahead == ']') ADVANCE(403);
      END_STATE();
    case 50:
      if (lookahead == ']') ADVANCE(401);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '<') ADVANCE(290);
      END_STATE();
    case 53:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(244);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(259);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      if (lookahead == '>') ADVANCE(258);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(264);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(238);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '#') ADVANCE(96);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(61);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == 'X') ADVANCE(230);
      if (lookahead == 'x') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(228);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '<') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(228);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '@') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(406);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(402);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__inline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(308);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(316);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(312);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(300);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(304);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(296);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(239);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(240);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(241);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(242);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(243);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(245);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(246);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(247);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(249);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(250);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(251);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(252);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(260);
      if (lookahead == '>') ADVANCE(257);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__raw);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(272);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(282);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '#') ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(260);
      if (lookahead == '#') ADVANCE(287);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT2);
      if (lookahead == '<') ADVANCE(301);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT);
      if (lookahead == '<') ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(306);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT);
      if (lookahead == '<') ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT_LT);
      if (lookahead == '<') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT_LT);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(260);
      if (lookahead == '<') ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT_LT_LT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT_LT_LT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT_GT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT_GT);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
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
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(339);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(340);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(342);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(343);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(345);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(346);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(356);
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
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_checkbox_empty);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 75, .external_lex_state = 2},
  [2] = {.lex_state = 75, .external_lex_state = 3},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 75, .external_lex_state = 3},
  [7] = {.lex_state = 75, .external_lex_state = 3},
  [8] = {.lex_state = 64, .external_lex_state = 3},
  [9] = {.lex_state = 70, .external_lex_state = 3},
  [10] = {.lex_state = 75, .external_lex_state = 3},
  [11] = {.lex_state = 70, .external_lex_state = 3},
  [12] = {.lex_state = 75, .external_lex_state = 3},
  [13] = {.lex_state = 75, .external_lex_state = 3},
  [14] = {.lex_state = 75, .external_lex_state = 3},
  [15] = {.lex_state = 75, .external_lex_state = 3},
  [16] = {.lex_state = 69, .external_lex_state = 3},
  [17] = {.lex_state = 75, .external_lex_state = 3},
  [18] = {.lex_state = 69, .external_lex_state = 3},
  [19] = {.lex_state = 75, .external_lex_state = 3},
  [20] = {.lex_state = 68, .external_lex_state = 3},
  [21] = {.lex_state = 75, .external_lex_state = 3},
  [22] = {.lex_state = 75, .external_lex_state = 3},
  [23] = {.lex_state = 75, .external_lex_state = 3},
  [24] = {.lex_state = 75, .external_lex_state = 3},
  [25] = {.lex_state = 75, .external_lex_state = 3},
  [26] = {.lex_state = 75, .external_lex_state = 3},
  [27] = {.lex_state = 75, .external_lex_state = 3},
  [28] = {.lex_state = 65, .external_lex_state = 3},
  [29] = {.lex_state = 68, .external_lex_state = 3},
  [30] = {.lex_state = 75, .external_lex_state = 3},
  [31] = {.lex_state = 67, .external_lex_state = 3},
  [32] = {.lex_state = 75, .external_lex_state = 3},
  [33] = {.lex_state = 67, .external_lex_state = 3},
  [34] = {.lex_state = 75, .external_lex_state = 3},
  [35] = {.lex_state = 66, .external_lex_state = 3},
  [36] = {.lex_state = 75, .external_lex_state = 3},
  [37] = {.lex_state = 66, .external_lex_state = 3},
  [38] = {.lex_state = 75, .external_lex_state = 3},
  [39] = {.lex_state = 75, .external_lex_state = 3},
  [40] = {.lex_state = 64, .external_lex_state = 3},
  [41] = {.lex_state = 75, .external_lex_state = 3},
  [42] = {.lex_state = 75, .external_lex_state = 3},
  [43] = {.lex_state = 75, .external_lex_state = 3},
  [44] = {.lex_state = 75, .external_lex_state = 3},
  [45] = {.lex_state = 75, .external_lex_state = 3},
  [46] = {.lex_state = 75, .external_lex_state = 3},
  [47] = {.lex_state = 75, .external_lex_state = 3},
  [48] = {.lex_state = 75, .external_lex_state = 3},
  [49] = {.lex_state = 75, .external_lex_state = 3},
  [50] = {.lex_state = 75, .external_lex_state = 3},
  [51] = {.lex_state = 75, .external_lex_state = 3},
  [52] = {.lex_state = 75, .external_lex_state = 3},
  [53] = {.lex_state = 65, .external_lex_state = 3},
  [54] = {.lex_state = 75, .external_lex_state = 3},
  [55] = {.lex_state = 75, .external_lex_state = 3},
  [56] = {.lex_state = 75, .external_lex_state = 3},
  [57] = {.lex_state = 75, .external_lex_state = 3},
  [58] = {.lex_state = 75, .external_lex_state = 3},
  [59] = {.lex_state = 75, .external_lex_state = 3},
  [60] = {.lex_state = 75, .external_lex_state = 3},
  [61] = {.lex_state = 75, .external_lex_state = 3},
  [62] = {.lex_state = 75, .external_lex_state = 3},
  [63] = {.lex_state = 75, .external_lex_state = 3},
  [64] = {.lex_state = 75, .external_lex_state = 3},
  [65] = {.lex_state = 75, .external_lex_state = 3},
  [66] = {.lex_state = 75, .external_lex_state = 3},
  [67] = {.lex_state = 75, .external_lex_state = 3},
  [68] = {.lex_state = 75, .external_lex_state = 3},
  [69] = {.lex_state = 75, .external_lex_state = 3},
  [70] = {.lex_state = 75, .external_lex_state = 3},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 66, .external_lex_state = 2},
  [76] = {.lex_state = 65, .external_lex_state = 2},
  [77] = {.lex_state = 64, .external_lex_state = 2},
  [78] = {.lex_state = 63, .external_lex_state = 4},
  [79] = {.lex_state = 75, .external_lex_state = 2},
  [80] = {.lex_state = 64, .external_lex_state = 2},
  [81] = {.lex_state = 66, .external_lex_state = 2},
  [82] = {.lex_state = 63, .external_lex_state = 4},
  [83] = {.lex_state = 67, .external_lex_state = 2},
  [84] = {.lex_state = 67, .external_lex_state = 2},
  [85] = {.lex_state = 68, .external_lex_state = 2},
  [86] = {.lex_state = 68, .external_lex_state = 2},
  [87] = {.lex_state = 69, .external_lex_state = 2},
  [88] = {.lex_state = 69, .external_lex_state = 2},
  [89] = {.lex_state = 65, .external_lex_state = 2},
  [90] = {.lex_state = 70, .external_lex_state = 2},
  [91] = {.lex_state = 75, .external_lex_state = 2},
  [92] = {.lex_state = 70, .external_lex_state = 2},
  [93] = {.lex_state = 60},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 60},
  [96] = {.lex_state = 58},
  [97] = {.lex_state = 60},
  [98] = {.lex_state = 60},
  [99] = {.lex_state = 60},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 60},
  [103] = {.lex_state = 59},
  [104] = {.lex_state = 60},
  [105] = {.lex_state = 59},
  [106] = {.lex_state = 60},
  [107] = {.lex_state = 60},
  [108] = {.lex_state = 60},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 53},
  [112] = {.lex_state = 54},
  [113] = {.lex_state = 60},
  [114] = {.lex_state = 60},
  [115] = {.lex_state = 56},
  [116] = {.lex_state = 57},
  [117] = {.lex_state = 60},
  [118] = {.lex_state = 60},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 60},
  [121] = {.lex_state = 60},
  [122] = {.lex_state = 54},
  [123] = {.lex_state = 55},
  [124] = {.lex_state = 63, .external_lex_state = 5},
  [125] = {.lex_state = 56},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 63, .external_lex_state = 5},
  [128] = {.lex_state = 60},
  [129] = {.lex_state = 60},
  [130] = {.lex_state = 64, .external_lex_state = 2},
  [131] = {.lex_state = 63, .external_lex_state = 4},
  [132] = {.lex_state = 70, .external_lex_state = 2},
  [133] = {.lex_state = 69, .external_lex_state = 2},
  [134] = {.lex_state = 75, .external_lex_state = 2},
  [135] = {.lex_state = 66, .external_lex_state = 2},
  [136] = {.lex_state = 65, .external_lex_state = 2},
  [137] = {.lex_state = 68, .external_lex_state = 2},
  [138] = {.lex_state = 63, .external_lex_state = 4},
  [139] = {.lex_state = 67, .external_lex_state = 2},
  [140] = {.lex_state = 63, .external_lex_state = 5},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 58},
  [143] = {.lex_state = 71, .external_lex_state = 6},
  [144] = {.lex_state = 63, .external_lex_state = 6},
  [145] = {.lex_state = 63, .external_lex_state = 5},
  [146] = {.lex_state = 56},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 55},
  [149] = {.lex_state = 71, .external_lex_state = 6},
  [150] = {.lex_state = 63, .external_lex_state = 6},
  [151] = {.lex_state = 53},
  [152] = {.lex_state = 71, .external_lex_state = 6},
  [153] = {.lex_state = 54},
  [154] = {.lex_state = 71, .external_lex_state = 6},
  [155] = {.lex_state = 70, .external_lex_state = 3},
  [156] = {.lex_state = 64, .external_lex_state = 3},
  [157] = {.lex_state = 70, .external_lex_state = 3},
  [158] = {.lex_state = 67, .external_lex_state = 3},
  [159] = {.lex_state = 65, .external_lex_state = 3},
  [160] = {.lex_state = 65, .external_lex_state = 3},
  [161] = {.lex_state = 66, .external_lex_state = 3},
  [162] = {.lex_state = 68, .external_lex_state = 3},
  [163] = {.lex_state = 68, .external_lex_state = 3},
  [164] = {.lex_state = 70, .external_lex_state = 3},
  [165] = {.lex_state = 75, .external_lex_state = 3},
  [166] = {.lex_state = 66, .external_lex_state = 3},
  [167] = {.lex_state = 68, .external_lex_state = 3},
  [168] = {.lex_state = 67, .external_lex_state = 3},
  [169] = {.lex_state = 75, .external_lex_state = 3},
  [170] = {.lex_state = 67, .external_lex_state = 3},
  [171] = {.lex_state = 64, .external_lex_state = 3},
  [172] = {.lex_state = 69, .external_lex_state = 3},
  [173] = {.lex_state = 69, .external_lex_state = 3},
  [174] = {.lex_state = 69, .external_lex_state = 3},
  [175] = {.lex_state = 75, .external_lex_state = 3},
  [176] = {.lex_state = 66, .external_lex_state = 3},
  [177] = {.lex_state = 65, .external_lex_state = 3},
  [178] = {.lex_state = 64, .external_lex_state = 3},
  [179] = {.lex_state = 63},
  [180] = {.lex_state = 62, .external_lex_state = 4},
  [181] = {.lex_state = 62, .external_lex_state = 4},
  [182] = {.lex_state = 63},
  [183] = {.lex_state = 62, .external_lex_state = 4},
  [184] = {.lex_state = 63},
  [185] = {.lex_state = 63},
  [186] = {.lex_state = 63, .external_lex_state = 6},
  [187] = {.lex_state = 63, .external_lex_state = 6},
  [188] = {.lex_state = 62, .external_lex_state = 4},
  [189] = {.lex_state = 63},
  [190] = {.lex_state = 62, .external_lex_state = 4},
  [191] = {.lex_state = 63},
  [192] = {.lex_state = 62, .external_lex_state = 4},
  [193] = {.lex_state = 0, .external_lex_state = 5},
  [194] = {.lex_state = 0, .external_lex_state = 5},
  [195] = {.lex_state = 0, .external_lex_state = 5},
  [196] = {.lex_state = 0, .external_lex_state = 5},
  [197] = {.lex_state = 0, .external_lex_state = 5},
  [198] = {.lex_state = 73, .external_lex_state = 6},
  [199] = {.lex_state = 73, .external_lex_state = 6},
  [200] = {.lex_state = 62, .external_lex_state = 7},
  [201] = {.lex_state = 73, .external_lex_state = 6},
  [202] = {.lex_state = 73, .external_lex_state = 6},
  [203] = {.lex_state = 73, .external_lex_state = 6},
  [204] = {.lex_state = 73, .external_lex_state = 6},
  [205] = {.lex_state = 62, .external_lex_state = 7},
  [206] = {.lex_state = 0, .external_lex_state = 5},
  [207] = {.lex_state = 62, .external_lex_state = 7},
  [208] = {.lex_state = 73, .external_lex_state = 6},
  [209] = {.lex_state = 73, .external_lex_state = 6},
  [210] = {.lex_state = 62, .external_lex_state = 6},
  [211] = {.lex_state = 0, .external_lex_state = 8},
  [212] = {.lex_state = 62, .external_lex_state = 6},
  [213] = {.lex_state = 0, .external_lex_state = 8},
  [214] = {.lex_state = 62, .external_lex_state = 6},
  [215] = {.lex_state = 62, .external_lex_state = 6},
  [216] = {.lex_state = 62, .external_lex_state = 7},
  [217] = {.lex_state = 0, .external_lex_state = 8},
  [218] = {.lex_state = 62, .external_lex_state = 6},
  [219] = {.lex_state = 62, .external_lex_state = 7},
  [220] = {.lex_state = 62, .external_lex_state = 7},
  [221] = {.lex_state = 62, .external_lex_state = 7},
  [222] = {.lex_state = 62, .external_lex_state = 7},
  [223] = {.lex_state = 0, .external_lex_state = 8},
  [224] = {.lex_state = 0, .external_lex_state = 8},
  [225] = {.lex_state = 62, .external_lex_state = 6},
  [226] = {.lex_state = 62, .external_lex_state = 6},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 8},
  [229] = {.lex_state = 0, .external_lex_state = 8},
  [230] = {.lex_state = 0, .external_lex_state = 3},
  [231] = {.lex_state = 0, .external_lex_state = 3},
  [232] = {.lex_state = 73, .external_lex_state = 6},
  [233] = {.lex_state = 73, .external_lex_state = 6},
  [234] = {.lex_state = 73, .external_lex_state = 6},
  [235] = {.lex_state = 0, .external_lex_state = 3},
  [236] = {.lex_state = 0, .external_lex_state = 3},
  [237] = {.lex_state = 0, .external_lex_state = 3},
  [238] = {.lex_state = 0, .external_lex_state = 3},
  [239] = {.lex_state = 0, .external_lex_state = 3},
  [240] = {.lex_state = 0, .external_lex_state = 3},
  [241] = {.lex_state = 62},
  [242] = {.lex_state = 73},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 10},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 73},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 19},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 62},
  [255] = {.lex_state = 73},
  [256] = {.lex_state = 16},
  [257] = {.lex_state = 19},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 0, .external_lex_state = 9},
  [263] = {.lex_state = 73},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 19},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 62},
  [271] = {.lex_state = 73},
  [272] = {.lex_state = 16},
  [273] = {.lex_state = 19},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 0, .external_lex_state = 9},
  [279] = {.lex_state = 0, .external_lex_state = 9},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 16},
  [284] = {.lex_state = 19},
  [285] = {.lex_state = 42},
  [286] = {.lex_state = 45},
  [287] = {.lex_state = 47},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 16},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 73},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 62},
  [299] = {.lex_state = 0, .external_lex_state = 9},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 42},
  [305] = {.lex_state = 45},
  [306] = {.lex_state = 47},
  [307] = {.lex_state = 0, .external_lex_state = 9},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 0, .external_lex_state = 9},
  [310] = {.lex_state = 10},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 0, .external_lex_state = 9},
  [317] = {.lex_state = 47},
  [318] = {.lex_state = 45},
  [319] = {.lex_state = 42},
  [320] = {.lex_state = 19},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 10},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 19},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 73},
  [328] = {.lex_state = 62},
  [329] = {.lex_state = 10},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 62},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 10},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 0, .external_lex_state = 9},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 4},
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
  ts_external_token__DEBUG = 9,
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
    [sym__inline_whitespace] = ACTIONS(1),
    [sym__newline_token] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_LT2] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LT_LT_LT] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LT_LT_LT_LT] = ACTIONS(1),
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
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(350),
    [sym__blank_line] = STATE(91),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(13),
    [sym_block_list] = STATE(349),
    [sym_scripting] = STATE(144),
    [sym_inline_content] = STATE(210),
    [sym_paragraph] = STATE(208),
    [sym_heading] = STATE(208),
    [sym_horizontal_rule] = STATE(208),
    [sym_ordered_list] = STATE(208),
    [aux_sym__block_separator_repeat1] = STATE(91),
    [aux_sym_block_list_repeat1] = STATE(13),
    [aux_sym_inline_content_repeat1] = STATE(144),
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
    STATE(210), 1,
      sym_inline_content,
    STATE(336), 1,
      sym_block_list,
    STATE(13), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(208), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [41] = 17,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      anon_sym_LT_LT,
    ACTIONS(41), 1,
      anon_sym_LT_LT_LT2,
    ACTIONS(43), 1,
      anon_sym_LT_LT_LT_LT,
    ACTIONS(45), 1,
      anon_sym_LT_LT_LT_LT_LT,
    ACTIONS(47), 1,
      anon_sym_LT_LT_LT_LT_LT_LT,
    ACTIONS(49), 1,
      anon_sym_LT_LT_LT_LT_LT_LT_LT,
    STATE(348), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [94] = 17,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(51), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LT_LT,
    ACTIONS(55), 1,
      anon_sym_LT_LT_LT2,
    ACTIONS(57), 1,
      anon_sym_LT_LT_LT_LT,
    ACTIONS(59), 1,
      anon_sym_LT_LT_LT_LT_LT,
    ACTIONS(61), 1,
      anon_sym_LT_LT_LT_LT_LT_LT,
    ACTIONS(63), 1,
      anon_sym_LT_LT_LT_LT_LT_LT_LT,
    STATE(337), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [147] = 17,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(65), 1,
      anon_sym_LT,
    ACTIONS(67), 1,
      anon_sym_LT_LT,
    ACTIONS(69), 1,
      anon_sym_LT_LT_LT2,
    ACTIONS(71), 1,
      anon_sym_LT_LT_LT_LT,
    ACTIONS(73), 1,
      anon_sym_LT_LT_LT_LT_LT,
    ACTIONS(75), 1,
      anon_sym_LT_LT_LT_LT_LT_LT,
    ACTIONS(77), 1,
      anon_sym_LT_LT_LT_LT_LT_LT_LT,
    STATE(338), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [200] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(310), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [238] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(247), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [276] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(40), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [314] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(9), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [352] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(294), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [390] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(9), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [428] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(291), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [466] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_inline_content,
    STATE(45), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(208), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [504] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(290), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [542] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(313), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [580] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(16), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [618] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(298), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [656] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(16), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [694] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(289), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [732] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(20), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [770] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(330), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [808] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(329), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [846] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(328), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [884] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(327), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [922] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(326), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [960] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(325), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [998] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(324), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1036] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(53), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1074] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(20), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1112] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(244), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1150] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(31), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1188] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(315), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1226] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(31), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1264] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(242), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1302] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(35), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1340] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(245), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1378] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    ACTIONS(79), 1,
      anon_sym_POUND_POUND,
    STATE(210), 1,
      sym_inline_content,
    STATE(35), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1416] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(246), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1454] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(250), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1492] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(40), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1530] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(331), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1568] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(274), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1606] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(248), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1644] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(335), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1682] = 10,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(210), 1,
      sym_inline_content,
    STATE(45), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(208), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1720] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(314), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1758] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(273), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1796] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(272), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1834] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(249), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1872] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(332), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1910] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(271), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1948] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(270), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [1986] = 10,
    ACTIONS(84), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(89), 1,
      aux_sym_heading_token1,
    ACTIONS(92), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(95), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(53), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(81), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2024] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(269), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2062] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(268), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2100] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(266), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2138] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(265), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2176] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(264), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2214] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(263), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2252] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(241), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2290] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(261), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2328] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(260), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2366] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(258), 1,
      sym_block_list,
    STATE(8), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(203), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2404] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(257), 1,
      sym_block_list,
    STATE(11), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(201), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2442] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(256), 1,
      sym_block_list,
    STATE(18), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(199), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2480] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(255), 1,
      sym_block_list,
    STATE(29), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(204), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2518] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(254), 1,
      sym_block_list,
    STATE(33), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(198), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2556] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(253), 1,
      sym_block_list,
    STATE(37), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(202), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2594] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(252), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2632] = 10,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(11), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(17), 1,
      sym__first_ordered_list_token,
    STATE(210), 1,
      sym_inline_content,
    STATE(340), 1,
      sym_block_list,
    STATE(28), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(209), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [2670] = 9,
    ACTIONS(104), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(108), 1,
      sym_checkbox_empty,
    STATE(180), 1,
      sym_inline_content,
    STATE(216), 1,
      sym_ordered_list_item,
    STATE(339), 1,
      sym_checkbox,
    STATE(341), 1,
      sym_checkbox_done,
    ACTIONS(106), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(82), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(102), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [2702] = 9,
    ACTIONS(108), 1,
      sym_checkbox_empty,
    ACTIONS(112), 1,
      anon_sym_LT_LT_LT,
    STATE(194), 1,
      sym_inline_content,
    STATE(217), 1,
      sym_ordered_list_item,
    STATE(277), 1,
      sym_checkbox,
    STATE(341), 1,
      sym_checkbox_done,
    ACTIONS(106), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(127), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(110), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [2734] = 9,
    ACTIONS(104), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(108), 1,
      sym_checkbox_empty,
    STATE(180), 1,
      sym_inline_content,
    STATE(207), 1,
      sym_ordered_list_item,
    STATE(339), 1,
      sym_checkbox,
    STATE(341), 1,
      sym_checkbox_done,
    ACTIONS(106), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(82), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(102), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [2766] = 9,
    ACTIONS(108), 1,
      sym_checkbox_empty,
    ACTIONS(112), 1,
      anon_sym_LT_LT_LT,
    STATE(194), 1,
      sym_inline_content,
    STATE(223), 1,
      sym_ordered_list_item,
    STATE(277), 1,
      sym_checkbox,
    STATE(341), 1,
      sym_checkbox_done,
    ACTIONS(106), 2,
      anon_sym_LBRACKx_RBRACK,
      anon_sym_LBRACKX_RBRACK,
    STATE(127), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(110), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [2798] = 4,
    ACTIONS(114), 1,
      aux_sym__blank_line_token1,
    STATE(75), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2819] = 5,
    ACTIONS(121), 1,
      aux_sym__blank_line_token1,
    ACTIONS(127), 1,
      sym__eof,
    STATE(89), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2842] = 5,
    ACTIONS(129), 1,
      aux_sym__blank_line_token1,
    ACTIONS(131), 1,
      sym__eof,
    STATE(80), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2865] = 5,
    ACTIONS(138), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(133), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(78), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(135), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(141), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [2888] = 4,
    ACTIONS(143), 1,
      aux_sym__blank_line_token1,
    STATE(79), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(119), 6,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2909] = 4,
    ACTIONS(146), 1,
      aux_sym__blank_line_token1,
    STATE(80), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2930] = 5,
    ACTIONS(149), 1,
      aux_sym__blank_line_token1,
    ACTIONS(151), 1,
      sym__eof,
    STATE(75), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2953] = 5,
    ACTIONS(104), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(153), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(78), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(155), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(157), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [2976] = 5,
    ACTIONS(159), 1,
      aux_sym__blank_line_token1,
    ACTIONS(161), 1,
      sym__eof,
    STATE(84), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [2999] = 4,
    ACTIONS(163), 1,
      aux_sym__blank_line_token1,
    STATE(84), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3020] = 5,
    ACTIONS(166), 1,
      aux_sym__blank_line_token1,
    ACTIONS(168), 1,
      sym__eof,
    STATE(86), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3043] = 4,
    ACTIONS(170), 1,
      aux_sym__blank_line_token1,
    STATE(86), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3064] = 5,
    ACTIONS(173), 1,
      aux_sym__blank_line_token1,
    ACTIONS(175), 1,
      sym__eof,
    STATE(88), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3087] = 4,
    ACTIONS(177), 1,
      aux_sym__blank_line_token1,
    STATE(88), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3108] = 4,
    ACTIONS(180), 1,
      aux_sym__blank_line_token1,
    STATE(89), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3129] = 5,
    ACTIONS(183), 1,
      aux_sym__blank_line_token1,
    ACTIONS(185), 1,
      sym__eof,
    STATE(92), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3152] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(187), 1,
      sym__eof,
    STATE(79), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(123), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(125), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3175] = 4,
    ACTIONS(189), 1,
      aux_sym__blank_line_token1,
    STATE(92), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(117), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(119), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [3196] = 10,
    ACTIONS(192), 1,
      sym__raw,
    ACTIONS(194), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    ACTIONS(198), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(200), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(202), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(204), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(206), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(287), 1,
      sym_script_content,
    STATE(100), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3228] = 10,
    ACTIONS(208), 1,
      sym__raw,
    ACTIONS(211), 1,
      anon_sym_POUND,
    ACTIONS(214), 1,
      anon_sym_POUND_POUND,
    ACTIONS(217), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(220), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(223), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(226), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(229), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(232), 1,
      anon_sym_GT_GT_GT_GT_GT,
    STATE(94), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3260] = 10,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(302), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3292] = 10,
    ACTIONS(232), 1,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
    ACTIONS(234), 1,
      sym__raw,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_POUND_POUND,
    ACTIONS(243), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(246), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(249), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(252), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(255), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(96), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3324] = 10,
    ACTIONS(258), 1,
      sym__raw,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND_POUND,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(266), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(268), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(270), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(272), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(301), 1,
      sym_script_content,
    STATE(126), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3356] = 10,
    ACTIONS(274), 1,
      sym__raw,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(280), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(282), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(284), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(286), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(288), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(300), 1,
      sym_script_content,
    STATE(112), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3388] = 10,
    ACTIONS(290), 1,
      sym__raw,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      anon_sym_POUND_POUND,
    ACTIONS(296), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(300), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(302), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(304), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(304), 1,
      sym_script_content,
    STATE(111), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3420] = 10,
    ACTIONS(194), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    ACTIONS(198), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(200), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(202), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(204), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(206), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(306), 1,
      sym__raw,
    ACTIONS(308), 1,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
    STATE(96), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3452] = 10,
    ACTIONS(310), 1,
      sym__raw,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(318), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(320), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(322), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(324), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(303), 1,
      sym_script_content,
    STATE(119), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3484] = 10,
    ACTIONS(326), 1,
      sym__raw,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(334), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(336), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(286), 1,
      sym_script_content,
    STATE(105), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3516] = 10,
    ACTIONS(232), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    ACTIONS(342), 1,
      sym__raw,
    ACTIONS(345), 1,
      anon_sym_POUND,
    ACTIONS(348), 1,
      anon_sym_POUND_POUND,
    ACTIONS(351), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(354), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(357), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(360), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(363), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(103), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3548] = 10,
    ACTIONS(290), 1,
      sym__raw,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      anon_sym_POUND_POUND,
    ACTIONS(296), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(300), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(302), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(304), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(285), 1,
      sym_script_content,
    STATE(111), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3580] = 10,
    ACTIONS(308), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(334), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(336), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(366), 1,
      sym__raw,
    STATE(103), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3612] = 10,
    ACTIONS(310), 1,
      sym__raw,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(318), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(320), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(322), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(324), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(284), 1,
      sym_script_content,
    STATE(119), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3644] = 10,
    ACTIONS(326), 1,
      sym__raw,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(334), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(336), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(305), 1,
      sym_script_content,
    STATE(105), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3676] = 10,
    ACTIONS(274), 1,
      sym__raw,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(280), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(282), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(284), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(286), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(288), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(323), 1,
      sym_script_content,
    STATE(112), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3708] = 10,
    ACTIONS(192), 1,
      sym__raw,
    ACTIONS(194), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    ACTIONS(198), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(200), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(202), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(204), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(206), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(306), 1,
      sym_script_content,
    STATE(100), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3740] = 10,
    ACTIONS(258), 1,
      sym__raw,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND_POUND,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(266), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(268), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(270), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(272), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(322), 1,
      sym_script_content,
    STATE(126), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3772] = 10,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      anon_sym_POUND_POUND,
    ACTIONS(296), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(300), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(302), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(304), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(308), 1,
      anon_sym_GT_GT_GT_GT_GT,
    ACTIONS(368), 1,
      sym__raw,
    STATE(94), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3804] = 10,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(280), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(282), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(284), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(286), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(288), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(308), 1,
      anon_sym_GT,
    ACTIONS(370), 1,
      sym__raw,
    STATE(122), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3836] = 10,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(321), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3868] = 10,
    ACTIONS(310), 1,
      sym__raw,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(318), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(320), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(322), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(324), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(320), 1,
      sym_script_content,
    STATE(119), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3900] = 10,
    ACTIONS(232), 1,
      anon_sym_GT_GT_GT,
    ACTIONS(372), 1,
      sym__raw,
    ACTIONS(375), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_POUND_POUND,
    ACTIONS(381), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(384), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(387), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(390), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(393), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(115), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3932] = 10,
    ACTIONS(232), 1,
      anon_sym_GT_GT_GT_GT,
    ACTIONS(396), 1,
      sym__raw,
    ACTIONS(399), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      anon_sym_POUND_POUND,
    ACTIONS(405), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(408), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(411), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(414), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(417), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(116), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3964] = 10,
    ACTIONS(290), 1,
      sym__raw,
    ACTIONS(292), 1,
      anon_sym_POUND,
    ACTIONS(294), 1,
      anon_sym_POUND_POUND,
    ACTIONS(296), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(298), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(300), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(302), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(304), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(319), 1,
      sym_script_content,
    STATE(111), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [3996] = 10,
    ACTIONS(326), 1,
      sym__raw,
    ACTIONS(328), 1,
      anon_sym_POUND,
    ACTIONS(330), 1,
      anon_sym_POUND_POUND,
    ACTIONS(332), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(334), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(336), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(338), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(340), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(318), 1,
      sym_script_content,
    STATE(105), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4028] = 10,
    ACTIONS(308), 1,
      anon_sym_GT_GT_GT_GT,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_POUND_POUND,
    ACTIONS(316), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(318), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(320), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(322), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(324), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(420), 1,
      sym__raw,
    STATE(116), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4060] = 10,
    ACTIONS(192), 1,
      sym__raw,
    ACTIONS(194), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_POUND_POUND,
    ACTIONS(198), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(200), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(202), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(204), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(206), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(317), 1,
      sym_script_content,
    STATE(100), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4092] = 10,
    ACTIONS(21), 1,
      sym__raw,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(283), 1,
      sym_script_content,
    STATE(125), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4124] = 10,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(422), 1,
      sym__raw,
    ACTIONS(425), 1,
      anon_sym_POUND,
    ACTIONS(428), 1,
      anon_sym_POUND_POUND,
    ACTIONS(431), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(434), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(437), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(440), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(443), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(122), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4156] = 10,
    ACTIONS(232), 1,
      anon_sym_GT_GT,
    ACTIONS(446), 1,
      sym__raw,
    ACTIONS(449), 1,
      anon_sym_POUND,
    ACTIONS(452), 1,
      anon_sym_POUND_POUND,
    ACTIONS(455), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(458), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(461), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(464), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(467), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(123), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4188] = 5,
    ACTIONS(133), 1,
      sym__newline_token,
    ACTIONS(473), 1,
      anon_sym_LT_LT_LT,
    STATE(124), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(470), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(141), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [4210] = 10,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_POUND_POUND,
    ACTIONS(27), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(29), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(31), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(33), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(35), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(308), 1,
      anon_sym_GT_GT_GT,
    ACTIONS(476), 1,
      sym__raw,
    STATE(115), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4242] = 10,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND_POUND,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(266), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(268), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(270), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(272), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(308), 1,
      anon_sym_GT_GT,
    ACTIONS(478), 1,
      sym__raw,
    STATE(123), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4274] = 5,
    ACTIONS(112), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(153), 1,
      sym__newline_token,
    STATE(124), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(480), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(157), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [4296] = 10,
    ACTIONS(258), 1,
      sym__raw,
    ACTIONS(260), 1,
      anon_sym_POUND,
    ACTIONS(262), 1,
      anon_sym_POUND_POUND,
    ACTIONS(264), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(266), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(268), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(270), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(272), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(282), 1,
      sym_script_content,
    STATE(126), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4328] = 10,
    ACTIONS(274), 1,
      sym__raw,
    ACTIONS(276), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_POUND_POUND,
    ACTIONS(280), 1,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(282), 1,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(284), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(286), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(288), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    STATE(281), 1,
      sym_script_content,
    STATE(112), 2,
      sym_script_interpolation,
      aux_sym_script_content_repeat1,
  [4360] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4375] = 2,
    ACTIONS(486), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(488), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [4390] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4405] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4420] = 2,
    ACTIONS(482), 4,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(484), 6,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4435] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4450] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4465] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4480] = 2,
    ACTIONS(490), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(492), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [4495] = 2,
    ACTIONS(482), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(484), 5,
      sym__eof,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4510] = 2,
    ACTIONS(486), 4,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(488), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [4524] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT_GT_GT,
  [4536] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
  [4548] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(496), 1,
      aux_sym__blank_line_token1,
    ACTIONS(498), 1,
      sym__eof,
    STATE(226), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4570] = 5,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(157), 1,
      sym__eof,
    ACTIONS(153), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(150), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(500), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4590] = 2,
    ACTIONS(490), 4,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(492), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      anon_sym_LT_LT_LT,
  [4604] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT_GT,
  [4616] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [4628] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT,
  [4640] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(502), 1,
      aux_sym__blank_line_token1,
    ACTIONS(504), 1,
      sym__eof,
    STATE(226), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4662] = 5,
    ACTIONS(141), 1,
      sym__eof,
    ACTIONS(509), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(133), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    STATE(150), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(506), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4682] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT_GT_GT_GT_GT,
  [4694] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(512), 1,
      aux_sym__blank_line_token1,
    ACTIONS(514), 1,
      sym__eof,
    STATE(226), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4716] = 1,
    ACTIONS(494), 9,
      sym__raw,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
      anon_sym_GT,
  [4728] = 6,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    ACTIONS(516), 1,
      aux_sym__blank_line_token1,
    ACTIONS(518), 1,
      sym__eof,
    STATE(226), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [4750] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4763] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4776] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4789] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4802] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4815] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4828] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4841] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4854] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4867] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4880] = 2,
    ACTIONS(520), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(522), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4893] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4906] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4919] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4932] = 2,
    ACTIONS(528), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(530), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4945] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4958] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4971] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4984] = 2,
    ACTIONS(524), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(526), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [4997] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [5010] = 2,
    ACTIONS(524), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(526), 5,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [5023] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [5036] = 2,
    ACTIONS(520), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND,
    ACTIONS(522), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [5049] = 2,
    ACTIONS(528), 4,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
    ACTIONS(530), 4,
      sym__first_ordered_list_token,
      anon_sym_LT_LT_LT,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [5062] = 4,
    ACTIONS(112), 1,
      anon_sym_LT_LT_LT,
    STATE(197), 1,
      sym_inline_content,
    STATE(127), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(110), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5078] = 5,
    ACTIONS(532), 1,
      aux_sym__blank_line_token1,
    ACTIONS(536), 1,
      sym__indent,
    ACTIONS(538), 1,
      sym__list_item_content_cont,
    STATE(190), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(534), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5096] = 5,
    ACTIONS(538), 1,
      sym__list_item_content_cont,
    ACTIONS(540), 1,
      aux_sym__blank_line_token1,
    ACTIONS(544), 1,
      sym__indent,
    STATE(188), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(542), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5114] = 4,
    ACTIONS(104), 1,
      anon_sym_LT_LT_LT,
    STATE(192), 1,
      sym_inline_content,
    STATE(82), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(102), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5130] = 4,
    ACTIONS(546), 1,
      aux_sym__blank_line_token1,
    ACTIONS(550), 1,
      sym__list_item_content_cont,
    STATE(183), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(548), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5146] = 4,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    STATE(214), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5162] = 4,
    ACTIONS(112), 1,
      anon_sym_LT_LT_LT,
    STATE(206), 1,
      sym_inline_content,
    STATE(127), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(110), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5178] = 2,
    ACTIONS(492), 2,
      sym__eof,
      anon_sym_LT_LT_LT,
    ACTIONS(490), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
  [5190] = 2,
    ACTIONS(488), 2,
      sym__eof,
      anon_sym_LT_LT_LT,
    ACTIONS(486), 5,
      aux_sym__blank_line_token1,
      sym_inline_text,
      sym__newline_token,
      sym_uri_autolink,
      sym_email_autolink,
  [5202] = 5,
    ACTIONS(538), 1,
      sym__list_item_content_cont,
    ACTIONS(553), 1,
      aux_sym__blank_line_token1,
    ACTIONS(557), 1,
      sym__indent,
    STATE(183), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(555), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5220] = 4,
    ACTIONS(104), 1,
      anon_sym_LT_LT_LT,
    STATE(181), 1,
      sym_inline_content,
    STATE(82), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(102), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5236] = 5,
    ACTIONS(538), 1,
      sym__list_item_content_cont,
    ACTIONS(559), 1,
      aux_sym__blank_line_token1,
    ACTIONS(563), 1,
      sym__indent,
    STATE(183), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(561), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5254] = 4,
    ACTIONS(9), 1,
      anon_sym_LT_LT_LT,
    STATE(226), 1,
      sym_inline_content,
    STATE(144), 2,
      sym_scripting,
      aux_sym_inline_content_repeat1,
    ACTIONS(7), 3,
      sym_inline_text,
      sym_uri_autolink,
      sym_email_autolink,
  [5270] = 2,
    ACTIONS(565), 1,
      aux_sym__blank_line_token1,
    ACTIONS(567), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [5281] = 3,
    ACTIONS(569), 1,
      sym__list_item_content_cont,
    STATE(193), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(548), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5294] = 4,
    ACTIONS(572), 1,
      sym__indent,
    ACTIONS(574), 1,
      sym__list_item_content_cont,
    STATE(195), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(534), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5309] = 4,
    ACTIONS(574), 1,
      sym__list_item_content_cont,
    ACTIONS(576), 1,
      sym__indent,
    STATE(193), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(561), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5324] = 4,
    ACTIONS(574), 1,
      sym__list_item_content_cont,
    ACTIONS(578), 1,
      sym__indent,
    STATE(193), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(555), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5339] = 4,
    ACTIONS(574), 1,
      sym__list_item_content_cont,
    ACTIONS(580), 1,
      sym__indent,
    STATE(196), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(542), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5354] = 4,
    ACTIONS(582), 1,
      aux_sym__blank_line_token1,
    ACTIONS(584), 1,
      sym__eof,
    STATE(170), 1,
      sym__block_separator,
    STATE(83), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5368] = 4,
    ACTIONS(586), 1,
      aux_sym__blank_line_token1,
    ACTIONS(588), 1,
      sym__eof,
    STATE(172), 1,
      sym__block_separator,
    STATE(87), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5382] = 4,
    ACTIONS(590), 1,
      aux_sym__blank_line_token1,
    ACTIONS(594), 1,
      sym__next_ordered_list_token,
    STATE(200), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(592), 2,
      sym__eof,
      sym__newline_token,
  [5396] = 4,
    ACTIONS(597), 1,
      aux_sym__blank_line_token1,
    ACTIONS(599), 1,
      sym__eof,
    STATE(164), 1,
      sym__block_separator,
    STATE(90), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5410] = 4,
    ACTIONS(601), 1,
      aux_sym__blank_line_token1,
    ACTIONS(603), 1,
      sym__eof,
    STATE(161), 1,
      sym__block_separator,
    STATE(81), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5424] = 4,
    ACTIONS(605), 1,
      aux_sym__blank_line_token1,
    ACTIONS(607), 1,
      sym__eof,
    STATE(178), 1,
      sym__block_separator,
    STATE(77), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5438] = 4,
    ACTIONS(609), 1,
      aux_sym__blank_line_token1,
    ACTIONS(611), 1,
      sym__eof,
    STATE(162), 1,
      sym__block_separator,
    STATE(85), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5452] = 5,
    ACTIONS(613), 1,
      aux_sym__blank_line_token1,
    ACTIONS(615), 1,
      sym__newline_token,
    ACTIONS(617), 1,
      sym__eof,
    ACTIONS(619), 1,
      sym__next_ordered_list_token,
    STATE(200), 1,
      aux_sym_ordered_list_repeat1,
  [5468] = 1,
    ACTIONS(567), 5,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [5476] = 5,
    ACTIONS(619), 1,
      sym__next_ordered_list_token,
    ACTIONS(621), 1,
      aux_sym__blank_line_token1,
    ACTIONS(623), 1,
      sym__newline_token,
    ACTIONS(625), 1,
      sym__eof,
    STATE(205), 1,
      aux_sym_ordered_list_repeat1,
  [5492] = 4,
    ACTIONS(627), 1,
      aux_sym__blank_line_token1,
    ACTIONS(629), 1,
      sym__eof,
    STATE(169), 1,
      sym__block_separator,
    STATE(91), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5506] = 4,
    ACTIONS(631), 1,
      aux_sym__blank_line_token1,
    ACTIONS(633), 1,
      sym__eof,
    STATE(160), 1,
      sym__block_separator,
    STATE(76), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [5520] = 4,
    ACTIONS(635), 1,
      aux_sym__blank_line_token1,
    ACTIONS(637), 1,
      sym__newline_token,
    ACTIONS(639), 1,
      sym__eof,
    STATE(212), 1,
      aux_sym_paragraph_repeat1,
  [5533] = 4,
    ACTIONS(617), 1,
      sym__dedent,
    ACTIONS(641), 1,
      sym__newline_token,
    ACTIONS(643), 1,
      sym__next_ordered_list_token,
    STATE(213), 1,
      aux_sym_ordered_list_repeat1,
  [5546] = 4,
    ACTIONS(645), 1,
      aux_sym__blank_line_token1,
    ACTIONS(647), 1,
      sym__newline_token,
    ACTIONS(649), 1,
      sym__eof,
    STATE(215), 1,
      aux_sym_paragraph_repeat1,
  [5559] = 3,
    ACTIONS(651), 1,
      sym__next_ordered_list_token,
    STATE(213), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(592), 2,
      sym__dedent,
      sym__newline_token,
  [5570] = 4,
    ACTIONS(654), 1,
      aux_sym__blank_line_token1,
    ACTIONS(656), 1,
      sym__newline_token,
    ACTIONS(658), 1,
      sym__eof,
    STATE(218), 1,
      aux_sym_paragraph_repeat1,
  [5583] = 4,
    ACTIONS(660), 1,
      aux_sym__blank_line_token1,
    ACTIONS(662), 1,
      sym__newline_token,
    ACTIONS(665), 1,
      sym__eof,
    STATE(215), 1,
      aux_sym_paragraph_repeat1,
  [5596] = 2,
    ACTIONS(590), 1,
      aux_sym__blank_line_token1,
    ACTIONS(592), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5605] = 4,
    ACTIONS(625), 1,
      sym__dedent,
    ACTIONS(643), 1,
      sym__next_ordered_list_token,
    ACTIONS(667), 1,
      sym__newline_token,
    STATE(211), 1,
      aux_sym_ordered_list_repeat1,
  [5618] = 4,
    ACTIONS(669), 1,
      aux_sym__blank_line_token1,
    ACTIONS(671), 1,
      sym__newline_token,
    ACTIONS(673), 1,
      sym__eof,
    STATE(215), 1,
      aux_sym_paragraph_repeat1,
  [5631] = 2,
    ACTIONS(675), 1,
      aux_sym__blank_line_token1,
    ACTIONS(677), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5640] = 2,
    ACTIONS(679), 1,
      aux_sym__blank_line_token1,
    ACTIONS(681), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5649] = 2,
    ACTIONS(683), 1,
      aux_sym__blank_line_token1,
    ACTIONS(685), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5658] = 2,
    ACTIONS(687), 1,
      aux_sym__blank_line_token1,
    ACTIONS(689), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5667] = 1,
    ACTIONS(592), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5673] = 1,
    ACTIONS(681), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5679] = 3,
    ACTIONS(691), 1,
      aux_sym__blank_line_token1,
    ACTIONS(693), 1,
      sym__newline_token,
    ACTIONS(695), 1,
      sym__eof,
  [5689] = 2,
    ACTIONS(660), 1,
      aux_sym__blank_line_token1,
    ACTIONS(665), 2,
      sym__eof,
      sym__newline_token,
  [5697] = 1,
    ACTIONS(677), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5703] = 1,
    ACTIONS(685), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5709] = 1,
    ACTIONS(689), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [5715] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(299), 1,
      sym_ordered_list,
  [5722] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(278), 1,
      sym_ordered_list,
  [5729] = 1,
    ACTIONS(699), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [5734] = 1,
    ACTIONS(701), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [5739] = 1,
    ACTIONS(703), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [5744] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(343), 1,
      sym_ordered_list,
  [5751] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(279), 1,
      sym_ordered_list,
  [5758] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(262), 1,
      sym_ordered_list,
  [5765] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(316), 1,
      sym_ordered_list,
  [5772] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(307), 1,
      sym_ordered_list,
  [5779] = 2,
    ACTIONS(697), 1,
      sym__first_ordered_list_token,
    STATE(309), 1,
      sym_ordered_list,
  [5786] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND_POUND,
  [5790] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [5794] = 1,
    ACTIONS(709), 1,
      sym__newline_token,
  [5798] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND,
  [5802] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND,
  [5806] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND_POUND,
  [5810] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [5814] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [5818] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [5822] = 1,
    ACTIONS(711), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [5826] = 1,
    ACTIONS(713), 1,
      sym__newline_token,
  [5830] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND,
  [5834] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND,
  [5838] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND_POUND,
  [5842] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [5846] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [5850] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [5854] = 1,
    ACTIONS(715), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [5858] = 1,
    ACTIONS(717), 1,
      sym__newline_token,
  [5862] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND,
  [5866] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND,
  [5870] = 1,
    ACTIONS(719), 1,
      sym__dedent,
  [5874] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [5878] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [5882] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [5886] = 1,
    ACTIONS(705), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [5890] = 1,
    ACTIONS(721), 1,
      sym__newline_token,
  [5894] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND,
  [5898] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND,
  [5902] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND_POUND,
  [5906] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [5910] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [5914] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [5918] = 1,
    ACTIONS(723), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [5922] = 1,
    ACTIONS(725), 1,
      sym__newline_token,
  [5926] = 1,
    ACTIONS(727), 1,
      sym__newline_token,
  [5930] = 1,
    ACTIONS(729), 1,
      sym__inline_whitespace,
  [5934] = 1,
    ACTIONS(731), 1,
      sym__dedent,
  [5938] = 1,
    ACTIONS(733), 1,
      sym__dedent,
  [5942] = 1,
    ACTIONS(735), 1,
      sym__newline_token,
  [5946] = 1,
    ACTIONS(737), 1,
      anon_sym_GT,
  [5950] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT,
  [5954] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT_GT,
  [5958] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT_GT_GT,
  [5962] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT_GT_GT_GT,
  [5966] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [5970] = 1,
    ACTIONS(737), 1,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
  [5974] = 1,
    ACTIONS(739), 1,
      sym__newline_token,
  [5978] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [5982] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [5986] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [5990] = 1,
    ACTIONS(703), 1,
      sym__dedent,
  [5994] = 1,
    ACTIONS(743), 1,
      sym__newline_token,
  [5998] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [6002] = 1,
    ACTIONS(745), 1,
      sym__newline_token,
  [6006] = 1,
    ACTIONS(747), 1,
      anon_sym_GT_GT_GT,
  [6010] = 1,
    ACTIONS(749), 1,
      anon_sym_GT_GT_GT,
  [6014] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND_POUND,
  [6018] = 1,
    ACTIONS(751), 1,
      sym__dedent,
  [6022] = 1,
    ACTIONS(753), 1,
      anon_sym_GT,
  [6026] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT,
  [6030] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT_GT,
  [6034] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT_GT_GT,
  [6038] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT_GT_GT_GT,
  [6042] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [6046] = 1,
    ACTIONS(753), 1,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
  [6050] = 1,
    ACTIONS(755), 1,
      sym__dedent,
  [6054] = 1,
    ACTIONS(757), 1,
      anon_sym_GT_GT_GT,
  [6058] = 1,
    ACTIONS(759), 1,
      sym__dedent,
  [6062] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND_POUND,
  [6066] = 1,
    ACTIONS(761), 1,
      sym__newline_token,
  [6070] = 1,
    ACTIONS(763), 1,
      sym__newline_token,
  [6074] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [6078] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [6082] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [6086] = 1,
    ACTIONS(765), 1,
      sym__dedent,
  [6090] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT_GT_GT_GT_GT_GT,
  [6094] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [6098] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT_GT_GT_GT,
  [6102] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT_GT_GT,
  [6106] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT_GT,
  [6110] = 1,
    ACTIONS(767), 1,
      anon_sym_GT_GT,
  [6114] = 1,
    ACTIONS(767), 1,
      anon_sym_GT,
  [6118] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND_POUND,
  [6122] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND_POUND,
  [6126] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND_POUND_POUND_POUND,
  [6130] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND_POUND_POUND,
  [6134] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND_POUND,
  [6138] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND_POUND,
  [6142] = 1,
    ACTIONS(769), 1,
      anon_sym_POUND,
  [6146] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND_POUND,
  [6150] = 1,
    ACTIONS(741), 1,
      anon_sym_POUND,
  [6154] = 1,
    ACTIONS(771), 1,
      sym__newline_token,
  [6158] = 1,
    ACTIONS(773), 1,
      sym__newline_token,
  [6162] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND_POUND,
  [6166] = 1,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
  [6170] = 1,
    ACTIONS(777), 1,
      anon_sym_GT_GT_GT,
  [6174] = 1,
    ACTIONS(779), 1,
      anon_sym_GT_GT_GT,
  [6178] = 1,
    ACTIONS(781), 1,
      sym__inline_whitespace,
  [6182] = 1,
    ACTIONS(707), 1,
      anon_sym_POUND,
  [6186] = 1,
    ACTIONS(783), 1,
      sym__inline_whitespace,
  [6190] = 1,
    ACTIONS(785), 1,
      sym__newline_token,
  [6194] = 1,
    ACTIONS(787), 1,
      sym__dedent,
  [6198] = 1,
    ACTIONS(789), 1,
      sym__newline_token,
  [6202] = 1,
    ACTIONS(791), 1,
      sym__newline_token,
  [6206] = 1,
    ACTIONS(793), 1,
      sym__inline_whitespace,
  [6210] = 1,
    ACTIONS(701), 1,
      sym__dedent,
  [6214] = 1,
    ACTIONS(795), 1,
      anon_sym_GT_GT_GT,
  [6218] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [6222] = 1,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
  [6226] = 1,
    ACTIONS(799), 1,
      sym__newline_token,
  [6230] = 1,
    ACTIONS(801), 1,
      sym__inline_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 276,
  [SMALL_STATE(9)] = 314,
  [SMALL_STATE(10)] = 352,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 428,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 542,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 618,
  [SMALL_STATE(18)] = 656,
  [SMALL_STATE(19)] = 694,
  [SMALL_STATE(20)] = 732,
  [SMALL_STATE(21)] = 770,
  [SMALL_STATE(22)] = 808,
  [SMALL_STATE(23)] = 846,
  [SMALL_STATE(24)] = 884,
  [SMALL_STATE(25)] = 922,
  [SMALL_STATE(26)] = 960,
  [SMALL_STATE(27)] = 998,
  [SMALL_STATE(28)] = 1036,
  [SMALL_STATE(29)] = 1074,
  [SMALL_STATE(30)] = 1112,
  [SMALL_STATE(31)] = 1150,
  [SMALL_STATE(32)] = 1188,
  [SMALL_STATE(33)] = 1226,
  [SMALL_STATE(34)] = 1264,
  [SMALL_STATE(35)] = 1302,
  [SMALL_STATE(36)] = 1340,
  [SMALL_STATE(37)] = 1378,
  [SMALL_STATE(38)] = 1416,
  [SMALL_STATE(39)] = 1454,
  [SMALL_STATE(40)] = 1492,
  [SMALL_STATE(41)] = 1530,
  [SMALL_STATE(42)] = 1568,
  [SMALL_STATE(43)] = 1606,
  [SMALL_STATE(44)] = 1644,
  [SMALL_STATE(45)] = 1682,
  [SMALL_STATE(46)] = 1720,
  [SMALL_STATE(47)] = 1758,
  [SMALL_STATE(48)] = 1796,
  [SMALL_STATE(49)] = 1834,
  [SMALL_STATE(50)] = 1872,
  [SMALL_STATE(51)] = 1910,
  [SMALL_STATE(52)] = 1948,
  [SMALL_STATE(53)] = 1986,
  [SMALL_STATE(54)] = 2024,
  [SMALL_STATE(55)] = 2062,
  [SMALL_STATE(56)] = 2100,
  [SMALL_STATE(57)] = 2138,
  [SMALL_STATE(58)] = 2176,
  [SMALL_STATE(59)] = 2214,
  [SMALL_STATE(60)] = 2252,
  [SMALL_STATE(61)] = 2290,
  [SMALL_STATE(62)] = 2328,
  [SMALL_STATE(63)] = 2366,
  [SMALL_STATE(64)] = 2404,
  [SMALL_STATE(65)] = 2442,
  [SMALL_STATE(66)] = 2480,
  [SMALL_STATE(67)] = 2518,
  [SMALL_STATE(68)] = 2556,
  [SMALL_STATE(69)] = 2594,
  [SMALL_STATE(70)] = 2632,
  [SMALL_STATE(71)] = 2670,
  [SMALL_STATE(72)] = 2702,
  [SMALL_STATE(73)] = 2734,
  [SMALL_STATE(74)] = 2766,
  [SMALL_STATE(75)] = 2798,
  [SMALL_STATE(76)] = 2819,
  [SMALL_STATE(77)] = 2842,
  [SMALL_STATE(78)] = 2865,
  [SMALL_STATE(79)] = 2888,
  [SMALL_STATE(80)] = 2909,
  [SMALL_STATE(81)] = 2930,
  [SMALL_STATE(82)] = 2953,
  [SMALL_STATE(83)] = 2976,
  [SMALL_STATE(84)] = 2999,
  [SMALL_STATE(85)] = 3020,
  [SMALL_STATE(86)] = 3043,
  [SMALL_STATE(87)] = 3064,
  [SMALL_STATE(88)] = 3087,
  [SMALL_STATE(89)] = 3108,
  [SMALL_STATE(90)] = 3129,
  [SMALL_STATE(91)] = 3152,
  [SMALL_STATE(92)] = 3175,
  [SMALL_STATE(93)] = 3196,
  [SMALL_STATE(94)] = 3228,
  [SMALL_STATE(95)] = 3260,
  [SMALL_STATE(96)] = 3292,
  [SMALL_STATE(97)] = 3324,
  [SMALL_STATE(98)] = 3356,
  [SMALL_STATE(99)] = 3388,
  [SMALL_STATE(100)] = 3420,
  [SMALL_STATE(101)] = 3452,
  [SMALL_STATE(102)] = 3484,
  [SMALL_STATE(103)] = 3516,
  [SMALL_STATE(104)] = 3548,
  [SMALL_STATE(105)] = 3580,
  [SMALL_STATE(106)] = 3612,
  [SMALL_STATE(107)] = 3644,
  [SMALL_STATE(108)] = 3676,
  [SMALL_STATE(109)] = 3708,
  [SMALL_STATE(110)] = 3740,
  [SMALL_STATE(111)] = 3772,
  [SMALL_STATE(112)] = 3804,
  [SMALL_STATE(113)] = 3836,
  [SMALL_STATE(114)] = 3868,
  [SMALL_STATE(115)] = 3900,
  [SMALL_STATE(116)] = 3932,
  [SMALL_STATE(117)] = 3964,
  [SMALL_STATE(118)] = 3996,
  [SMALL_STATE(119)] = 4028,
  [SMALL_STATE(120)] = 4060,
  [SMALL_STATE(121)] = 4092,
  [SMALL_STATE(122)] = 4124,
  [SMALL_STATE(123)] = 4156,
  [SMALL_STATE(124)] = 4188,
  [SMALL_STATE(125)] = 4210,
  [SMALL_STATE(126)] = 4242,
  [SMALL_STATE(127)] = 4274,
  [SMALL_STATE(128)] = 4296,
  [SMALL_STATE(129)] = 4328,
  [SMALL_STATE(130)] = 4360,
  [SMALL_STATE(131)] = 4375,
  [SMALL_STATE(132)] = 4390,
  [SMALL_STATE(133)] = 4405,
  [SMALL_STATE(134)] = 4420,
  [SMALL_STATE(135)] = 4435,
  [SMALL_STATE(136)] = 4450,
  [SMALL_STATE(137)] = 4465,
  [SMALL_STATE(138)] = 4480,
  [SMALL_STATE(139)] = 4495,
  [SMALL_STATE(140)] = 4510,
  [SMALL_STATE(141)] = 4524,
  [SMALL_STATE(142)] = 4536,
  [SMALL_STATE(143)] = 4548,
  [SMALL_STATE(144)] = 4570,
  [SMALL_STATE(145)] = 4590,
  [SMALL_STATE(146)] = 4604,
  [SMALL_STATE(147)] = 4616,
  [SMALL_STATE(148)] = 4628,
  [SMALL_STATE(149)] = 4640,
  [SMALL_STATE(150)] = 4662,
  [SMALL_STATE(151)] = 4682,
  [SMALL_STATE(152)] = 4694,
  [SMALL_STATE(153)] = 4716,
  [SMALL_STATE(154)] = 4728,
  [SMALL_STATE(155)] = 4750,
  [SMALL_STATE(156)] = 4763,
  [SMALL_STATE(157)] = 4776,
  [SMALL_STATE(158)] = 4789,
  [SMALL_STATE(159)] = 4802,
  [SMALL_STATE(160)] = 4815,
  [SMALL_STATE(161)] = 4828,
  [SMALL_STATE(162)] = 4841,
  [SMALL_STATE(163)] = 4854,
  [SMALL_STATE(164)] = 4867,
  [SMALL_STATE(165)] = 4880,
  [SMALL_STATE(166)] = 4893,
  [SMALL_STATE(167)] = 4906,
  [SMALL_STATE(168)] = 4919,
  [SMALL_STATE(169)] = 4932,
  [SMALL_STATE(170)] = 4945,
  [SMALL_STATE(171)] = 4958,
  [SMALL_STATE(172)] = 4971,
  [SMALL_STATE(173)] = 4984,
  [SMALL_STATE(174)] = 4997,
  [SMALL_STATE(175)] = 5010,
  [SMALL_STATE(176)] = 5023,
  [SMALL_STATE(177)] = 5036,
  [SMALL_STATE(178)] = 5049,
  [SMALL_STATE(179)] = 5062,
  [SMALL_STATE(180)] = 5078,
  [SMALL_STATE(181)] = 5096,
  [SMALL_STATE(182)] = 5114,
  [SMALL_STATE(183)] = 5130,
  [SMALL_STATE(184)] = 5146,
  [SMALL_STATE(185)] = 5162,
  [SMALL_STATE(186)] = 5178,
  [SMALL_STATE(187)] = 5190,
  [SMALL_STATE(188)] = 5202,
  [SMALL_STATE(189)] = 5220,
  [SMALL_STATE(190)] = 5236,
  [SMALL_STATE(191)] = 5254,
  [SMALL_STATE(192)] = 5270,
  [SMALL_STATE(193)] = 5281,
  [SMALL_STATE(194)] = 5294,
  [SMALL_STATE(195)] = 5309,
  [SMALL_STATE(196)] = 5324,
  [SMALL_STATE(197)] = 5339,
  [SMALL_STATE(198)] = 5354,
  [SMALL_STATE(199)] = 5368,
  [SMALL_STATE(200)] = 5382,
  [SMALL_STATE(201)] = 5396,
  [SMALL_STATE(202)] = 5410,
  [SMALL_STATE(203)] = 5424,
  [SMALL_STATE(204)] = 5438,
  [SMALL_STATE(205)] = 5452,
  [SMALL_STATE(206)] = 5468,
  [SMALL_STATE(207)] = 5476,
  [SMALL_STATE(208)] = 5492,
  [SMALL_STATE(209)] = 5506,
  [SMALL_STATE(210)] = 5520,
  [SMALL_STATE(211)] = 5533,
  [SMALL_STATE(212)] = 5546,
  [SMALL_STATE(213)] = 5559,
  [SMALL_STATE(214)] = 5570,
  [SMALL_STATE(215)] = 5583,
  [SMALL_STATE(216)] = 5596,
  [SMALL_STATE(217)] = 5605,
  [SMALL_STATE(218)] = 5618,
  [SMALL_STATE(219)] = 5631,
  [SMALL_STATE(220)] = 5640,
  [SMALL_STATE(221)] = 5649,
  [SMALL_STATE(222)] = 5658,
  [SMALL_STATE(223)] = 5667,
  [SMALL_STATE(224)] = 5673,
  [SMALL_STATE(225)] = 5679,
  [SMALL_STATE(226)] = 5689,
  [SMALL_STATE(227)] = 5697,
  [SMALL_STATE(228)] = 5703,
  [SMALL_STATE(229)] = 5709,
  [SMALL_STATE(230)] = 5715,
  [SMALL_STATE(231)] = 5722,
  [SMALL_STATE(232)] = 5729,
  [SMALL_STATE(233)] = 5734,
  [SMALL_STATE(234)] = 5739,
  [SMALL_STATE(235)] = 5744,
  [SMALL_STATE(236)] = 5751,
  [SMALL_STATE(237)] = 5758,
  [SMALL_STATE(238)] = 5765,
  [SMALL_STATE(239)] = 5772,
  [SMALL_STATE(240)] = 5779,
  [SMALL_STATE(241)] = 5786,
  [SMALL_STATE(242)] = 5790,
  [SMALL_STATE(243)] = 5794,
  [SMALL_STATE(244)] = 5798,
  [SMALL_STATE(245)] = 5802,
  [SMALL_STATE(246)] = 5806,
  [SMALL_STATE(247)] = 5810,
  [SMALL_STATE(248)] = 5814,
  [SMALL_STATE(249)] = 5818,
  [SMALL_STATE(250)] = 5822,
  [SMALL_STATE(251)] = 5826,
  [SMALL_STATE(252)] = 5830,
  [SMALL_STATE(253)] = 5834,
  [SMALL_STATE(254)] = 5838,
  [SMALL_STATE(255)] = 5842,
  [SMALL_STATE(256)] = 5846,
  [SMALL_STATE(257)] = 5850,
  [SMALL_STATE(258)] = 5854,
  [SMALL_STATE(259)] = 5858,
  [SMALL_STATE(260)] = 5862,
  [SMALL_STATE(261)] = 5866,
  [SMALL_STATE(262)] = 5870,
  [SMALL_STATE(263)] = 5874,
  [SMALL_STATE(264)] = 5878,
  [SMALL_STATE(265)] = 5882,
  [SMALL_STATE(266)] = 5886,
  [SMALL_STATE(267)] = 5890,
  [SMALL_STATE(268)] = 5894,
  [SMALL_STATE(269)] = 5898,
  [SMALL_STATE(270)] = 5902,
  [SMALL_STATE(271)] = 5906,
  [SMALL_STATE(272)] = 5910,
  [SMALL_STATE(273)] = 5914,
  [SMALL_STATE(274)] = 5918,
  [SMALL_STATE(275)] = 5922,
  [SMALL_STATE(276)] = 5926,
  [SMALL_STATE(277)] = 5930,
  [SMALL_STATE(278)] = 5934,
  [SMALL_STATE(279)] = 5938,
  [SMALL_STATE(280)] = 5942,
  [SMALL_STATE(281)] = 5946,
  [SMALL_STATE(282)] = 5950,
  [SMALL_STATE(283)] = 5954,
  [SMALL_STATE(284)] = 5958,
  [SMALL_STATE(285)] = 5962,
  [SMALL_STATE(286)] = 5966,
  [SMALL_STATE(287)] = 5970,
  [SMALL_STATE(288)] = 5974,
  [SMALL_STATE(289)] = 5978,
  [SMALL_STATE(290)] = 5982,
  [SMALL_STATE(291)] = 5986,
  [SMALL_STATE(292)] = 5990,
  [SMALL_STATE(293)] = 5994,
  [SMALL_STATE(294)] = 5998,
  [SMALL_STATE(295)] = 6002,
  [SMALL_STATE(296)] = 6006,
  [SMALL_STATE(297)] = 6010,
  [SMALL_STATE(298)] = 6014,
  [SMALL_STATE(299)] = 6018,
  [SMALL_STATE(300)] = 6022,
  [SMALL_STATE(301)] = 6026,
  [SMALL_STATE(302)] = 6030,
  [SMALL_STATE(303)] = 6034,
  [SMALL_STATE(304)] = 6038,
  [SMALL_STATE(305)] = 6042,
  [SMALL_STATE(306)] = 6046,
  [SMALL_STATE(307)] = 6050,
  [SMALL_STATE(308)] = 6054,
  [SMALL_STATE(309)] = 6058,
  [SMALL_STATE(310)] = 6062,
  [SMALL_STATE(311)] = 6066,
  [SMALL_STATE(312)] = 6070,
  [SMALL_STATE(313)] = 6074,
  [SMALL_STATE(314)] = 6078,
  [SMALL_STATE(315)] = 6082,
  [SMALL_STATE(316)] = 6086,
  [SMALL_STATE(317)] = 6090,
  [SMALL_STATE(318)] = 6094,
  [SMALL_STATE(319)] = 6098,
  [SMALL_STATE(320)] = 6102,
  [SMALL_STATE(321)] = 6106,
  [SMALL_STATE(322)] = 6110,
  [SMALL_STATE(323)] = 6114,
  [SMALL_STATE(324)] = 6118,
  [SMALL_STATE(325)] = 6122,
  [SMALL_STATE(326)] = 6126,
  [SMALL_STATE(327)] = 6130,
  [SMALL_STATE(328)] = 6134,
  [SMALL_STATE(329)] = 6138,
  [SMALL_STATE(330)] = 6142,
  [SMALL_STATE(331)] = 6146,
  [SMALL_STATE(332)] = 6150,
  [SMALL_STATE(333)] = 6154,
  [SMALL_STATE(334)] = 6158,
  [SMALL_STATE(335)] = 6162,
  [SMALL_STATE(336)] = 6166,
  [SMALL_STATE(337)] = 6170,
  [SMALL_STATE(338)] = 6174,
  [SMALL_STATE(339)] = 6178,
  [SMALL_STATE(340)] = 6182,
  [SMALL_STATE(341)] = 6186,
  [SMALL_STATE(342)] = 6190,
  [SMALL_STATE(343)] = 6194,
  [SMALL_STATE(344)] = 6198,
  [SMALL_STATE(345)] = 6202,
  [SMALL_STATE(346)] = 6206,
  [SMALL_STATE(347)] = 6210,
  [SMALL_STATE(348)] = 6214,
  [SMALL_STATE(349)] = 6218,
  [SMALL_STATE(350)] = 6222,
  [SMALL_STATE(351)] = 6226,
  [SMALL_STATE(352)] = 6230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_list, 1),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(144),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(5),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(352),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(225),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(288),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(78),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(276),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(275),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_content, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_content, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(243),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(251),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(259),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(351),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(267),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(94),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(69),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(68),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(67),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(66),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(65),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(64),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(63),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(96),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(55),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(54),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(52),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(51),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(48),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(47),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(42),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_content, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(103),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(61),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(60),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(59),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(58),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(57),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(56),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(115),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(21),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(22),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(23),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(24),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(25),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(26),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(27),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(116),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(30),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(36),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(38),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(7),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(43),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(49),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(39),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(122),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(70),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(44),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(41),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(34),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(32),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(46),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(15),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(123),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(50),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(6),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(17),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(10),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(12),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(14),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_content_repeat1, 2), SHIFT_REPEAT(19),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(124),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(4),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 5, .production_id = 10),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 5, .production_id = 10),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 3, .production_id = 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 3, .production_id = 5),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_interpolation, 3, .production_id = 5),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [506] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(150),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_content_repeat1, 2), SHIFT_REPEAT(5),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 6),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 6),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 8),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 3, .production_id = 7),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 3, .production_id = 7),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(333),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 9),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(280),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(71),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(74),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 6),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(191),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 8),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 8),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 11),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 11),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 12),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 12),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 8, .production_id = 14),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 8, .production_id = 14),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 7, .production_id = 13),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 7, .production_id = 13),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_checkbox_done, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [797] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
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
