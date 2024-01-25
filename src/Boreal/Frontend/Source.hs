-- | Functions to handle source retrieval
module Boreal.Frontend.Source where

import Data.Text (Text)
import Data.Word (Word32)
import Effectful.Reader.Static qualified as Reader
import TreeSitter.Node

import Data.ByteString (StrictByteString)
import Data.ByteString qualified as BS
import Data.Text.Encoding qualified as Text
import Effectful
import Effectful.Reader.Static (Reader)

fetchSource :: (Reader StrictByteString :> es) => Node -> Eff es Text
fetchSource node = do
  let startByte = fromIntegral @Word32 @Int (nodeStartByte node)
  let endByte = fromIntegral @Word32 @Int node.nodeEndByte
  source <- Reader.ask
  pure $ Text.decodeUtf8 (BS.take (endByte - startByte) $ BS.drop startByte source)
