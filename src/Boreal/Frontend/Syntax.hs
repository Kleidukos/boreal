module Boreal.Frontend.Syntax where

import Data.Text (Text)
import Data.Vector (Vector)

type Name = Text

data Syntax
  = BorealNode
      Name
      -- ^ Name
      (Vector Syntax)
      -- ^ Arguments
  | BorealAtom Text
  | BorealIdent Name
  deriving stock (Eq, Ord, Show)
