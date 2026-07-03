// FUN_140a5f1a0 @ 140a5f1a0
// callees:
//   -> 140a5f260 FUN_140a5f260
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140a5f1a0(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  ulonglong uVar2;
  short sVar3;
  
  uVar2 = 0;
  sVar3 = 0;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 8) + uVar2 * 8);
      if (_Memory != (void *)0x0) {
        FUN_140a5f260(_Memory);
        free(_Memory);
      }
      sVar3 = sVar3 + 1;
      uVar2 = (ulonglong)sVar3;
    } while (uVar2 < (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x18) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

