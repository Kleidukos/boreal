#ifndef boreal_chunk_h
#define boreal_chunk_h

#include "common.h"

typedef enum
{
  OP_RETURN,
} OpCode;

typedef struct
{
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

void
initChunk(Chunk* chunkPtr);

void
freeChunk(Chunk* chunkPtr);

void
writeChunk(Chunk* chunkPtr, uint8_t byte);

#endif
