/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "moonscript",

  extras: ($) => [$.comment, /[ \t]/],

  conflicts: ($) => [
    [$._expression, $.variable_list],
    [$._expression, $.function_call],
    [$._expression, $.function_parameters],
    [$.variable_list, $._expression, $.function_call],
    [$.variable_list, $.variable_list],
    [$.expression_list, $.expression_list],
    [$.dot_expression, $.expression_list],
    [$.dot_expression, $.dot_expression],
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
      seq(
        optional(choice($.return, $.export)),
        choice(
          $.variable_statement,
          $.update_statement,
          $.expression_list,
          $.dot_expression,
          $.if_statement,
          $.for_statement,
          $.while_statement,
          $._new_line,
        ),
      ),

    return: (_) => "return",
    export: (_) => "export",

    variable_statement: ($) =>
      seq(optional($.local), choice($.variable_list, $.assignment_statement)),

    local: (_) => "local",

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
        optional("then"),
        choice($._statement, $.block),
        optional($.else_if),
        optional($.else),
      ),

    else_if: ($) =>
      seq(
        optional($._new_line),
        "elseif",
        $._expression,
        optional("then"),
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
        optional("do"),
        choice($._statement, $.block),
      ),
    for_num: ($) =>
      seq(
        $.identifier,
        optional(repeat(seq(",", $.identifier))),
        "=",
        $.number,
        optional(repeat(seq(",", $.number))),
        optional("do"),
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
    _comparison_operator: (_) =>
      choice("==", "<=", ">=", "~=", "!=", "<", ">", "and", "or"),

    expression_list: ($) => seq($._expression, repeat(seq(",", $._expression))),

    _expression: ($) =>
      seq(
        optional("not"),
        choice(
          $.true,
          $.false,
          $.nil,
          $.string,
          $.number,
          $.self,
          $.identifier,
          $.table_constructor,
          $.function_declaration,
          $.function_call,
          $.comparison_expression,
        ),
      ),

    function_declaration: ($) =>
      seq(
        choice("()", seq("(", $.function_parameters, ")")),
        choice("->", "=>"),
        choice($._new_line, $._statement, $.block),
      ),

    function_parameters: ($) =>
      seq($.identifier, repeat(seq(",", $.identifier))),
    block: ($) => seq(repeat1(seq($._new_line, $._indent, $._statement))),

    _new_line: (_) => /\r?\n/,
    _indent: (_) => /[\t ]/,
    _dedent: (_) => /\r?\n(?:[ \t]*)/,

    function_call: ($) =>
      seq(
        choice($.identifier, $.builtin_function),
        choice("!", "()", seq("(", optional($.arguments), ")"), $.arguments),
      ),

    builtin_function: (_) => choice("print", "ipairs", "pairs"),

    arguments: ($) => alias($.expression_list, "arguments"),

    // Todo finish table fields
    table_constructor: ($) => seq("{", optional($._table_field_list), "}"),

    _table_field_list: ($) =>
      seq(
        optional($._new_line),
        $.table_field,
        repeat(seq(",", optional($._new_line), $.table_field)),
        optional(","),
        optional($._new_line),
      ),

    table_field: ($) =>
      choice(
        seq(
          choice(seq("[", choice($.number, $.string), "]"), $.identifier),
          ":",
          $._expression,
        ),
        alias($._expression, "field"),
      ),

    dot_expression: ($) =>
      seq($._expression, ".", $.dot_field, repeat(seq(".", $.dot_field))),
    dot_field: ($) => $._expression,

    identifier: ($) => choice(/[a-zA-Z_][a-zA-Z0-9_]*/, $._constant_identifier),
    _constant_identifier: (_) => /[A-Z][A-Z0-9_]*/,

    comment: (_) =>
      choice(seq("--", /[^\r\n]*/), seq(seq("--[[", /[^🖼]+\]\]/))),

    false: (_) => "false",
    true: (_) => "true",
    nil: (_) => "nil",

    self: (_) => "self",

    string: ($) =>
      seq('"', repeat(choice($.interpolation, $._string_content)), '"'),
    _string_content: () => /[^"#]+|#[^{]/,
    interpolation: ($) => seq("#{", $._expression, "}"),
    number: (_) => /\d+(\.\d+)?/,
  },
});
