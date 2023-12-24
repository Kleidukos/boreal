{-# LANGUAGE OverloadedRecordDot #-}

module Boreal.Frontend.TreeSitter where

import Control.Monad
import Foreign.C.ConstPtr
import Foreign.C.String
import Foreign.Marshal.Alloc
  ( malloc
  )
import Foreign.Marshal.Array (mallocArray)
import Foreign.Ptr
  ( Ptr
  , nullPtr
  )
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

main :: IO ()
main = do
  parser <- ts_parser_new
  ts_parser_set_language parser (unConstPtr tree_sitter_boreal)

  let source = "module Test where\nx = 3"

  (str, len) <- newCStringLen source
  tree <-
    ts_parser_parse_string
      parser
      nullPtr
      str
      len

  n <- malloc
  ts_tree_root_node_p tree n

  print "module (root) ------------"
  Node{nodeChildCount, nodeTSNode} <- peek n
  let childCount = fromIntegral nodeChildCount

  children <- mallocArray childCount
  tsNode <- malloc
  poke tsNode nodeTSNode

  ts_node_copy_child_nodes tsNode children
  printChildren children childCount

printChildren :: Ptr Node -> Int -> IO ()
printChildren children count =
  forM_
    [0 .. count - 1]
    ( \n -> do
        child <- peekElemOff children n
        printNode child
    )

printNode :: Node -> IO ()
printNode n@(Node{nodeType, nodeEndPoint}) = do
  theType <- peekCString nodeType
  let startPoint = nodeStartPoint n
      start = "(" <> show startPoint.pointRow <> "," <> show startPoint.pointColumn <> ")"
  let endPoint = nodeEndPoint
      end = "(" <> show endPoint.pointRow <> "," <> show endPoint.pointColumn <> ")"
  print $ theType <> start <> "-" <> end
