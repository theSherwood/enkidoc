#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym___blank_line_token1 = 1,
  sym___inline_text = 2,
  sym__newline_token = 3,
  sym__spaces = 4,
  sym__tabs = 5,
  sym__inline_whitespace = 6,
  aux_sym__line_break_token1 = 7,
  anon_sym_POUND = 8,
  anon_sym_LT = 9,
  anon_sym_GT = 10,
  aux_sym_heading_token1 = 11,
  anon_sym_LBRACKx_RBRACK = 12,
  anon_sym_LBRACKX_RBRACK = 13,
  sym_checkbox_empty = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  aux_sym_horizontal_rule_token1 = 17,
  sym__line_start = 18,
  sym__line_end = 19,
  sym__indent = 20,
  sym__dedent = 21,
  sym__eof = 22,
  sym_source_file = 23,
  sym___blank_line = 24,
  sym___block_separator = 25,
  sym_block__ = 26,
  sym_block_list__ = 27,
  sym_paragraph__ = 28,
  aux_sym___block_separator_repeat1 = 29,
  aux_sym_block_list___repeat1 = 30,
  aux_sym_paragraph___repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym___blank_line_token1] = "__blank_line_token1",
  [sym___inline_text] = "__inline_text",
  [sym__newline_token] = "_newline_token",
  [sym__spaces] = "_spaces",
  [sym__tabs] = "_tabs",
  [sym__inline_whitespace] = "_inline_whitespace",
  [aux_sym__line_break_token1] = "_line_break_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_heading_token1] = "heading_token1",
  [anon_sym_LBRACKx_RBRACK] = "[x]",
  [anon_sym_LBRACKX_RBRACK] = "[X]",
  [sym_checkbox_empty] = "checkbox_empty",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_horizontal_rule_token1] = "horizontal_rule_token1",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym_source_file] = "source_file",
  [sym___blank_line] = "__blank_line",
  [sym___block_separator] = "__block_separator",
  [sym_block__] = "block__",
  [sym_block_list__] = "block_list__",
  [sym_paragraph__] = "paragraph__",
  [aux_sym___block_separator_repeat1] = "__block_separator_repeat1",
  [aux_sym_block_list___repeat1] = "block_list___repeat1",
  [aux_sym_paragraph___repeat1] = "paragraph___repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym___blank_line_token1] = aux_sym___blank_line_token1,
  [sym___inline_text] = sym___inline_text,
  [sym__newline_token] = sym__newline_token,
  [sym__spaces] = sym__spaces,
  [sym__tabs] = sym__tabs,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [aux_sym__line_break_token1] = aux_sym__line_break_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [anon_sym_LBRACKx_RBRACK] = anon_sym_LBRACKx_RBRACK,
  [anon_sym_LBRACKX_RBRACK] = anon_sym_LBRACKX_RBRACK,
  [sym_checkbox_empty] = sym_checkbox_empty,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_horizontal_rule_token1] = aux_sym_horizontal_rule_token1,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym_source_file] = sym_source_file,
  [sym___blank_line] = sym___blank_line,
  [sym___block_separator] = sym___block_separator,
  [sym_block__] = sym_block__,
  [sym_block_list__] = sym_block_list__,
  [sym_paragraph__] = sym_paragraph__,
  [aux_sym___block_separator_repeat1] = aux_sym___block_separator_repeat1,
  [aux_sym_block_list___repeat1] = aux_sym_block_list___repeat1,
  [aux_sym_paragraph___repeat1] = aux_sym_paragraph___repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym___blank_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym___inline_text] = {
    .visible = false,
    .named = true,
  },
  [sym__newline_token] = {
    .visible = false,
    .named = true,
  },
  [sym__spaces] = {
    .visible = false,
    .named = true,
  },
  [sym__tabs] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_whitespace] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_break_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
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
  [aux_sym_heading_token1] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym___blank_line] = {
    .visible = false,
    .named = true,
  },
  [sym___block_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_block__] = {
    .visible = true,
    .named = true,
  },
  [sym_block_list__] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph__] = {
    .visible = true,
    .named = true,
  },
  [aux_sym___block_separator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_list___repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph___repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (eof) ADVANCE(7);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '[') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == 'X') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == ']') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == ']') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (lookahead == '\t') ADVANCE(8);
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym___blank_line_token1);
      if (eof) ADVANCE(7);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym___inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__line_break_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACKx_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACKX_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_checkbox_empty);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_horizontal_rule_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 12, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 10, .external_lex_state = 2},
  [10] = {.lex_state = 10, .external_lex_state = 2},
  [11] = {.lex_state = 10, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 13},
};

enum {
  ts_external_token__line_start = 0,
  ts_external_token__line_end = 1,
  ts_external_token__indent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__eof = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_start] = sym__line_start,
  [ts_external_token__line_end] = sym__line_end,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_start] = true,
    [ts_external_token__line_end] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym___blank_line_token1] = ACTIONS(1),
    [sym__newline_token] = ACTIONS(1),
    [sym__spaces] = ACTIONS(1),
    [sym__tabs] = ACTIONS(1),
    [sym__inline_whitespace] = ACTIONS(1),
    [aux_sym__line_break_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [anon_sym_LBRACKx_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKX_RBRACK] = ACTIONS(1),
    [sym_checkbox_empty] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_horizontal_rule_token1] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym___blank_line] = STATE(2),
    [sym___block_separator] = STATE(4),
    [sym_block__] = STATE(6),
    [sym_block_list__] = STATE(17),
    [sym_paragraph__] = STATE(7),
    [aux_sym___block_separator_repeat1] = STATE(2),
    [aux_sym_block_list___repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym___blank_line_token1] = ACTIONS(5),
    [sym___inline_text] = ACTIONS(7),
    [sym__eof] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      aux_sym___blank_line_token1,
    ACTIONS(13), 1,
      sym__eof,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym___inline_text,
    STATE(3), 2,
      sym___blank_line,
      aux_sym___block_separator_repeat1,
  [15] = 3,
    ACTIONS(17), 1,
      aux_sym___blank_line_token1,
    STATE(3), 2,
      sym___blank_line,
      aux_sym___block_separator_repeat1,
    ACTIONS(15), 3,
      sym__eof,
      ts_builtin_sym_end,
      sym___inline_text,
  [28] = 5,
    ACTIONS(7), 1,
      sym___inline_text,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_paragraph__,
    STATE(19), 1,
      sym_block_list__,
    STATE(6), 2,
      sym_block__,
      aux_sym_block_list___repeat1,
  [45] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym___inline_text,
    STATE(7), 1,
      sym_paragraph__,
    STATE(5), 2,
      sym_block__,
      aux_sym_block_list___repeat1,
  [59] = 4,
    ACTIONS(7), 1,
      sym___inline_text,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_paragraph__,
    STATE(5), 2,
      sym_block__,
      aux_sym_block_list___repeat1,
  [73] = 4,
    ACTIONS(29), 1,
      aux_sym___blank_line_token1,
    ACTIONS(31), 1,
      sym__eof,
    STATE(15), 1,
      sym___block_separator,
    STATE(2), 2,
      sym___blank_line,
      aux_sym___block_separator_repeat1,
  [87] = 2,
    ACTIONS(35), 1,
      aux_sym___blank_line_token1,
    ACTIONS(33), 3,
      sym__eof,
      ts_builtin_sym_end,
      sym___inline_text,
  [96] = 4,
    ACTIONS(37), 1,
      aux_sym___blank_line_token1,
    ACTIONS(39), 1,
      sym__newline_token,
    ACTIONS(41), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_paragraph___repeat1,
  [109] = 4,
    ACTIONS(43), 1,
      aux_sym___blank_line_token1,
    ACTIONS(45), 1,
      sym__newline_token,
    ACTIONS(47), 1,
      sym__eof,
    STATE(9), 1,
      aux_sym_paragraph___repeat1,
  [122] = 4,
    ACTIONS(49), 1,
      aux_sym___blank_line_token1,
    ACTIONS(51), 1,
      sym__newline_token,
    ACTIONS(54), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_paragraph___repeat1,
  [135] = 3,
    ACTIONS(37), 1,
      aux_sym___blank_line_token1,
    ACTIONS(41), 1,
      sym__eof,
    ACTIONS(56), 1,
      sym___inline_text,
  [145] = 2,
    ACTIONS(49), 1,
      aux_sym___blank_line_token1,
    ACTIONS(54), 2,
      sym__eof,
      sym__newline_token,
  [153] = 3,
    ACTIONS(56), 1,
      sym___inline_text,
    ACTIONS(58), 1,
      aux_sym___blank_line_token1,
    ACTIONS(60), 1,
      sym__eof,
  [163] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym___inline_text,
  [168] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym___inline_text,
  [173] = 1,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
  [177] = 1,
    ACTIONS(66), 1,
      sym__newline_token,
  [181] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [189] = 1,
    ACTIONS(56), 1,
      sym___inline_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 59,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 109,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 153,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 168,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 185,
  [SMALL_STATE(21)] = 189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___block_separator, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym___block_separator_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym___block_separator_repeat1, 2), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list___repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list___repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list__, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___blank_line, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___blank_line, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph__, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph__, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph__, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph__, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph___repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph___repeat1, 2), SHIFT_REPEAT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph___repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph__, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph__, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block__, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___block_separator, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
