module Boreal.IR.ANFCore where

import Control.Concurrent.Counter (Counter)
import Control.Concurrent.Counter qualified as Counter
import Data.Function
import Data.Text (Text)
import Data.Text.Display (display)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Syntax
import Boreal.IR.RawCore (RawCore (..))
import Debug.Trace
import GHC.Generics (Generic)

type ANFCoreEff =
  Eff '[Reader Counter, State Bindings, IOE]

type Bindings = Vector (Name, Value)

freshName :: Text -> ANFCoreEff Name
freshName prefix = do
  counter <- Reader.ask
  number <- liftIO $ Counter.add counter 1
  pure $ prefix <> display number

addBinding :: (Name, Value) -> ANFCoreEff ()
addBinding binding =
  State.modify (\state -> Vector.cons binding state)

runANFCore :: RawCore -> IO ANFCore
runANFCore inputCore = do
  counter <- Counter.new 0
  case inputCore of
    Fun name arguments body -> do
      result <-
        action body
          & Reader.runReader counter
          & State.evalState Vector.empty
          & runEff
      pure $ AFun name arguments result
    e ->
      action e
        & Reader.runReader counter
        & State.evalState Vector.empty
        & runEff
  where
    action :: RawCore -> ANFCoreEff ANFCore
    action input = do
      result <- transform input
      finaliseTransformation result

data TerminalValue
  = ALiteral Int
  | AVar Name
  deriving stock (Eq, Show, Ord, Generic)

data ComplexValue
  = AApp
      Name
      -- ^ Function we are applying
      (Vector TerminalValue)
      -- ^ Arguments that need no further evaluation
  deriving stock (Eq, Show, Ord, Generic)

getName :: ComplexValue -> Name
getName (AApp n _) = n

data Value
  = Terminal TerminalValue
  | Complex ComplexValue
  deriving stock (Eq, Show, Ord, Generic)

-- | A-Normal Form AST more suitable for code generation.
data ANFCore
  = ALet
      Name
      -- ^ Name of the binding
      Value
      -- ^ Expression that is bound
      ANFCore
      -- ^ Body
  | Halt Value
  | AFun
      Name
      (Vector Name)
      ANFCore
  deriving stock (Eq, Show, Ord, Generic)

transformName :: RawCore -> ANFCoreEff TerminalValue
transformName core = do
  n <- transform core
  case n of
    ALet{} -> error "Cannot normalise a let-expression as a terminal value"
    AFun{} -> error "Cannot normalise a function declaration as a terminal value"
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
    traceShowM body
    processedBody <- transform body
    traceShowM processedBody
    pure $
      AFun
        name
        arguments
        processedBody

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
