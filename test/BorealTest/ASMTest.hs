{-# LANGUAGE OverloadedLists #-}
{-# LANGUAGE QuasiQuotes #-}

module BorealTest.ASMTest where

import Data.ByteString qualified as BS
import Data.ByteString.Lazy (LazyByteString)
import Data.Text.Lazy qualified as Text
import Data.Text.Lazy.Encoding qualified as Text
import PyF (str)
import Test.Tasty
import Test.Tasty.Golden

import Boreal.Backend.ASM qualified as ASM
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.Frontend.Types
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types

diffCmd :: String -> String -> [String]
diffCmd ref new = ["diff", "-u", ref, new]

spec :: TestTree
spec =
  testGroup
    "ASM Tests"
    [ goldenVsStringDiff
        "Emit addition"
        diffCmd
        "./test/golden/asm/addition.s"
        emitAddition
    , goldenVsStringDiff
        "Emit subtraction"
        diffCmd
        "./test/golden/asm/subtraction.s"
        emitSubtraction
    , goldenVsStringDiff
        "Emit sequence of arithmetic operations"
        diffCmd
        "./test/golden/asm/arithmetic-operations.s"
        emitArithmeticOperations
    , goldenVsStringDiff
        "Emit sequence of arithmetic operations with intermediate let-binding"
        diffCmd
        "./test/golden/asm/arithmetic-operations-let-binding.s"
        emitLetBinding
    ]

emitAddition :: IO LazyByteString
emitAddition = do
  let input =
        [str|
    module Mod where
    main = 1 + 2
  |]
  parsed <- BS.useAsCStringLen input $ \(string, len) -> runParser input (TreeSitter.parse string len)
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse ANFCore.runANFCore rawModule.topLevelDeclarations
  generated <- ASM.runASM rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitSubtraction :: IO LazyByteString
emitSubtraction = do
  let input =
        [str|
    module Mod where
    main = 1 - 2
  |]
  parsed <- BS.useAsCStringLen input $ \(string, len) -> runParser input (TreeSitter.parse string len)
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse ANFCore.runANFCore rawModule.topLevelDeclarations
  generated <- ASM.runASM rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitArithmeticOperations :: IO LazyByteString
emitArithmeticOperations = do
  let input =
        [str|
    module Mod where
    main = 42 + 1 + 1 - 1
|]
  parsed <- BS.useAsCStringLen input $ \(string, len) -> runParser input (TreeSitter.parse string len)
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse ANFCore.runANFCore rawModule.topLevelDeclarations
  generated <- ASM.runASM rawModule{topLevelDeclarations = anfDecls}
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
  parsed <- BS.useAsCStringLen input $ \(string, len) -> runParser input (TreeSitter.parse string len)
  rawModule <- RawCore.runRawCore $ RawCore.transformModule parsed
  anfDecls <- traverse ANFCore.runANFCore rawModule.topLevelDeclarations
  generated <- ASM.runASM rawModule{topLevelDeclarations = anfDecls}
  pure . Text.encodeUtf8 . Text.fromStrict $ generated
