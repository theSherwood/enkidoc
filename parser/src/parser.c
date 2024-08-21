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
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym__blank_line_token1 = 1,
  sym__inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  sym_uri_autolink = 5,
  sym_email_autolink = 6,
  aux_sym_heading_token1 = 7,
  aux_sym_horizontal_rule_token1 = 8,
  sym__line_start = 9,
  sym__line_end = 10,
  sym__indent = 11,
  sym__dedent = 12,
  sym__eof = 13,
  sym__first_ordered_list_token = 14,
  sym__next_ordered_list_token = 15,
  sym__list_item_content_cont = 16,
  sym__list_item_content_end = 17,
  sym__DEBUG = 18,
  sym_source_file = 19,
  sym__blank_line = 20,
  sym__block_separator = 21,
  sym_block = 22,
  sym_block_list = 23,
  aux_sym__inline_content = 24,
  sym_paragraph = 25,
  sym_heading = 26,
  sym_horizontal_rule = 27,
  sym_ordered_list_item = 28,
  sym_ordered_list = 29,
  aux_sym__block_separator_repeat1 = 30,
  aux_sym_block_list_repeat1 = 31,
  aux_sym_paragraph_repeat1 = 32,
  aux_sym_ordered_list_item_repeat1 = 33,
  aux_sym_ordered_list_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym__inline_text] = "_inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
  [sym_uri_autolink] = "uri_autolink",
  [sym_email_autolink] = "email_autolink",
  [aux_sym_heading_token1] = "heading_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
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
  [aux_sym__inline_content] = "_inline_content",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [sym_horizontal_rule] = "horizontal_rule",
  [sym_ordered_list_item] = "ordered_list_item",
  [sym_ordered_list] = "ordered_list",
  [aux_sym__block_separator_repeat1] = "_block_separator_repeat1",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_ordered_list_item_repeat1] = "ordered_list_item_repeat1",
  [aux_sym_ordered_list_repeat1] = "ordered_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym__inline_text] = sym__inline_text,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym__newline_token] = sym__newline_token,
  [sym_uri_autolink] = sym_uri_autolink,
  [sym_email_autolink] = sym_email_autolink,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
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
  [aux_sym__inline_content] = aux_sym__inline_content,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [sym_horizontal_rule] = sym_horizontal_rule,
  [sym_ordered_list_item] = sym_ordered_list_item,
  [sym_ordered_list] = sym_ordered_list,
  [aux_sym__block_separator_repeat1] = aux_sym__block_separator_repeat1,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
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
  [sym__inline_text] = {
    .visible = false,
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
  [aux_sym__inline_content] = {
    .visible = false,
    .named = false,
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
  [aux_sym__block_separator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_list_repeat1] = {
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
  field_children = 1,
  field_content = 2,
  field_items = 3,
  field_token = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [7] = {.index = 11, .length = 5},
  [8] = {.index = 16, .length = 6},
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
    {field_content, 2},
    {field_content, 3},
    {field_token, 0},
  [11] =
    {field_children, 1},
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_content, 0},
  [16] =
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
    {field_children, 5},
    {field_content, 0},
    {field_content, 1},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 28,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 31,
  [40] = 40,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 30,
  [48] = 48,
  [49] = 49,
  [50] = 37,
  [51] = 48,
  [52] = 40,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 54,
  [59] = 53,
  [60] = 60,
  [61] = 56,
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 67,
  [72] = 60,
  [73] = 70,
  [74] = 74,
  [75] = 69,
  [76] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(135);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(277);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
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
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 124:
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      END_STATE();
    case 125:
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '>') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '@') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(129);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '>') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '<') ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '@') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(129);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == '@') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 131:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 132:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\r') ADVANCE(278);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(135);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '<') ADVANCE(271);
      if (lookahead == '=') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(364);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == ':') ADVANCE(268);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(270);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(270);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__inline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_uri_autolink);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_email_autolink);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 141, .external_lex_state = 2},
  [2] = {.lex_state = 141, .external_lex_state = 3},
  [3] = {.lex_state = 141, .external_lex_state = 3},
  [4] = {.lex_state = 141, .external_lex_state = 3},
  [5] = {.lex_state = 141, .external_lex_state = 2},
  [6] = {.lex_state = 141, .external_lex_state = 2},
  [7] = {.lex_state = 137, .external_lex_state = 4},
  [8] = {.lex_state = 137, .external_lex_state = 4},
  [9] = {.lex_state = 137, .external_lex_state = 5},
  [10] = {.lex_state = 137, .external_lex_state = 4},
  [11] = {.lex_state = 141, .external_lex_state = 2},
  [12] = {.lex_state = 137, .external_lex_state = 5},
  [13] = {.lex_state = 137, .external_lex_state = 5},
  [14] = {.lex_state = 137, .external_lex_state = 6},
  [15] = {.lex_state = 137, .external_lex_state = 6},
  [16] = {.lex_state = 136, .external_lex_state = 4},
  [17] = {.lex_state = 137, .external_lex_state = 6},
  [18] = {.lex_state = 141, .external_lex_state = 3},
  [19] = {.lex_state = 141, .external_lex_state = 3},
  [20] = {.lex_state = 137, .external_lex_state = 6},
  [21] = {.lex_state = 136, .external_lex_state = 4},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 138, .external_lex_state = 6},
  [24] = {.lex_state = 138, .external_lex_state = 6},
  [25] = {.lex_state = 138, .external_lex_state = 6},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 138, .external_lex_state = 6},
  [28] = {.lex_state = 137},
  [29] = {.lex_state = 137},
  [30] = {.lex_state = 136, .external_lex_state = 7},
  [31] = {.lex_state = 136, .external_lex_state = 7},
  [32] = {.lex_state = 137},
  [33] = {.lex_state = 137},
  [34] = {.lex_state = 136, .external_lex_state = 7},
  [35] = {.lex_state = 140, .external_lex_state = 6},
  [36] = {.lex_state = 137},
  [37] = {.lex_state = 136, .external_lex_state = 7},
  [38] = {.lex_state = 137},
  [39] = {.lex_state = 0, .external_lex_state = 8},
  [40] = {.lex_state = 136, .external_lex_state = 7},
  [41] = {.lex_state = 0, .external_lex_state = 8},
  [42] = {.lex_state = 136, .external_lex_state = 6},
  [43] = {.lex_state = 136, .external_lex_state = 6},
  [44] = {.lex_state = 136, .external_lex_state = 6},
  [45] = {.lex_state = 137},
  [46] = {.lex_state = 137},
  [47] = {.lex_state = 0, .external_lex_state = 8},
  [48] = {.lex_state = 136, .external_lex_state = 7},
  [49] = {.lex_state = 136, .external_lex_state = 6},
  [50] = {.lex_state = 0, .external_lex_state = 8},
  [51] = {.lex_state = 0, .external_lex_state = 8},
  [52] = {.lex_state = 0, .external_lex_state = 8},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 140, .external_lex_state = 6},
  [56] = {.lex_state = 140, .external_lex_state = 6},
  [57] = {.lex_state = 140, .external_lex_state = 6},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0, .external_lex_state = 9},
  [62] = {.lex_state = 0, .external_lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0, .external_lex_state = 9},
  [68] = {.lex_state = 130},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0, .external_lex_state = 9},
  [71] = {.lex_state = 0, .external_lex_state = 9},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 9},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
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
    [sym_uri_autolink] = ACTIONS(1),
    [sym_email_autolink] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(66),
    [sym__blank_line] = STATE(6),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(4),
    [sym_block_list] = STATE(63),
    [aux_sym__inline_content] = STATE(14),
    [sym_paragraph] = STATE(35),
    [sym_heading] = STATE(35),
    [sym_horizontal_rule] = STATE(35),
    [sym_ordered_list] = STATE(35),
    [aux_sym__block_separator_repeat1] = STATE(6),
    [aux_sym_block_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym__inline_text] = ACTIONS(7),
    [sym_uri_autolink] = ACTIONS(7),
    [sym_email_autolink] = ACTIONS(7),
    [aux_sym_heading_token1] = ACTIONS(9),
    [aux_sym_horizontal_rule_token1] = ACTIONS(11),
    [sym__eof] = ACTIONS(13),
    [sym__first_ordered_list_token] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(11), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(15), 1,
      sym__first_ordered_list_token,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym__inline_content,
    STATE(65), 1,
      sym_block_list,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    ACTIONS(7), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(35), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [34] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      aux_sym_heading_token1,
    ACTIONS(27), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(30), 1,
      sym__first_ordered_list_token,
    STATE(14), 1,
      aux_sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    ACTIONS(21), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(35), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [65] = 8,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(11), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(15), 1,
      sym__first_ordered_list_token,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    ACTIONS(7), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    STATE(35), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [96] = 4,
    ACTIONS(37), 1,
      aux_sym__blank_line_token1,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(40), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(35), 5,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [116] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(46), 1,
      sym__eof,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(44), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(42), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [138] = 8,
    ACTIONS(50), 1,
      sym__inline_text,
    ACTIONS(54), 1,
      sym__indent,
    ACTIONS(58), 1,
      sym__list_item_content_cont,
    STATE(10), 1,
      aux_sym__inline_content,
    STATE(21), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(48), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    ACTIONS(52), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(56), 2,
      sym__eof,
      sym__next_ordered_list_token,
  [166] = 5,
    ACTIONS(50), 1,
      sym__inline_text,
    STATE(10), 1,
      aux_sym__inline_content,
    ACTIONS(52), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(60), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    ACTIONS(62), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [187] = 8,
    ACTIONS(48), 1,
      sym__newline_token,
    ACTIONS(64), 1,
      sym__inline_text,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(70), 1,
      sym__list_item_content_cont,
    STATE(12), 1,
      aux_sym__inline_content,
    STATE(22), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(56), 2,
      sym__dedent,
      sym__next_ordered_list_token,
    ACTIONS(66), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [214] = 5,
    ACTIONS(74), 1,
      sym__inline_text,
    STATE(10), 1,
      aux_sym__inline_content,
    ACTIONS(72), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    ACTIONS(77), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(80), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [235] = 2,
    ACTIONS(84), 4,
      aux_sym__blank_line_token1,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(82), 5,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [249] = 5,
    ACTIONS(72), 1,
      sym__newline_token,
    ACTIONS(86), 1,
      sym__inline_text,
    STATE(12), 1,
      aux_sym__inline_content,
    ACTIONS(89), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(80), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [269] = 5,
    ACTIONS(60), 1,
      sym__newline_token,
    ACTIONS(64), 1,
      sym__inline_text,
    STATE(12), 1,
      aux_sym__inline_content,
    ACTIONS(66), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(62), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
  [289] = 7,
    ACTIONS(92), 1,
      aux_sym__blank_line_token1,
    ACTIONS(94), 1,
      sym__inline_text,
    ACTIONS(96), 1,
      sym__newline_token,
    ACTIONS(100), 1,
      sym__eof,
    STATE(17), 1,
      aux_sym__inline_content,
    STATE(43), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(98), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [312] = 7,
    ACTIONS(94), 1,
      sym__inline_text,
    ACTIONS(102), 1,
      aux_sym__blank_line_token1,
    ACTIONS(104), 1,
      sym__newline_token,
    ACTIONS(106), 1,
      sym__eof,
    STATE(17), 1,
      aux_sym__inline_content,
    STATE(44), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(98), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [335] = 4,
    ACTIONS(108), 1,
      aux_sym__blank_line_token1,
    ACTIONS(112), 1,
      sym__list_item_content_cont,
    STATE(16), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(110), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [351] = 5,
    ACTIONS(80), 1,
      sym__eof,
    ACTIONS(115), 1,
      sym__inline_text,
    STATE(17), 1,
      aux_sym__inline_content,
    ACTIONS(72), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
    ACTIONS(118), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [369] = 2,
    ACTIONS(123), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(121), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [381] = 2,
    ACTIONS(127), 3,
      sym__inline_text,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(125), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [393] = 5,
    ACTIONS(94), 1,
      sym__inline_text,
    ACTIONS(131), 1,
      sym__eof,
    STATE(17), 1,
      aux_sym__inline_content,
    ACTIONS(98), 2,
      sym_uri_autolink,
      sym_email_autolink,
    ACTIONS(129), 2,
      aux_sym__blank_line_token1,
      sym__newline_token,
  [411] = 5,
    ACTIONS(58), 1,
      sym__list_item_content_cont,
    ACTIONS(133), 1,
      aux_sym__blank_line_token1,
    ACTIONS(137), 1,
      sym__indent,
    STATE(16), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(135), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [429] = 4,
    ACTIONS(70), 1,
      sym__list_item_content_cont,
    ACTIONS(139), 1,
      sym__indent,
    STATE(26), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(135), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [444] = 5,
    ACTIONS(141), 1,
      aux_sym__blank_line_token1,
    ACTIONS(143), 1,
      sym__inline_text,
    ACTIONS(147), 1,
      sym__eof,
    STATE(20), 1,
      aux_sym__inline_content,
    ACTIONS(145), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [461] = 5,
    ACTIONS(143), 1,
      sym__inline_text,
    ACTIONS(149), 1,
      aux_sym__blank_line_token1,
    ACTIONS(151), 1,
      sym__eof,
    STATE(20), 1,
      aux_sym__inline_content,
    ACTIONS(145), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [478] = 5,
    ACTIONS(143), 1,
      sym__inline_text,
    ACTIONS(153), 1,
      aux_sym__blank_line_token1,
    ACTIONS(155), 1,
      sym__eof,
    STATE(20), 1,
      aux_sym__inline_content,
    ACTIONS(145), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [495] = 3,
    ACTIONS(157), 1,
      sym__list_item_content_cont,
    STATE(26), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(110), 4,
      sym__indent,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [508] = 5,
    ACTIONS(143), 1,
      sym__inline_text,
    ACTIONS(160), 1,
      aux_sym__blank_line_token1,
    ACTIONS(162), 1,
      sym__eof,
    STATE(20), 1,
      aux_sym__inline_content,
    ACTIONS(145), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [525] = 4,
    ACTIONS(164), 1,
      sym__inline_text,
    STATE(9), 1,
      aux_sym__inline_content,
    STATE(41), 1,
      sym_ordered_list_item,
    ACTIONS(166), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [539] = 4,
    ACTIONS(168), 1,
      sym__inline_text,
    STATE(7), 1,
      aux_sym__inline_content,
    STATE(40), 1,
      sym_ordered_list_item,
    ACTIONS(170), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [553] = 4,
    ACTIONS(172), 1,
      aux_sym__blank_line_token1,
    ACTIONS(176), 1,
      sym__next_ordered_list_token,
    STATE(30), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(174), 2,
      sym__eof,
      sym__newline_token,
  [567] = 5,
    ACTIONS(179), 1,
      aux_sym__blank_line_token1,
    ACTIONS(181), 1,
      sym__newline_token,
    ACTIONS(183), 1,
      sym__eof,
    ACTIONS(185), 1,
      sym__next_ordered_list_token,
    STATE(30), 1,
      aux_sym_ordered_list_repeat1,
  [583] = 4,
    ACTIONS(164), 1,
      sym__inline_text,
    STATE(9), 1,
      aux_sym__inline_content,
    STATE(52), 1,
      sym_ordered_list_item,
    ACTIONS(166), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [597] = 4,
    ACTIONS(168), 1,
      sym__inline_text,
    STATE(7), 1,
      aux_sym__inline_content,
    STATE(34), 1,
      sym_ordered_list_item,
    ACTIONS(170), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [611] = 5,
    ACTIONS(185), 1,
      sym__next_ordered_list_token,
    ACTIONS(187), 1,
      aux_sym__blank_line_token1,
    ACTIONS(189), 1,
      sym__newline_token,
    ACTIONS(191), 1,
      sym__eof,
    STATE(31), 1,
      aux_sym_ordered_list_repeat1,
  [627] = 4,
    ACTIONS(193), 1,
      aux_sym__blank_line_token1,
    ACTIONS(195), 1,
      sym__eof,
    STATE(18), 1,
      sym__block_separator,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [641] = 3,
    ACTIONS(197), 1,
      sym__inline_text,
    STATE(8), 1,
      aux_sym__inline_content,
    ACTIONS(199), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [652] = 2,
    ACTIONS(201), 1,
      aux_sym__blank_line_token1,
    ACTIONS(203), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [661] = 3,
    ACTIONS(205), 1,
      sym__inline_text,
    STATE(15), 1,
      aux_sym__inline_content,
    ACTIONS(207), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [672] = 4,
    ACTIONS(183), 1,
      sym__dedent,
    ACTIONS(209), 1,
      sym__newline_token,
    ACTIONS(211), 1,
      sym__next_ordered_list_token,
    STATE(47), 1,
      aux_sym_ordered_list_repeat1,
  [685] = 2,
    ACTIONS(172), 1,
      aux_sym__blank_line_token1,
    ACTIONS(174), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [694] = 4,
    ACTIONS(191), 1,
      sym__dedent,
    ACTIONS(211), 1,
      sym__next_ordered_list_token,
    ACTIONS(213), 1,
      sym__newline_token,
    STATE(39), 1,
      aux_sym_ordered_list_repeat1,
  [707] = 4,
    ACTIONS(129), 1,
      aux_sym__blank_line_token1,
    ACTIONS(131), 1,
      sym__eof,
    ACTIONS(215), 1,
      sym__newline_token,
    STATE(42), 1,
      aux_sym_paragraph_repeat1,
  [720] = 4,
    ACTIONS(218), 1,
      aux_sym__blank_line_token1,
    ACTIONS(220), 1,
      sym__newline_token,
    ACTIONS(222), 1,
      sym__eof,
    STATE(42), 1,
      aux_sym_paragraph_repeat1,
  [733] = 4,
    ACTIONS(224), 1,
      aux_sym__blank_line_token1,
    ACTIONS(226), 1,
      sym__newline_token,
    ACTIONS(228), 1,
      sym__eof,
    STATE(42), 1,
      aux_sym_paragraph_repeat1,
  [746] = 3,
    ACTIONS(143), 1,
      sym__inline_text,
    STATE(20), 1,
      aux_sym__inline_content,
    ACTIONS(145), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [757] = 3,
    ACTIONS(230), 1,
      sym__inline_text,
    STATE(13), 1,
      aux_sym__inline_content,
    ACTIONS(232), 2,
      sym_uri_autolink,
      sym_email_autolink,
  [768] = 3,
    ACTIONS(234), 1,
      sym__next_ordered_list_token,
    STATE(47), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(174), 2,
      sym__dedent,
      sym__newline_token,
  [779] = 2,
    ACTIONS(237), 1,
      aux_sym__blank_line_token1,
    ACTIONS(239), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [788] = 3,
    ACTIONS(241), 1,
      aux_sym__blank_line_token1,
    ACTIONS(243), 1,
      sym__newline_token,
    ACTIONS(245), 1,
      sym__eof,
  [798] = 1,
    ACTIONS(203), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [804] = 1,
    ACTIONS(239), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [810] = 1,
    ACTIONS(174), 3,
      sym__dedent,
      sym__next_ordered_list_token,
      sym__newline_token,
  [816] = 2,
    ACTIONS(247), 1,
      sym__first_ordered_list_token,
    STATE(67), 1,
      sym_ordered_list,
  [823] = 2,
    ACTIONS(247), 1,
      sym__first_ordered_list_token,
    STATE(73), 1,
      sym_ordered_list,
  [830] = 1,
    ACTIONS(249), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [835] = 1,
    ACTIONS(251), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [840] = 1,
    ACTIONS(253), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [845] = 2,
    ACTIONS(247), 1,
      sym__first_ordered_list_token,
    STATE(70), 1,
      sym_ordered_list,
  [852] = 2,
    ACTIONS(247), 1,
      sym__first_ordered_list_token,
    STATE(71), 1,
      sym_ordered_list,
  [859] = 1,
    ACTIONS(255), 1,
      sym__newline_token,
  [863] = 1,
    ACTIONS(251), 1,
      sym__dedent,
  [867] = 1,
    ACTIONS(249), 1,
      sym__dedent,
  [871] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [875] = 1,
    ACTIONS(257), 1,
      sym__newline_token,
  [879] = 1,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
  [883] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [887] = 1,
    ACTIONS(263), 1,
      sym__dedent,
  [891] = 1,
    ACTIONS(265), 1,
      sym__inline_whitespace,
  [895] = 1,
    ACTIONS(267), 1,
      sym__newline_token,
  [899] = 1,
    ACTIONS(269), 1,
      sym__dedent,
  [903] = 1,
    ACTIONS(271), 1,
      sym__dedent,
  [907] = 1,
    ACTIONS(273), 1,
      sym__newline_token,
  [911] = 1,
    ACTIONS(275), 1,
      sym__dedent,
  [915] = 1,
    ACTIONS(277), 1,
      sym__newline_token,
  [919] = 1,
    ACTIONS(279), 1,
      sym__newline_token,
  [923] = 1,
    ACTIONS(281), 1,
      sym__newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 335,
  [SMALL_STATE(17)] = 351,
  [SMALL_STATE(18)] = 369,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 393,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 429,
  [SMALL_STATE(23)] = 444,
  [SMALL_STATE(24)] = 461,
  [SMALL_STATE(25)] = 478,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 508,
  [SMALL_STATE(28)] = 525,
  [SMALL_STATE(29)] = 539,
  [SMALL_STATE(30)] = 553,
  [SMALL_STATE(31)] = 567,
  [SMALL_STATE(32)] = 583,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 611,
  [SMALL_STATE(35)] = 627,
  [SMALL_STATE(36)] = 641,
  [SMALL_STATE(37)] = 652,
  [SMALL_STATE(38)] = 661,
  [SMALL_STATE(39)] = 672,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 720,
  [SMALL_STATE(44)] = 733,
  [SMALL_STATE(45)] = 746,
  [SMALL_STATE(46)] = 757,
  [SMALL_STATE(47)] = 768,
  [SMALL_STATE(48)] = 779,
  [SMALL_STATE(49)] = 788,
  [SMALL_STATE(50)] = 798,
  [SMALL_STATE(51)] = 804,
  [SMALL_STATE(52)] = 810,
  [SMALL_STATE(53)] = 816,
  [SMALL_STATE(54)] = 823,
  [SMALL_STATE(55)] = 830,
  [SMALL_STATE(56)] = 835,
  [SMALL_STATE(57)] = 840,
  [SMALL_STATE(58)] = 845,
  [SMALL_STATE(59)] = 852,
  [SMALL_STATE(60)] = 859,
  [SMALL_STATE(61)] = 863,
  [SMALL_STATE(62)] = 867,
  [SMALL_STATE(63)] = 871,
  [SMALL_STATE(64)] = 875,
  [SMALL_STATE(65)] = 879,
  [SMALL_STATE(66)] = 883,
  [SMALL_STATE(67)] = 887,
  [SMALL_STATE(68)] = 891,
  [SMALL_STATE(69)] = 895,
  [SMALL_STATE(70)] = 899,
  [SMALL_STATE(71)] = 903,
  [SMALL_STATE(72)] = 907,
  [SMALL_STATE(73)] = 911,
  [SMALL_STATE(74)] = 915,
  [SMALL_STATE(75)] = 919,
  [SMALL_STATE(76)] = 923,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(14),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(68),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(49),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(74),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_content, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(10),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_content, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(12),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(12),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 5),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(60),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(17),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_content, 2), SHIFT_REPEAT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 6),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(72),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(29),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 6, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 6, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(45),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(32),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 7),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
