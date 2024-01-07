#include <stdio.h>

#include "common.h"
#include "debug.h"
#include "vm.h"

VM vm;

static InterpretResult run(void) {
#define READ_BYTE() (*vm.ip++)
#define READ_CONSTANT() (vm.chunk->constants.values[READ_BYTE()])

  for (;;) {
#ifdef DEBUG_TRACE_EXECUTION
    disassembleInstruction(vm.chunk, (int)(vm.ip - vm.chunk->code));
#endif
    uint8_t instruction;
    switch (instruction = READ_BYTE()) {
    case OP_CONSTANT: {
      Value constant = READ_CONSTANT();
      printValue(constant);
      printf("\n");
      break;
    }
    case OP_RETURN: {
      return INTERPRET_OK;
    }
    }
  }

#undef READ_BYTE
#undef READ_CONSTANT
}

void initVM() {}

void freeVM() {}


InterpretResult interpret(Chunk *chunkPtr) {
  vm.chunk = chunkPtr;
  vm.ip = vm.chunk->code;
  return run();
}
