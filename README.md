# Boreal

## Development

Consult the [development wiki](https://github.com/Kleidukos/boreal/wiki) for more information

## Syntax

The syntax is Haskell-like.

```haskell
module Expressions where

type MyBool = MyTrue | MyFalse

expr x = x * 2 + 3

fun =
  let x = 3
   in x + 1
```

## CLI

A rudimentary CLI is available.

```bash
$ cabal run boreal -- build tree-sitter-boreal/datatype-declaration.bor
$ cat build_/libs/Expressions.lua
-- Expressions
prelude = require("./build_/libs/Stdlib/prelude")

local Optimisation = {O1 = {},
                      O2 = {}}
```
