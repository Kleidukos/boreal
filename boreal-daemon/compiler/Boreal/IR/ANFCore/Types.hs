module Boreal.IR.ANFCore.Types where

import Control.Concurrent.Counter (Counter)
import Data.Vector (Vector)
import Effectful
import Effectful.Reader.Static
import Effectful.State.Static.Local (State)
import GHC.Generics (Generic)

import Boreal.Frontend.Syntax (Name)
import Boreal.IR.RawCore (CaseAlternative)
import Boreal.ScopeEnvironment

type ANFCoreEff =
  Eff '[Reader Counter, State Bindings, Reader ScopeEnvironment, IOE]

type Bindings = Vector (Name, Value)

data TerminalValue
  = ALiteral Int
  | AVar Name
  deriving stock (Eq, Show, Ord, Generic)

data ComplexValue
  = AApp
      Name
      -- ^ Function we are applying
      (Vector TerminalValue)
      -- ^ Arguments that need no further evaluation
  deriving stock (Eq, Show, Ord, Generic)

data Value
  = Terminal TerminalValue
  | Complex ComplexValue
  deriving stock (Eq, Show, Ord, Generic)

-- | A-Normal Form AST more suitable for code generation.
data ANFCore
  = ALet
      Name
      -- ^ Name of the binding
      Value
      -- ^ Expression that is bound
      ANFCore
      -- ^ Body
  | AFun
      Name
      (Vector Name)
      ANFCore
  | ACase
      Value
      (Vector (CaseAlternative ANFCore))
  | ATypeDeclaration
      Name
      (Vector Name)
  | Halt Value
  deriving stock (Eq, Show, Ord, Generic)
