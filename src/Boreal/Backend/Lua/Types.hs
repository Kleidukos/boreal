module Boreal.Backend.Lua.Types where

import Data.Map.Strict (Map)
import Data.Map.Strict qualified as Map
import Effectful
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Syntax (Name)
import Data.Maybe (fromJust)

type LuaEff =
  Eff
    '[ State Environment
     , IOE
     ]

type Offset = Int

newtype Environment = Environment (Map Name Offset)
  deriving newtype (Eq, Ord, Show, Semigroup, Monoid)

data Lua

lookupInEnvironment :: (State Environment :> es) => Name -> Eff es Offset
lookupInEnvironment name = do
  Environment envmap <- State.get
  pure $ fromJust $ Map.lookup name envmap

addToEnvironment :: (State Environment :> es) => Name -> Eff es Int
addToEnvironment name = do
  Environment envmap' <- State.get
  let slot = 1 + Map.size envmap'
  State.modify $ \(Environment envmap) ->
    let newmap = Map.insert name slot envmap
     in Environment newmap
  pure slot
