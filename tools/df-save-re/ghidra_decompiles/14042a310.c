// FUN_14042a310 @ 14042a310
// callees:
//   -> 14042a4a0 FUN_14042a4a0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_14042a310(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  uVar3 = 0;
  uVar4 = (*(longlong *)(param_1 + 0x30) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x30) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_14042a4a0(_Memory);
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x68) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x50) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x38) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    FUN_140002020(*(undefined8 *)(param_1 + 8),*(ulonglong *)(param_1 + 0x20) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}

