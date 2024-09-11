/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: ($) => [$.comment, /[ \t]/],

  conflicts: ($) => [
    [$._expression, $.variable_list],
    [$._expression, $.function_call],
    [$.expression_list, $.expression_list],
    [$.block, $.block],
    [$._statement, $.function_declaration],
  ],

  rules: {
    source_file: ($) =>
      seq(
        optional($.hash_bang_line),
        repeat(seq($._statement, optional($._new_line))),
      ),

    hash_bang_line: (_) => /#.*/,

    _statement: ($) =>
      choice(
        $.assignment_statement,
        $.update_statement,
        $.expression_list,
        $._new_line,
      ),

    assignment_statement: ($) => seq($.variable_list, "=", $.expression_list),

    variable_list: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    update_statement: ($) =>
      seq($.identifier, $._update_operator, /[^\r\n]/, $._expression),

    _update_operator: (_) =>
      choice("+=", "-=", "*=", "/=", "%=", "and=", "or=", "..="),

    expression_list: ($) => seq($._expression, repeat(seq(",", $._expression))),

    _expression: ($) =>
      choice(
        $.true,
        $.false,
        $.nil,
        $.string,
        $.number,
        $.identifier,
        $.table_constructor,
        $.function_declaration,
        $.function_call,
      ),

    function_declaration: ($) =>
      seq("()", choice("->", "=>"), choice($._new_line, $._statement, $.block)),

    block: ($) => repeat1(seq($._new_line, $._indent, $._statement)),

    _new_line: (_) => /\r?\n/,
    _indent: (_) => /[ \t]+/,

    function_call: ($) =>
      seq(
        $.identifier,
        choice("!", seq("(", optional($.arguments), ")"), $.arguments),
      ),

    arguments: ($) => alias($.expression_list, "arguments"),

    // Todo finish table fields
    table_constructor: ($) => seq("{", optional($._field_list), "}"),

    _field_list: ($) =>
      seq(
        optional($._new_line),
        $.field,
        repeat(seq(",", optional($._new_line), $.field)),
        optional(","),
        optional($._new_line),
      ),

    field: ($) =>
      choice(
        seq("[", choice($.number, $.string), "]", ":", $._expression),
        alias($._expression, "field"),
      ),

    identifier: ($) => choice(/[a-zA-Z_][a-zA-Z0-9_]*/, $._constant_identifier),
    _constant_identifier: (_) => /[A-Z][A-Z0-9_]*/,

    comment: (_) =>
      choice(
        seq("--", /[^\r\n]*/),
        seq(seq("--[[", /.*\r?\n/), /([^\]][^\]])*/, "]]"),
      ),

    false: (_) => "false",
    true: (_) => "true",
    nil: (_) => "nil",

    string: (_) => /"[^"]*"/,
    number: (_) => /\d+(\.\d+)?/,
  },
});
