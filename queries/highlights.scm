; highlights.scm

(hash_bang_line) @comment

(comment) @comment

[(return) (export) (local)] @keyword

(number) @constant

(string) @string

[(false) (true)] @constant.builtin

(nil) @constant.builtin

(self) @variable.builtin

[
  ","
  ":"
  "."
] @punctuation.delimiter

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

["and" "or" "not"] @keyword

[
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "and="
  "or="
  "..="
  "=="
  "<="
  ">="
  "~="
  "!="
  "<"
  ">"
] @operator

(identifier) @variable

(table_constructor
[
  "{"
  "}"
] @constructor)

 (table_constructor
  (table_field 
    (identifier) @function.method))

(dot_field
  (identifier) @function.method)

(function_declaration) @function

(function_declaration
  (function_parameters) @variable.parameter) @function

(function_call) @function

(function_call
  (identifier) @function
) @function

(function_call
  (builtin_function) @function.builtin )

(if_statement
[
  "if"
  "elseif"
  "else"
  "then"
] @keyword.control)

(if_statement
[
  "if"
  "elseif"
  "else"
] @keyword.control)

(else_if
[
  "elseif"
] @keyword.control
)

(else) @keyword.control

(for_statement
[
  "for"
] @keyword.control)

(for_func
[
 "in" 
 "do"
] @keyword.control)

(for_num
[
 "do"
] @keyword.control)


(while_statement
[
  "while"
  "do"
] @keyword.control)



