{-# LANGUAGE OverloadedRecordDot #-}

module Boreal.Frontend.TreeSitter where

import Boreal.Frontend.Source
import Boreal.Frontend.Syntax
import Boreal.Frontend.Types
import Control.Monad.IO.Class
import Data.Foldable (fold)
import Data.Maybe (fromJust)
import Data.Text.Display
import Data.Text.IO qualified as Text
import Data.Vector qualified as Vector
import Data.Word (Word32)
import Foreign.C.ConstPtr
import Foreign.C.String
import Foreign.Marshal.Alloc
  ( malloc
  )
import Foreign.Marshal.Array (mallocArray, peekArray)
import Foreign.Ptr (Ptr, nullPtr)
import Foreign.Storable
  ( peek
  , peekElemOff
  , poke
  )
import TreeSitter.Language
import TreeSitter.Node
import TreeSitter.Parser
import TreeSitter.Tree

foreign import capi unsafe "parser.h tree_sitter_boreal"
  tree_sitter_boreal :: ConstPtr Language

parse :: CString -> Int -> BorealParser Syntax
parse input inputLength = do
  parser <- liftIO ts_parser_new
  liftIO $ ts_parser_set_language parser (unConstPtr tree_sitter_boreal)
  tree <-
    liftIO $
      ts_parser_parse_string
        parser
        nullPtr
        input
        inputLength

  n <- liftIO malloc
  liftIO $ ts_tree_root_node_p tree n

  liftIO $ putStrLn "module (root) ------------"
  Node{nodeChildCount, nodeTSNode} <- liftIO $ peek n
  let childCount = fromIntegral nodeChildCount

  children <- liftIO $ mallocArray childCount
  tsNode <- liftIO malloc
  liftIO $ poke tsNode nodeTSNode
  liftIO $ ts_node_copy_child_nodes tsNode children

  result <-
    Vector.forM
      (Vector.fromList [0 .. childCount - 1])
      ( \childNode -> do
          child <- liftIO @BorealParser $ peekElemOff children childNode
          nodeToSyntax child
      )
  pure $ BorealNode "module" result

nodeToSyntax :: Node -> BorealParser Syntax
nodeToSyntax node@Node{nodeType} = do
  theType <- liftIO $ peekCString nodeType
  case theType of
    "module_declaration" -> do
      mChildren <- getChildren node
      case mChildren of
        Nothing -> error "No module declared"
        Just childrenPtr -> do
          moduleNameNode <- liftIO $ peekElemOff childrenPtr 1
          moduleName <- fetchSource moduleNameNode
          liftIO $ Text.putStrLn moduleName
          pure $ BorealNode "module-name" (Vector.fromList [BorealIdent moduleName])
    "top_level_declarations" -> do
      mChildren <- getChildren node
      case mChildren of
        Nothing -> error "No top-level declarations"
        Just childrenPtr -> do
          children <- liftIO $ peekArray (fromIntegral node.nodeChildCount) childrenPtr
          result <- traverse processTopLevelDeclaration children
          pure $ BorealNode "top-level-declarations" (Vector.fromList result)
    e -> error $ "Unsupported kind: " <> e

processTopLevelDeclaration :: Node -> BorealParser Syntax
processTopLevelDeclaration node = do
  theType <- liftIO $ peekCString node.nodeType
  case theType of
    "function_declaration" ->
      processFunctionDeclaration node
    e -> error $ "Unsupported kind: " <> e

processFunctionDeclaration :: Node -> BorealParser Syntax
processFunctionDeclaration node = do
  liftIO $ Text.putStrLn "Entering function declaration"
  mChildren <- getChildren node
  case mChildren of
    Nothing -> error "no child in function declaration"
    Just childrenPtr -> do
      headField <- fromJust <$> getNamedField "head" 0 childrenPtr
      headFieldSource <- fetchSource headField
      liftIO $ Text.putStrLn $ "headFieldSource: " <> headFieldSource
      parametersFieldSources <- Vector.forM (Vector.fromList [1 .. (node.nodeChildCount - 3)]) $ \index -> do
        parameterNode <- fromJust <$> getField index childrenPtr
        fetchSource parameterNode
      liftIO $ Text.putStrLn $ "parametersFieldSource: " <> fold parametersFieldSources
      bodyField <- fromJust <$> getNamedField "body" 3 childrenPtr
      bodySource <- processFunctionBody bodyField
      let params = fmap BorealIdent parametersFieldSources
      pure $
        BorealNode
          headFieldSource
          (Vector.fromList [BorealNode "arguments" params, bodySource])

processFunctionBody :: Node -> BorealParser Syntax
processFunctionBody node = do
  liftIO $ Text.putStrLn "Entering function body"
  printNode node
  mChildren <- getChildren node
  case mChildren of
    Nothing -> error "no child in function body"
    Just childrenPtr -> do
      result <- Vector.forM (Vector.fromList [0 .. node.nodeChildCount - 1]) $ \index -> do
        parameterNode <- fromJust <$> getField index childrenPtr
        fetchSource parameterNode
      pure $ BorealNode "body" (fmap BorealIdent result)

getChildren :: Node -> BorealParser (Maybe (Ptr Node))
getChildren node
  | node.nodeChildCount <= 0 = do
      liftIO $ putStrLn $ "Unexpected " <> show node.nodeChildCount <> " children."
      pure Nothing
  | otherwise = do
      let childCount = fromIntegral node.nodeChildCount
      children <- liftIO $ mallocArray childCount
      tsNode <- liftIO malloc
      liftIO $ poke tsNode node.nodeTSNode
      liftIO $ ts_node_copy_child_nodes tsNode children
      pure $ Just children

-------

getNamedField
  :: String
  -> Word32
  -> Ptr Node
  -> BorealParser (Maybe Node)
getNamedField expectedName childIndex parentNode
  | parentNode == nullPtr = do
      liftIO $ putStrLn $ "Unexpected null parent for named field: " <> expectedName
      pure Nothing
  | otherwise = do
      childNode <- liftIO $ peekElemOff parentNode (fromIntegral @Word32 @Int childIndex)
      fieldName <- liftIO $ peekCString childNode.nodeFieldName
      if fieldName == expectedName
        then pure $ Just childNode
        else do
          liftIO $ putStrLn $ "Unexpected name " <> fieldName <> " (expected name: " <> expectedName <> ")"
          pure Nothing

getField
  :: Word32
  -> Ptr Node
  -> BorealParser (Maybe Node)
getField childIndex parentNode
  | parentNode == nullPtr = do
      liftIO $ putStrLn "Unexpected null parent"
      pure Nothing
  | otherwise = do
      childNode <- liftIO $ peekElemOff parentNode (fromIntegral @Word32 @Int childIndex)
      pure $ Just childNode

printNode :: Node -> BorealParser ()
printNode n@(Node{nodeType, nodeEndPoint, nodeChildCount}) = do
  theType <- liftIO $ peekCString nodeType
  let startPoint = nodeStartPoint n
      start = "(" <> show startPoint.pointRow <> "," <> show startPoint.pointColumn <> ")"
  let endPoint = nodeEndPoint
      end = "(" <> show endPoint.pointRow <> "," <> show endPoint.pointColumn <> ")"
  liftIO $ putStrLn $ theType <> start <> "-" <> end <> " (" <> show nodeChildCount <> " children" <> ")"
  source <- fetchSource n
  liftIO $ Text.putStrLn $ "source of " <> display theType <> ": " <> source
