module Boreal.Frontend.Syntax where

import Data.Set qualified as Set
import Data.Text (Text)
import Data.Text.Read qualified as Text
import Data.Vector (Vector)

type Name = Text

data Syntax
  = BorealNode
      Name
      -- ^ Name
      (Vector Syntax)
      -- ^ Arguments
  | -- | Bits of syntax that do not need to be looked up in environment,
    -- (like parentheses, syntactic keyword, commas, equal), or
    -- literal numbers
    BorealAtom Name
  | BorealIdent Name
  | Missing
  deriving stock (Eq, Ord, Show)

isAtom :: Text -> Bool
isAtom t =
  case Text.decimal @Int t of
    Right _ -> True
    Left _ -> t `Set.member` atoms
  where
    atoms =
      Set.fromList
        [ "module"
        , "where"
        , "let"
        , "in"
        , "="
        ]
