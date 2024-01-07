#ifndef boreal_vm_h
#define boreal_vm_h

#include "chunk.h"

typedef struct {
  Chunk *chunk;
  uint8_t *ip;
} VM;

typedef enum {
  INTERPRET_OK,
  INTERPRET_COMPILE_ERROR,
  INTERPRET_RUNTIME_ERROR,
} InterpretResult;

void initVM();

void freeVM();

InterpretResult interpret(Chunk *chunkPtr);

InterpretResult run(void);

#endif
