// FUN_14048e430 @ 14048e430
// callees:
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb5b4 free


void FUN_14048e430(undefined8 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    _eh_vector_destructor_iterator_(_Memory,0x18,0x6b,FUN_14007c030);
    free(_Memory);
  }
  *param_1 = 0;
  _eh_vector_destructor_iterator_(param_1 + 1,0x18,0x6b,FUN_1400025c0);
  return;
}

