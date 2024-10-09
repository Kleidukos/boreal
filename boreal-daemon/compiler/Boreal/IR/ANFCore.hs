module Boreal.IR.ANFCore where

import Control.Concurrent.Counter qualified as Counter
import Data.Function ((&))
import Data.Text (Text)
import Data.Text.Display (display)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local qualified as State

import Boreal.IR.ANFCore.Types
import Boreal.IR.RawCore.Types (CaseAlternative (..), RawCore (..))
import Boreal.IR.Types
import Boreal.ScopeEnvironment (ScopeEnvironment)
import Boreal.ScopeEnvironment qualified as ScopeEnvironment
import Data.Text qualified as Text

runANFCore :: ScopeEnvironment -> RawCore -> IO ANFCore
runANFCore scopeEnvironment inputCore = do
  counter <- Counter.new 0
  case inputCore of
    Fun name arguments body -> do
      result <-
        action body
          & Reader.runReader counter
          & State.evalState Vector.empty
          & State.evalState scopeEnvironment
          & runEff
      pure $ AFun (display name) (fmap display arguments) result
    e ->
      action e
        & Reader.runReader counter
        & State.evalState Vector.empty
        & State.evalState scopeEnvironment
        & runEff
  where
    action :: RawCore -> ANFCoreEff ANFCore
    action input = do
      result <- transform input
      finaliseTransformation result

newIntermediateName :: Name -> ANFCoreEff Text
newIntermediateName prefix = do
  counter <- Reader.ask
  number <- liftIO $ Counter.add counter 1
  mCleanPrefix <- ScopeEnvironment.lookupIdentifierName (prefix.name)
  case mCleanPrefix of
    Nothing -> do
      ScopeEnvironment.logEnvironment
      error $ "Could not find " <> Text.unpack prefix.name <> " in scope environment"
    Just cleanPrefix ->
      pure $ display cleanPrefix <> display number

addBinding :: Text -> Value -> ANFCoreEff ()
addBinding prefix value = do
  State.modify (Vector.cons (prefix, value))

transformName :: RawCore -> ANFCoreEff TerminalValue
transformName core = do
  n <- transform core
  case n of
    ALet{} -> error "Cannot normalise a let-expression as a terminal value"
    AFun{} -> error "Cannot normalise a function declaration as a terminal value"
    ATypeDeclaration{} -> error "Cannot normalise a type declaration as a terminal value"
    ACase{} -> error "Cannot normalise a case expression as a terminal value"
    Halt (Terminal val) -> pure val
    Halt v@(Complex val) -> do
      newIdentifier <- newIntermediateName (getName val)
      addBinding newIdentifier v
      pure $ AVar newIdentifier

transform
  :: RawCore
  -> ANFCoreEff ANFCore
transform = \case
  Let bindingName boundExpression body -> do
    transformedExpression <- transform boundExpression
    case transformedExpression of
      Halt val -> do
        addBinding (display bindingName) val
        transform body
      _ -> error "Not a terminal value in transformedExpression"
  Literal i -> pure $ Halt $ Terminal $ ALiteral i
  Var i -> pure $ Halt $ Terminal $ AVar (display i)
  Call funName arguments -> do
    transformedArguments <- traverse transformName arguments
    pure $ Halt $ Complex $ AApp funName transformedArguments
  Fun name arguments body -> do
    processedBody <- transform body
    pure $
      AFun
        (display name)
        (fmap display arguments)
        processedBody
  Case expression alternatives -> do
    transform expression >>= \case
      Halt processedExpression -> do
        transformedAlternatives <- traverse transformAlternative alternatives
        pure $ ACase processedExpression transformedAlternatives
      e -> error $ "Unmatched: " <> show e

-- e -> error $ "Unmatched: " <> show e

finaliseTransformation :: ANFCore -> ANFCoreEff ANFCore
finaliseTransformation anf = do
  bindings <- State.get @Bindings
  State.modify @Bindings (const Vector.empty)
  pure $
    Vector.foldr mkLet anf $
      Vector.reverse bindings
  where
    mkLet :: (Text, Value) -> ANFCore -> ANFCore
    mkLet (var, value) = ALet var value

transformAlternative :: CaseAlternative RawCore -> ANFCoreEff (CaseAlternative ANFCore)
transformAlternative caseAlternative = do
  transformedRHS <- transform caseAlternative.rhs
  pure $ caseAlternative{rhs = transformedRHS}

getName :: ComplexValue -> Name
getName (AApp n _) = n
