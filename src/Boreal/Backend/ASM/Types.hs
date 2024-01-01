module Boreal.Backend.ASM.Types where

import Control.Concurrent.Counter (Counter)
import Control.Concurrent.Counter qualified as Counter
import Data.Map.Strict (Map)
import Data.Map.Strict qualified as Map
import Data.Text (Text)
import Data.Vector (Vector)
import Effectful
import Effectful.Labeled (Labeled)
import Effectful.Labeled qualified as Labeled
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import Prettyprinter

import Boreal.Frontend.Syntax (Name)
import Data.Maybe (fromJust)

type ASM =
  Eff
    '[ Labeled "label-counter" (Reader Counter)
     , State Environment
     , IOE
     ]

data ASMResult = ASMResult (Vector Instruction)

type Offset = Int

newtype Environment = Environment (Map Name Offset)
  deriving newtype (Eq, Ord, Show, Semigroup, Monoid)

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

data Register
  = RAX
  | RSP
  deriving stock (Eq, Ord, Show)

data Argument
  = Constant Int
  | Reg Register
  | RegOffset Register Int -- represents address (reg + 8×i)
  deriving stock (Eq, Ord, Show)

data Instruction
  = MOV Argument Argument
  | ADD Argument Argument
  | SUB Argument Argument
  | LabelDeclaration Text (Vector Instruction)
  deriving stock (Eq, Ord, Show)

instance Pretty (Vector Instruction) where
  pretty = undefined

getNextLabelNumber :: (Labeled "label-counter" (Reader Counter) :> es, IOE :> es) => Eff es Int
getNextLabelNumber = do
  Labeled.labeled @"label-counter" @(Reader Counter) $ do
    counter <- Reader.ask
    liftIO $
      Counter.add counter 1
