module.exports = grammar({
  name: "pug",

  externals: ($) => [$._tag_name, $._script_tag_name, $._implicit_end_tag],

  rules: {
    fragment: ($) => repeat($._node),

    _node: ($) => choice($.script_tag),

    script_tag: ($) => seq($._script_tag_name),
  },
});
