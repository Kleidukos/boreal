#include "debug.h"
#include <stdio.h>

static int simpleInstruction(const char *name, int offset) {
  printf("%s\n", name);
  return offset + 1;
}

static int constantInstruction(const char *name, Chunk *chunkPtr, int offset) {
  uint8_t constant = chunkPtr->code[offset + 1];
  printf("%-16s %4d '", name, constant);
  printValue(chunkPtr->constants.values[constant]);
  printf("'\n");
  return offset + 2;
}

void disassembleChunk(Chunk *chunkPtr, const char *name) {
  printf("== %s ==\n", name);

  for (int offset = 0; offset < chunkPtr->count;) {
    offset = disassembleInstruction(chunkPtr, offset);
  }
}

int disassembleInstruction(Chunk *chunkPtr, int offset) {
  printf("%04d ", offset);
  if (offset > 0 && chunkPtr->lines[offset] == chunkPtr->lines[offset - 1]) {
    printf("   | ");
  } else {
    printf("%4d ", chunkPtr->lines[offset]);
  }
  uint8_t instruction = chunkPtr->code[offset];
  switch (instruction) {
  case OP_RETURN:
    return simpleInstruction("OP_RETURN", offset);
  case OP_CONSTANT:
    return constantInstruction("OP_CONSTANT", chunkPtr, offset);
  default:
    printf("Unknown opcode %d\n", instruction);
    return offset + 1;
  }
}
