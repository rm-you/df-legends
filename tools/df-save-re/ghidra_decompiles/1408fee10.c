// FUN_1408fee10 @ 1408fee10
// callees:
//   -> 1408feb70 FUN_1408feb70
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1408fee10(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 200) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 200) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_1408feb70(_Memory);
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xc0);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xd0) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xa0) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x88) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x70) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x58) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x40) - lVar1 >> 2,4);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

