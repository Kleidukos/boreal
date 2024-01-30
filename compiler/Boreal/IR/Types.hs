module Boreal.IR.Types where

import Data.Vector (Vector)

import Boreal.Frontend.Syntax
import Data.Text qualified as Text

data Module a = Module
  { moduleName :: Name
  , topLevelDeclarations :: Vector a
  }
  deriving stock (Eq, Ord, Show)

moduleNameToPath :: Name -> FilePath
moduleNameToPath name = Text.unpack $ Text.replace "." "/" name
