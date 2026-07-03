// FUN_140b0d980 @ 140b0d980
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140b0d980(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x1265f8);
  uVar3 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x126600) + (7 - (longlong)puVar2)) >> 3;
  if (*(undefined8 **)(param_1 + 0x126600) < puVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      _Memory = (void *)*puVar2;
      if (_Memory != (void *)0x0) {
        lVar1 = *(longlong *)((longlong)_Memory + 0x18);
        if (lVar1 != 0) {
          FUN_140002020(lVar1,*(longlong *)((longlong)_Memory + 0x28) - lVar1 >> 2,4);
          *(undefined8 *)((longlong)_Memory + 0x18) = 0;
          *(undefined8 *)((longlong)_Memory + 0x20) = 0;
          *(undefined8 *)((longlong)_Memory + 0x28) = 0;
        }
        free(_Memory);
      }
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  *(undefined8 *)(param_1 + 0x126600) = *(undefined8 *)(param_1 + 0x1265f8);
  return;
}

