// FUN_140160d10 @ 140160d10
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140160d10(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *_Memory;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar5 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  while (puVar2 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar2;
    if (pvVar3 != (void *)0x0) {
      _Memory = *(void **)((longlong)pvVar3 + 0x28);
      if (_Memory != (void *)0x0) {
        if (*(longlong *)((longlong)_Memory + 8) != 0) {
          *(undefined8 *)(*(longlong *)((longlong)_Memory + 8) + 0x10) =
               *(undefined8 *)((longlong)_Memory + 0x10);
        }
        if (*(longlong *)((longlong)_Memory + 0x10) != 0) {
          *(undefined8 *)(*(longlong *)((longlong)_Memory + 0x10) + 8) =
               *(undefined8 *)((longlong)_Memory + 8);
        }
        free(_Memory);
      }
      free(pvVar3);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x30);
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x78) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x50);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x60) - lVar5 >> 2,4);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x30);
  while (pvVar3 != (void *)0x0) {
    if (*(longlong *)((longlong)pvVar3 + 8) != 0) {
      *(undefined8 *)(*(longlong *)((longlong)pvVar3 + 8) + 0x10) =
           *(undefined8 *)((longlong)pvVar3 + 0x10);
    }
    if (*(longlong *)((longlong)pvVar3 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)((longlong)pvVar3 + 0x10) + 8) =
           *(undefined8 *)((longlong)pvVar3 + 8);
    }
    free(pvVar3);
    pvVar3 = *(void **)(param_1 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(undefined8 *)(param_1 + 0x30);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = *(undefined8 *)(param_1 + 0x28);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x18) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

