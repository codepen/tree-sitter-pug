# Tree-sitter-pug

This is a general tree-sitter parser grammar for the [pug](https://github.com/pugjs/pug) language with some extra features built in for Angular and Vue development.

Copied from Git repo: https://github.com/zealot128/tree-sitter-pug/blob/master/grammar.js
This code has been heavily modified. We must ensure all tests pass.

## Current state

Everything currently included is relatively bug-free, but the structure/name of some rules may change before we declare this parser "complete".

There is list of todos at the top of `grammar.js`, but the summary is: all of the basics are supported.
There are tests for every scenario supported, so you can just have a look through `./test/corpus/*.txt` to see exactly which scenarios are supported and have been tested.

Feel free to open an issue/pull request if there's something missing/broken.

## Developing

How to run & test:

```
npm install -g tree-sitter-cli
tree-sitter generate && tree-sitter test
```

