module Boreal.IR.ANFCore.Types where

import Control.Concurrent.Counter (Counter)
import Data.Text (Text)
import Data.Vector (Vector)
import Effectful
import Effectful.Reader.Static
import Effectful.State.Static.Local (State)
import GHC.Generics (Generic)

import Boreal.IR.RawCore.Types (CaseAlternative)
import Boreal.IR.Types (Name)
import Boreal.PrimOps (BinOp)
import Boreal.ScopeEnvironment

type ANFCoreEff =
  Eff '[Reader Counter, State Bindings, State ScopeEnvironment, IOE]

type Bindings = Vector (Text, Value)

data TerminalValue
  = ALiteral Int
  | AVar Text
  deriving stock (Eq, Show, Ord, Generic)

data ComplexValue
  = AApp
      Name
      -- ^ Function we are applying
      (Vector TerminalValue)
      -- ^ Arguments that need no further evaluation
  | ABinOp
      BinOp
      -- ^ Operator
      TerminalValue
      -- ^ Left operand
      TerminalValue
      -- ^ Right operand
  deriving stock (Eq, Show, Ord, Generic)

data Value
  = Terminal TerminalValue
  | Complex ComplexValue
  deriving stock (Eq, Show, Ord, Generic)

-- | A-Normal Form AST more suitable for code generation.
data ANFCore
  = ALet
      Text
      -- ^ Name of the binding
      Value
      -- ^ Expression that is bound
      ANFCore
      -- ^ Body
  | AFun
      Text
      (Vector Text)
      ANFCore
  | ACase
      Value
      (Vector (CaseAlternative ANFCore))
  | ATypeDeclaration
      Text
      (Vector Text)
  | Halt Value
  deriving stock (Eq, Show, Ord, Generic)
