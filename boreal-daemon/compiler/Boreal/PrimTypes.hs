module Boreal.PrimTypes where

import Data.Map (Map)
import Data.Map qualified as Map
import Data.Vector (Vector)
import GHC.Generics (Generic)

import Boreal.IR.Types

data BorealType = BorealType
  { typeName :: Name
  , typeConstructors :: Vector Name
  }
  deriving stock (Eq, Show, Ord, Generic)

data BorealConstructor = BorealConstructor
  { constructorName :: Name
  , associatedType :: Name
  , arguments :: Vector Name
  }
  deriving stock (Eq, Show, Ord, Generic)

primTypes :: Map UnqualifiedName BorealType
primTypes =
  Map.empty

mkPrimType :: Name -> Vector Name -> BorealType
mkPrimType name members = undefined
