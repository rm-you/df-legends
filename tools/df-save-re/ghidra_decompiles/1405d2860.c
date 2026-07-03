// FUN_1405d2860 @ 1405d2860
// callees:
//   -> 1404bbf00 FUN_1404bbf00
//   -> 140dfb5b4 free


void FUN_1405d2860(longlong *param_1)

{
  longlong lVar1;
  void *_Memory;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  while (lVar2 >> 3 != 0) {
    _Memory = *(void **)(lVar1 + (longlong)((int)(lVar2 >> 3) + -1) * 8);
    if (_Memory != (void *)0x0) {
      FUN_1404bbf00(_Memory);
      free(_Memory);
    }
    lVar1 = *param_1;
    lVar2 = param_1[1] - lVar1;
  }
  return;
}

