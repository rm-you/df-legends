// FUN_1405d5390 @ 1405d5390
// callees:
//   -> 14042a160 FUN_14042a160
//   -> 140dfb5b4 free


void FUN_1405d5390(longlong *param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      _Memory = *(void **)(*param_1 + lVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_14042a160(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[1] = *param_1;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

