module Main (main) where

import Sel
import Test.Tasty (TestTree, defaultMain, testGroup)

import BorealTest.ANFTest qualified as ANFTest
import BorealTest.Backend.LuaGoldenTest qualified as LuaGoldenTest
import BorealTest.Backend.LuaRunTest qualified as LuaRunTest
import BorealTest.ParserTest qualified as ParserTest
import BorealTest.RawCoreTest qualified as RawCoreTest
import Paths_boreal_daemon

main :: IO ()
main = secureMain $ do
  topDir <- getDataDir
  defaultMain . testGroup "Boréal Tests" $ specs topDir

specs :: FilePath -> [TestTree]
specs topDir =
  [ ParserTest.spec topDir
  , RawCoreTest.spec topDir
  , ANFTest.spec
  , LuaGoldenTest.spec
  , LuaRunTest.spec topDir
  ]
