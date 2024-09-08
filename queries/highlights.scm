; highlights.scm

(identifier) @variable
(assignment
    (identifier)
    (operator)
    (function_declaration )) @function
(number) @number
[ (function_declaration) (function_call) ] @function
(function_declaration
(parameter_list 
  (identifier) @variable.parameter)
)
 (function_call (identifier) @variable.parameter) @function
(string) @string
(comment) @comment
(operator) @operator

