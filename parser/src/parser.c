#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__blank_line_token1 = 1,
  sym__inline_text = 2,
  sym__inline_whitespace = 3,
  sym__newline_token = 4,
  sym__line_start = 5,
  sym__line_end = 6,
  sym__indent = 7,
  sym__dedent = 8,
  sym__eof = 9,
  sym_source_file = 10,
  sym__blank_line = 11,
  sym__block_separator = 12,
  sym_block = 13,
  sym_block_list = 14,
  sym_paragraph = 15,
  aux_sym__block_separator_repeat1 = 16,
  aux_sym_block_list_repeat1 = 17,
  aux_sym_paragraph_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__blank_line_token1] = "_blank_line_token1",
  [sym__inline_text] = "_inline_text",
  [sym__inline_whitespace] = "_inline_whitespace",
  [sym__newline_token] = "_newline_token",
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
  [sym_paragraph] = "paragraph",
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
  [sym_paragraph] = sym_paragraph,
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
  [sym_paragraph] = {
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
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__blank_line_token1);
      if (eof) ADVANCE(2);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__inline_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__newline_token);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__newline_token);
      if (lookahead == '\n') ADVANCE(8);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 6, .external_lex_state = 2},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 3, .external_lex_state = 2},
  [10] = {.lex_state = 3, .external_lex_state = 2},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 6},
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
    [sym__line_start] = ACTIONS(1),
    [sym__line_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__blank_line] = STATE(2),
    [sym__block_separator] = STATE(4),
    [sym_block] = STATE(6),
    [sym_block_list] = STATE(17),
    [sym_paragraph] = STATE(7),
    [aux_sym__block_separator_repeat1] = STATE(2),
    [aux_sym_block_list_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__blank_line_token1] = ACTIONS(5),
    [sym__inline_text] = ACTIONS(7),
    [sym__eof] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      aux_sym__blank_line_token1,
    ACTIONS(13), 1,
      sym__eof,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym__inline_text,
    STATE(3), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [15] = 3,
    ACTIONS(17), 1,
      aux_sym__blank_line_token1,
    STATE(3), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
    ACTIONS(15), 3,
      sym__eof,
      ts_builtin_sym_end,
      sym__inline_text,
  [28] = 5,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_paragraph,
    STATE(19), 1,
      sym_block_list,
    STATE(6), 2,
      sym_block,
      aux_sym_block_list_repeat1,
  [45] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym__inline_text,
    STATE(7), 1,
      sym_paragraph,
    STATE(5), 2,
      sym_block,
      aux_sym_block_list_repeat1,
  [59] = 4,
    ACTIONS(7), 1,
      sym__inline_text,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_paragraph,
    STATE(5), 2,
      sym_block,
      aux_sym_block_list_repeat1,
  [73] = 4,
    ACTIONS(29), 1,
      aux_sym__blank_line_token1,
    ACTIONS(31), 1,
      sym__eof,
    STATE(15), 1,
      sym__block_separator,
    STATE(2), 2,
      sym__blank_line,
      aux_sym__block_separator_repeat1,
  [87] = 2,
    ACTIONS(35), 1,
      aux_sym__blank_line_token1,
    ACTIONS(33), 3,
      sym__eof,
      ts_builtin_sym_end,
      sym__inline_text,
  [96] = 4,
    ACTIONS(37), 1,
      aux_sym__blank_line_token1,
    ACTIONS(39), 1,
      sym__newline_token,
    ACTIONS(41), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
  [109] = 4,
    ACTIONS(43), 1,
      aux_sym__blank_line_token1,
    ACTIONS(45), 1,
      sym__newline_token,
    ACTIONS(47), 1,
      sym__eof,
    STATE(9), 1,
      aux_sym_paragraph_repeat1,
  [122] = 4,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(51), 1,
      sym__newline_token,
    ACTIONS(54), 1,
      sym__eof,
    STATE(11), 1,
      aux_sym_paragraph_repeat1,
  [135] = 3,
    ACTIONS(37), 1,
      aux_sym__blank_line_token1,
    ACTIONS(41), 1,
      sym__eof,
    ACTIONS(56), 1,
      sym__inline_text,
  [145] = 2,
    ACTIONS(49), 1,
      aux_sym__blank_line_token1,
    ACTIONS(54), 2,
      sym__eof,
      sym__newline_token,
  [153] = 3,
    ACTIONS(56), 1,
      sym__inline_text,
    ACTIONS(58), 1,
      aux_sym__blank_line_token1,
    ACTIONS(60), 1,
      sym__eof,
  [163] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym__inline_text,
  [168] = 1,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      sym__inline_text,
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
      sym__inline_text,
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
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_separator_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_separator_repeat1, 2), SHIFT_REPEAT(18),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_list_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_list, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__blank_line, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__blank_line, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_separator, 2),
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
