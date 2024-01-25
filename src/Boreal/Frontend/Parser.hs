module Boreal.Frontend.Parser where

import Control.Monad.Combinators
import Data.ByteString (StrictByteString)
import Data.ByteString qualified as BS
import Data.Maybe (fromJust)
import Data.Vector (Vector)
import Data.Vector qualified as Vector
import Data.Word
import Effectful
import Effectful.NonDet (NonDet, OnEmptyPolicy (..))
import Effectful.Reader.Static (Reader)
import Effectful.Reader.Static qualified as Reader
import Effectful.State.Static.Local (State)
import Effectful.State.Static.Local qualified as State
import Foreign (Ptr, nullPtr, peekElemOff)
import Foreign.C.ConstPtr
import Foreign.Marshal.Alloc
  ( malloc
  )
import Foreign.Marshal.Array (mallocArray)
import Foreign.Storable
  ( peek
  , poke
  )
import TreeSitter.Language (Language)
import TreeSitter.Node
import TreeSitter.Parser
import TreeSitter.Tree

import Boreal.Frontend.Source (fetchSource)
import Boreal.Frontend.Syntax (Syntax (..), isAtom)
import Boreal.Frontend.Types ()
import Data.Function ((&))
import qualified Effectful.NonDet as NonDet
import GHC.Exception (CallStack)

type ParserEff = Eff '[State Node, Reader StrictByteString, NonDet, IOE]

runParser :: StrictByteString -> Node -> ParserEff Syntax -> IO (Either CallStack Syntax)
runParser input node action =
  action
    & State.evalState node
    & Reader.runReader input
    & NonDet.runNonDet OnEmptyKeep
    & runEff

foreign import capi unsafe "parser.h tree_sitter_boreal"
  tree_sitter_boreal :: ConstPtr Language

parse :: StrictByteString -> IO (Either CallStack Syntax)
parse input = do
  BS.useAsCStringLen input $ \(str, len) -> do
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

    Node{nodeChildCount, nodeTSNode} <- liftIO $ peek n
    let childCount = fromIntegral nodeChildCount

    children <- liftIO $ mallocArray childCount
    topLevelNode <- liftIO $ peekElemOff children 0
    tsNode <- liftIO malloc
    liftIO $ poke tsNode nodeTSNode
    liftIO $ ts_node_copy_child_nodes tsNode children

    runParser input topLevelNode parseTreeSitterObject $ do
      node <- State.get @Node
      result <- Vector.forM (Vector.fromList [0 .. node.nodeChildCount - 1]) $ \index -> do
        childNode <- fromJust <$> getField index childrenPtr
        State.put childNode
        parseTreeSitterObject
      pure $ BorealNode "source" result

parseTreeSitterObject :: ParserEff Syntax
parseTreeSitterObject =
  do
    parseTerminal
    <|> parseExpressionNode

parseTerminal :: ParserEff Syntax
parseTerminal = do
  node <- State.get @Node
  if node.nodeChildCount == 0
    then do
      source <- fetchSource node
      if isAtom source
        then pure $ BorealAtom source
        else pure $ BorealIdent source
    else empty

parseExpressionNode :: ParserEff (Vector Syntax)
parseExpressionNode = do
  node <- State.get @Node
  let childCount = fromIntegral node.nodeChildCount
  if childCount == 1
    then Vector.head result
    else empty

getField
  :: Word32
  -> Ptr Node
  -> Eff es (Maybe Node)
getField childIndex parentNode
  | parentNode == nullPtr = do
      liftIO $ putStrLn "Unexpected null parent"
      pure Nothing
  | otherwise = do
      childNode <- liftIO $ peekElemOff parentNode (fromIntegral @Word32 @Int childIndex)
      pure $ Just childNode
