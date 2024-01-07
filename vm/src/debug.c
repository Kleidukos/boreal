#include "debug.h"
#include <stdio.h>

void disassembleChunk(Chunk *chunkPtr, const char *name) {
  printf("== %s ==\n", name);

  for (int offset = 0; offset < chunkPtr->count;) {
    offset = disassembleInstruction(chunkPtr, offset);
  }
}

static int simpleInstruction(const char *name, int offset) {
  printf("%s\n", name);
  return offset + 1;
}

int disassembleInstruction(Chunk *chunkPtr, int offset) {
  printf("%04d ", offset);

  uint8_t instruction = chunkPtr->code[offset];
  switch (instruction) {
  case OP_RETURN:
    return simpleInstruction("OP_RETURN", offset);
  default:
    printf("Unknown opcode %d\n", instruction);
    return offset + 1;
  }
}
