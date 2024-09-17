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
    [$.if_statement, $.if_statement],
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
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $._new_line,
      ),

    assignment_statement: ($) => seq($.variable_list, "=", $.expression_list),

    variable_list: ($) => seq($.identifier, repeat(seq(",", $.identifier))),

    update_statement: ($) =>
      seq($.identifier, $._update_operator, /[^\r\n]/, $._expression),

    _update_operator: (_) =>
      choice("+=", "-=", "*=", "/=", "%=", "and=", "or=", "..="),

    if_statement: ($) =>
      seq(
        "if",
        $._expression,
        "then",
        choice($._statement, $.block),
        optional($.else_if),
        optional($.else),
      ),

    else_if: ($) =>
      seq(
        optional($._new_line),
        "elseif",
        $._expression,
        "then",
        choice($._statement, $.block),
      ),

    else: ($) =>
      seq(optional($._new_line), "else", choice($._statement, $.block)),

    for_statement: ($) => seq("for", choice($.for_func, $.for_num)),

    for_func: ($) =>
      seq(
        $.identifier,
        optional(repeat(seq(",", $.identifier))),
        "in",
        $.function_call,
        choice($._statement, $.block),
      ),
    for_num: ($) =>
      seq(
        $.identifier,
        optional(repeat(seq(",", $.identifier))),
        "=",
        $.number,
        optional(repeat(seq(",", $.number))),
        choice($._statement, $.block),
      ),

    while_statement: ($) =>
      seq(
        "while",
        $._expression,
        choice(seq("do", choice($._statement, $.block)), $.block),
      ),

    comparison_expression: ($) =>
      seq($.identifier, $._comparison_operator, $._expression),
    _comparison_operator: (_) => choice("==", "<=", ">=", "~=", "!=", "<", ">"),

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
        $.comparison_expression,
      ),

    function_declaration: ($) =>
      seq("()", choice("->", "=>"), choice($._new_line, $._statement, $.block)),

    block: ($) => seq(repeat1(seq($._new_line, $._indent, $._statement))),

    _new_line: (_) => /\r?\n/,
    _indent: (_) => /\t|  /,
    _dedent: (_) => /\r?\n(?:[ \t]*)/,

    function_call: ($) =>
      seq(
        $.identifier,
        choice("!", "()", seq("(", optional($.arguments), ")"), $.arguments),
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

    string: ($) =>
      seq('"', repeat(choice($.interpolation, $._string_content)), '"'),
    _string_content: () => /[^"#]+|#[^{]/,
    interpolation: ($) => seq("#{", $._expression, "}"),
    number: (_) => /\d+(\.\d+)?/,
  },
});
