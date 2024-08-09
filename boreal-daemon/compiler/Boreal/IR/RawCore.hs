{-# LANGUAGE OverloadedLists #-}

module Boreal.IR.RawCore where

import Data.Foldable
import Data.Function
import Data.Text.Read qualified as Text
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import GHC.Generics (Generic)

import Boreal.Frontend.Syntax
import Boreal.IR.Types

-- | Non-ANF intermediate representation whose job is to take a 'Syntax'
-- and hold it in a more convenient way for ANF transformation.
data RawCore
  = Literal Int
  | Var Name
  | Call Name (Vector RawCore)
  | Fun
      Name
      -- ^ Binding name
      (Vector Name)
      -- ^ Parameters
      RawCore
      -- ^ Body
  | Let
      Name
      -- ^ Binding name
      RawCore
      -- ^ Bound expression
      RawCore
      -- ^ Body
  | Case
      RawCore
      -- ^ Expression
      (Vector (CaseAlternative RawCore))
      -- ^ Alternatives
  deriving stock (Eq, Show, Ord, Generic)

data CaseAlternative ir = CaseAlternative
  { lhs :: Pattern
  , rhs :: ir
  }
  deriving stock (Eq, Show, Ord, Generic)

data Pattern
  = Constructor Name
  deriving stock (Eq, Show, Ord, Generic)

type RawCoreEff = Eff '[State (Module RawCore), IOE]

runRawCore :: RawCoreEff a -> IO (Module RawCore)
runRawCore action = do
  let defaultImports = Vector.singleton (ImportStatement "Stdlib.Prelude")
  rawModule <-
    action
      & State.execState Module{moduleName = "", topLevelFunctions = mempty, typeDeclarations = mempty, imports = mempty}
      & runEff
  if rawModule.moduleName == "Stdlib.Prelude"
    then pure rawModule
    else do
      let newImports = defaultImports <> rawModule.imports
      pure $ rawModule{imports = newImports}
transformModule
  :: Syntax
  -- ^ Bit of syntax we're analysing
  -> RawCoreEff ()
transformModule (BorealNode _ "source" children) = do
  let (BorealNode _ "module_declaration" moduleDeclaration) = children Vector.! 0
  let topLevelDeclarations = children Vector.! 1
  let (BorealIdent _ moduleName) = moduleDeclaration Vector.! 1
  addModuleName moduleName
  case topLevelDeclarations of
    BorealNode _ "top_level_declarations" decls ->
      traverse_ transform decls
  pure ()

transform :: Syntax -> RawCoreEff ()
transform (BorealNode _ "function_declaration" rest) = do
  let BorealNode _ "function_head" functionHead = rest Vector.! 0
  let BorealIdent _ funName = functionHead Vector.! 0
  let BorealIdent _ arg = functionHead Vector.! 0
  let args =
        functionHead
          & Vector.tail
          & Vector.map (\(BorealIdent _ x) -> x)
  (body :: RawCore) <-
    case rest Vector.! 2 of
      (BorealNode _ "function_body" bodyNode) ->
        transformExpression (bodyNode Vector.! 0)
      e -> error $ "Unmatched: " <> show e
  addTopLevelFunction $ Fun funName args body
transform (BorealNode _ "datatype_declaration" declaration) = do
  let BorealNode _ "datatype_head" datatypeHead = declaration Vector.! 0
  let BorealIdent _ typeName = datatypeHead Vector.! 1
  case declaration Vector.! 2 of
    BorealAtom _ "{" -> transformDatatypeDeclaration typeName (declaration Vector.! 3)
    e -> transformDatatypeDeclaration typeName e
transform (BorealNode _ "import_declaration" declaration) = do
  let BorealIdent _ "import" = declaration Vector.! 0
  let BorealIdent _ moduleName = declaration Vector.! 1
  let importStatement = ImportStatement moduleName
  addImportedModule importStatement
transform e = error $ "Unmatched: " <> show e

transformDatatypeDeclaration :: Name -> Syntax -> RawCoreEff ()
transformDatatypeDeclaration typeName (BorealNode _ "sumtype_body" rest) = do
  let constructorNames =
        rest
          & Vector.filter isIdent
          & Vector.map (\(BorealIdent _ x) -> x)
  addTypeDeclaration $ SumTypeDeclaration typeName constructorNames
transformDatatypeDeclaration typeName (BorealNode _ "record_body" members') = do
  let members = fmap processMember $ Vector.filter (isNamedNode "record_member") members'
  addTypeDeclaration $ RecordDeclaration typeName members
transformDatatypeDeclaration _ e = error $ "Unmatched: " <> show e

transformExpression :: Syntax -> RawCoreEff RawCore
transformExpression (BorealNode _ "simple_expression" body) =
  case body of
    [BorealAtom _ "(", expr, BorealAtom _ ")"] -> transformExpression expr
    _ -> transformExpression $ Vector.head body
transformExpression (BorealNode si "let_binding_body" bindingBody) = do
  transformExpression (bindingBody Vector.! 0)
transformExpression (BorealNode si "let_binding" bindings) = do
  let BorealIdent _ bindingName = bindings Vector.! 1
  let BorealNode _ _ beNode' = bindings Vector.! 3
  let boundExpression = Vector.head beNode'
  transformedBoundExpression <- transformExpression $ bindings Vector.! 3
  transformedBody <- transformExpression $ bindings Vector.! 5
  pure $ Let bindingName transformedBoundExpression transformedBody
transformExpression (BorealNode _ "case_expression" expression) = do
  let body = expression Vector.! 1
  caseExpression <- transformExpression body
  let BorealNode _ "alternatives" alternativesList = expression Vector.! 3
  let alternatives =
        alternativesList
          & Vector.filter (\syntax -> isNamedNode "alternative" syntax)
          & Vector.map
            ( \(BorealNode _ _ content) ->
                let BorealNode _ "pattern" pat = content Vector.! 0
                    BorealNode _ "simple_expression" rhs = content Vector.! 2
                 in (Vector.head pat, Vector.head rhs)
            )
  processedAlternatives <- traverse processAlternative alternatives
  pure $ Case caseExpression processedAlternatives
transformExpression (BorealNode _ "binary_operation" args) = do
  let BorealIdent _ operation = args Vector.! 1
  operand1 <- transformExpression $ args Vector.! 0
  operand2 <- transformExpression $ args Vector.! 2
  pure $ Call operation (Vector.fromList [operand1, operand2])
-- transformExpression (BorealNode _ n args) = do
-- liftIO $ putStrLn "============="
-- liftIO $ pPrint args
-- arguments <- traverse transformExpression args
-- pure $ Call n arguments
transformExpression (BorealAtom _ a) =
  case takeLiteralFromAtom a of
    (Just l) -> pure $ Literal l
    Nothing -> error $ "Not a literal from atom: " <> show a
transformExpression (BorealIdent _ x) = pure $ Var x
transformExpression e = error $ "Unmatched: " <> show e

takeLiteralFromAtom :: Name -> Maybe Int
takeLiteralFromAtom name =
  case Text.decimal name of
    Right (lit, _) -> Just lit
    Left _ -> Nothing

processAlternative :: (Syntax, Syntax) -> RawCoreEff (CaseAlternative RawCore)
processAlternative (BorealIdent _ matchPattern, body) = do
  rhs <- transformExpression body
  let lhs = Constructor matchPattern
  pure $ CaseAlternative lhs rhs
transformAlternative e = error $ "Unmatched: " <> show e

processMember :: Syntax -> RecordMember
processMember (BorealNode _ "record_member" members) =
  let BorealIdent _ memberName = members Vector.! 0
      BorealIdent _ memberType = members Vector.! 2
   in RecordMember{memberName, memberType}

addTypeDeclaration :: TypeDeclaration -> RawCoreEff ()
addTypeDeclaration typeDecl = State.modify @(Module RawCore) $ \m ->
  let newTypeDeclarations = Vector.cons typeDecl m.typeDeclarations
   in m{typeDeclarations = newTypeDeclarations}

addTopLevelFunction :: RawCore -> RawCoreEff ()
addTopLevelFunction functionDeclaration = State.modify @(Module RawCore) $ \m ->
  let newTopLevelFunctions = Vector.snoc m.topLevelFunctions functionDeclaration
   in m{topLevelFunctions = newTopLevelFunctions}

addModuleName :: Name -> RawCoreEff ()
addModuleName name = State.modify @(Module RawCore) $ \m ->
  m{moduleName = name}

addImportedModule :: ImportStatement -> RawCoreEff ()
addImportedModule importStatement = State.modify @(Module RawCore) $ \m ->
  let newImportList = Vector.cons importStatement m.imports
   in m{imports = newImportList}
