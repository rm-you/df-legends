// FUN_140a5dd60 @ 140a5dd60
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140a5dd60(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar4 = (*(longlong *)(param_1 + 0x10) - (longlong)puVar2) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x10) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        lVar1 = *(longlong *)((longlong)_Memory + 0x10);
        if (lVar1 != 0) {
          FUN_140002020(lVar1,*(longlong *)((longlong)_Memory + 0x20) - lVar1 >> 2,4);
          *(undefined8 *)((longlong)_Memory + 0x10) = 0;
          *(undefined8 *)((longlong)_Memory + 0x18) = 0;
          *(undefined8 *)((longlong)_Memory + 0x20) = 0;
        }
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x60) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x48) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x30) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x18) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

