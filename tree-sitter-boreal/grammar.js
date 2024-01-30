module.exports = grammar({
  name: "boreal",
  // word: $ => $.identifier,
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
      $.datatype_declaration,
      $.function_declaration,
    )),

    datatype_declaration: $ => seq(
      field("head", $.datatype_head),
      "=",
      field("body", $.datatype_body)
    ),

    datatype_head: $ => seq(
      "type",
      field("name", $.constructor),
      repeat($.identifier),
    ),

    datatype_body: $ => seq(
      sep1("|", $.constructor),
    ),

    function_declaration: $ => seq(
      field("head", $.function_head),
      "=",
      field("body", $.function_body)
    ),

    function_head: $ => repeat1($.identifier),

    function_body: $ => choice(
      field("case_expression", $.case_expression),
      $.let_binding,
      $.simple_expression,
    ),

    simple_expression: $ => choice(
      $.identifier,
      $.constructor,
      $.binary_operation,
    ),

    let_binding_body: $ => choice(
      $.simple_expression
    ),

    let_binding: $ => seq(
      "let",
      field("binding_name", $.identifier),
      "=",
      field("binding_value", $.simple_expression),
      "in",
      field("binding_body", $.simple_expression)
    ),

    case_expression: $ => prec.right(2,seq(
      "case",
      field("conditional", $.simple_expression),
      "of",
      field("alternatives", repeat1($.alternatives))
    )),

    alternatives: $ => prec.right(seq(
      "|",
      sep1("|", $.alternative),
    )),

    alternative: $ => seq(
      field("pattern", $.pattern),
      "->",
      field("rhs", $.simple_expression),
    ),

    node: $ => choice(
      $.binary_operation
    ),

    pattern: $ => $.constructor,

    identifier: $ => /[a-z_\d]+/,
    constructor: $ => /[A-Z][A-Za-z0-9]+/,

    binary_operation: $ => choice(
      prec.left(1, seq($.simple_expression, "+", $.simple_expression)),
      prec.left(2, seq($.simple_expression, "-", $.simple_expression)),
      prec.left(3, seq($.simple_expression, "*", $.simple_expression)),
      prec.left(4, seq($.simple_expression, "/", $.simple_expression)),
    ),
  }
})

function sep1(delimiter, rule) {
  return seq(rule, repeat(seq(delimiter, rule)))
}
