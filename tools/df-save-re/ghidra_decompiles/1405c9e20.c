// FUN_1405c9e20 @ 1405c9e20
// callees:
//   -> 1405c96f0 FUN_1405c96f0
//   -> 140dfb5b4 free


void FUN_1405c9e20(longlong *param_1)

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
        FUN_1405c96f0(_Memory);
        free(_Memory);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  param_1[7] = param_1[6];
  param_1[0x10] = param_1[0xf];
  param_1[0x13] = param_1[0x12];
  param_1[10] = param_1[9];
  param_1[0xd] = param_1[0xc];
  return;
}

