module Boreal.ScopeEnvironment where

import Data.Vector (Vector)
import Data.Map.Strict (Map)
import GHC.Generics (Generic)

import Boreal.Frontend.Syntax (Name)
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import qualified Data.Map.Strict as Map
import Data.Set (Set)
import qualified Data.Set as Set

data ScopeEnvironment = ScopeEnvironment
  { functions :: Set Name
  , operators :: Map Name Name
  }
  deriving stock (Eq, Show, Ord, Generic)

lookupFunctionName :: (Reader ScopeEnvironment :> es) => Name -> Eff es (Maybe Name)
lookupFunctionName functionName = do
  ScopeEnvironment{functions} <- Reader.ask
  pure $ 
    if Set.member functionName functions
    then Just functionName
    else Nothing

lookupOperatorName :: (Reader ScopeEnvironment :> es) => Name -> Eff es (Maybe Name)
lookupOperatorName operatorName = do
  ScopeEnvironment{operators} <- Reader.ask
  pure $ 
    Map.lookup operatorName operators

lookupIdentifierName :: (Reader ScopeEnvironment :> es) => Name -> Eff es (Maybe Name)
lookupIdentifierName identifierName =
  lookupOperatorName identifierName >>= \case
    Nothing -> lookupFunctionName identifierName
    Just cleanName -> pure (Just cleanName)
