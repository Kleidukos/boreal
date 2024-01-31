module Boreal.IR.ANFCore where

import Control.Concurrent.Counter qualified as Counter
import Data.Function ((&))
import Data.Text (Text)
import Data.Text.Display (display)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Syntax
import Boreal.IR.ANFCore.Types
import Boreal.IR.RawCore (CaseAlternative (..), RawCore (..))
import Boreal.ScopeEnvironment (ScopeEnvironment, lookupIdentifierName)
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
          & Reader.runReader scopeEnvironment
          & runEff
      pure $ AFun name arguments result
    e ->
      action e
        & Reader.runReader counter
        & State.evalState Vector.empty
        & Reader.runReader scopeEnvironment
        & runEff
  where
    action :: RawCore -> ANFCoreEff ANFCore
    action input = do
      result <- transform input
      finaliseTransformation result

freshName :: Text -> ANFCoreEff Name
freshName prefix = do
  counter <- Reader.ask
  number <- liftIO $ Counter.add counter 1
  mCleanPrefix <- lookupIdentifierName prefix
  case mCleanPrefix of
    Nothing -> error $ "Could not find " <> Text.unpack prefix <> " in scope environment"
    Just cleanPrefix ->
      pure $ cleanPrefix <> display number

addBinding :: (Name, Value) -> ANFCoreEff ()
addBinding binding =
  State.modify (\state -> Vector.cons binding state)

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
      newName <- freshName (getName val)
      addBinding (newName, v)
      pure $ AVar newName

transform
  :: RawCore
  -> ANFCoreEff ANFCore
transform = \case
  Let bindingName boundExpression body -> do
    transformedExpression <- transform boundExpression
    case transformedExpression of
      Halt val -> do
        addBinding (bindingName, val)
        transform body
      _ -> error "Not a terminal value in transformedExpression"
  Literal i -> pure $ Halt $ Terminal $ ALiteral i
  Var i -> pure $ Halt $ Terminal $ AVar i
  Call funName arguments -> do
    transformedArguments <- traverse transformName arguments
    pure $ Halt $ Complex $ AApp funName transformedArguments
  Fun name arguments body -> do
    processedBody <- transform body
    pure $
      AFun
        name
        arguments
        processedBody
  Case expression alternatives -> do
    transform expression >>= \case
      Halt processedExpression -> do
        transformedAlternatives <- traverse transformAlternative alternatives
        pure $ ACase processedExpression transformedAlternatives
      e -> error $ "Unmatched: " <> show e
  TypeDeclaration name constructors -> pure $ ATypeDeclaration name constructors

-- e -> error $ "Unmatched: " <> show e

finaliseTransformation :: ANFCore -> ANFCoreEff ANFCore
finaliseTransformation anf = do
  bindings <- State.get
  State.modify @Bindings (const Vector.empty)
  pure $
    Vector.foldr mkLet anf $
      Vector.reverse bindings
  where
    mkLet :: (Name, Value) -> ANFCore -> ANFCore
    mkLet (var, value) body =
      ALet var value body

transformAlternative :: CaseAlternative RawCore -> ANFCoreEff (CaseAlternative ANFCore)
transformAlternative caseAlternative = do
  transformedRHS <- transform caseAlternative.rhs
  pure $ caseAlternative{rhs = transformedRHS}

getName :: ComplexValue -> Name
getName (AApp n _) = n
