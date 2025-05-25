{-# OPTIONS_GHC -Wno-orphans #-}

module Utils where

import Control.Monad (unless)
import Data.TreeDiff
import GHC.Stack
import Test.Tasty.HUnit (Assertion)
import Test.Tasty.HUnit qualified as Test
import TreeSitter.Node

import Boreal.Frontend.Syntax
import Boreal.IR.ANFCore.Types
import Boreal.IR.RawCore.Types
import Boreal.IR.Types
import Boreal.PrimOps
import Boreal.PrimTypes
import Boreal.SourceInfo

assertRight :: (HasCallStack) => Either a b -> IO b
assertRight (Left _a) = Test.assertFailure "Test return Left instead of Right"
assertRight (Right b) = pure b

assertEqualExpr
  :: (HasCallStack, ToExpr a, Eq a)
  => a
  -- ^ Actual
  -> a
  -- ^ Expected
  -> Assertion
assertEqualExpr actual expected =
  unless
    (actual == expected)
    ( Test.assertFailure
        (show $ ppEditExpr ansiWlPretty $ ediff actual expected)
    )

instance (ToExpr ir) => ToExpr (CaseAlternative ir)
instance ToExpr ANFCore
instance ToExpr BinOp
instance ToExpr ComplexValue
instance ToExpr ModuleName
instance ToExpr Name
instance ToExpr BorealConstructor
instance ToExpr Pattern
instance ToExpr RawCore
instance ToExpr RecordMember
instance ToExpr SourceInfo
instance ToExpr Syntax
instance ToExpr TSPoint
instance ToExpr TerminalValue
instance ToExpr TypeDeclaration
instance ToExpr Value
