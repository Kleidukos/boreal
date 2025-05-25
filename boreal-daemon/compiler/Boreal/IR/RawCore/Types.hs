module Boreal.IR.RawCore.Types where

import Control.Concurrent.Counter (Counter)
import Data.Vector (Vector)
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.State.Static.Local (State)
import GHC.Generics (Generic)

import Boreal.IR.Types
import Boreal.PrimTypes
import Boreal.ScopeEnvironment

-- | Non-ANF intermediate representation whose job is to take a 'Syntax'
-- and hold it in a more convenient way for ANF transformation.
data RawCore
  = Literal Int
  | Var Name
  | Call Name (Vector RawCore)
  | BinOpCall
      Name
      -- ^ Operator
      RawCore
      -- ^ Left operand
      RawCore
      -- ^ Right operand
  | Fun
      Name
      -- ^ Binding name
      (Vector Name)
      -- ^ Parameters
      RawCore
      -- ^ Body
  | Let
      Name
      -- ^ Binding name
      RawCore
      -- ^ Bound expression
      RawCore
      -- ^ Body
  | Case
      RawCore
      -- ^ Expression
      (Vector (CaseAlternative RawCore))
      -- ^ Alternatives
  deriving stock (Eq, Show, Ord, Generic)

data CaseAlternative ir = CaseAlternative
  { lhs :: Pattern
  , rhs :: ir
  }
  deriving stock (Eq, Show, Ord, Generic)

data Pattern
  = Constructor BorealConstructor
  deriving stock (Eq, Show, Ord, Generic)

type RawCoreEff =
  Eff
    '[ State ScopeEnvironment
     , Reader Counter
     , State (Module RawCore)
     , IOE
     ]
