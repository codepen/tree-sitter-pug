// WARNING: Copied from Git repo: https://github.com/zealot128/tree-sitter-pug/blob/master/grammar.js
// This code has been heavily modified. We must ensure all tests pass.
//
// TODO: support `tag(attr='hello' + goodbye)`
// TODO: support multiple levels of function calls in pug js attrs: `tag(attr=true.call(false.toString()))`
//       I think something a bit like:
//         value = ($) => seq(/.*/, optional(seq('(', $.value, ')')))
//       where the content of brackets is another instance of the same node. Does treesitter even support this?
//       The entire node will have to be aliased as $.javascript, this will just make sure no pug is matched too.
// TODO: don't break if there are singular { or # in content
// TODO: support #[p(prop)] nested pug syntax
// TODO: support Angular's weird `let x as first; let y of items` template directive syntax.
//       documentation here: https://angular.io/guide/structural-directives#structural-directive-syntax-reference
//       Currently, it is just parsed as $.javascript, but this is not valid javascript, so parsing is broken,
//       but doesn't break any of the pug syntax tree.
// TODO: rework regexes. There are too many different regexes that all handle different special cases.
module.exports = grammar({
  name: "pug",
  externals: ($) => [$._newline, $._indent, $._dedent],
  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.comment,
          $.link_tag,
          $.script_tag,
          $.style_tag,
          $.tag,
          $.doctype,
          $.unbuffered_code,
          $.buffered_code,
          $.unescaped_buffered_code,
          $.case,
          $.pipe,
          $.filter,
          $.block_definition,
          $.block_append,
          $.block_prepend,
          $.extends,
          $.mixin_definition,
          $.mixin_use,
          $.each,
          $.while,
          $.include
        )
      ),
    doctype: ($) =>
      seq("doctype", alias(choice("html", "strict", "xml"), $.doctype_name)),

    pipe: ($) => seq("|", optional($._content_or_javascript), $._newline),

    link_tag: ($) => seq("link", optional($.attributes)),

    style_tag: ($) =>
      prec.right(
        seq(
          "style",
          optional($.attributes),
          optional(
            choice(
              seq(":", $.tag),
              $._content_after_dot_content_code,
              seq(
                optional(seq($._newline, $._indent)),
                choice($.buffered_code, $.unescaped_buffered_code)
              ),
              seq(
                optional(seq(" ", $._content_or_javascript)),
                $._newline,
                optional($.children)
              )
            )
          )
        )
      ),

    script_tag: ($) =>
      prec.right(
        seq(
          "script",
          optional($.attributes),
          optional(
            choice(
              seq(":", $.tag),
              $._content_after_dot_content_code,
              seq(
                optional(seq($._newline, $._indent)),
                choice($.buffered_code, $.unescaped_buffered_code)
              ),
              seq(
                optional(seq(" ", $._content_or_javascript)),
                optional($._newline),
                optional($.children)
              )
            )
          )
        )
      ),

    _content_after_dot_content_code: ($) =>
      prec.right(
        seq(
          optional(seq($._newline, $._indent)),
          ".",
          $._newline,
          $._indent,
          alias(repeat(seq(optional(/[^\n]+/), $._newline)), $.content_code),
          optional($._dedent)
        )
      ),

    _content_after_dot: ($) =>
      seq(
        optional(seq($._newline, $._indent)),
        ".",
        $._newline,
        $._indent,
        alias(
          repeat(seq(optional($._content_or_javascript), $._newline)),
          $.children
        ),
        $._dedent
      ),

    include: ($) =>
      seq(
        alias("include", $.keyword),
        optional($.filter),
        alias(/[^\n]+/, $.filename)
      ),

    while: ($) =>
      seq(
        alias("while", $.keyword),
        $.iteration_iterator,
        $._newline,
        $.children
      ),

    _each_js: ($) => alias(/[\w_]+/, $.javascript),

    iteration_variable: ($) => seq($._each_js, optional(seq(",", $._each_js))),

    iteration_iterator: ($) => alias(/[^\n]+/, $.javascript),

    _each_else: ($) => seq(alias("else", $.keyword), $._newline, $.children),

    each: ($) =>
      prec.right(
        seq(
          alias(choice("each", "for"), $.keyword),
          $.iteration_variable,
          alias("in", $.keyword),
          $.iteration_iterator,
          $._newline,
          $.children,
          alias(optional($._each_else), $.else)
        )
      ),

    mixin_use: ($) =>
      seq(
        "+",
        alias($.tag_name, $.mixin_name),
        optional(
          seq(
            "(",
            optional(
              seq(
                repeat(seq(alias($._pug_attributes, $.attribute), ",")),
                alias($._pug_attributes, $.attribute)
              )
            ),
            ")"
          )
        )
      ),
    mixin_definition: ($) =>
      seq(
        alias("mixin", $.keyword),
        alias($.tag_name, $.mixin_name),
        optional($.mixin_attributes),
        $._newline,
        $.children
      ),
    mixin_attributes: ($) =>
      seq(
        "(",
        optional(
          seq(
            repeat(seq(alias(/\w+/, $.attribute_name), ",")),
            alias(/\w+/, $.attribute_name)
          )
        ),
        ")"
      ),

    _block_content: ($) =>
      prec.left(
        seq(
          alias($.tag_name, $.block_name),
          optional(seq($._newline, $.children))
        )
      ),
    block_definition: ($) => seq(alias("block", $.keyword), $._block_content),
    block_append: ($) =>
      seq(
        alias(optional("block"), $.keyword),
        alias("append", $.keyword),
        $._block_content
      ),
    block_prepend: ($) =>
      seq(
        alias(optional("block"), $.keyword),
        alias("prepend", $.keyword),
        $._block_content
      ),
    extends: ($) =>
      seq(alias("extends", $.keyword), alias(/[^\n]+/, $.filename)),

    filter: ($) =>
      prec.right(
        seq(
          ":",
          $.filter_name,
          optional($.attributes),
          optional(alias($.filter_content, $.content))
        )
      ),
    filter_name: () => /[\w-]+/,
    filter_content: ($) =>
      choice(
        $.filter,
        seq(/( |\t)+/, /[^\n]*/),
        seq($._newline, $._indent, repeat(seq(/[^\n]*/, $._newline)), $._dedent)
      ),

    case: ($) =>
      prec.right(
        seq(
          alias("case", $.keyword),
          alias($._un_delimited_javascript_line, $.javascript),
          $._newline,
          $._indent,
          repeat1($.when)
        )
      ),
    _when_content: ($) =>
      seq(
        choice(
          // Where the content is on the next line
          seq($._newline, $.children),
          // Where the content follows a : on the same line
          seq(":", alias($._dummy_tag, $.children))
        )
      ),
    _dummy_tag: ($) => $.tag,
    _when_keyword: ($) =>
      choice(
        seq(
          alias("when", $.keyword),
          // `when`s don't work with properly with objects, so removing : from regex is fine.
          alias(/[^:\n]+?/, $.javascript)
        ),
        alias("default", $.keyword)
      ),
    when: ($) =>
      prec.left(
        seq(
          $._when_keyword,
          choice(
            $._when_content,
            // There are newlines between each when case, but not the last when
            $._newline
          ),
          optional($._dedent)
        )
      ),
    unescaped_buffered_code: ($) => seq("!=", $._single_line_buf_code),

    buffered_code: ($) => seq("=", $._single_line_buf_code),

    tag: ($) =>
      seq(
        choice($.tag_name, $.id, $.class),
        optional(repeat1(choice($.id, $.class))),
        optional($.attributes),
        optional(alias("/", $.self_close_slash)),
        choice(
          seq(":", $.tag),
          $._content_after_dot,
          seq(
            optional(seq($._newline, $._indent)),
            choice($.buffered_code, $.unescaped_buffered_code)
          ),
          seq(
            optional(seq(" ", $._content_or_javascript)),
            $._newline,
            optional($.children)
          )
        )
      ),

    attributes: ($) =>
      seq(
        "(",
        repeat(seq($.attribute, choice(",", " "))),
        optional($.attribute),
        ")"
      ),
    attribute: ($) => choice($._attribute, $._angular_attribute),
    _ternary_attribute_value: ($) =>
      seq(
        alias(
          token(
            seq(
              /[^'"`{\[][^?]+?/,
              "?",
              /[^)?]+?/,
              choice(
                /[^ )]*?/,
                choice(
                  /'(?:[^'\\]|\\.)*'/,
                  /"(?:[^"\\]|\\.)*"/,
                  /`(?:[^`\\]|\\.)*`/
                )
              )
            )
          ),
          $.javascript
        )
      ),
    _string_attribute_value: ($) => $.quoted_attribute_value,
    _variable_attribute_value: ($) =>
      seq(
        alias(
          // No function calls, nor spaces allowed in javascript attributes
          /[^'"`{\[][^ ,()]+(\([^)]*?\))?/,
          $.javascript
        )
      ),
    _object_attribute_value: ($) =>
      seq(alias(token(seq("{", /([^\[\]()]*?(, ?)?)*?/, "}")), $.javascript)),
    _template_attribute_value: ($) =>
      seq(alias(token(seq("`", /(?:[^`\\]|\\.)*/, "`")), $.javascript)),
    _array_attribute_value: ($) =>
      seq(alias(token(seq("[", /[^\[\]()]*?/, "]")), $.javascript)),
    _pug_attributes: ($) =>
      choice(
        $._string_attribute_value,
        $._ternary_attribute_value,
        $._variable_attribute_value,
        $._array_attribute_value,
        $._object_attribute_value,
        $._template_attribute_value
      ),
    _attribute: ($) =>
      seq(
        $.attribute_name,
        optional(repeat1(seq(".", alias(/[\w@\-:]+/, $.attribute_modifier)))),
        optional(seq("=", $._pug_attributes))
      ),
    _angular_attribute: ($) =>
      seq(
        alias($.angular_attribute_name, $.attribute_name),
        optional(seq("=", $.quoted_javascript))
      ),

    children: ($) =>
      prec.right(
        seq($._indent, repeat1($._children_choice), optional($._dedent))
      ),
    _children_choice: ($) =>
      prec(
        1,
        choice(
          $.buffered_code,
          $.case,
          $.comment,
          $.doctype,
          $.pipe,
          $.link_tag,
          $.script_tag,
          $.style_tag,
          $.tag,
          $.unbuffered_code,
          $.unescaped_buffered_code,
          $.filter,
          $.block_definition,
          $.block_append,
          $.block_prepend,
          $.extends,
          $.each,
          $.while,
          $.include,
          $._newline
        )
      ),

    comment: ($) => choice($._comment, $._comment_not_first_line),
    _comment: ($) =>
      prec.left(
        seq(
          choice("//", "//-"),
          $._comment_content,
          $._newline,
          optional(
            seq(
              $._indent,
              repeat1(seq($._comment_content, $._newline)),
              $._dedent
            )
          )
        )
      ),
    _comment_not_first_line: ($) =>
      seq(
        choice("//", "//-"),
        $._newline,
        $._indent,
        repeat1(seq($._comment_content, $._newline)),
        $._dedent
      ),

    tag_name: () => /\w(?:[-\w]*\w)?/,
    class: () => /\.[_a-z0-9\-]*[_a-zA-Z][_a-zA-Z0-9\-]*/i,
    id: () => /#[\w-]+/,

    angular_attribute_name: () =>
      choice(
        /\[[\w@\-:\.]+\]/, // [input]
        /\([\w@\-:\.]+\)/, // (output)
        /\[\([\w@\-:\.]+\)\]/, // [(both)]
        /\*[\w@\-:\.]+/ // *directive
      ),
    attribute_name: () => /#?[\w@\-:]+/,

    quoted_javascript: ($) =>
      choice(
        seq("'", optional(alias(/(?:[^'\\]|\\.)+/, $.javascript)), "'"),
        seq('"', optional(alias(/(?:[^"\\]|\\.)+/, $.javascript)), '"')
      ),

    quoted_attribute_value: ($) =>
      choice(
        seq("'", optional(alias(/(?:[^'\\]|\\.)+/, $.attribute_value)), "'"),
        seq('"', optional(alias(/(?:[^"\\]|\\.)+/, $.attribute_value)), '"')
      ),

    content: () =>
      prec.right(repeat1(seq(/[^\n{#]+?/, optional("#"), optional("{")))),

    _comment_content: () => /[^\n]*/,

    _content_or_javascript: ($) =>
      repeat1(
        choice(
          seq("#{", alias($._delimited_javascript, $.javascript), "}"),
          seq("{{", alias($._delimited_javascript, $.javascript), "}}"),
          $.content
        )
      ),

    // TODO: can _delimited_javascript and _un_delimited_javascript be merged?
    _delimited_javascript: () => /[^\n}]+/,
    // I only want this node to be exposed sometimes
    _un_delimited_javascript: ($) => $._un_delimited_javascript_line,
    _un_delimited_javascript_line: ($) => /(.)+?/,
    _un_delimited_javascript_multiline: ($) =>
      repeat1(prec(1, $._un_delimited_javascript_line)),
    _single_line_buf_code: ($) =>
      prec.left(
        seq(
          alias($._un_delimited_javascript, $.javascript),
          choice(
            seq(
              $._newline,
              $._indent,
              repeat1(choice($.tag, $._newline)),
              $._dedent
            ),
            $._newline
          ),
          optional($._dedent)
        )
      ),
    _multi_line_buf_code: ($) =>
      alias(seq($._un_delimited_javascript_multiline), $.javascript),
    unbuffered_code: ($) =>
      prec.right(
        seq(
          "-",
          token.immediate(/( |\t)*/),
          choice(
            seq($._single_line_buf_code),
            seq($._newline, $._indent, $._multi_line_buf_code)
          ),
          optional($._dedent)
        )
      ),
  },
});
