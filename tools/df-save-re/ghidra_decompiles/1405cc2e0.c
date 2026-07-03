// FUN_1405cc2e0 @ 1405cc2e0
// callees:
//   -> 140a38570 FUN_140a38570
//   -> 140dfb5b4 free


void FUN_1405cc2e0(longlong *param_1)

{
  longlong lVar1;
  void *_Memory;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  while (lVar2 >> 3 != 0) {
    _Memory = *(void **)(lVar1 + -8 + (lVar2 >> 3) * 8);
    if (_Memory != (void *)0x0) {
      FUN_140a38570(_Memory);
      free(_Memory);
    }
    lVar1 = *param_1;
    lVar2 = param_1[1] - lVar1;
  }
  return;
}

