{-# LANGUAGE OverloadedRecordDot #-}

module Boreal.Frontend.TreeSitter where

import Control.Monad.IO.Class
import Data.Function ((&))
import Data.Maybe (fromJust)
import Data.Text qualified as Text
import Data.Text.Display
import Data.Text.IO qualified as Text
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word (Word32)

-- import Debug.Trace

import Data.ByteString (StrictByteString)
import Data.ByteString qualified as BS
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

foreign import capi unsafe "parser.h tree_sitter_boreal"
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
      case theType of
        "module_declaration"
          | childCount == 3 -> do
              let moduleKeyword = result Vector.! 0
              let BorealIdent moduleNameSourceInfo moduleName' = result Vector.! 1
              let whereKeyword = result Vector.! 2
              pure $
                BorealNode
                  sourceInfo
                  "module_declaration"
                  ( Vector.fromList
                      [ moduleKeyword
                      , BorealIdent moduleNameSourceInfo (Text.strip moduleName')
                      , whereKeyword
                      ]
                  )
        "binary_operation"
          | childCount == 3 -> do
              let syntax = result Vector.! 1
              case syntax of
                BorealIdent sourceInfo op ->
                  pure $ BorealNode sourceInfo op (Vector.fromList [Vector.head result, Vector.last result])
                _ -> pure Missing
          | otherwise -> pure Missing
        "expression"
          | childCount == 1 -> do
              pure $ Vector.head result
        "function_declaration"
          | childCount >= 3 -> do
              let (fnHead, functionBody) = Vector.break (isNamedAtom "=") result
              let BorealNode _ "function_head" functionHead = Vector.head fnHead
              let functionName = Vector.head functionHead
              let functionArguments = Vector.tail functionHead
              let argumentsPos = undefined
              pure $
                BorealNode
                  sourceInfo
                  (Text.pack theType)
                  ( Vector.fromList
                      [ functionName
                      , BorealNode
                          argumentsPos
                          "arguments"
                          functionArguments
                      , functionBody Vector.! 0
                      , functionBody Vector.! 1
                      ]
                  )
        "let_binding"
          | childCount >= 6 -> do
              let (bindingName, bindingPos) = case result Vector.! 0 of
                    BorealAtom letPos "let" ->
                      case result Vector.! 1 of
                        BorealIdent bindingPos binding' -> (binding', bindingPos)
                        e -> error $ "Unmatched " <> show e
                    e -> error $ "Unmatched " <> show e
              let boundExpression = Vector.takeWhile (not . isNamedAtom "in") (Vector.drop 3 result)
              let boundExpressionPos = undefined -- concat the beginning and end positions
              let body = Vector.drop (4 + Vector.length boundExpression) result
              pure $
                BorealNode sourceInfo "let_binding" $
                  Vector.fromList
                    [ BorealNode bindingPos bindingName $
                        Vector.fromList
                          [ BorealNode "bound_expression" boundExpression
                          , BorealNode "body" body
                          ]
                    ]
        "case_expression"
          | childCount >= 3 -> do
              let BorealNode "simple_expression" caseHead = result Vector.! 1
              let caseExpression = Vector.head caseHead
              let BorealNode "alternatives" alternatives = result Vector.! 3
              let alternativeVector =
                    alternatives
                      & Vector.filter (\syntax -> isNamedNode "alternative" syntax)
                      & Vector.map
                        ( \(BorealNode _ content) ->
                            let BorealNode "pattern" pat = content Vector.! 0
                                BorealNode "simple_expression" rhs = content Vector.! 2
                             in BorealNode "alternative" (Vector.concat [pat, rhs])
                        )
              pure $ BorealNode "case_expression" (Vector.cons caseExpression alternativeVector)
        "datatype_declaration"
          | childCount == 3 -> do
              let BorealNode "datatype_head" datatypeHead = result Vector.! 0
              let BorealAtom "type" = datatypeHead Vector.! 0
              let BorealIdent typeName = datatypeHead Vector.! 1
              let BorealNode bodyType constructorsWithDelimiters = result Vector.! 2
              case bodyType of
                "sumtype_body" ->
                  sumtypeParser constructorsWithDelimiters typeName
          | otherwise -> do
              -- We are in the record case
              let BorealNode "datatype_head" datatypeHead = result Vector.! 0
              let BorealAtom "type" = datatypeHead Vector.! 0
              let BorealIdent typeName = datatypeHead Vector.! 1
              let BorealNode "record_body" recordBody = result Vector.! 3
              recordParser recordBody typeName
        _ -> pure $ BorealNode (Text.pack theType) result

sumtypeParser
  :: Vector Syntax
  -> Name
  -> BorealParser Syntax
sumtypeParser constructorsWithDelimiters typeName = do
  let constructors = Vector.filter (\e -> isIdent e) constructorsWithDelimiters
  pure $
    BorealNode
      "sumtype_declaration"
      ( Vector.fromList
          [ BorealIdent typeName
          , BorealNode "constructors" constructors
          ]
      )

recordParser
  :: Vector Syntax
  -> Name
  -> BorealParser Syntax
recordParser c typeName =
  pure $
    BorealNode
      "record_declaration"
      ( Vector.fromList
          [ BorealIdent typeName
          , BorealNode "members" c
          ]
      )

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
