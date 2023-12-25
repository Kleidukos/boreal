{-# LANGUAGE OverloadedRecordDot #-}

module Boreal.Frontend.TreeSitter where

import Boreal.Frontend.Source
import Boreal.Frontend.Syntax
import Boreal.Frontend.Types
import Control.Monad.IO.Class
import Data.Maybe (fromJust)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Text.IO qualified as Text
import Data.Vector qualified as Vector
import Data.Word (Word32)
import Foreign.C.ConstPtr
import Foreign.C.String
import Foreign.Marshal.Alloc
  ( malloc
  )
import Foreign.Marshal.Array (mallocArray)
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
      ( \index -> do
          child <- liftIO @BorealParser $ peekElemOff children index
          getChildren child
      )
  pure $ BorealNode "source" result

getChildren :: Node -> BorealParser Syntax
getChildren node
  | node.nodeChildCount == 0 = do
      source <- fetchSource node
      printNode node
      if isAtom source
        then pure $ BorealAtom source
        else pure $ BorealIdent source
  | otherwise = do
      theType <- liftIO $ peekCString node.nodeType
      let childCount = fromIntegral node.nodeChildCount
      childrenPtr <- liftIO $ mallocArray childCount
      tsNode <- liftIO malloc
      liftIO $ poke tsNode node.nodeTSNode
      liftIO $ ts_node_copy_child_nodes tsNode childrenPtr
      result <- Vector.forM (Vector.fromList [0 .. node.nodeChildCount - 1]) $ \index -> do
        childNode <- fromJust <$> getField index childrenPtr
        getChildren childNode
      case theType of
        "binary_operation"
          | childCount == 3 -> do
              let syntax = result Vector.! 1
              case syntax of
                BorealIdent op ->
                  pure $ BorealNode op (Vector.fromList [Vector.head result, Vector.last result])
                _ -> pure Missing
          | otherwise -> pure Missing
        "expression"
          | childCount == 1 -> do
              pure $ Vector.head result
        "function_declaration"
          | childCount >= 3 -> do
              let (functionHead, functionBody) = Vector.break (== BorealAtom "=") result
              liftIO $ print result
              pure $
                BorealNode
                  (Text.pack theType)
                  ( Vector.fromList
                      [ Vector.head functionHead
                      , BorealNode
                          "arguments"
                          (Vector.tail functionHead)
                      , functionBody Vector.! 0
                      , functionBody Vector.! 1
                      ]
                  )
        _ -> pure $ BorealNode (Text.pack theType) result

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
