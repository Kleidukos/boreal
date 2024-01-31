module Boreal.Backend.Lua where

import Control.Monad (forM)
import Data.Function ((&))
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Display (display)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.State.Static.Local qualified as State
import Language.Lua.PrettyPrinter
import Language.Lua.Syntax
import Language.Lua.Syntax qualified as Lua

import Boreal.Backend.Lua.Types
import Boreal.Frontend.Syntax qualified as Boreal
import Boreal.IR.ANFCore.Types
import Boreal.IR.Types
import Data.List qualified as List
import System.FilePath ((</>))

runLua :: FilePath -> Module ANFCore -> IO Text
runLua libDir anfModule = do
  luaChunk <- forM anfModule.topLevelDeclarations $ \case
    AFun name args body -> do
      functionDeclarationToLua name args body
        & State.evalState mempty
        & State.evalState emptyFunctionEnvironment
        & runEff
    ATypeDeclaration name constructors ->
      do
        typeDeclarationToLua name constructors
        & runEff
  pure $ Text.pack $ mconcat $ codegen libDir anfModule.moduleName luaChunk

typeDeclarationToLua :: Boreal.Name -> Vector Boreal.Name -> Eff '[IOE] Lua.Stat
typeDeclarationToLua name constructors = do
  let fields = Vector.toList $ Vector.map constructorToTableMember constructors
  pure $
    Lua.LocalAssign [Lua.Name name] (Just [Lua.TableConst fields])

constructorToTableMember :: Boreal.Name -> Lua.TableField
constructorToTableMember name =
  Lua.NamedField (Lua.Name name) (Lua.TableConst [])

codegen :: FilePath -> Text -> Vector Lua.Stat -> [String]
codegen libDir moduleName statements =
  let
    preludeImport = "prelude = require(\"" <> libDir </> "Stdlib" </> "prelude\")\n\n"
    prettyPrintedStatements = Vector.toList $ fmap (show . pprint) statements
   in
    [ "-- " <> Text.unpack moduleName <> "\n"
    , if moduleName /= "Stdlib.Prelude" then preludeImport else ""
    ]
      <> prettyPrintedStatements

valueToLua :: Value -> LuaEff Lua.Exp
valueToLua (Terminal terminalValue) = pure $ terminalValueToLua terminalValue
valueToLua (Complex complexValue) = pure $ complexValueToLua complexValue

terminalValueToLua :: TerminalValue -> Lua.Exp
terminalValueToLua (ALiteral int) = Lua.Number Lua.IntNum (display int)
terminalValueToLua (AVar var) = Lua.PrefixExp $ Lua.PEVar (Lua.VarName (Lua.Name var))

complexValueToLua :: ComplexValue -> Exp
complexValueToLua (AApp fun arguments) =
  case fun of
    "+" -> nativeLuaBinOp Add (arguments Vector.! 0) (arguments Vector.! 1)
    "-" -> nativeLuaBinOp Sub (arguments Vector.! 0) (arguments Vector.! 1)
    "*" -> nativeLuaBinOp Mul (arguments Vector.! 0) (arguments Vector.! 1)
    "/" -> nativeLuaBinOp Div (arguments Vector.! 0) (arguments Vector.! 1)
    e -> error $ "Unmatched: " <> show e

functionDeclarationToLua :: Boreal.Name -> Vector Boreal.Name -> ANFCore -> LuaEff Lua.Stat
functionDeclarationToLua name arguments body = do
  bodyInstructions <- functionBodyToBlock body
  let funArgs = fmap Name arguments
  if name == "main"
    then
      pure $
        FunAssign
          (FunName (Name "boreal_main") [] Nothing)
          (FunBody (Vector.toList funArgs) False bodyInstructions)
    else
      pure $
        LocalFunAssign
          (Name name)
          (FunBody (Vector.toList funArgs) False bodyInstructions)

functionBodyToBlock :: ANFCore -> LuaEff Lua.Block
functionBodyToBlock body = do
  result <- case body of
    (ALet name expression letBody) -> letBindingToLua name expression letBody
    (Halt value) -> do
      returnValue <- valueToLua value
      addBlockReturnValue returnValue
      pure Vector.empty
    e -> error $ "Didn't match on " <> show e

  FunctionEnvironment{returnValue} <- State.get
  pure $ Block (Vector.toList result) (fmap List.singleton returnValue)

letBindingToLua :: Boreal.Name -> Value -> ANFCore -> LuaEff (Vector Lua.Stat)
letBindingToLua boundName expression body = do
  expressionInstructions <- valueToLua expression
  bodyInstructions <- letBodyToBlock body
  pure $
    Vector.fromList
      [ LocalAssign
          [Lua.Name boundName]
          (Just [expressionInstructions])
      ]
      <> bodyInstructions

letBodyToBlock :: ANFCore -> LuaEff (Vector Lua.Stat)
letBodyToBlock body = do
  case body of
    (ALet name expression letBody) -> letBindingToLua name expression letBody
    (Halt value) -> do
      returnValue <- valueToLua value
      addBlockReturnValue returnValue
      pure Vector.empty
    e -> error $ "Didn't match on " <> show e

nativeLuaBinOp :: Lua.Binop -> TerminalValue -> TerminalValue -> Lua.Exp
nativeLuaBinOp binop operand1 operand2 =
  Binop binop (terminalValueToLua operand1) (terminalValueToLua operand2)
