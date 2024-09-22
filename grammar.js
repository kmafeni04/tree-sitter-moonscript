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
    [$.table_comprehension, $.table_field],
    [$._expression, $.variable_list],
    [$._expression, $.function_parameters],
    [$.expression_list, $.dot_expression],
    [$.arguments, $.dot_expression],
    [$.update_statement, $.dot_expression],
    [$.dot_expression, $.dot_expression],
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
          optional(choice($.return, $.export, $.continue, $.super)),
          choice(
            $.variable_statement,
            $.update_statement,
            $.expression_list,
            $.import_statement,
            $.if_statement,
            $.unless_statement,
            $.for_statement,
            $.while_statement,
            $.switch_statement,
            $.class_statement,
            $._new_line,
          ),
        ),
      ),

    return: (_) => "return",
    export: (_) => "export",
    continue: (_) => "continue",
    class: (_) => "class",
    super: (_) => "super",

    class_statement: ($) =>
      seq(
        $.class,
        $.class_identifier,
        optional(seq("extends", $.class_identifier)),
        $.block,
      ),
    class_identifier: (_) => /[A-Z][a-zA-Z]*/,

    import_statement: ($) =>
      seq(
        "import",
        $.identifier,
        repeat(seq(",", $.identifier)),
        "from",
        $.identifier,
      ),

    variable_statement: ($) =>
      seq(optional($.local), choice($.variable_list, $.assignment_statement)),

    local: (_) => "local",

    assignment_statement: ($) =>
      seq(
        $.variable_list,
        "=",
        choice(
          $.expression_list,
          $.for_statement,
          $.if_statement,
          $.switch_statement,
        ),
      ),

    variable_list: ($) =>
      prec.right(seq($.identifier, repeat(seq(",", $.identifier)))),

    update_statement: ($) =>
      seq(
        choice($.identifier, $.dot_expression),
        $._update_operator,
        $._expression,
      ),

    _update_operator: (_) =>
      choice("+=", "-=", "*=", "/=", "%=", "and=", "or=", "..="),

    // TODO Broken on identation in blocks
    if_statement: ($) =>
      prec(
        PREC.statement,
        choice(
          seq(
            "if",
            choice(
              seq($._expression, optional("then")),
              $.assignment_statement,
            ),
            choice($._statement, $.block),
            optional($.else_if),
            optional($.else),
          ),
          seq($._expression, "if", $._expression),
        ),
      ),

    else_if: ($) =>
      seq(
        optional($._new_line),
        "elseif",
        choice(seq($._expression, optional("then")), $.assignment_statement),
        choice($._statement, $.block),
      ),

    else: ($) =>
      seq(optional($._new_line), "else", choice($._statement, $.block)),

    unless_statement: ($) =>
      prec(
        PREC.statement,
        choice(
          seq("unless", $._expression, choice($._statement, $.block)),
          seq($._expression, "unless", $._expression),
        ),
      ),

    switch_statement: ($) =>
      prec.right(
        seq(
          "switch",
          $._expression,
          repeat(seq(seq($._new_line, $._indent), $.switch_when)),
          optional(seq(seq($._new_line, $._indent), $.switch_else)),
          optional($._new_line),
        ),
      ),

    switch_when: ($) =>
      seq("when", $._expression, choice(seq("then", $._statement), $.block)),

    switch_else: ($) => seq("else", choice($._statement, $.block)),

    for_statement: ($) =>
      prec(
        PREC.statement,
        choice(
          seq("for", choice($.for_func, $.for_num, $.for_item)),
          seq($.function_call, "for", $.identifier, "in", "*", $.identifier),
        ),
      ),

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
    for_item: ($) =>
      seq(
        $.identifier,
        "in",
        seq("*", $.identifier),
        optional("do"),
        choice($._statement, $.block),
      ),

    slice: ($) =>
      seq(
        "*",
        $.identifier,
        "[",
        optional($.number),
        optional(","),
        optional($.number),
        optional(","),
        optional($.number),
        "]",
      ),

    while_statement: ($) =>
      seq(
        "while",
        $._expression,
        optional("do"),
        seq(choice($._statement, $.block)),
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
            $.dot_expression,
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
              seq($._expression, ",", $._expression, "in"),
              seq($.identifier, "=", $.number, repeat(seq(",", $.number))),
            ),
            choice(
              $.function_call,
              seq(optional($.identifier), "when", $._expression),
            ),
          ),
          seq($.identifier, "in", $.slice),
        ),
      ),

    table_comprehension: ($) =>
      prec.left(
        seq(
          "{",
          $._expression,
          optional(seq(",", $._expression)),
          "for",
          $.identifier,
          optional(seq(",", $.identifier)),
          "in",
          choice(seq("*", $._expression), $._expression),
          optional(seq("when", $._expression)),
          "}",
        ),
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
        $.update_statement,
        $.assignment_statement,
      ),

    variable_field: ($) => seq(":", $.identifier),

    dot_expression: ($) =>
      seq($._expression, repeat1(choice($.dot_field, $.bracket_field))),
    dot_field: ($) =>
      prec.right(seq(choice(".", "\\"), choice($.identifier, $.function_call))),

    bracket_field: ($) => seq(token.immediate("["), $._expression, "]"),

    identifier: ($) =>
      choice(
        /[a-zA-Z_][a-zA-Z0-9_]*/,
        $._constant_identifier,
        $.self_identifier,
      ),
    _constant_identifier: (_) => /[A-Z][A-Z0-9_]*/,
    self_identifier: ($) => /@[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: ($) =>
      choice(
        seq("--", /[^\r\n]*/),
        seq("--[[", repeat(choice(/./, $._new_line)), "]]"),
        "--[[]]",
      ),

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
