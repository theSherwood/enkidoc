#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym__blank_line_token1 = 1,
  sym__inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  aux_sym_heading_token1 = 5,
  aux_sym_horizontal_rule_token1 = 6,
  sym__line_start = 7,
  sym__line_end = 8,
  sym__indent = 9,
  sym__dedent = 10,
  sym__eof = 11,
  sym__first_ordered_list_token = 12,
  sym__next_ordered_list_token = 13,
  sym__list_item_content_end = 14,
  sym__list_item_content_cont = 15,
  sym__DEBUG = 16,
  sym_source_file = 17,
  sym__blank_line = 18,
  sym__block_separator = 19,
  sym_block = 20,
  sym_block_list = 21,
  sym__inline_content = 22,
  sym_paragraph = 23,
  sym_heading = 24,
  sym_horizontal_rule = 25,
  sym_ordered_list_item = 26,
  sym_ordered_list = 27,
  aux_sym__block_separator_repeat1 = 28,
  aux_sym_block_list_repeat1 = 29,
  aux_sym_paragraph_repeat1 = 30,
  aux_sym_ordered_list_item_repeat1 = 31,
  aux_sym_ordered_list_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym__inline_text] = "_inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
  [aux_sym_heading_token1] = "heading_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym__first_ordered_list_token] = "_first_ordered_list_token",
  [sym__next_ordered_list_token] = "_next_ordered_list_token",
  [sym__list_item_content_end] = "_list_item_content_end",
  [sym__list_item_content_cont] = "_list_item_content_cont",
  [sym__DEBUG] = "_DEBUG",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
  [sym__inline_content] = "_inline_content",
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
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym__first_ordered_list_token] = sym__first_ordered_list_token,
  [sym__next_ordered_list_token] = sym__next_ordered_list_token,
  [sym__list_item_content_end] = sym__list_item_content_end,
  [sym__list_item_content_cont] = sym__list_item_content_cont,
  [sym__DEBUG] = sym__DEBUG,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
  [sym__inline_content] = sym__inline_content,
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
  [sym__list_item_content_end] = {
    .visible = false,
    .named = true,
  },
  [sym__list_item_content_cont] = {
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
  [sym__inline_content] = {
    .visible = false,
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
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 5},
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
    {field_content, 0},
  [15] =
    {field_children, 2},
    {field_children, 3},
    {field_children, 4},
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 24,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(5);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(5);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__inline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9, .external_lex_state = 2},
  [2] = {.lex_state = 9, .external_lex_state = 3},
  [3] = {.lex_state = 9, .external_lex_state = 3},
  [4] = {.lex_state = 9, .external_lex_state = 3},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 4},
  [8] = {.lex_state = 6, .external_lex_state = 4},
  [9] = {.lex_state = 9, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 4},
  [11] = {.lex_state = 6, .external_lex_state = 4},
  [12] = {.lex_state = 6, .external_lex_state = 5},
  [13] = {.lex_state = 6, .external_lex_state = 5},
  [14] = {.lex_state = 6, .external_lex_state = 5},
  [15] = {.lex_state = 6, .external_lex_state = 5},
  [16] = {.lex_state = 8, .external_lex_state = 6},
  [17] = {.lex_state = 6, .external_lex_state = 5},
  [18] = {.lex_state = 9, .external_lex_state = 3},
  [19] = {.lex_state = 9, .external_lex_state = 3},
  [20] = {.lex_state = 6, .external_lex_state = 5},
  [21] = {.lex_state = 7, .external_lex_state = 6},
  [22] = {.lex_state = 7, .external_lex_state = 6},
  [23] = {.lex_state = 6, .external_lex_state = 6},
  [24] = {.lex_state = 6, .external_lex_state = 5},
  [25] = {.lex_state = 6, .external_lex_state = 5},
  [26] = {.lex_state = 6, .external_lex_state = 5},
  [27] = {.lex_state = 7, .external_lex_state = 6},
  [28] = {.lex_state = 6, .external_lex_state = 6},
  [29] = {.lex_state = 7, .external_lex_state = 6},
  [30] = {.lex_state = 6, .external_lex_state = 6},
  [31] = {.lex_state = 6, .external_lex_state = 5},
  [32] = {.lex_state = 6, .external_lex_state = 6},
  [33] = {.lex_state = 6, .external_lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 6, .external_lex_state = 6},
  [38] = {.lex_state = 6, .external_lex_state = 6},
  [39] = {.lex_state = 8, .external_lex_state = 6},
  [40] = {.lex_state = 8, .external_lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0, .external_lex_state = 3},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 8, .external_lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

enum {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__eof = 4,
  ts_external_token__first_ordered_list_token = 5,
  ts_external_token__next_ordered_list_token = 6,
  ts_external_token__list_item_content_end = 7,
  ts_external_token__list_item_content_cont = 8,
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
  [ts_external_token__list_item_content_end] = sym__list_item_content_end,
  [ts_external_token__list_item_content_cont] = sym__list_item_content_cont,
  [ts_external_token__DEBUG] = sym__DEBUG,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__first_ordered_list_token] = true,
    [ts_external_token__next_ordered_list_token] = true,
    [ts_external_token__list_item_content_end] = true,
    [ts_external_token__list_item_content_cont] = true,
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
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [6] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__blank_line_token1] = ACTIONS(1),
    [sym__inline_whitespace] = ACTIONS(1),
    [sym__newline_token] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__first_ordered_list_token] = ACTIONS(1),
    [sym__next_ordered_list_token] = ACTIONS(1),
    [sym__list_item_content_end] = ACTIONS(1),
    [sym__list_item_content_cont] = ACTIONS(1),
    [sym__DEBUG] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(47),
    [sym__blank_line] = STATE(5),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(4),
    [sym_block_list] = STATE(48),
    [sym__inline_content] = STATE(33),
    [sym_paragraph] = STATE(16),
    [sym_heading] = STATE(16),
    [sym_horizontal_rule] = STATE(16),
    [sym_ordered_list] = STATE(16),
    [aux_sym__block_separator_repeat1] = STATE(5),
    [aux_sym_block_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym__inline_text] = ACTIONS(7),
    [aux_sym_heading_token1] = ACTIONS(9),
    [aux_sym_horizontal_rule_token1] = ACTIONS(11),
    [sym__eof] = ACTIONS(13),
    [sym__first_ordered_list_token] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(11), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(15), 1,
      sym__first_ordered_list_token,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym__inline_content,
    STATE(49), 1,
      sym_block_list,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(16), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [32] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__inline_text,
    ACTIONS(24), 1,
      aux_sym_heading_token1,
    ACTIONS(27), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(30), 1,
      sym__first_ordered_list_token,
    STATE(33), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(16), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [61] = 8,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(11), 1,
      aux_sym_horizontal_rule_token1,
    ACTIONS(15), 1,
      sym__first_ordered_list_token,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(16), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [90] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(37), 1,
      sym__inline_text,
    ACTIONS(39), 1,
      sym__eof,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(35), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [110] = 4,
    ACTIONS(43), 1,
      aux_sym__blank_line_token1,
    ACTIONS(46), 1,
      sym__inline_text,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(41), 5,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [128] = 4,
    ACTIONS(48), 1,
      aux_sym__blank_line_token1,
    ACTIONS(52), 1,
      sym__list_item_content_cont,
    STATE(7), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(50), 4,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [144] = 5,
    ACTIONS(55), 1,
      aux_sym__blank_line_token1,
    ACTIONS(59), 1,
      sym__indent,
    ACTIONS(61), 1,
      sym__list_item_content_cont,
    STATE(10), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(57), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [162] = 2,
    ACTIONS(65), 2,
      aux_sym__blank_line_token1,
      sym__inline_text,
    ACTIONS(63), 5,
      sym__eof,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [174] = 5,
    ACTIONS(61), 1,
      sym__list_item_content_cont,
    ACTIONS(67), 1,
      aux_sym__blank_line_token1,
    ACTIONS(71), 1,
      sym__indent,
    STATE(7), 1,
      aux_sym_ordered_list_item_repeat1,
    ACTIONS(69), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [192] = 2,
    ACTIONS(73), 1,
      aux_sym__blank_line_token1,
    ACTIONS(75), 5,
      sym__indent,
      sym__eof,
      sym__next_ordered_list_token,
      sym__list_item_content_cont,
      sym__newline_token,
  [203] = 5,
    ACTIONS(77), 1,
      aux_sym__blank_line_token1,
    ACTIONS(79), 1,
      sym__newline_token,
    ACTIONS(82), 1,
      sym__eof,
    ACTIONS(84), 1,
      sym__next_ordered_list_token,
    STATE(14), 1,
      aux_sym_ordered_list_repeat1,
  [219] = 5,
    ACTIONS(87), 1,
      aux_sym__blank_line_token1,
    ACTIONS(89), 1,
      sym__newline_token,
    ACTIONS(92), 1,
      sym__eof,
    ACTIONS(94), 1,
      sym__next_ordered_list_token,
    STATE(12), 1,
      aux_sym_ordered_list_repeat1,
  [235] = 4,
    ACTIONS(97), 1,
      aux_sym__blank_line_token1,
    ACTIONS(101), 1,
      sym__next_ordered_list_token,
    STATE(14), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(99), 2,
      sym__eof,
      sym__newline_token,
  [249] = 5,
    ACTIONS(77), 1,
      aux_sym__blank_line_token1,
    ACTIONS(82), 1,
      sym__eof,
    ACTIONS(104), 1,
      sym__newline_token,
    ACTIONS(106), 1,
      sym__next_ordered_list_token,
    STATE(14), 1,
      aux_sym_ordered_list_repeat1,
  [265] = 4,
    ACTIONS(108), 1,
      aux_sym__blank_line_token1,
    ACTIONS(110), 1,
      sym__eof,
    STATE(18), 1,
      sym__block_separator,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [279] = 5,
    ACTIONS(87), 1,
      aux_sym__blank_line_token1,
    ACTIONS(92), 1,
      sym__eof,
    ACTIONS(106), 1,
      sym__next_ordered_list_token,
    ACTIONS(112), 1,
      sym__newline_token,
    STATE(15), 1,
      aux_sym_ordered_list_repeat1,
  [295] = 2,
    ACTIONS(116), 1,
      sym__inline_text,
    ACTIONS(114), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [305] = 2,
    ACTIONS(120), 1,
      sym__inline_text,
    ACTIONS(118), 4,
      sym__first_ordered_list_token,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
  [315] = 2,
    ACTIONS(97), 1,
      aux_sym__blank_line_token1,
    ACTIONS(99), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [324] = 4,
    ACTIONS(122), 1,
      aux_sym__blank_line_token1,
    ACTIONS(124), 1,
      sym__inline_text,
    ACTIONS(126), 1,
      sym__eof,
    STATE(37), 1,
      sym__inline_content,
  [337] = 4,
    ACTIONS(124), 1,
      sym__inline_text,
    ACTIONS(128), 1,
      aux_sym__blank_line_token1,
    ACTIONS(130), 1,
      sym__eof,
    STATE(37), 1,
      sym__inline_content,
  [350] = 4,
    ACTIONS(132), 1,
      aux_sym__blank_line_token1,
    ACTIONS(134), 1,
      sym__newline_token,
    ACTIONS(136), 1,
      sym__eof,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
  [363] = 2,
    ACTIONS(138), 1,
      aux_sym__blank_line_token1,
    ACTIONS(140), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [372] = 2,
    ACTIONS(142), 1,
      aux_sym__blank_line_token1,
    ACTIONS(144), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [381] = 2,
    ACTIONS(146), 1,
      aux_sym__blank_line_token1,
    ACTIONS(148), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [390] = 4,
    ACTIONS(124), 1,
      sym__inline_text,
    ACTIONS(150), 1,
      aux_sym__blank_line_token1,
    ACTIONS(152), 1,
      sym__eof,
    STATE(37), 1,
      sym__inline_content,
  [403] = 4,
    ACTIONS(154), 1,
      aux_sym__blank_line_token1,
    ACTIONS(156), 1,
      sym__newline_token,
    ACTIONS(158), 1,
      sym__eof,
    STATE(32), 1,
      aux_sym_paragraph_repeat1,
  [416] = 4,
    ACTIONS(124), 1,
      sym__inline_text,
    ACTIONS(160), 1,
      aux_sym__blank_line_token1,
    ACTIONS(162), 1,
      sym__eof,
    STATE(37), 1,
      sym__inline_content,
  [429] = 4,
    ACTIONS(164), 1,
      aux_sym__blank_line_token1,
    ACTIONS(166), 1,
      sym__newline_token,
    ACTIONS(169), 1,
      sym__eof,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
  [442] = 2,
    ACTIONS(171), 1,
      aux_sym__blank_line_token1,
    ACTIONS(173), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [451] = 4,
    ACTIONS(175), 1,
      aux_sym__blank_line_token1,
    ACTIONS(177), 1,
      sym__newline_token,
    ACTIONS(179), 1,
      sym__eof,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
  [464] = 4,
    ACTIONS(181), 1,
      aux_sym__blank_line_token1,
    ACTIONS(183), 1,
      sym__newline_token,
    ACTIONS(185), 1,
      sym__eof,
    STATE(23), 1,
      aux_sym_paragraph_repeat1,
  [477] = 3,
    ACTIONS(187), 1,
      sym__inline_text,
    STATE(8), 1,
      sym__inline_content,
    STATE(13), 1,
      sym_ordered_list_item,
  [487] = 3,
    ACTIONS(187), 1,
      sym__inline_text,
    STATE(8), 1,
      sym__inline_content,
    STATE(17), 1,
      sym_ordered_list_item,
  [497] = 3,
    ACTIONS(187), 1,
      sym__inline_text,
    STATE(8), 1,
      sym__inline_content,
    STATE(20), 1,
      sym_ordered_list_item,
  [507] = 2,
    ACTIONS(164), 1,
      aux_sym__blank_line_token1,
    ACTIONS(169), 2,
      sym__eof,
      sym__newline_token,
  [515] = 3,
    ACTIONS(189), 1,
      aux_sym__blank_line_token1,
    ACTIONS(191), 1,
      sym__newline_token,
    ACTIONS(193), 1,
      sym__eof,
  [525] = 1,
    ACTIONS(144), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [530] = 1,
    ACTIONS(140), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [535] = 2,
    ACTIONS(124), 1,
      sym__inline_text,
    STATE(37), 1,
      sym__inline_content,
  [542] = 2,
    ACTIONS(195), 1,
      sym__inline_text,
    STATE(11), 1,
      sym__inline_content,
  [549] = 2,
    ACTIONS(197), 1,
      sym__first_ordered_list_token,
    STATE(26), 1,
      sym_ordered_list,
  [556] = 2,
    ACTIONS(197), 1,
      sym__first_ordered_list_token,
    STATE(31), 1,
      sym_ordered_list,
  [563] = 2,
    ACTIONS(199), 1,
      sym__inline_text,
    STATE(28), 1,
      sym__inline_content,
  [570] = 1,
    ACTIONS(201), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [575] = 1,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
  [579] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [583] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
  [587] = 1,
    ACTIONS(207), 1,
      sym__newline_token,
  [591] = 1,
    ACTIONS(209), 1,
      sym__inline_whitespace,
  [595] = 1,
    ACTIONS(211), 1,
      sym__newline_token,
  [599] = 1,
    ACTIONS(213), 1,
      sym__newline_token,
  [603] = 1,
    ACTIONS(215), 1,
      sym__newline_token,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 372,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 429,
  [SMALL_STATE(31)] = 442,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 525,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 535,
  [SMALL_STATE(42)] = 542,
  [SMALL_STATE(43)] = 549,
  [SMALL_STATE(44)] = 556,
  [SMALL_STATE(45)] = 563,
  [SMALL_STATE(46)] = 570,
  [SMALL_STATE(47)] = 575,
  [SMALL_STATE(48)] = 579,
  [SMALL_STATE(49)] = 583,
  [SMALL_STATE(50)] = 587,
  [SMALL_STATE(51)] = 591,
  [SMALL_STATE(52)] = 595,
  [SMALL_STATE(53)] = 599,
  [SMALL_STATE(54)] = 603,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(33),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(51),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(38),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 2), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_item_repeat1, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4), SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4), SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2), SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list, 2, .production_id = 2), SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(36),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 5, .production_id = 8),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 5, .production_id = 8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 6),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 4, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 4, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 6),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
