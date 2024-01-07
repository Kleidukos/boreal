#include <stdlib.h>

#include "chunk.h"
#include "memory.h"

void initChunk(Chunk *chunkPtr) {
  chunkPtr->count = 0;
  chunkPtr->capacity = 0;
  chunkPtr->code = 0;
  chunkPtr->lines = NULL;
  initValueArray(&chunkPtr->constants);
}

void freeChunk(Chunk *chunkPtr) {
  FREE_ARRAY(uint8_t, chunkPtr->code, chunkPtr->capacity);
  FREE_ARRAY(int, chunkPtr->lines, chunkPtr->capacity);
  freeValueArray(&chunkPtr->constants);
  initChunk(chunkPtr);
}

void writeChunk(Chunk *chunkPtr, uint8_t byte, int line) {
  if ((chunkPtr->capacity) < (chunkPtr->count + 1)) {
    int oldCapacity = chunkPtr->capacity;
    chunkPtr->capacity = GROW_CAPACITY(oldCapacity);
    chunkPtr->code =
        GROW_ARRAY(uint8_t, chunkPtr->code, oldCapacity, chunkPtr->capacity);
    chunkPtr->lines =
        GROW_ARRAY(int, chunkPtr->lines, oldCapacity, chunkPtr->capacity);
  }

  chunkPtr->code[chunkPtr->count] = byte;
  chunkPtr->lines[chunkPtr->count] = line;
  chunkPtr->count++;
}

int addConstant(Chunk *chunkPtr, Value value) {
  writeValueArray(&chunkPtr->constants, value);
  return chunkPtr->constants.count - 1;
}

void writeConstant(Chunk *chunkPtr, Value value, int line) {
  int constant = addConstant(chunkPtr, value);
  writeChunk(chunkPtr, OP_CONSTANT, line);
  writeChunk(chunkPtr, (uint8_t)constant, line);
}
