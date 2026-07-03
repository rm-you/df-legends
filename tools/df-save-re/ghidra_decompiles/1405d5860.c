// FUN_1405d5860 @ 1405d5860
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_1405d5860(longlong param_1)

{
  void *_Memory;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x1508);
  lVar4 = 0x70;
  do {
    puVar3[-0x2a0] = puVar3[-0x2a1];
    puVar3[-0x150] = puVar3[-0x151];
    *puVar3 = puVar3[-1];
    puVar3 = puVar3 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined8 *)(param_1 + 0x1f90) = *(undefined8 *)(param_1 + 0x1f88);
  *(undefined8 *)(param_1 + 0x1fa8) = *(undefined8 *)(param_1 + 0x1fa0);
  iVar2 = (int)(*(longlong *)(param_1 + 0x1fc0) - *(longlong *)(param_1 + 0x1fb8) >> 3) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      _Memory = *(void **)(*(longlong *)(param_1 + 0x1fb8) + lVar4 * 8);
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
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined8 *)(param_1 + 0x1fc0) = *(undefined8 *)(param_1 + 0x1fb8);
  return;
}

