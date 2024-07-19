module Boreal.Protocol.DebugFlags where

data DebugFlags = DebugFlags
  { dumpSyntax :: Bool
  , dumpRawCore :: Bool
  , dumpANFCore :: Bool
  }
  deriving stock (Eq, Ord, Show)

emptyDebugFlags :: DebugFlags
emptyDebugFlags =
  DebugFlags
    { dumpSyntax = False
    , dumpRawCore = False
    , dumpANFCore = False
    }
