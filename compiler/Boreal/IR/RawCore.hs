{-# LANGUAGE OverloadedLists #-}

module Boreal.IR.RawCore where

import Data.Function
import Data.Text qualified as Text
import Data.Text.Read qualified as Text
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Effectful
import GHC.Generics (Generic)

import Boreal.Frontend.Syntax (Name, Syntax (..), isNamedNode)
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
  | TypeDeclaration
      Name
      (Vector Name)
  | RecordDeclaration
      Name
      (Vector RecordMember)
  deriving stock (Eq, Show, Ord, Generic)

data RecordMember = RecordMember
  { memberName :: Name
  , memberType :: Name
  }
  deriving stock (Eq, Show, Ord, Generic)

data CaseAlternative ir = CaseAlternative
  { lhs :: Pattern
  , rhs :: ir
  }
  deriving stock (Eq, Show, Ord, Generic)

data Pattern
  = Constructor Name
  deriving stock (Eq, Show, Ord, Generic)

type RawCoreEff = Eff '[IOE]

runRawCore :: RawCoreEff a -> IO a
runRawCore action = do
  action
    & runEff

transformModule
  :: Syntax
  -- ^ Bit of syntax we're analysing
  -> RawCoreEff (Module RawCore)
transformModule (BorealNode "source" children) = do
  let (BorealNode "module_declaration" moduleDeclaration) = children Vector.! 0
  let topLevelDeclarations = children Vector.! 1
  let (BorealIdent moduleName) = moduleDeclaration Vector.! 1
  transformedTopLevelDeclarations <-
    case topLevelDeclarations of
      BorealNode "top_level_declarations" decls ->
        traverse transform decls
  pure $
    Module
      (Text.strip moduleName)
      transformedTopLevelDeclarations

transform :: Syntax -> Eff '[IOE] RawCore
transform (BorealNode "function_declaration" rest) = do
  let BorealIdent funName = rest Vector.! 0
  let (args :: Vector Name) =
        case rest Vector.! 1 of
          (BorealNode "arguments" argsVector) ->
            fmap (\(BorealIdent x) -> x) argsVector
          e -> error $ "Unmatched: " <> show e
  (body :: RawCore) <-
    case rest Vector.! 3 of
      (BorealNode "function_body" bodyNode) ->
        transformExpression (bodyNode Vector.! 0)
  pure $ Fun funName args body
transform (BorealNode "sumtype_declaration" rest) = do
  let BorealIdent typeName = rest Vector.! 0
  let BorealNode "constructors" constructors = rest Vector.! 1
  let constructorNames = fmap (\(BorealIdent x) -> x) constructors
  pure $ TypeDeclaration typeName constructorNames
transform (BorealNode "record_declaration" rest) = do
  let BorealIdent typeName = rest Vector.! 0
  let BorealNode "members" members' = rest Vector.! 1
  let members = fmap processMember $ Vector.filter (isNamedNode "record_member") members'
  pure $ RecordDeclaration typeName members
transform e = error $ "Unmatched: " <> show e

transformExpression :: Syntax -> RawCoreEff RawCore
transformExpression (BorealNode "simple_expression" body) =
  case body of
    [BorealAtom "(", expr, BorealAtom ")"] -> transformExpression expr
    _ -> transformExpression $ Vector.head body
transformExpression (BorealNode "let_binding" bindings) =
  transformLetBinding (bindings Vector.! 0)
transformExpression (BorealNode "case_expression" body) = do
  caseExpression <- transformExpression $ Vector.head body
  processedAlternatives <- traverse processAlternative (Vector.tail body)
  pure $ Case caseExpression processedAlternatives
transformExpression (BorealNode n args) = do
  arguments <- traverse transformExpression args
  pure $ Call n arguments
transformExpression (BorealAtom a) =
  case takeLiteralFromAtom a of
    (Just l) -> pure $ Literal l
    Nothing -> error $ "Not a literal from atom: " <> show a
transformExpression (BorealIdent x) = pure $ Var x
transformExpression e = error $ "Unmatched: " <> show e

transformLetBinding :: Syntax -> RawCoreEff RawCore
transformLetBinding (BorealNode bindingName children) = do
  let boundExpression =
        case children Vector.! 0 of
          BorealNode "bound_expression" boundExpressions -> boundExpressions Vector.! 0
  let body =
        case children Vector.! 1 of
          BorealNode "body" body' -> body' Vector.! 0

  transformedBoundExpression <- transformExpression boundExpression
  transformedBody <- transformExpression body
  pure $
    Let bindingName transformedBoundExpression transformedBody

takeLiteralFromAtom :: Name -> Maybe Int
takeLiteralFromAtom a =
  case Text.decimal a of
    Right (lit, _) -> Just lit
    Left _ -> Nothing

processAlternative :: Syntax -> RawCoreEff (CaseAlternative RawCore)
processAlternative (BorealNode "alternative" body) = do
  let BorealIdent cons = Vector.head body
  rhs <- transformExpression (Vector.last body)
  let lhs = Constructor cons
  pure $ CaseAlternative lhs rhs

processMember :: Syntax -> RecordMember
processMember (BorealNode "record_member" members) =
  let BorealIdent memberName = members Vector.! 0
      BorealIdent memberType = members Vector.! 2
   in RecordMember{memberName, memberType}
