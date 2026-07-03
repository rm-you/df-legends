// FUN_1404928a0 @ 1404928a0
// callees:
//   -> 140492500 FUN_140492500
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_1404928a0(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xa0);
  uVar4 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xa8) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0xa8) < puVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        FUN_140492500(_Memory);
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0xb0) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN_140002740(param_1 + 0x10);
  return;
}

