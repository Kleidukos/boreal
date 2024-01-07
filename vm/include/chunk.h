#ifndef boreal_chunk_h
#define boreal_chunk_h

#include "common.h"
#include "value.h"

typedef enum { OP_RETURN, OP_CONSTANT } OpCode;

typedef struct {
  int count;
  int capacity;
  uint8_t *code;
  int *lines;
  ValueArray constants;
} Chunk;

void initChunk(Chunk *chunkPtr);

void freeChunk(Chunk *chunkPtr);

void writeChunk(Chunk *chunkPtr, uint8_t byte, int line);

int addConstant(Chunk *chunkPtr, Value value);

#endif
