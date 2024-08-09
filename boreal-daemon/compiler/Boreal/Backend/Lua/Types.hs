module Boreal.Backend.Lua.Types where

import Data.Text (Text)
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import Language.Lua qualified as Lua

import Boreal.Frontend.Syntax (Name)
import Control.Concurrent.Counter (Counter)
import Data.Vector (Vector)
import Data.Vector qualified as Vector

type LuaEff =
  Eff
    '[ State Environment
     , State FunctionEnvironment
     , Reader Counter
     , Reader ModuleInfo
     , IOE
     ]

type Offset = Int

data ModuleInfo = ModuleInfo
  { name :: Text
  }
  deriving stock (Eq, Ord, Show)

newtype Environment = Environment (Vector Name)
  deriving newtype (Eq, Ord, Show, Semigroup, Monoid)

data FunctionEnvironment = FunctionEnvironment
  { returnValue :: Maybe Lua.Exp
  }
  deriving stock (Eq, Show)

addNameToEnvironment :: Name -> LuaEff ()
addNameToEnvironment name = do
  State.modify (\(Environment names) -> Environment $ Vector.cons name names)

emptyFunctionEnvironment :: FunctionEnvironment
emptyFunctionEnvironment = FunctionEnvironment Nothing

addBlockReturnValue :: (State FunctionEnvironment :> es) => Lua.Exp -> Eff es ()
addBlockReturnValue returnValue =
  State.modify $ \env ->
    env{returnValue = Just returnValue}
