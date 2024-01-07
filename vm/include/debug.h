#ifndef boreal_debug_h
#define boreal_debug_h

#include "chunk.h"
#include "value.h"

void disassembleChunk(Chunk *chunkPtr, const char *name);
int disassembleInstruction(Chunk *chunkPtr, int offset);

#endif
