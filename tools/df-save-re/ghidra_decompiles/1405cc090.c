// FUN_1405cc090 @ 1405cc090
// callees:
//   -> 140283d50 FUN_140283d50
//   -> 140dfb5b4 free


void FUN_1405cc090(longlong *param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (param_1[1] - *param_1 >> 3 != 0) {
    lVar2 = 0;
    do {
      _Memory = *(void **)(lVar2 + *param_1);
      if (_Memory != (void *)0x0) {
        FUN_140283d50(_Memory);
        free(_Memory);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(param_1[1] - *param_1 >> 3));
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = *param_1;
  return;
}

