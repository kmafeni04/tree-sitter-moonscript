/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  statement: 10,
  binary: 4,
  unary: 5,
  math: 3,
  expr: 2,
  compare: 3,
  concat: 1,
};

module.exports = grammar({
  name: "moonscript",

  extras: ($) => [$.comment, /[ \t]/],

  conflicts: ($) => [
    [$._expression, $._expression],
    [$._expression, $.variable_list],
    [$._expression, $.function_parameters],
    [$.variable_list, $.function_parameters],
    [$.variable_list, $.variable_list],
    [$.block, $.block],
    [$.if_statement, $.if_statement],
    [$.function_declaration, $.function_declaration],
  ],

  rules: {
    source_file: ($) =>
      seq(
        optional($.hash_bang_line),
        repeat(seq($._statement, optional($._new_line))),
      ),

    hash_bang_line: (_) => /#.*/,

    _statement: ($) =>
      prec(
        PREC.statement,
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
      ),

    return: (_) => "return",
    export: (_) => "export",

    variable_statement: ($) =>
      seq(optional($.local), choice($.variable_list, $.assignment_statement)),

    local: (_) => "local",

    assignment_statement: ($) => seq($.variable_list, "=", $.expression_list),

    variable_list: ($) =>
      prec.right(seq($.identifier, repeat(seq(",", $.identifier)))),

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
      prec.right(
        PREC.compare,
        seq(
          $._expression,
          $._comparison_operator,
          $._expression,
          repeat(seq($._comparison_operator, $._expression)),
        ),
      ),
    _comparison_operator: (_) =>
      choice("==", "<=", ">=", "~=", "!=", "<", ">", "and", "or"),

    expression_list: ($) =>
      prec.right(
        PREC.expr,
        seq($._expression, repeat(seq(",", $._expression))),
      ),

    _expression: ($) =>
      prec.right(
        seq(
          optional($.unary_operator),
          choice(
            $.true,
            $.false,
            $.nil,
            $.string,
            $.number,
            $.self,
            $.identifier,
            $.table_constructor,
            $.table_comprehension,
            $.function_declaration,
            $.function_call,
            $.comparison_expression,
            $.concat_expression,
            $.math_expression,
            $.list_comprehension,
            seq("(", $._expression, ")"),
          ),
        ),
      ),

    list_comprehension: ($) =>
      seq("[", $._expression, $._list_for, repeat($._list_for), "]"),

    _list_for: ($) =>
      seq(
        "for",
        choice(
          seq(
            choice(
              seq($.identifier, ",", $.identifier, "in"),
              seq($.identifier, "=", $.number, repeat(seq(",", $.number))),
            ),
            choice(
              $.function_call,
              seq(optional($.identifier), "when", $._expression),
            ),
          ),
          seq(
            $.identifier,
            "in",
            "*",
            $.identifier,
            optional(
              seq(
                "[",
                optional($.number),
                optional(","),
                optional($.number),
                optional(","),
                optional($.number),
                "]",
              ),
            ),
          ),
        ),
      ),

    table_comprehension: ($) =>
      seq(
        "{",
        choice(
          seq(
            $.identifier,
            ",",
            $.identifier,
            "for",
            $.identifier,
            ",",
            $.identifier,
            "in",
            $.function_call,
            optional(seq("when", $._expression)),
          ),
          seq(
            optional(seq($.identifier, ",")),
            $.expression_list,
            "for",
            $.identifier,
            "in",
            "*",
            $.identifier,
          ),
        ),
        "}",
      ),

    concat_expression: ($) =>
      prec.right(
        PREC.concat,
        seq(
          $._expression,
          "..",
          $._expression,
          repeat(seq("..", $._expression)),
        ),
      ),

    unary_operator: (_) => prec(PREC.unary, choice("not", "#", "-", "~")),

    math_expression: ($) =>
      prec.left(
        PREC.math,
        choice(
          seq(
            $._expression,
            $._math_operator,
            $._expression,
            repeat(seq($._math_operator, $._expression)),
          ),
          seq("(", $.math_expression, ")"),
        ),
      ),
    _math_operator: (_) => choice("+", "-", "*", "/", "%"),

    function_declaration: ($) =>
      seq(
        optional(choice("()", seq("(", $.function_parameters, ")"))),
        choice("->", "=>"),
        optional(choice($._new_line, $._statement, $.block)),
      ),

    function_parameters: ($) =>
      seq(
        choice($.identifier, $.assignment_statement, $.varargs),
        repeat(seq(",", choice($.identifier, $.assignment_statement))),
        optional($.varargs),
      ),
    varargs: (_) => "...",
    block: ($) => seq(repeat1(seq($._new_line, $._indent, $._statement))),

    _new_line: (_) => /\r?\n/,
    _indent: (_) => /[\t ]/,
    _dedent: (_) => /\r?\n(?:[ \t]*)/,

    function_call: ($) =>
      prec.left(
        seq(
          choice($.identifier, $.builtin_function),
          choice("!", "()", seq("(", optional($.arguments), ")"), $.arguments),
        ),
      ),

    builtin_function: (_) =>
      choice(
        "assert",
        "collectgarbage",
        "dofile",
        "error",
        "getfenv",
        "getmetatable",
        "ipairs",
        "load",
        "loadfile",
        "loadstring",
        "module",
        "next",
        "pairs",
        "pcall",
        "print",
        "rawequal",
        "rawget",
        "rawlen",
        "rawset",
        "require",
        "select",
        "setmetatable",
        "setfenv",
        "tonumber",
        "tostring",
        "type",
        "unpack",
        "warn",
        "xpcall",
      ),

    arguments: ($) =>
      prec.right(
        seq(
          $._expression,
          repeat(
            seq(",", optional(seq($._new_line, $._indent)), $._expression),
          ),
        ),
      ),

    // Todo finish table fields
    table_constructor: ($) =>
      prec.right(choice(seq("{", optional($._table_field_list), "}"))),

    _table_field_list: ($) =>
      prec.right(
        seq(
          optional($._new_line),
          $.table_field,
          repeat(
            seq(
              choice(",", seq($._new_line, $._indent)),
              optional($._new_line),
              $.table_field,
            ),
          ),
          optional(","),
          optional($._new_line),
        ),
      ),

    table_field: ($) =>
      choice(
        seq(
          choice(
            seq("[", choice($.number, $.string, $._expression), "]"),
            $.identifier,
            $.string,
          ),
          ":",
          $._expression,
        ),
        $.variable_field,
        $._expression,
      ),

    variable_field: ($) => seq(":", $.identifier),

    dot_expression: ($) => prec.left(seq($._expression, repeat1($.dot_field))),
    dot_field: ($) =>
      prec.right(
        choice(
          seq(".", choice($.identifier, $.function_call)),
          seq("[", choice($.number, $.string), "]"),
        ),
      ),

    identifier: ($) => choice(/[a-zA-Z_][a-zA-Z0-9_]*/, $._constant_identifier),
    _constant_identifier: (_) => /[A-Z][A-Z0-9_]*/,

    comment: (_) =>
      choice(seq("--", /[^\r\n]*/), seq(seq("--[[", /[^⊙]+\]\]/)), "--[[]]"),

    false: (_) => "false",
    true: (_) => "true",
    nil: (_) => "nil",

    self: (_) => "self",

    string: ($) =>
      seq('"', repeat(choice($.interpolation, $._string_content)), '"'),
    _string_content: () => /[^"#]+/,
    interpolation: ($) => seq("#{", $._expression, "}"),
    number: (_) => /\d+(\.\d+)?/,
  },
});
