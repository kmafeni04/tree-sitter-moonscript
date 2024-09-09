#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_hash_bang_line = 1,
  anon_sym_EQ = 2,
  anon_sym_COMMA = 3,
  anon_sym_PLUS_EQ = 4,
  anon_sym_DASH_EQ = 5,
  anon_sym_STAR_EQ = 6,
  anon_sym_SLASH_EQ = 7,
  anon_sym_PERCENT_EQ = 8,
  anon_sym_and_EQ = 9,
  anon_sym_or_EQ = 10,
  anon_sym_DOT_DOT_EQ = 11,
  aux_sym_identifier_token1 = 12,
  sym__constant_identifier = 13,
  anon_sym_DASH_DASH = 14,
  aux_sym_comment_token1 = 15,
  anon_sym_DASH_DASH_LBRACK_LBRACK = 16,
  aux_sym_comment_token2 = 17,
  aux_sym_comment_token3 = 18,
  anon_sym_RBRACK_RBRACK = 19,
  sym_false = 20,
  sym_true = 21,
  sym_nil = 22,
  sym_string = 23,
  sym_number = 24,
  sym_source_file = 25,
  sym_statement = 26,
  sym_assignment_statement = 27,
  sym_variable_list = 28,
  sym_variable = 29,
  sym_update_statement = 30,
  sym__update_operator = 31,
  sym_expression_list = 32,
  sym__expression = 33,
  sym_identifier = 34,
  sym_comment = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_variable_list_repeat1 = 37,
  aux_sym_expression_list_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_hash_bang_line] = "hash_bang_line",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_and_EQ] = "and=",
  [anon_sym_or_EQ] = "or=",
  [anon_sym_DOT_DOT_EQ] = "..=",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__constant_identifier] = "_constant_identifier",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = "--[[",
  [aux_sym_comment_token2] = "comment_token2",
  [aux_sym_comment_token3] = "comment_token3",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_false] = "false",
  [sym_true] = "true",
  [sym_nil] = "nil",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_variable_list] = "variable_list",
  [sym_variable] = "variable",
  [sym_update_statement] = "update_statement",
  [sym__update_operator] = "_update_operator",
  [sym_expression_list] = "expression_list",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_variable_list_repeat1] = "variable_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_hash_bang_line] = sym_hash_bang_line,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_and_EQ] = anon_sym_and_EQ,
  [anon_sym_or_EQ] = anon_sym_or_EQ,
  [anon_sym_DOT_DOT_EQ] = anon_sym_DOT_DOT_EQ,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__constant_identifier] = sym__constant_identifier,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = anon_sym_DASH_DASH_LBRACK_LBRACK,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [aux_sym_comment_token3] = aux_sym_comment_token3,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [sym_nil] = sym_nil,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_variable_list] = sym_variable_list,
  [sym_variable] = sym_variable,
  [sym_update_statement] = sym_update_statement,
  [sym__update_operator] = sym__update_operator,
  [sym_expression_list] = sym_expression_list,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_variable_list_repeat1] = aux_sym_variable_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_hash_bang_line] = {
    .visible = true,
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__constant_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_update_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__update_operator] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 5,
        '#', 36,
        '%', 10,
        '*', 11,
        '+', 12,
        ',', 38,
        '-', 7,
        '.', 9,
        '/', 13,
        '=', 37,
        ']', 19,
        'a', 27,
        'f', 20,
        'n', 24,
        'o', 29,
        't', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == '[') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == '[') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == ']') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(69);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(34);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_hash_bang_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_and_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_or_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__constant_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(17);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(33);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '[') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(33);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_LBRACK_LBRACK);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(33);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(33);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token3);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 34},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 34},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 34},
  [13] = {.lex_state = 34},
  [14] = {.lex_state = 34},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 34},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 34},
  [19] = {.lex_state = 34},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 34},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 34},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {(TSStateId)(-1)},
  [33] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_hash_bang_line] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_and_EQ] = ACTIONS(1),
    [anon_sym_or_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_EQ] = ACTIONS(1),
    [sym__constant_identifier] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_DASH_DASH_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_statement] = STATE(24),
    [sym_assignment_statement] = STATE(19),
    [sym_variable_list] = STATE(29),
    [sym_variable] = STATE(2),
    [sym_update_statement] = STATE(19),
    [sym_identifier] = STATE(5),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_hash_bang_line] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [sym__constant_identifier] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_DASH_DASH_LBRACK_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym_comment,
    STATE(10), 1,
      sym__update_operator,
    STATE(20), 1,
      aux_sym_variable_list_repeat1,
    ACTIONS(20), 8,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [32] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym__constant_identifier,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 1,
      sym_statement,
    STATE(29), 1,
      sym_variable_list,
    STATE(19), 2,
      sym_assignment_statement,
      sym_update_statement,
  [70] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(4), 1,
      sym_comment,
    ACTIONS(24), 10,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [92] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(5), 1,
      sym_comment,
    ACTIONS(26), 10,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_and_EQ,
      anon_sym_or_EQ,
      anon_sym_DOT_DOT_EQ,
  [114] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym__constant_identifier,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(24), 1,
      sym_statement,
    STATE(29), 1,
      sym_variable_list,
    STATE(19), 2,
      sym_assignment_statement,
      sym_update_statement,
  [152] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      aux_sym_identifier_token1,
    ACTIONS(33), 1,
      sym__constant_identifier,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(24), 1,
      sym_statement,
    STATE(29), 1,
      sym_variable_list,
    STATE(7), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(19), 2,
      sym_assignment_statement,
      sym_update_statement,
  [188] = 12,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym__constant_identifier,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_variable,
    STATE(5), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(24), 1,
      sym_statement,
    STATE(29), 1,
      sym_variable_list,
    STATE(19), 2,
      sym_assignment_statement,
      sym_update_statement,
  [226] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      sym__expression,
    STATE(21), 1,
      sym_expression_list,
    ACTIONS(38), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [249] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(10), 1,
      sym_comment,
    STATE(22), 1,
      sym__expression,
    ACTIONS(38), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [269] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(11), 1,
      sym_comment,
    STATE(16), 1,
      sym__expression,
    ACTIONS(38), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [289] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym__constant_identifier,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
    STATE(12), 2,
      sym_comment,
      aux_sym_expression_list_repeat1,
  [310] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      sym__constant_identifier,
    STATE(12), 1,
      aux_sym_expression_list_repeat1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [333] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      sym__constant_identifier,
    STATE(13), 1,
      aux_sym_expression_list_repeat1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [356] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(15), 1,
      sym_comment,
    ACTIONS(57), 5,
      sym_false,
      sym_true,
      sym_nil,
      sym_string,
      sym_number,
  [373] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(45), 1,
      sym__constant_identifier,
    STATE(16), 1,
      sym_comment,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
  [391] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(61), 1,
      sym__constant_identifier,
    STATE(17), 1,
      sym_comment,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      aux_sym_identifier_token1,
  [409] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      sym__constant_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(18), 1,
      sym_comment,
    STATE(25), 1,
      sym_variable,
  [431] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(65), 1,
      sym__constant_identifier,
    STATE(19), 1,
      sym_comment,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [448] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_EQ,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_variable_list_repeat1,
  [467] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(71), 1,
      sym__constant_identifier,
    STATE(21), 1,
      sym_comment,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [484] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(75), 1,
      sym__constant_identifier,
    STATE(22), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [501] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(23), 2,
      sym_comment,
      aux_sym_variable_list_repeat1,
  [518] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(84), 1,
      sym__constant_identifier,
    STATE(24), 1,
      sym_comment,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_identifier_token1,
  [535] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_EQ,
      anon_sym_COMMA,
  [549] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(86), 1,
      aux_sym_comment_token1,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    STATE(26), 1,
      sym_comment,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(90), 1,
      anon_sym_RBRACK_RBRACK,
    STATE(27), 1,
      sym_comment,
  [575] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(92), 1,
      aux_sym_comment_token3,
    STATE(28), 1,
      sym_comment,
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(94), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_comment,
  [601] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
  [614] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_DASH_DASH_LBRACK_LBRACK,
    ACTIONS(98), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
  [627] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [631] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 269,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 333,
  [SMALL_STATE(15)] = 356,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 391,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 448,
  [SMALL_STATE(21)] = 467,
  [SMALL_STATE(22)] = 484,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 549,
  [SMALL_STATE(27)] = 562,
  [SMALL_STATE(28)] = 575,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 614,
  [SMALL_STATE(32)] = 627,
  [SMALL_STATE(33)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_list, 1, 0, 0), SHIFT(15),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__update_operator, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_list, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_statement, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_statement, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
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
