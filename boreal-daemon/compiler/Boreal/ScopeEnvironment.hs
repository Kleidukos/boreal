module Boreal.ScopeEnvironment where

import Control.Concurrent.Counter (Counter)
import Control.Concurrent.Counter qualified as Counter
import Data.Map.Strict (Map)
import Data.Map.Strict qualified as Map
import Data.Text (Text)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import GHC.Generics (Generic)
import Text.Pretty.Simple

import Boreal.IR.Types
import Boreal.PrimOps
import Boreal.PrimTypes

data ScopeEnvironment = ScopeEnvironment
  { functions :: Map UnqualifiedName Name
  , binops :: Map UnqualifiedName BinOp
  , types :: Map UnqualifiedName Name
  , constructors :: Map UnqualifiedName BorealConstructor
  , bindings :: Map UnqualifiedName Name
  }
  deriving stock (Eq, Show, Ord, Generic)

newScopeEnvironment :: ScopeEnvironment
newScopeEnvironment =
  ScopeEnvironment
    { functions = Map.empty
    , binops = primops
    , types = Map.empty
    , constructors = Map.empty
    , bindings = Map.empty
    }

freshName
  :: (Reader Counter :> es, IOE :> es)
  => ModuleName
  -> Text
  -> Eff es Name
freshName moduleName prefix = do
  counter <- Reader.ask
  number <- liftIO $ Counter.add counter 1
  pure $ Name{moduleOrigin = moduleName, name = prefix, unique = number}

insertType
  :: ( State ScopeEnvironment :> es
     , Reader Counter :> es
     , IOE :> es
     )
  => ModuleName
  -> UnqualifiedName
  -> Eff es Name
insertType moduleName unqualifiedName = do
  newIdentifier <- freshName moduleName unqualifiedName
  State.modify $ \env ->
    let newTypes = Map.insert unqualifiedName newIdentifier env.types
     in env{types = newTypes}
  pure newIdentifier

insertConstructor
  :: ( State ScopeEnvironment :> es
     , Reader Counter :> es
     , IOE :> es
     )
  => ModuleName
  -> Name
  -> UnqualifiedName
  -> Eff es Name
insertConstructor moduleName associatedType unqualifiedName = do
  constructorName <- freshName moduleName unqualifiedName
  State.modify $ \env ->
    let constructor =
          BorealConstructor
            { constructorName
            , associatedType
            , arguments = Vector.empty
            }
        newConstructors = Map.insert unqualifiedName constructor env.constructors
     in env{constructors = newConstructors}
  pure constructorName

lookupConstructor
  :: (State ScopeEnvironment :> es)
  => UnqualifiedName
  -> Eff es (Maybe BorealConstructor)
lookupConstructor unqualifiedName = do
  ScopeEnvironment{constructors} <- State.get
  pure $ Map.lookup unqualifiedName constructors

insertBinding
  :: ( State ScopeEnvironment :> es
     , Reader Counter :> es
     , IOE :> es
     )
  => ModuleName
  -> UnqualifiedName
  -> Eff es Name
insertBinding moduleName unqualifiedName = do
  newIdentifier <- freshName moduleName unqualifiedName
  State.modify $ \env ->
    let newBinding = Map.insert unqualifiedName newIdentifier env.bindings
     in env{bindings = newBinding}
  pure newIdentifier

lookupOrInsertBinding
  :: ( State ScopeEnvironment :> es
     , Reader Counter :> es
     , IOE :> es
     )
  => ModuleName
  -> UnqualifiedName
  -> Eff es Name
lookupOrInsertBinding moduleName unqualifiedName = do
  ScopeEnvironment{bindings} <- State.get
  case Map.lookup unqualifiedName bindings of
    Just name -> pure name
    Nothing -> insertBinding moduleName unqualifiedName

lookupFunctionName
  :: (State ScopeEnvironment :> es)
  => UnqualifiedName
  -> Eff es (Maybe Name)
lookupFunctionName functionName = do
  ScopeEnvironment{functions} <- State.get
  pure $ Map.lookup functionName functions

lookupType
  :: (State ScopeEnvironment :> es)
  => UnqualifiedName
  -> Eff es (Maybe Name)
lookupType functionName = do
  ScopeEnvironment{types} <- State.get
  pure $ Map.lookup functionName types

lookupOperatorName
  :: (State ScopeEnvironment :> es)
  => UnqualifiedName
  -> Eff es (Maybe Name)
lookupOperatorName operatorName = do
  ScopeEnvironment{binops} <- State.get
  let mResult = Map.lookup operatorName binops
  case mResult of
    Just op -> pure $ Just $ op.operator
    Nothing -> pure Nothing

lookupIdentifierName
  :: (State ScopeEnvironment :> es)
  => UnqualifiedName
  -> Eff es (Maybe Name)
lookupIdentifierName identifierName =
  lookupOperatorName identifierName >>= \case
    Nothing -> lookupFunctionName identifierName
    Just cleanName -> pure $ Just cleanName

logEnvironment
  :: (IOE :> es, State ScopeEnvironment :> es)
  => Eff es ()
logEnvironment = do
  environment <- State.get @ScopeEnvironment
  liftIO $ pPrint environment
