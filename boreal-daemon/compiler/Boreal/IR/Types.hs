module Boreal.IR.Types where

import Data.Text qualified as Text
import Data.Vector (Vector)
import GHC.Generics

import Boreal.Frontend.Syntax

data Module a = Module
  { moduleName :: Name
  , topLevelFunctions :: Vector a
  , typeDeclarations :: Vector TypeDeclaration
  }
  deriving stock (Eq, Ord, Show)

data TypeDeclaration
  = SumTypeDeclaration
      Name
      (Vector Name)
  | RecordDeclaration
      Name
      (Vector RecordMember)
  deriving stock (Eq, Ord, Show, Generic)

data RecordMember = RecordMember
  { memberName :: Name
  , memberType :: Name
  }
  deriving stock (Eq, Show, Ord, Generic)

moduleNameToPath :: Name -> FilePath
moduleNameToPath name = Text.unpack $ Text.replace "." "/" name
