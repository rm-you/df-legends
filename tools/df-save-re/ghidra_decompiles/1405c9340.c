// FUN_1405c9340 @ 1405c9340
// callees:
//   -> 1405c8f70 FUN_1405c8f70
//   -> 140dfb5b4 free


void FUN_1405c9340(longlong *param_1)

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
        FUN_1405c8f70(_Memory);
        free(_Memory);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  param_1[1] = *param_1;
  param_1[4] = param_1[3];
  return;
}

