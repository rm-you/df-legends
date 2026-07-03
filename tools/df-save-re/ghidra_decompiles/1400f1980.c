// FUN_1400f1980 @ 1400f1980
// callees:
//   -> 1400f1a20 FUN_1400f1a20
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1400f1980(longlong *param_1)

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
        FUN_1400f1a20(_Memory);
        free(_Memory);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[1] = *param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

