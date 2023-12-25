-- | Functions to handle source retrieval
module Boreal.Frontend.Source where

import Data.Text (Text)
import Data.Word (Word32)
import Effectful.Reader.Static qualified as Reader
import TreeSitter.Node

import Boreal.Frontend.Types
import Data.ByteString qualified as BS
import Data.Text.Encoding qualified as Text

fetchSource :: Node -> BorealParser Text
fetchSource node = do
  let startByte = fromIntegral @Word32 @Int (nodeStartByte node)
  let endByte = fromIntegral @Word32 @Int node.nodeEndByte
  source <- Reader.ask
  pure $ Text.decodeUtf8 (BS.take (endByte - startByte) $ BS.drop startByte source)
