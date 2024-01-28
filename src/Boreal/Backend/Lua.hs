module Boreal.Backend.Lua where

import Control.Monad (forM)
import Data.Function ((&))
import Data.Text (Text)
import Data.Text.Display (display)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.State.Static.Local qualified as State
import Language.Lua.Syntax
import Language.Lua.PrettyPrinter
import qualified Data.Text as Text
import qualified Language.Lua.Syntax as Lua

import Boreal.Backend.Lua.Types
import Boreal.IR.ANFCore.Types
import Boreal.IR.Types
import Boreal.Frontend.Syntax qualified as Boreal

runLua :: Module ANFCore -> IO Text
runLua anfModule = do
  luaChunk <- forM anfModule.topLevelDeclarations $ \(AFun name args body) -> do
    functionDeclarationToLua name args body
      & State.evalState mempty
      & runEff
  pure $ Text.pack $ codegen luaChunk

codegen :: Vector Lua.Stat -> String
codegen expVector = show $ fmap pprint expVector

valueToLua :: Value -> LuaEff Lua.Exp
valueToLua (Terminal terminalValue) = pure $ terminalValueToLua terminalValue
valueToLua (Complex complexValue) = pure $ complexValueToLua complexValue

terminalValueToLua :: TerminalValue -> Lua.Exp
terminalValueToLua (ALiteral int) = Lua.Number Lua.IntNum (display int)
terminalValueToLua (AVar var) = Lua.PrefixExp $ Lua.PEVar (Lua.VarName (Lua.Name var))

complexValueToLua :: ComplexValue -> Exp
complexValueToLua (AApp fun arguments) =
  case fun of
    "+" -> additionToLua arguments
    "-" -> subtractionToLua arguments
    e -> error $ "Unmatched: " <> show e

functionDeclarationToLua :: Boreal.Name -> Vector Boreal.Name -> ANFCore -> LuaEff Lua.Stat
functionDeclarationToLua name arguments body = do
  bodyInstructions <- functionBodyToBlock body
  let funName = if name == "main" then "boreal_main" else name
  let funArgs = fmap Name arguments
  pure $
    LocalFunAssign
      (Name funName)
      (FunBody (Vector.toList funArgs) False bodyInstructions)

functionBodyToBlock :: ANFCore -> LuaEff Lua.Block
functionBodyToBlock body = pure $ Block [] (Nothing)

letBindingToLua :: Boreal.Name -> Value -> ANFCore -> LuaEff (Vector Lua.Stat)
letBindingToLua boundName expression body = do
  expressionInstructions <- valueToLua expression
  bodyInstructions <- letBodyToBlock body
  pure $ Vector.fromList
    [
      LocalAssign
        [Lua.Name boundName]
        (Just [expressionInstructions])
    , bodyInstructions
    ]

letBodyToBlock :: ANFCore -> LuaEff Lua.Stat
letBodyToBlock _ = pure Lua.EmptyStat

additionToLua :: Vector TerminalValue -> Lua.Exp
additionToLua args =
  let operand1 = terminalValueToLua $ args Vector.! 0
      operand2 = terminalValueToLua $ args Vector.! 1
  in Binop Add operand1 operand2

subtractionToLua :: Vector TerminalValue -> Lua.Exp
subtractionToLua args =
  let operand1 = terminalValueToLua $ args Vector.! 0
      operand2 = terminalValueToLua $ args Vector.! 1
  in Binop Sub operand1 operand2
