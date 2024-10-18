module Boreal.Backend.Lua.Types where

import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import Language.Lua qualified as Lua

import Boreal.IR.Types (ModuleName)
import Data.Text (Text)

type LuaEff =
  Eff
    '[ State LuaEnvironment
     , State FunctionEnvironment
     , Reader ModuleInfo
     , IOE
     ]

type Offset = Int

data ModuleInfo = ModuleInfo
  { name :: ModuleName
  }
  deriving stock (Eq, Ord, Show)

newtype LuaEnvironment = LuaEnvironment (Vector Text)
  deriving newtype (Eq, Ord, Show, Semigroup, Monoid)

data FunctionEnvironment = FunctionEnvironment
  { returnValue :: Maybe Lua.Exp
  }
  deriving stock (Eq, Show)

addNameToEnvironment :: Text -> LuaEff ()
addNameToEnvironment name = do
  State.modify (\(LuaEnvironment names) -> LuaEnvironment $ Vector.cons name names)

emptyFunctionEnvironment :: FunctionEnvironment
emptyFunctionEnvironment = FunctionEnvironment Nothing

addBlockReturnValue :: (State FunctionEnvironment :> es) => Lua.Exp -> Eff es ()
addBlockReturnValue returnValue =
  State.modify $ \env ->
    env{returnValue = Just returnValue}
