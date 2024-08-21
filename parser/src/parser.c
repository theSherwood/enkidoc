#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym__blank_line_token1 = 1,
  sym__inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  aux_sym_heading_token1 = 5,
  aux_sym_horizontal_rule_token1 = 6,
  anon_sym_PLUS = 7,
  sym__line_start = 8,
  sym__line_end = 9,
  sym__indent = 10,
  sym__dedent = 11,
  sym__eof = 12,
  sym__next_ordered_list_token = 13,
  sym_source_file = 14,
  sym__blank_line = 15,
  sym__block_separator = 16,
  sym_block = 17,
  sym_block_list = 18,
  sym__inline_content = 19,
  sym_paragraph = 20,
  sym_heading = 21,
  sym_horizontal_rule = 22,
  sym_ordered_list_item = 23,
  sym_ordered_list = 24,
  aux_sym__block_separator_repeat1 = 25,
  aux_sym_block_list_repeat1 = 26,
  aux_sym_paragraph_repeat1 = 27,
  aux_sym_ordered_list_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym__inline_text] = "_inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
  [aux_sym_heading_token1] = "heading_token1",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [anon_sym_PLUS] = "+",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym__next_ordered_list_token] = "_next_ordered_list_token",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym__next_ordered_list_token] = sym__next_ordered_list_token,
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
  [anon_sym_PLUS] = {
    .visible = true,
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
  [sym__next_ordered_list_token] = {
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
  [aux_sym_ordered_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_items = 2,
  field_token = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_items] = "items",
  [field_token] = "token",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_content, 0},
    {field_content, 1},
  [3] =
    {field_content, 2},
    {field_token, 0},
  [5] =
    {field_items, 2},
  [6] =
    {field_content, 2},
    {field_content, 3},
    {field_token, 0},
  [9] =
    {field_items, 2},
    {field_items, 3},
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 9,
  [27] = 27,
  [28] = 19,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
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
      if (lookahead == '+') ADVANCE(100);
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
      if (lookahead == '+') ADVANCE(100);
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
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9, .external_lex_state = 2},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 6, .external_lex_state = 3},
  [10] = {.lex_state = 6, .external_lex_state = 3},
  [11] = {.lex_state = 6, .external_lex_state = 3},
  [12] = {.lex_state = 6, .external_lex_state = 3},
  [13] = {.lex_state = 8, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 3},
  [15] = {.lex_state = 6, .external_lex_state = 3},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 3},
  [20] = {.lex_state = 7, .external_lex_state = 2},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 3},
  [23] = {.lex_state = 7, .external_lex_state = 2},
  [24] = {.lex_state = 6, .external_lex_state = 2},
  [25] = {.lex_state = 7, .external_lex_state = 2},
  [26] = {.lex_state = 6, .external_lex_state = 2},
  [27] = {.lex_state = 7, .external_lex_state = 2},
  [28] = {.lex_state = 6, .external_lex_state = 2},
  [29] = {.lex_state = 6, .external_lex_state = 2},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 8, .external_lex_state = 2},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 8, .external_lex_state = 2},
  [36] = {.lex_state = 8, .external_lex_state = 2},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

enum {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__eof = 4,
  ts_external_token__next_ordered_list_token = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__line_end] = sym__line_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__eof] = sym__eof,
  [ts_external_token__next_ordered_list_token] = sym__next_ordered_list_token,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
  },
  [3] = {
    [ts_external_token__eof] = true,
    [ts_external_token__next_ordered_list_token] = true,
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
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [sym__next_ordered_list_token] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__blank_line] = STATE(6),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(4),
    [sym_block_list] = STATE(41),
    [sym__inline_content] = STATE(18),
    [sym_paragraph] = STATE(13),
    [sym_heading] = STATE(13),
    [sym_horizontal_rule] = STATE(13),
    [sym_ordered_list] = STATE(13),
    [aux_sym__block_separator_repeat1] = STATE(6),
    [aux_sym_block_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym__inline_text] = ACTIONS(7),
    [aux_sym_heading_token1] = ACTIONS(9),
    [aux_sym_horizontal_rule_token1] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [sym__eof] = ACTIONS(15),
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
    ACTIONS(13), 1,
      anon_sym_PLUS,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym__inline_content,
    STATE(42), 1,
      sym_block_list,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(13), 4,
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
      anon_sym_PLUS,
    STATE(18), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(13), 4,
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
    ACTIONS(13), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(13), 4,
      sym_paragraph,
      sym_heading,
      sym_horizontal_rule,
      sym_ordered_list,
  [90] = 4,
    ACTIONS(37), 1,
      aux_sym__blank_line_token1,
    ACTIONS(40), 1,
      sym__inline_text,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(35), 5,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
      anon_sym_PLUS,
  [108] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(44), 1,
      sym__inline_text,
    ACTIONS(46), 1,
      sym__eof,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
      anon_sym_PLUS,
  [128] = 2,
    ACTIONS(50), 2,
      aux_sym__blank_line_token1,
      sym__inline_text,
    ACTIONS(48), 5,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
      anon_sym_PLUS,
  [140] = 2,
    ACTIONS(54), 1,
      sym__inline_text,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
      anon_sym_PLUS,
  [150] = 4,
    ACTIONS(56), 1,
      aux_sym__blank_line_token1,
    ACTIONS(58), 1,
      sym__newline_token,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(61), 2,
      sym__eof,
      sym__next_ordered_list_token,
  [164] = 4,
    ACTIONS(63), 1,
      aux_sym__blank_line_token1,
    ACTIONS(67), 1,
      sym__next_ordered_list_token,
    STATE(10), 1,
      aux_sym_ordered_list_repeat1,
    ACTIONS(65), 2,
      sym__eof,
      sym__newline_token,
  [178] = 5,
    ACTIONS(70), 1,
      aux_sym__blank_line_token1,
    ACTIONS(72), 1,
      sym__newline_token,
    ACTIONS(74), 1,
      sym__eof,
    ACTIONS(76), 1,
      sym__next_ordered_list_token,
    STATE(10), 1,
      aux_sym_ordered_list_repeat1,
  [194] = 4,
    ACTIONS(78), 1,
      aux_sym__blank_line_token1,
    ACTIONS(80), 1,
      sym__newline_token,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(83), 2,
      sym__eof,
      sym__next_ordered_list_token,
  [208] = 4,
    ACTIONS(85), 1,
      aux_sym__blank_line_token1,
    ACTIONS(87), 1,
      sym__eof,
    STATE(16), 1,
      sym__block_separator,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [222] = 5,
    ACTIONS(76), 1,
      sym__next_ordered_list_token,
    ACTIONS(89), 1,
      aux_sym__blank_line_token1,
    ACTIONS(91), 1,
      sym__newline_token,
    ACTIONS(93), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_ordered_list_repeat1,
  [238] = 4,
    ACTIONS(95), 1,
      aux_sym__blank_line_token1,
    ACTIONS(97), 1,
      sym__newline_token,
    STATE(12), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(100), 2,
      sym__eof,
      sym__next_ordered_list_token,
  [252] = 2,
    ACTIONS(104), 1,
      sym__inline_text,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
      aux_sym_horizontal_rule_token1,
      anon_sym_PLUS,
  [262] = 4,
    ACTIONS(106), 1,
      aux_sym__blank_line_token1,
    ACTIONS(108), 1,
      sym__newline_token,
    ACTIONS(110), 1,
      sym__eof,
    STATE(24), 1,
      aux_sym_paragraph_repeat1,
  [275] = 4,
    ACTIONS(112), 1,
      aux_sym__blank_line_token1,
    ACTIONS(114), 1,
      sym__newline_token,
    ACTIONS(116), 1,
      sym__eof,
    STATE(21), 1,
      aux_sym_paragraph_repeat1,
  [288] = 2,
    ACTIONS(56), 1,
      aux_sym__blank_line_token1,
    ACTIONS(61), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [297] = 4,
    ACTIONS(118), 1,
      aux_sym__blank_line_token1,
    ACTIONS(120), 1,
      sym__inline_text,
    ACTIONS(122), 1,
      sym__eof,
    STATE(28), 1,
      sym__inline_content,
  [310] = 4,
    ACTIONS(124), 1,
      aux_sym__blank_line_token1,
    ACTIONS(126), 1,
      sym__newline_token,
    ACTIONS(128), 1,
      sym__eof,
    STATE(26), 1,
      aux_sym_paragraph_repeat1,
  [323] = 2,
    ACTIONS(63), 1,
      aux_sym__blank_line_token1,
    ACTIONS(65), 3,
      sym__eof,
      sym__next_ordered_list_token,
      sym__newline_token,
  [332] = 4,
    ACTIONS(120), 1,
      sym__inline_text,
    ACTIONS(130), 1,
      aux_sym__blank_line_token1,
    ACTIONS(132), 1,
      sym__eof,
    STATE(28), 1,
      sym__inline_content,
  [345] = 4,
    ACTIONS(134), 1,
      aux_sym__blank_line_token1,
    ACTIONS(136), 1,
      sym__newline_token,
    ACTIONS(138), 1,
      sym__eof,
    STATE(26), 1,
      aux_sym_paragraph_repeat1,
  [358] = 4,
    ACTIONS(120), 1,
      sym__inline_text,
    ACTIONS(140), 1,
      aux_sym__blank_line_token1,
    ACTIONS(142), 1,
      sym__eof,
    STATE(28), 1,
      sym__inline_content,
  [371] = 4,
    ACTIONS(56), 1,
      aux_sym__blank_line_token1,
    ACTIONS(61), 1,
      sym__eof,
    ACTIONS(144), 1,
      sym__newline_token,
    STATE(26), 1,
      aux_sym_paragraph_repeat1,
  [384] = 4,
    ACTIONS(120), 1,
      sym__inline_text,
    ACTIONS(147), 1,
      aux_sym__blank_line_token1,
    ACTIONS(149), 1,
      sym__eof,
    STATE(28), 1,
      sym__inline_content,
  [397] = 2,
    ACTIONS(56), 1,
      aux_sym__blank_line_token1,
    ACTIONS(61), 2,
      sym__eof,
      sym__newline_token,
  [405] = 3,
    ACTIONS(151), 1,
      aux_sym__blank_line_token1,
    ACTIONS(153), 1,
      sym__newline_token,
    ACTIONS(155), 1,
      sym__eof,
  [415] = 3,
    ACTIONS(157), 1,
      sym__inline_text,
    STATE(15), 1,
      sym__inline_content,
    STATE(22), 1,
      sym_ordered_list_item,
  [425] = 3,
    ACTIONS(157), 1,
      sym__inline_text,
    STATE(14), 1,
      sym_ordered_list_item,
    STATE(15), 1,
      sym__inline_content,
  [435] = 1,
    ACTIONS(159), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [440] = 2,
    ACTIONS(161), 1,
      sym__inline_text,
    STATE(19), 1,
      sym__inline_content,
  [447] = 2,
    ACTIONS(163), 1,
      sym__inline_text,
    STATE(17), 1,
      sym__inline_content,
  [454] = 1,
    ACTIONS(165), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [459] = 1,
    ACTIONS(167), 2,
      sym__eof,
      aux_sym__blank_line_token1,
  [464] = 2,
    ACTIONS(120), 1,
      sym__inline_text,
    STATE(28), 1,
      sym__inline_content,
  [471] = 1,
    ACTIONS(169), 1,
      sym__inline_whitespace,
  [475] = 1,
    ACTIONS(171), 1,
      sym__inline_whitespace,
  [479] = 1,
    ACTIONS(173), 1,
      sym__newline_token,
  [483] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [487] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [491] = 1,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 371,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 397,
  [SMALL_STATE(29)] = 405,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 435,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 464,
  [SMALL_STATE(38)] = 471,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 479,
  [SMALL_STATE(41)] = 483,
  [SMALL_STATE(42)] = 487,
  [SMALL_STATE(43)] = 491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(18),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(39),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(40),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(33),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ordered_list_repeat1, 2), SHIFT_REPEAT(30),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 4, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 2, .production_id = 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 2), SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 2, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 3, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1), SHIFT(33),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list_item, 1, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 5),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 3),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(37),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_horizontal_rule, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_horizontal_rule, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 4, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ordered_list, 5, .production_id = 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
