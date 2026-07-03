// FUN_140281510 @ 140281510
// callees:
//   -> 1402811d0 FUN_1402811d0
//   -> 140dfb5b4 free


void FUN_140281510(longlong *param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (iVar1 < 0) {
    param_1[1] = *param_1;
    return;
  }
  do {
    _Memory = *(void **)(*param_1 + lVar2 * 8);
    if (_Memory != (void *)0x0) {
      FUN_1402811d0(_Memory);
      free(_Memory);
    }
    lVar2 = lVar2 + -1;
  } while (-1 < lVar2);
  param_1[1] = *param_1;
  return;
}

