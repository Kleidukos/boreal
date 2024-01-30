module Boreal.IR.Types where

import Data.Vector (Vector)

import Boreal.Frontend.Syntax

data Module a = Module
  { moduleName :: Name
  , topLevelDeclarations :: Vector a
  }
  deriving stock (Eq, Ord, Show)
