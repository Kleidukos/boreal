{-# LANGUAGE QuasiQuotes #-}

module BorealTest.Backend.LuaGoldenTest where

import Data.ByteString.Lazy (LazyByteString)
import Data.Text.Lazy qualified as Text
import Data.Text.Lazy.Encoding qualified as Text
import PyF (str)
import Test.Tasty
import Test.Tasty.Golden

import Boreal.Backend.Lua qualified as Lua
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types
import Boreal.ScopeEnvironment

diffCmd :: String -> String -> [String]
diffCmd ref new = ["diff", "-u", ref, new]

spec :: TestTree
spec =
  testGroup
    "Lua Tests"
    [ goldenVsStringDiff
        "Emit addition"
        diffCmd
        "./test/golden/lua/addition.lua"
        emitAddition
    , goldenVsStringDiff
        "Emit subtraction"
        diffCmd
        "./test/golden/lua/subtraction.lua"
        emitSubtraction
    , goldenVsStringDiff
        "Emit sequence of arithmetic operations"
        diffCmd
        "./test/golden/lua/arithmetic-operations.lua"
        emitArithmeticOperations
    , goldenVsStringDiff
        "Emit sequence of arithmetic operations with intermediate let-binding"
        diffCmd
        "./test/golden/lua/arithmetic-operations-let-binding.lua"
        emitLetBinding
    ]

emitAddition :: IO LazyByteString
emitAddition = do
  let input =
        [str|
    module Mod where
    main = 1 + 2
  |]
  parsed <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua "." rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitSubtraction :: IO LazyByteString
emitSubtraction = do
  let input =
        [str|
    module Mod where
    main = 1 - 2
  |]
  parsed <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua "." rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitArithmeticOperations :: IO LazyByteString
emitArithmeticOperations = do
  let input =
        [str|
    module Mod where
    main = 42 + 1 + 1 - 1
|]
  parsed <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua "." rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitLetBinding :: IO LazyByteString
emitLetBinding = do
  let input =
        [str|
    module Mod where
    main =
      let x = 42 + 1
       in x + 1 - 1
|]
  parsed <- TreeSitter.parse input
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse (ANFCore.runANFCore newScopeEnvironment) rawModule.topLevelDeclarations
  generated <- Lua.runLua "." rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated
