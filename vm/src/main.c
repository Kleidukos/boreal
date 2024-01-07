#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, const char *argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 123);
  writeChunk(&chunk, (uint8_t)constant, 123);
  writeChunk(&chunk, OP_RETURN, 123);
  disassembleChunk(&chunk, "test chunk");
  freeChunk(&chunk);
  return 0;
}
