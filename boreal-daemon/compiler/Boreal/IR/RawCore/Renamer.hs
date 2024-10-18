{-# LANGUAGE OverloadedLists #-}

module Boreal.IR.RawCore.Renamer where

import Control.Concurrent.Counter (Counter)
import Control.Concurrent.Counter qualified as Counter
import Data.Foldable
import Data.Function
import Data.Text (Text)
import Data.Text qualified as Text
import Data.Text.Read qualified as Text
import Data.Vector qualified as Vector
import Effectful
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State

import Boreal.Frontend.Syntax
import Boreal.IR.RawCore.Types
import Boreal.IR.Types
import Boreal.IR.Types qualified as Module
import Boreal.PrimOps
import Boreal.ScopeEnvironment (ScopeEnvironment, logEnvironment)
import Boreal.ScopeEnvironment qualified as ScopeEnvironment

runRawCore
  :: ScopeEnvironment
  -> RawCoreEff (Module RawCore)
  -> IO (Module RawCore, ScopeEnvironment)
runRawCore environment action = do
  let defaultImports = Vector.singleton (ImportStatement (ModuleName "Stdlib.Prelude"))
  counter <- Counter.new 0
  (rawModule :: Module RawCore, env :: ScopeEnvironment) <-
    action
      & State.runState environment
      & Reader.runReader counter
      & State.evalState
        Module
          { Module.moduleName = ModuleName ""
          , topLevelFunctions = mempty
          , typeDeclarations = mempty
          , imports = mempty
          }
      & runEff
  if rawModule.moduleName == ModuleName "Stdlib.Prelude"
    then pure (rawModule, env)
    else do
      let newImports = defaultImports <> rawModule.imports
      pure (rawModule{imports = newImports}, env)

transformModule
  :: Syntax
  -- ^ Bit of syntax we're analysing
  -> RawCoreEff (Module RawCore)
transformModule (BorealNode _ "source" children) = do
  let (BorealNode _ "module_declaration" moduleDeclaration) = children Vector.! 0
  let topLevelDeclarations = children Vector.! 1
  let (BorealIdent _ moduleName) = moduleDeclaration Vector.! 1
  addModuleName moduleName
  case topLevelDeclarations of
    BorealNode _ "top_level_declarations" decls -> do
      traverse_ transform decls
      State.get

transform :: Syntax -> RawCoreEff ()
transform (BorealNode _ "function_declaration" rest) = do
  let BorealNode _ "function_head" functionHead = rest Vector.! 0
  let BorealIdent _ funName = functionHead Vector.! 0
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  let args =
        functionHead
          & Vector.tail
          & Vector.map (\(BorealIdent _ x) -> x)
  arguments <- traverse (ScopeEnvironment.freshName moduleName) args
  (body :: RawCore) <-
    case rest Vector.! 2 of
      (BorealNode _ "function_body" bodyNode) ->
        transformExpression (bodyNode Vector.! 0)
      e -> error $ "Unmatched: " <> show e
  functionName <- ScopeEnvironment.freshName moduleName funName
  addTopLevelFunction $ Fun functionName arguments body
transform (BorealNode _ "datatype_declaration" declaration) = do
  let BorealNode _ "datatype_head" datatypeHead = declaration Vector.! 0
  let BorealIdent _ typeName = datatypeHead Vector.! 1
  case declaration Vector.! 2 of
    BorealAtom _ "{" -> transformDatatypeDeclaration typeName (declaration Vector.! 3)
    e -> transformDatatypeDeclaration typeName e
transform (BorealNode _ "import_declaration" declaration) = do
  let BorealIdent _ "import" = declaration Vector.! 0
  let BorealIdent _ moduleName = declaration Vector.! 1
  let importStatement = ImportStatement (ModuleName moduleName)
  addImportedModule importStatement
transform e = error $ "Unmatched: " <> show e

transformDatatypeDeclaration :: UnqualifiedName -> Syntax -> RawCoreEff ()
transformDatatypeDeclaration typeName (BorealNode _ "sumtype_body" rest) = do
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  let constructorNames =
        rest
          & Vector.filter isIdent
          & Vector.map (\(BorealIdent _ x) -> x)
  qualifiedTypeName <- ScopeEnvironment.insertType moduleName typeName
  qualifiedConstructorNames' <-
    traverse
      (ScopeEnvironment.insertConstructor moduleName qualifiedTypeName)
      constructorNames
  let qualifiedConstructorNames = fmap (\x -> (x, Vector.empty)) qualifiedConstructorNames'
  addTypeDeclaration $ SumTypeDeclaration qualifiedTypeName qualifiedConstructorNames
transformDatatypeDeclaration typeName (BorealNode _ "record_body" members') = do
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  qualifiedTypeName <- ScopeEnvironment.insertType moduleName typeName
  members <- traverse (processRecordMemberDeclaration qualifiedTypeName) (Vector.filter (isNamedNode "record_member") members')
  addTypeDeclaration $ RecordDeclaration qualifiedTypeName members
transformDatatypeDeclaration _ e = error $ "Unmatched: " <> show e

transformExpression :: Syntax -> RawCoreEff RawCore
transformExpression (BorealNode _ "simple_expression" body) =
  case body of
    [BorealAtom _ "(", expr, BorealAtom _ ")"] -> transformExpression expr
    _ -> transformExpression $ Vector.head body
transformExpression (BorealNode _ "let_binding_body" bindingBody) = do
  transformExpression (bindingBody Vector.! 0)
transformExpression (BorealNode _ "let_binding" bindings) = do
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  let BorealIdent _ bindingName = bindings Vector.! 1
  qualifiedBindingName <- ScopeEnvironment.insertBinding moduleName bindingName
  transformedBoundExpression <- transformExpression $ bindings Vector.! 3
  transformedBody <- transformExpression $ bindings Vector.! 5
  pure $ Let qualifiedBindingName transformedBoundExpression transformedBody
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
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  let BorealIdent _ operation = args Vector.! 1
  mQualifiedOperationName <- ScopeEnvironment.lookupOperatorName operation
  qualifiedOperationName <- case mQualifiedOperationName of
    Nothing -> do
      ScopeEnvironment.logEnvironment
      error $ Text.unpack $ "Cannot find operator " <> operation <> " in scope"
    Just qualifiedOperationName -> pure qualifiedOperationName
  operand1 <- transformExpression $ args Vector.! 0
  operand2 <- transformExpression $ args Vector.! 2
  pure $ BinOpCall qualifiedOperationName operand1 operand2
transformExpression (BorealAtom _ a) =
  case takeLiteralFromAtom a of
    (Just l) -> pure $ Literal l
    Nothing -> error $ "Not a literal from atom: " <> show a
transformExpression (BorealIdent _ x) = do
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  -- Should I really insert the binding, here?
  varName <- ScopeEnvironment.lookupOrInsertBinding moduleName x
  pure $ Var varName
transformExpression e = error $ "Unmatched: " <> show e

takeLiteralFromAtom :: Text -> Maybe Int
takeLiteralFromAtom name =
  case Text.decimal name of
    Right (lit, _) -> Just lit
    Left _ -> Nothing

processAlternative :: (Syntax, Syntax) -> RawCoreEff (CaseAlternative RawCore)
processAlternative (BorealIdent _ matchPattern, body) = do
  rhs <- transformExpression body
  lhs <- do
    mConstructor <- ScopeEnvironment.lookupConstructor matchPattern
    case mConstructor of
      Nothing -> do
        ScopeEnvironment.logEnvironment
        error $ Text.unpack $ "Cannot find constructor " <> matchPattern <> " in scope"
      Just constructor -> pure $ Constructor constructor
  pure $ CaseAlternative lhs rhs
processAlternative e = error $ "Unmatched: " <> show e

processRecordMemberDeclaration
  :: ( Reader Counter :> es
     , State (Module RawCore) :> es
     , State ScopeEnvironment :> es
     , IOE :> es
     )
  => Name
  -> Syntax
  -> Eff es RecordMember
processRecordMemberDeclaration associatedType (BorealNode _ "record_member" members) = do
  moduleName <- State.gets @(Module RawCore) (.moduleName)
  let BorealIdent _ memberName = members Vector.! 0
      BorealIdent _ memberType = members Vector.! 2
  qualifiedMemberType <- do
    mName <- ScopeEnvironment.lookupType memberType
    case mName of
      Nothing -> do
        logEnvironment
        error $ Text.unpack $ "Cannot find type " <> memberType <> " in scope"
      Just name -> pure name
  qualifiedMemberName <- ScopeEnvironment.insertConstructor moduleName associatedType memberName
  pure $ RecordMember{memberName = qualifiedMemberName, memberType = qualifiedMemberType}

addTypeDeclaration :: TypeDeclaration -> RawCoreEff ()
addTypeDeclaration typeDecl = State.modify @(Module RawCore) $ \m ->
  let newTypeDeclarations = Vector.cons typeDecl m.typeDeclarations
   in m{typeDeclarations = newTypeDeclarations}

addTopLevelFunction :: RawCore -> RawCoreEff ()
addTopLevelFunction functionDeclaration = State.modify @(Module RawCore) $ \m ->
  let newTopLevelFunctions = Vector.snoc m.topLevelFunctions functionDeclaration
   in m{topLevelFunctions = newTopLevelFunctions}

addModuleName :: Text -> RawCoreEff ()
addModuleName name = State.modify @(Module RawCore) $ \(currentModule :: Module RawCore) ->
  currentModule{Module.moduleName = ModuleName name}

addImportedModule :: ImportStatement -> RawCoreEff ()
addImportedModule importStatement = State.modify @(Module RawCore) $ \m ->
  let newImportList = Vector.cons importStatement m.imports
   in m{imports = newImportList}
