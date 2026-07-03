// FUN_140496ea0 @ 140496ea0
// callees:
//   -> 140491db0 FUN_140491db0
//   -> 140dfb5b4 free


void FUN_140496ea0(longlong param_1)

{
  void *_Memory;
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xf88) - *(longlong *)(param_1 + 0xf80) >> 3 != 0) {
    lVar2 = 0;
    do {
      _Memory = *(void **)(lVar2 + *(longlong *)(param_1 + 0xf80));
      if (_Memory != (void *)0x0) {
        FUN_140491db0(_Memory);
        free(_Memory);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while ((ulonglong)(longlong)iVar1 <
             (ulonglong)(*(longlong *)(param_1 + 0xf88) - *(longlong *)(param_1 + 0xf80) >> 3));
  }
  *(undefined8 *)(param_1 + 0xf88) = *(undefined8 *)(param_1 + 0xf80);
  return;
}

