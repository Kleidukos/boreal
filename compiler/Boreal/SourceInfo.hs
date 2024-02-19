module Boreal.SourceInfo where

import GHC.Generics
import TreeSitter.Node

data SourceInfo = Original
  { start :: TSPoint
  , end :: TSPoint
  }
  deriving stock (Eq, Show, Generic)

instance Semigroup SourceInfo where
  s1 <> s2 =
    Original
      { start = s1.start
      , end = s2.end
      }

instance Monoid SourceInfo where
  mempty = Original{start = TSPoint 0 0, end = TSPoint 0 0}

fromNode :: Node -> SourceInfo
fromNode node =
  Original
    { start = nodeStartPoint node
    , end = node.nodeEndPoint
    }
