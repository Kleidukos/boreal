#include <stdlib.h>

#include "chunk.h"
#include "memory.h"

void initChunk(Chunk* chunkPtr) {
  chunkPtr -> count = 0;
  chunkPtr -> capacity = 0;
  chunkPtr -> code = 0;
}

void writeChunk(Chunk *chunkPtr, uint8_t byte) {
  if ((chunkPtr -> capacity) < (chunkPtr -> count + 1)) {
    int oldCapacity = chunkPtr -> capacity;
    chunkPtr -> capacity = GROW_CAPACITY(oldCapacity);
    chunkPtr -> code = GROW_ARRAY(uint8_t, chunkPtr -> code,
      oldCapacity, chunkPtr -> capacity);
  }

  chunkPtr -> code[chunkPtr -> count] = byte;
  chunkPtr -> count++;
}
