{-# LANGUAGE OverloadedRecordDot #-}

module Boreal.Frontend.TreeSitter where

import Control.Monad.IO.Class
import Data.ByteString (StrictByteString)
import Data.ByteString qualified as BS
import Data.Maybe (fromJust)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Text.IO qualified as Text
import Data.Vector qualified as Vector
import Data.Word (Word32)

-- import Debug.Trace
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

import Boreal.Frontend.Source
import Boreal.Frontend.Syntax
import Boreal.Frontend.Types
import Boreal.SourceInfo qualified as SourceInfo

foreign import ccall unsafe "tree_sitter_boreal"
  tree_sitter_boreal :: ConstPtr Language

parse :: StrictByteString -> IO Syntax
parse input = do
  BS.useAsCStringLen input $ \(str, len) ->
    runParser input $ do
      parser <- liftIO ts_parser_new
      liftIO $ ts_parser_set_language parser (unConstPtr tree_sitter_boreal)
      tree <-
        liftIO $
          ts_parser_parse_string
            parser
            nullPtr
            str
            len

      n <- liftIO malloc
      liftIO $ ts_tree_root_node_p tree n

      n@Node{nodeChildCount, nodeTSNode} <- liftIO $ peek n
      let childCount = fromIntegral nodeChildCount

      children <- liftIO $ mallocArray childCount
      tsNode <- liftIO malloc
      liftIO $ poke tsNode nodeTSNode
      liftIO $ ts_node_copy_child_nodes tsNode children

      result <-
        Vector.forM
          (Vector.fromList [0 .. childCount - 1])
          ( \index -> do
              child <- liftIO $ peekElemOff children index
              getChildren child
          )
      let sourceInfo = SourceInfo.fromNode n
      pure $ BorealNode sourceInfo "source" result

getChildren :: Node -> BorealParser Syntax
getChildren node
  | node.nodeChildCount == 0 = do
      let sourceInfo = SourceInfo.fromNode node
      source <- fetchSource node
      if isTextAtom source
        then pure $ BorealAtom sourceInfo source
        else pure $ BorealIdent sourceInfo source
  | otherwise = do
      let sourceInfo = SourceInfo.fromNode node
      -- Type of the node, as given in the grammar.js file
      theType <- liftIO $ peekCString node.nodeType
      let childCount = fromIntegral node.nodeChildCount
      childrenPtr <- liftIO $ mallocArray childCount
      tsNode <- liftIO malloc
      liftIO $ poke tsNode node.nodeTSNode
      liftIO $ ts_node_copy_child_nodes tsNode childrenPtr
      result <- Vector.forM (Vector.fromList [0 .. node.nodeChildCount - 1]) $ \index -> do
        childNode <- fromJust <$> getField index childrenPtr
        getChildren childNode
      pure $ BorealNode sourceInfo (Text.pack theType) result

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
