#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym__blank_line_token1 = 1,
  sym__inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  aux_sym_heading_token1 = 5,
  sym__line_start = 6,
  sym__line_end = 7,
  sym__indent = 8,
  sym__dedent = 9,
  sym__eof = 10,
  sym_source_file = 11,
  sym__blank_line = 12,
  sym__block_separator = 13,
  sym_block = 14,
  sym_block_list = 15,
  sym__inline_content = 16,
  sym_paragraph = 17,
  sym_heading = 18,
  aux_sym__block_separator_repeat1 = 19,
  aux_sym_block_list_repeat1 = 20,
  aux_sym_paragraph_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym__inline_text] = "_inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
  [aux_sym_heading_token1] = "heading_token1",
  [sym__line_start] = "_line_start",
  [sym__line_end] = "_line_end",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__eof] = "_eof",
  [sym_source_file] = "source_file",
  [sym__blank_line] = "_blank_line",
  [sym__block_separator] = "_block_separator",
  [sym_block] = "block",
  [sym_block_list] = "block_list",
  [sym__inline_content] = "_inline_content",
  [sym_paragraph] = "paragraph",
  [sym_heading] = "heading",
  [aux_sym__block_separator_repeat1] = "_block_separator_repeat1",
  [aux_sym_block_list_repeat1] = "block_list_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__blank_line_token1] = aux_sym__blank_line_token1,
  [sym__inline_text] = sym__inline_text,
  [sym__inline_whitespace] = sym__inline_whitespace,
  [sym__newline_token] = sym__newline_token,
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [sym__line_start] = sym__line_start,
  [sym__line_end] = sym__line_end,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__eof] = sym__eof,
  [sym_source_file] = sym_source_file,
  [sym__blank_line] = sym__blank_line,
  [sym__block_separator] = sym__block_separator,
  [sym_block] = sym_block,
  [sym_block_list] = sym_block_list,
  [sym__inline_content] = sym__inline_content,
  [sym_paragraph] = sym_paragraph,
  [sym_heading] = sym_heading,
  [aux_sym__block_separator_repeat1] = aux_sym__block_separator_repeat1,
  [aux_sym_block_list_repeat1] = aux_sym_block_list_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
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
};

enum {
  field_content = 1,
  field_token = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_token] = "token",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
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
    {field_content, 2},
    {field_content, 3},
    {field_token, 0},
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
  [26] = 26,
  [27] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(3);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__inline_whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 7, .external_lex_state = 2},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7, .external_lex_state = 2},
  [6] = {.lex_state = 7, .external_lex_state = 2},
  [7] = {.lex_state = 7, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 5, .external_lex_state = 2},
  [10] = {.lex_state = 4, .external_lex_state = 2},
  [11] = {.lex_state = 4, .external_lex_state = 2},
  [12] = {.lex_state = 4, .external_lex_state = 2},
  [13] = {.lex_state = 5, .external_lex_state = 2},
  [14] = {.lex_state = 4, .external_lex_state = 2},
  [15] = {.lex_state = 5, .external_lex_state = 2},
  [16] = {.lex_state = 4, .external_lex_state = 2},
  [17] = {.lex_state = 5, .external_lex_state = 2},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 4, .external_lex_state = 2},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
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
    [aux_sym__blank_line_token1] = ACTIONS(1),
    [sym__inline_whitespace] = ACTIONS(1),
    [sym__newline_token] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__blank_line] = STATE(5),
    [sym__block_separator] = STATE(2),
    [sym_block] = STATE(4),
    [sym_block_list] = STATE(25),
    [sym__inline_content] = STATE(10),
    [sym_paragraph] = STATE(8),
    [sym_heading] = STATE(8),
    [aux_sym__block_separator_repeat1] = STATE(5),
    [aux_sym_block_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym__inline_text] = ACTIONS(7),
    [aux_sym_heading_token1] = ACTIONS(9),
    [sym__eof] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__inline_content,
    STATE(24), 1,
      sym_block_list,
    STATE(4), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(8), 2,
      sym_paragraph,
      sym_heading,
  [24] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__inline_text,
    ACTIONS(20), 1,
      aux_sym_heading_token1,
    STATE(10), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(8), 2,
      sym_paragraph,
      sym_heading,
  [45] = 6,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(9), 1,
      aux_sym_heading_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym__inline_content,
    STATE(3), 2,
      sym_block,
      aux_sym_block_list_repeat1,
    STATE(8), 2,
      sym_paragraph,
      sym_heading,
  [66] = 5,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(27), 1,
      sym__inline_text,
    ACTIONS(29), 1,
      sym__eof,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [84] = 4,
    ACTIONS(33), 1,
      aux_sym__blank_line_token1,
    ACTIONS(36), 1,
      sym__inline_text,
    STATE(6), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(31), 3,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
  [100] = 2,
    ACTIONS(40), 2,
      aux_sym__blank_line_token1,
      sym__inline_text,
    ACTIONS(38), 3,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
  [110] = 4,
    ACTIONS(42), 1,
      aux_sym__blank_line_token1,
    ACTIONS(44), 1,
      sym__eof,
    STATE(18), 1,
      sym__block_separator,
    STATE(5), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [124] = 4,
    ACTIONS(46), 1,
      aux_sym__blank_line_token1,
    ACTIONS(48), 1,
      sym__inline_text,
    ACTIONS(50), 1,
      sym__eof,
    STATE(20), 1,
      sym__inline_content,
  [137] = 4,
    ACTIONS(52), 1,
      aux_sym__blank_line_token1,
    ACTIONS(54), 1,
      sym__newline_token,
    ACTIONS(56), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
  [150] = 4,
    ACTIONS(58), 1,
      aux_sym__blank_line_token1,
    ACTIONS(60), 1,
      sym__newline_token,
    ACTIONS(62), 1,
      sym__eof,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
  [163] = 4,
    ACTIONS(64), 1,
      aux_sym__blank_line_token1,
    ACTIONS(66), 1,
      sym__newline_token,
    ACTIONS(68), 1,
      sym__eof,
    STATE(16), 1,
      aux_sym_paragraph_repeat1,
  [176] = 4,
    ACTIONS(48), 1,
      sym__inline_text,
    ACTIONS(70), 1,
      aux_sym__blank_line_token1,
    ACTIONS(72), 1,
      sym__eof,
    STATE(20), 1,
      sym__inline_content,
  [189] = 4,
    ACTIONS(74), 1,
      aux_sym__blank_line_token1,
    ACTIONS(76), 1,
      sym__newline_token,
    ACTIONS(79), 1,
      sym__eof,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
  [202] = 4,
    ACTIONS(48), 1,
      sym__inline_text,
    ACTIONS(81), 1,
      aux_sym__blank_line_token1,
    ACTIONS(83), 1,
      sym__eof,
    STATE(20), 1,
      sym__inline_content,
  [215] = 4,
    ACTIONS(85), 1,
      aux_sym__blank_line_token1,
    ACTIONS(87), 1,
      sym__newline_token,
    ACTIONS(89), 1,
      sym__eof,
    STATE(14), 1,
      aux_sym_paragraph_repeat1,
  [228] = 4,
    ACTIONS(48), 1,
      sym__inline_text,
    ACTIONS(91), 1,
      aux_sym__blank_line_token1,
    ACTIONS(93), 1,
      sym__eof,
    STATE(20), 1,
      sym__inline_content,
  [241] = 2,
    ACTIONS(97), 1,
      sym__inline_text,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
  [249] = 2,
    ACTIONS(101), 1,
      sym__inline_text,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym_heading_token1,
  [257] = 2,
    ACTIONS(74), 1,
      aux_sym__blank_line_token1,
    ACTIONS(79), 2,
      sym__eof,
      sym__newline_token,
  [265] = 2,
    ACTIONS(103), 1,
      sym__inline_text,
    STATE(12), 1,
      sym__inline_content,
  [272] = 2,
    ACTIONS(48), 1,
      sym__inline_text,
    STATE(20), 1,
      sym__inline_content,
  [279] = 1,
    ACTIONS(105), 1,
      sym__newline_token,
  [283] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
  [287] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
  [291] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [295] = 1,
    ACTIONS(111), 1,
      sym__inline_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 100,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 124,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 150,
  [SMALL_STATE(12)] = 163,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 189,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 295,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3, .production_id = 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 5, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 5, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_separator, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
