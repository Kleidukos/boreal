{-# LANGUAGE RecordWildCards #-}

module Boreal.IR.Types where

import Data.String
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Vector (Vector)
import GHC.Generics

data Module a = Module
  { moduleName :: ModuleName
  , topLevelFunctions :: Vector a
  , typeDeclarations :: Vector TypeDeclaration
  , imports :: Vector ImportStatement
  }
  deriving stock (Eq, Ord, Show)

newtype ModuleName = ModuleName Text
  deriving stock (Generic)
  deriving (Eq, Show, Ord, Display, IsString) via Text

type UnqualifiedName = Text

data Name = Name
  { moduleOrigin :: ModuleName
  , name :: Text
  , unique :: Int
  }
  deriving stock (Eq, Show, Ord, Generic)

instance Display Name where
  displayBuilder Name{..} =
    displayBuilder moduleOrigin <> "_" <> displayBuilder name <> displayBuilder unique

-- | A boreal type declaration is either
--  * A Sum type, which is a tagged union where tags can have 0 or more values associated with them.
--    The members of a sum type are not named and must be accessed through pattern matching.
--  * A Product type, which is a record where each member is named, which makes them accessible
--    through record projection (record.fieldName).
data TypeDeclaration
  = SumTypeDeclaration
      Name
      -- ^ Name of the type
      (Vector (Name, Vector Name))
      -- ^ Vector of constructors, each of them may have values associated
  | RecordDeclaration
      Name
      -- ^ Name of the type
      (Vector RecordMember)
      -- ^ Fields of the record
  deriving stock (Eq, Ord, Show, Generic)

data RecordMember = RecordMember
  { memberName :: Name
  , memberType :: Name
  }
  deriving stock (Eq, Show, Ord, Generic)

data ImportStatement = ImportStatement
  { importedModule :: ModuleName
  }
  deriving stock (Eq, Show, Ord, Generic)

moduleNameToPath :: ModuleName -> FilePath
moduleNameToPath (ModuleName name) = Text.unpack $ Text.replace "." "/" name
