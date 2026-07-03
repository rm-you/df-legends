// FUN_1408bb990 @ 1408bb990
// callees:
//   -> 140281bb0 FUN_140281bb0
//   -> 140dfb5b4 free


void FUN_1408bb990(longlong param_1)

{
  void *_Memory;
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0xaf8);
  lVar2 = 0x293;
  do {
    _Memory = (void *)*puVar1;
    if (_Memory != (void *)0x0) {
      FUN_140281bb0(_Memory);
      free(_Memory);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

