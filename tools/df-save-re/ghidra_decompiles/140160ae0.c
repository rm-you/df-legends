// FUN_140160ae0 @ 140160ae0
// callees:
//   -> 14015e1e0 FUN_14015e1e0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140160ae0(longlong param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x1830) - *(longlong *)(param_1 + 0x1828) >> 3) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1828) + lVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_14015e1e0(pvVar1);
        free(pvVar1);
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(param_1 + 0x1830) = *(undefined8 *)(param_1 + 0x1828);
  puVar4 = (undefined8 *)(param_1 + 0x38);
  lVar5 = 0x10;
  do {
    lVar6 = 0x10;
    do {
      puVar2 = (undefined8 *)*puVar4;
      while (puVar2 != (undefined8 *)0x0) {
        free((void *)*puVar2);
        pvVar1 = (void *)*puVar4;
        if (pvVar1 != (void *)0x0) {
          if (*(longlong *)((longlong)pvVar1 + 8) != 0) {
            *(undefined8 *)(*(longlong *)((longlong)pvVar1 + 8) + 0x10) =
                 *(undefined8 *)((longlong)pvVar1 + 0x10);
          }
          if (*(longlong *)((longlong)pvVar1 + 0x10) != 0) {
            *(undefined8 *)(*(longlong *)((longlong)pvVar1 + 0x10) + 8) =
                 *(undefined8 *)((longlong)pvVar1 + 8);
          }
          free(pvVar1);
        }
        puVar2 = (undefined8 *)*puVar4;
      }
      puVar4 = puVar4 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar3 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 8) + lVar5 * 8));
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x1a68);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x1a78) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0x1a68) = 0;
    *(undefined8 *)(param_1 + 0x1a70) = 0;
    *(undefined8 *)(param_1 + 0x1a78) = 0;
  }
  if (*(void **)(param_1 + 0x1848) != (void *)0x0) {
    free(*(void **)(param_1 + 0x1848));
  }
  *(undefined8 *)(param_1 + 0x1848) = 0;
  *(undefined4 *)(param_1 + 0x1850) = 0;
  lVar5 = *(longlong *)(param_1 + 0x1828);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x1838) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 0x1828) = 0;
    *(undefined8 *)(param_1 + 0x1830) = 0;
    *(undefined8 *)(param_1 + 0x1838) = 0;
  }
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x28),0x18,0x100,FUN_140160f80);
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    FUN_140002020(lVar5,*(longlong *)(param_1 + 0x18) - lVar5 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

