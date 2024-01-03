{-# LANGUAGE OverloadedLists #-}
{-# LANGUAGE QuasiQuotes #-}

module BorealTest.UXNTest where

import Data.ByteString.Lazy (LazyByteString)
import Data.Text.Lazy qualified as Text
import Data.Text.Lazy.Encoding qualified as Text
import Test.Tasty
import Test.Tasty.Golden

-- import Utils
import Boreal.Backend.UXN qualified as UXN
import Boreal.Frontend.TreeSitter qualified as TreeSitter
import Boreal.Frontend.Types
import Boreal.IR.ANFCore
import Boreal.IR.ANFCore qualified as ANFCore
import Boreal.IR.RawCore qualified as RawCore
import Boreal.IR.Types qualified
import Data.ByteString qualified as BS
import Data.Vector qualified as Vector
import PyF (str)

diffCmd :: String -> String -> [String]
diffCmd ref new = ["delta", "--diff-so-fancy", "--paging=never", ref, new]

spec :: TestTree
spec =
  testGroup
    "UXN Tests"
    [ goldenVsStringDiff
        "Emit addition"
        diffCmd
        "./test/golden/asm/addition.tal"
        emitAddition
        -- , goldenVsStringDiff
        --     "Emit sequence of arithmetic operations"
        --     diffCmd
        --     "./test/golden/asm/arithmetic-operations.tal"
        --     emitArithmeticOperations
    ]

emitAddition :: IO LazyByteString
emitAddition = do
  generated <- UXN.runUXN (Halt (Complex (AApp "+" [ALiteral 1, ALiteral 2])))
  pure . Text.encodeUtf8 . Text.fromStrict $ generated

emitArithmeticOperations :: IO LazyByteString
emitArithmeticOperations = do
  let input =
        [str|
    module Mod where
    fun = 42 + 1 + 1 - 1
  |]
  parsed <- BS.useAsCStringLen input $ \(string, len) -> runParser input (TreeSitter.parse string len)
  rawCore <- RawCore.runRawCore $ RawCore.transformModule parsed
  anf <- ANFCore.runANFCore (Vector.head rawCore.topLevelDeclarations)
  generated <- UXN.runUXN anf
  pure . Text.encodeUtf8 . Text.fromStrict $ generated
