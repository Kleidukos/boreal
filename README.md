# Boreal

This is a toy compiler to learn about:

* Compiler architecture (query-based, client-server)
* Tree-sitter
* Lua code generation

## Architecture

See https://github.com/Kleidukos/boreal/wiki#architecture

## Installation

No binary distribution is offered at the time, you must clone the repository, install GHC 9.6 and run `make build`

## Using it
Use the CLI tool `boreal`

```bash
$ cabal run -- boreal build tree-sitter-boreal/datatype-declaration.bor
$ cat _build/libs/Expressions.lua
-- Expressions
prelude = require("./_build/libs/Stdlib/prelude")

local Optimisation = {O1 = {},
                      O2 = {}}
```

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

and the Lua backend gives you:

```lua
-- Expressions
local prelude = dofile("./Stdlib/Prelude.lua")

-- Sum types are created as tables with keys
local MyBool = {MyTrue = {}, MyFalse = {}}
local function expr(x)
    local prim_mul0 = x * 2
    return prim_mul0 + 3
end
local function fun()
    local x = 3
    return x + 1
end
-- Functions are then collected to produce an export list in the form of…
-- a table.
local Expressions = {fun = fun, expr = expr, MyBool = MyBool}

-- Importing this module within Lua makes the export list available
return Expressions
```

## Development

Consult the [development wiki](https://github.com/Kleidukos/boreal/wiki) for more information

