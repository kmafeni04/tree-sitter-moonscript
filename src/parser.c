#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_COMMA = 2,
  sym_variable = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DASH_GT = 6,
  sym_number = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token2 = 11,
  sym_source_file = 12,
  sym__statement = 13,
  sym_assignment = 14,
  sym_assignable_list = 15,
  sym__assignable = 16,
  sym_expression_list = 17,
  sym__expression = 18,
  sym_function_declaration = 19,
  sym_parameter_list = 20,
  sym_function_body = 21,
  sym_block = 22,
  sym_string = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_assignable_list_repeat1 = 25,
  aux_sym_expression_list_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [sym_variable] = "variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_assignable_list] = "assignable_list",
  [sym__assignable] = "_assignable",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_function_body] = "function_body",
  [sym_block] = "block",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_assignable_list_repeat1] = "assignable_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_variable] = sym_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_assignable_list] = sym_assignable_list,
  [sym__assignable] = sym__assignable,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_body] = sym_function_body,
  [sym_block] = sym_block,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_assignable_list_repeat1] = aux_sym_assignable_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignable_list] = {
    .visible = true,
    .named = true,
  },
  [sym__assignable] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 25,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ',') ADVANCE(5);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '=') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(9);
      END_STATE();
    case 2:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym__statement] = STATE(10),
    [sym_assignment] = STATE(10),
    [sym_assignable_list] = STATE(48),
    [sym__assignable] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_variable] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_assignable_list] = STATE(22),
    [sym__assignable] = STATE(14),
    [sym__expression] = STATE(27),
    [sym_function_declaration] = STATE(27),
    [sym_function_body] = STATE(28),
    [sym_block] = STATE(27),
    [sym_string] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_variable] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_assignable_list] = STATE(22),
    [sym__assignable] = STATE(14),
    [sym__expression] = STATE(27),
    [sym_function_declaration] = STATE(27),
    [sym_function_body] = STATE(30),
    [sym_block] = STATE(27),
    [sym_string] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_variable] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [4] = {
    [sym__statement] = STATE(9),
    [sym_assignment] = STATE(9),
    [sym_assignable_list] = STATE(22),
    [sym__assignable] = STATE(14),
    [sym__expression] = STATE(27),
    [sym_function_declaration] = STATE(27),
    [sym_function_body] = STATE(23),
    [sym_block] = STATE(27),
    [sym_string] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_variable] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_DASH_GT] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(7), 1,
      sym_variable,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DASH_GT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_number,
    STATE(14), 1,
      sym__assignable,
    STATE(25), 1,
      sym_expression_list,
    STATE(20), 4,
      sym_assignable_list,
      sym__expression,
      sym_function_declaration,
      sym_string,
  [31] = 9,
    ACTIONS(7), 1,
      sym_variable,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DASH_GT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_number,
    STATE(14), 1,
      sym__assignable,
    STATE(25), 1,
      sym_expression_list,
    STATE(17), 4,
      sym_assignable_list,
      sym__expression,
      sym_function_declaration,
      sym_string,
  [62] = 8,
    ACTIONS(7), 1,
      sym_variable,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_DASH_GT,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      sym_number,
    STATE(14), 1,
      sym__assignable,
    STATE(35), 4,
      sym_assignable_list,
      sym__expression,
      sym_function_declaration,
      sym_string,
  [90] = 5,
    ACTIONS(27), 1,
      sym_variable,
    STATE(26), 1,
      sym__assignable,
    STATE(47), 1,
      sym_assignable_list,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(8), 3,
      sym__statement,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [109] = 5,
    ACTIONS(32), 1,
      sym_variable,
    STATE(26), 1,
      sym__assignable,
    STATE(47), 1,
      sym_assignable_list,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
    STATE(8), 3,
      sym__statement,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [128] = 5,
    ACTIONS(5), 1,
      sym_variable,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym__assignable,
    STATE(48), 1,
      sym_assignable_list,
    STATE(11), 3,
      sym__statement,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [146] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_variable,
    STATE(26), 1,
      sym__assignable,
    STATE(48), 1,
      sym_assignable_list,
    STATE(11), 3,
      sym__statement,
      sym_assignment,
      aux_sym_source_file_repeat1,
  [164] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_assignable_list_repeat1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_EQ,
      sym_variable,
  [176] = 2,
    STATE(12), 1,
      aux_sym_assignable_list_repeat1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_variable,
  [186] = 2,
    STATE(13), 1,
      aux_sym_assignable_list_repeat1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_variable,
  [196] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_variable,
  [207] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_variable,
  [218] = 3,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_variable,
  [229] = 1,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_variable,
  [236] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_variable,
  [247] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_variable,
  [258] = 2,
    ACTIONS(66), 1,
      anon_sym_EQ,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [267] = 2,
    ACTIONS(70), 1,
      anon_sym_EQ,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [276] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [282] = 3,
    ACTIONS(42), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_assignable_list_repeat1,
  [292] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [298] = 3,
    ACTIONS(44), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_assignable_list_repeat1,
  [308] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [314] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [320] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameter_list_repeat1,
  [330] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [336] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [346] = 3,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_parameter_list_repeat1,
  [356] = 3,
    ACTIONS(95), 1,
      sym_variable,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_parameter_list,
  [366] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [372] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_variable,
  [378] = 1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [383] = 2,
    ACTIONS(101), 1,
      sym_variable,
    STATE(18), 1,
      sym__assignable,
  [390] = 1,
    ACTIONS(103), 1,
      anon_sym_DASH_GT,
  [394] = 1,
    ACTIONS(105), 1,
      aux_sym_string_token1,
  [398] = 1,
    ACTIONS(107), 1,
      sym_variable,
  [402] = 1,
    ACTIONS(109), 1,
      aux_sym_string_token2,
  [406] = 1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
  [410] = 1,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
  [414] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [418] = 1,
    ACTIONS(115), 1,
      anon_sym_DASH_GT,
  [422] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [426] = 1,
    ACTIONS(70), 1,
      anon_sym_EQ,
  [430] = 1,
    ACTIONS(119), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 176,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 196,
  [SMALL_STATE(16)] = 207,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 229,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 267,
  [SMALL_STATE(23)] = 276,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 292,
  [SMALL_STATE(26)] = 298,
  [SMALL_STATE(27)] = 308,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 320,
  [SMALL_STATE(30)] = 330,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 346,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 366,
  [SMALL_STATE(35)] = 372,
  [SMALL_STATE(36)] = 378,
  [SMALL_STATE(37)] = 383,
  [SMALL_STATE(38)] = 390,
  [SMALL_STATE(39)] = 394,
  [SMALL_STATE(40)] = 398,
  [SMALL_STATE(41)] = 402,
  [SMALL_STATE(42)] = 406,
  [SMALL_STATE(43)] = 410,
  [SMALL_STATE(44)] = 414,
  [SMALL_STATE(45)] = 418,
  [SMALL_STATE(46)] = 422,
  [SMALL_STATE(47)] = 426,
  [SMALL_STATE(48)] = 430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_block, 1, 0, 0), SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignable_list_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_list, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignable_list, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0), SHIFT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0), SHIFT(7),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__assignable, 1, 0, 0), REDUCE(sym__expression, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignable, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

TS_PUBLIC const TSLanguage *tree_sitter_moonscript(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
