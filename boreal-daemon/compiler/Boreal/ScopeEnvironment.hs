module Boreal.ScopeEnvironment where

import Data.Map.Strict (Map)
import GHC.Generics (Generic)

import Boreal.Frontend.Syntax (Name)
import Data.Map.Strict qualified as Map
import Data.Set (Set)
import Data.Set qualified as Set
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader

data ScopeEnvironment = ScopeEnvironment
  { functions :: Set Name
  , operators :: Map Name Name
  }
  deriving stock (Eq, Show, Ord, Generic)

newScopeEnvironment :: ScopeEnvironment
newScopeEnvironment =
  ScopeEnvironment
    { functions = Set.empty
    , operators =
        Map.fromList
          [ ("+", "prim_add")
          , ("-", "prim_sub")
          , ("*", "prim_mul")
          , ("/", "prim_div")
          , ("<", "prim_lt")
          , ("<=", "prim_lte")
          , (">", "prim_gt")
          , (">=", "prim_gte")
          , ("==", "prim_eq")
          , ("!=", "prim_neq")
          ]
    }

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
  pure $ Map.lookup operatorName operators

lookupIdentifierName :: (Reader ScopeEnvironment :> es) => Name -> Eff es (Maybe Name)
lookupIdentifierName identifierName =
  lookupOperatorName identifierName >>= \case
    Nothing -> lookupFunctionName identifierName
    Just cleanName -> pure (Just cleanName)
