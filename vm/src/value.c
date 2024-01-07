#include <stdio.h>

#include "memory.h"
#include "value.h"

void initValueArray(ValueArray *arrayPtr) {
  arrayPtr->values = NULL;
  arrayPtr->capacity = 0;
  arrayPtr->count = 0;
}

void writeValueArray(ValueArray *arrayPtr, Value value) {
  if (arrayPtr->capacity < arrayPtr->count) {
    int oldCapacity = arrayPtr->capacity;
    arrayPtr->capacity = GROW_CAPACITY(oldCapacity);
    arrayPtr->values =
        GROW_ARRAY(Value, arrayPtr->values, oldCapacity, arrayPtr->capacity);
  }

  arrayPtr->values[arrayPtr->count] = value;
  arrayPtr->count++;
}

void freeValueArray(ValueArray *arrayPtr) {
  FREE_ARRAY(Value, arrayPtr->values, arrayPtr->capacity);
  initValueArray(arrayPtr);
}
