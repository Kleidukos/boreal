module.exports = grammar({
  name: "boreal",
  rules: {
      source_file: $ => seq(
        $.module_declaration,
        $.top_level_declarations
      ),

      module_declaration: $ => seq(
        "module",
        $.module_name,
        "where"
      ),

      module_name: $ => /[A-Za-z]+/,

      top_level_declarations: $ => repeat1(choice(
        $.function_declaration
      )),

      function_declaration: $ => seq(
        field("head", repeat($.identifier)), 
        "=",
        field("body", $.function_body)
      ),

      function_body: $ => choice(
        $.let_binding,
        $.expression,
        prec.right(2, $.case_expression),
      ),

      expression: $ => choice(
        $.identifier,
        $.binary_operation,
      ),

      let_binding: $ => seq(
        "let",
        field("binding_name", $.identifier),
        "=",
        field("binding_value", $.expression),
        "in",
        field("binding_body", $.expression)
      ),

      case_expression: $ => seq(
        "case",
        field("conditional", $.expression),
        "of",
        field("alternatives", repeat($.alternatives))
      ),

      alternatives: $ => seq(
        field("pattern", $.pattern),
        "->",
        field("rhs", choice(
          $.let_binding,
          $.expression,
          prec.right(2, $.case_expression),
        )),
      ),
      
      node: $ => choice(
        $.binary_operation
      ),

      pattern: $ => choice(
        $.constructor,
        $.identifier,
      ),

      identifier: $ => /[a-z_\d]+/,
      constructor: $ => /[A-Z][A-Za-z0-9]+/,

      binary_operation: $ => choice(
        prec.left(1, seq($.expression, "+", $.expression)),
        prec.left(2, seq($.expression, "-", $.expression)),
        prec.left(3, seq($.expression, "*", $.expression)),
        prec.left(4, seq($.expression, "/", $.expression)),
      ),
    }
})
