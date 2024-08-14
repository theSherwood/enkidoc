#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  anon_sym_import = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_export = 4,
  anon_sym_COMMA = 5,
  anon_sym_fn = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_let = 10,
  anon_sym_EQ = 11,
  anon_sym_LF = 12,
  anon_sym_SEMI = 13,
  anon_sym_NULL = 14,
  anon_sym_bool = 15,
  anon_sym_i8 = 16,
  anon_sym_u8 = 17,
  anon_sym_i16 = 18,
  anon_sym_u16 = 19,
  anon_sym_i32 = 20,
  anon_sym_u32 = 21,
  anon_sym_f32 = 22,
  anon_sym_f64 = 23,
  anon_sym_string = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_return = 27,
  sym_identifier = 28,
  sym_int_literal = 29,
  sym_float_literal = 30,
  anon_sym_STAR = 31,
  anon_sym_SLASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_EQ_EQ = 35,
  anon_sym_BANG_EQ = 36,
  anon_sym_LT = 37,
  anon_sym_GT = 38,
  anon_sym_LT_EQ = 39,
  anon_sym_GT_EQ = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_import_definition = 43,
  sym_export_definition = 44,
  sym__identifier_list = 45,
  sym_function_definition = 46,
  sym_parameter_list = 47,
  sym_variable_definition = 48,
  sym_typed_identifier = 49,
  sym__type = 50,
  sym_primitive_type = 51,
  sym_block = 52,
  sym__statement = 53,
  sym_return_statement = 54,
  sym_assignment = 55,
  sym__expression = 56,
  sym_binary_expression = 57,
  sym_comparison_expression = 58,
  sym_call = 59,
  sym_argument_list = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym__identifier_list_repeat1 = 62,
  aux_sym_parameter_list_repeat1 = 63,
  aux_sym_block_repeat1 = 64,
  aux_sym_argument_list_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_export] = "export",
  [anon_sym_COMMA] = ",",
  [anon_sym_fn] = "fn",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_NULL] = "\0",
  [anon_sym_bool] = "bool",
  [anon_sym_i8] = "i8",
  [anon_sym_u8] = "u8",
  [anon_sym_i16] = "i16",
  [anon_sym_u16] = "u16",
  [anon_sym_i32] = "i32",
  [anon_sym_u32] = "u32",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_string] = "string",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_import_definition] = "import_definition",
  [sym_export_definition] = "export_definition",
  [sym__identifier_list] = "_identifier_list",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_variable_definition] = "variable_definition",
  [sym_typed_identifier] = "typed_identifier",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym_call] = "call",
  [sym_argument_list] = "argument_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__identifier_list_repeat1] = "_identifier_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_import_definition] = sym_import_definition,
  [sym_export_definition] = sym_export_definition,
  [sym__identifier_list] = sym__identifier_list,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_variable_definition] = sym_variable_definition,
  [sym_typed_identifier] = sym_typed_identifier,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym_call] = sym_call,
  [sym_argument_list] = sym_argument_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__identifier_list_repeat1] = aux_sym__identifier_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_import_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_export_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_list] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_args = 1,
  field_body = 2,
  field_expr = 3,
  field_ident = 4,
  field_idents = 5,
  field_lhs = 6,
  field_namespace = 7,
  field_params = 8,
  field_rhs = 9,
  field_type = 10,
  field_typed_ident = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_expr] = "expr",
  [field_ident] = "ident",
  [field_idents] = "idents",
  [field_lhs] = "lhs",
  [field_namespace] = "namespace",
  [field_params] = "params",
  [field_rhs] = "rhs",
  [field_type] = "type",
  [field_typed_ident] = "typed_ident",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 4},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 4},
  [8] = {.index = 16, .length = 1},
  [9] = {.index = 17, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_namespace, 1},
  [1] =
    {field_idents, 2},
  [2] =
    {field_ident, 0},
    {field_type, 2},
  [4] =
    {field_idents, 2},
    {field_idents, 3},
    {field_idents, 4},
    {field_namespace, 1},
  [8] =
    {field_args, 1},
    {field_ident, 0},
  [10] =
    {field_expr, 3},
    {field_typed_ident, 1},
  [12] =
    {field_body, 5},
    {field_ident, 1},
    {field_params, 2},
    {field_type, 4},
  [16] =
    {field_expr, 1},
  [17] =
    {field_lhs, 0},
    {field_rhs, 2},
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
  [8] = 7,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 6,
  [20] = 12,
  [21] = 17,
  [22] = 9,
  [23] = 5,
  [24] = 13,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 39,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 90,
  [101] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        0, 59,
        '!', 15,
        '(', 51,
        ')', 52,
        '*', 112,
        '+', 114,
        ',', 48,
        '-', 115,
        '/', 113,
        ':', 50,
        ';', 58,
        '<', 118,
        '=', 56,
        '>', 119,
        '[', 45,
        ']', 46,
        'b', 25,
        'e', 40,
        'f', 11,
        'i', 6,
        'l', 17,
        'r', 18,
        's', 34,
        'u', 7,
        '{', 80,
        '}', 81,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        0, 59,
        '\n', 57,
        '!', 15,
        '(', 51,
        '*', 112,
        '+', 114,
        '-', 115,
        '/', 113,
        ';', 58,
        '<', 118,
        '=', 16,
        '>', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if ((!eof && lookahead == 00)) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ';') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 15,
        '(', 51,
        ')', 52,
        '*', 112,
        '+', 114,
        ',', 48,
        '-', 115,
        '/', 113,
        '<', 118,
        '=', 16,
        '>', 119,
        'b', 101,
        'f', 89,
        'i', 84,
        's', 104,
        'u', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ']') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '}') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '8') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '3') ADVANCE(87);
      if (lookahead == '8') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '3') ADVANCE(88);
      if (lookahead == '8') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == '6') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(95),
    [sym__definition] = STATE(27),
    [sym_import_definition] = STATE(27),
    [sym_export_definition] = STATE(27),
    [sym_function_definition] = STATE(27),
    [sym_variable_definition] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_argument_list,
    ACTIONS(17), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [24] = 4,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_argument_list,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [47] = 3,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(68), 2,
      sym__type,
      sym_primitive_type,
    ACTIONS(21), 10,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_string,
  [67] = 3,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(27), 8,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [87] = 2,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [105] = 6,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [131] = 6,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [157] = 2,
    ACTIONS(49), 1,
      anon_sym_LF,
    ACTIONS(51), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [175] = 4,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [197] = 4,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [219] = 2,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(65), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [237] = 2,
    ACTIONS(67), 1,
      anon_sym_LF,
    ACTIONS(69), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [255] = 4,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(73), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [277] = 4,
    ACTIONS(75), 1,
      anon_sym_LF,
    ACTIONS(77), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(57), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [299] = 2,
    ACTIONS(79), 1,
      anon_sym_LF,
    ACTIONS(81), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [317] = 2,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(85), 12,
      anon_sym_SEMI,
      anon_sym_NULL,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [335] = 3,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(72), 2,
      sym__type,
      sym_primitive_type,
    ACTIONS(21), 10,
      anon_sym_bool,
      anon_sym_i8,
      anon_sym_u8,
      anon_sym_i16,
      anon_sym_u16,
      anon_sym_i32,
      anon_sym_u32,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_string,
  [355] = 2,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [372] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [389] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [406] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [423] = 3,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [442] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [459] = 4,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(41), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [480] = 2,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [497] = 6,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      anon_sym_export,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(28), 6,
      sym__definition,
      sym_import_definition,
      sym_export_definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [521] = 6,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_import,
    ACTIONS(98), 1,
      anon_sym_export,
    ACTIONS(101), 1,
      anon_sym_fn,
    ACTIONS(104), 1,
      anon_sym_let,
    STATE(28), 6,
      sym__definition,
      sym_import_definition,
      sym_export_definition,
      sym_function_definition,
      sym_variable_definition,
      aux_sym_source_file_repeat1,
  [545] = 5,
    ACTIONS(107), 1,
      anon_sym_LF,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(109), 2,
      anon_sym_SEMI,
      anon_sym_NULL,
    ACTIONS(113), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(10), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [566] = 5,
    ACTIONS(115), 1,
      anon_sym_let,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_return,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(30), 5,
      sym_variable_definition,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [586] = 5,
    ACTIONS(126), 1,
      anon_sym_let,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(30), 5,
      sym_variable_definition,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [606] = 6,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_int_literal,
    ACTIONS(142), 1,
      sym_float_literal,
    STATE(8), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [628] = 5,
    ACTIONS(126), 1,
      anon_sym_let,
    ACTIONS(130), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(31), 5,
      sym_variable_definition,
      sym__statement,
      sym_return_statement,
      sym_assignment,
      aux_sym_block_repeat1,
  [648] = 6,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      sym_int_literal,
    ACTIONS(152), 1,
      sym_float_literal,
    STATE(7), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [670] = 5,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      sym_int_literal,
    ACTIONS(158), 1,
      sym_float_literal,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [689] = 5,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym_int_literal,
    ACTIONS(158), 1,
      sym_float_literal,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [708] = 5,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym_int_literal,
    ACTIONS(158), 1,
      sym_float_literal,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [727] = 5,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym_int_literal,
    ACTIONS(158), 1,
      sym_float_literal,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [746] = 4,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(168), 1,
      sym_int_literal,
    ACTIONS(170), 1,
      sym_float_literal,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [762] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_int_literal,
    ACTIONS(174), 1,
      sym_float_literal,
    STATE(23), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [778] = 4,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(176), 1,
      sym_int_literal,
    ACTIONS(178), 1,
      sym_float_literal,
    STATE(6), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [794] = 4,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(180), 1,
      sym_int_literal,
    ACTIONS(182), 1,
      sym_float_literal,
    STATE(5), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [810] = 4,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_int_literal,
    ACTIONS(186), 1,
      sym_float_literal,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [826] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym_int_literal,
    ACTIONS(158), 1,
      sym_float_literal,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [842] = 4,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(188), 1,
      sym_int_literal,
    ACTIONS(190), 1,
      sym_float_literal,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [858] = 4,
    ACTIONS(166), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_int_literal,
    ACTIONS(194), 1,
      sym_float_literal,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_comparison_expression,
      sym_call,
  [874] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [885] = 1,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [893] = 1,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [901] = 1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [909] = 1,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [917] = 1,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [925] = 1,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_export,
      anon_sym_fn,
      anon_sym_let,
  [933] = 2,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 3,
      anon_sym_let,
      anon_sym_return,
      sym_identifier,
  [942] = 2,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 3,
      anon_sym_let,
      anon_sym_return,
      sym_identifier,
  [951] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(65), 1,
      sym_typed_identifier,
  [964] = 1,
    ACTIONS(226), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LBRACE,
  [971] = 2,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 3,
      anon_sym_let,
      anon_sym_return,
      sym_identifier,
  [980] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 3,
      anon_sym_let,
      anon_sym_return,
      sym_identifier,
  [989] = 3,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_typed_identifier,
  [999] = 3,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__identifier_list_repeat1,
  [1009] = 3,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym__identifier_list_repeat1,
  [1019] = 3,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym__identifier_list_repeat1,
  [1029] = 3,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_argument_list_repeat1,
  [1039] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_parameter_list_repeat1,
  [1049] = 3,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_argument_list_repeat1,
  [1059] = 3,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [1069] = 1,
    ACTIONS(262), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1075] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(69), 1,
      aux_sym_argument_list_repeat1,
  [1085] = 3,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      sym_typed_identifier,
  [1095] = 3,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [1105] = 2,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
  [1112] = 2,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_parameter_list,
  [1119] = 2,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(85), 1,
      sym__identifier_list,
  [1126] = 2,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(87), 1,
      sym__identifier_list,
  [1133] = 2,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(277), 1,
      sym_identifier,
  [1140] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
  [1147] = 1,
    ACTIONS(236), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1152] = 1,
    ACTIONS(260), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1157] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(90), 1,
      sym_typed_identifier,
  [1164] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(79), 1,
      sym_typed_identifier,
  [1171] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(100), 1,
      sym_typed_identifier,
  [1178] = 1,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [1182] = 1,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1186] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
  [1190] = 1,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1194] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
  [1198] = 1,
    ACTIONS(289), 1,
      anon_sym_EQ,
  [1202] = 1,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [1206] = 1,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [1210] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1214] = 1,
    ACTIONS(297), 1,
      anon_sym_COLON,
  [1218] = 1,
    ACTIONS(277), 1,
      sym_identifier,
  [1222] = 1,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
  [1226] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [1230] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [1234] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [1238] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1242] = 1,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
  [1246] = 1,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [1250] = 1,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 175,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 219,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 277,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 389,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 459,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 497,
  [SMALL_STATE(28)] = 521,
  [SMALL_STATE(29)] = 545,
  [SMALL_STATE(30)] = 566,
  [SMALL_STATE(31)] = 586,
  [SMALL_STATE(32)] = 606,
  [SMALL_STATE(33)] = 628,
  [SMALL_STATE(34)] = 648,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 708,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 746,
  [SMALL_STATE(40)] = 762,
  [SMALL_STATE(41)] = 778,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 810,
  [SMALL_STATE(44)] = 826,
  [SMALL_STATE(45)] = 842,
  [SMALL_STATE(46)] = 858,
  [SMALL_STATE(47)] = 874,
  [SMALL_STATE(48)] = 885,
  [SMALL_STATE(49)] = 893,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 909,
  [SMALL_STATE(52)] = 917,
  [SMALL_STATE(53)] = 925,
  [SMALL_STATE(54)] = 933,
  [SMALL_STATE(55)] = 942,
  [SMALL_STATE(56)] = 951,
  [SMALL_STATE(57)] = 964,
  [SMALL_STATE(58)] = 971,
  [SMALL_STATE(59)] = 980,
  [SMALL_STATE(60)] = 989,
  [SMALL_STATE(61)] = 999,
  [SMALL_STATE(62)] = 1009,
  [SMALL_STATE(63)] = 1019,
  [SMALL_STATE(64)] = 1029,
  [SMALL_STATE(65)] = 1039,
  [SMALL_STATE(66)] = 1049,
  [SMALL_STATE(67)] = 1059,
  [SMALL_STATE(68)] = 1069,
  [SMALL_STATE(69)] = 1075,
  [SMALL_STATE(70)] = 1085,
  [SMALL_STATE(71)] = 1095,
  [SMALL_STATE(72)] = 1105,
  [SMALL_STATE(73)] = 1112,
  [SMALL_STATE(74)] = 1119,
  [SMALL_STATE(75)] = 1126,
  [SMALL_STATE(76)] = 1133,
  [SMALL_STATE(77)] = 1140,
  [SMALL_STATE(78)] = 1147,
  [SMALL_STATE(79)] = 1152,
  [SMALL_STATE(80)] = 1157,
  [SMALL_STATE(81)] = 1164,
  [SMALL_STATE(82)] = 1171,
  [SMALL_STATE(83)] = 1178,
  [SMALL_STATE(84)] = 1182,
  [SMALL_STATE(85)] = 1186,
  [SMALL_STATE(86)] = 1190,
  [SMALL_STATE(87)] = 1194,
  [SMALL_STATE(88)] = 1198,
  [SMALL_STATE(89)] = 1202,
  [SMALL_STATE(90)] = 1206,
  [SMALL_STATE(91)] = 1210,
  [SMALL_STATE(92)] = 1214,
  [SMALL_STATE(93)] = 1218,
  [SMALL_STATE(94)] = 1222,
  [SMALL_STATE(95)] = 1226,
  [SMALL_STATE(96)] = 1230,
  [SMALL_STATE(97)] = 1234,
  [SMALL_STATE(98)] = 1238,
  [SMALL_STATE(99)] = 1242,
  [SMALL_STATE(100)] = 1246,
  [SMALL_STATE(101)] = 1250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, 0, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, 0, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 2, 0, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 6),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_definition, 5, 0, 4),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 7),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_definition, 4, 0, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 8),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, 0, 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, 0, 9),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_list_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_list_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_list, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_list, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_identifier, 3, 0, 3),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_list, 3, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_typed_lite(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
