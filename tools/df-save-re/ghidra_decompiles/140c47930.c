// FUN_140c47930 @ 140c47930
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 14095fb00 FUN_14095fb00


void FUN_140c47930(longlong param_1)

{
  void *pvVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar8 = (int)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3) + -1;
  if (iVar8 < 0) {
    return;
  }
  lVar10 = (longlong)iVar8 * 8;
  lVar11 = lVar10;
LAB_140c47980:
  if (**(int **)(*(longlong *)(param_1 + 0x1a8) + lVar11) == 4) {
    iVar4 = (int)(DAT_141c36a08 - DAT_141c36a00 >> 3) + -1;
    if (-1 < iVar4) {
      lVar5 = (longlong)iVar4;
      do {
        if (*(longlong *)(DAT_141c36a00 + lVar5 * 8) ==
            *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1a8) + lVar11) + 8)) {
          lVar5 = (longlong)iVar4 * 8;
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + DAT_141c36a00) + 0x10);
          if (lVar7 == param_1) {
            lVar7 = *(longlong *)(*(longlong *)(lVar5 + DAT_141c36a00) + 8);
          }
          if ((lVar7 == 0) || (lVar7 == param_1)) goto LAB_140c47a8f;
          iVar4 = 0;
          lVar9 = 0;
          if (*(longlong *)(lVar7 + 0x1b0) - *(longlong *)(lVar7 + 0x1a8) >> 3 == 0)
          goto LAB_140c47a8f;
          goto LAB_140c47a24;
        }
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    goto LAB_140c47ba9;
  }
  goto LAB_140c47be4;
  while( true ) {
    iVar4 = iVar4 + 1;
    lVar9 = lVar9 + 1;
    if ((ulonglong)(*(longlong *)(lVar7 + 0x1b0) - *(longlong *)(lVar7 + 0x1a8) >> 3) <=
        (ulonglong)(longlong)iVar4) break;
LAB_140c47a24:
    piVar2 = *(int **)(*(longlong *)(lVar7 + 0x1a8) + lVar9 * 8);
    if ((*piVar2 == 4) && (*(longlong *)(piVar2 + 2) == *(longlong *)(lVar5 + DAT_141c36a00))) {
      free(piVar2);
      pvVar6 = (void *)(*(longlong *)(lVar7 + 0x1a8) + (longlong)iVar4 * 8);
      pvVar1 = (void *)((longlong)pvVar6 + 8);
      memmove(pvVar6,pvVar1,*(longlong *)(lVar7 + 0x1b0) - (longlong)pvVar1);
      *(longlong *)(lVar7 + 0x1b0) = *(longlong *)(lVar7 + 0x1b0) + -8;
      break;
    }
  }
LAB_140c47a8f:
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + DAT_141c36a00) + 0x18);
  if (lVar7 != 0) {
    iVar4 = 0;
    lVar9 = 0;
    if (*(longlong *)(lVar7 + 0x78) - *(longlong *)(lVar7 + 0x70) >> 3 != 0) {
      lVar3 = *(longlong *)(lVar7 + 0x70);
      do {
        piVar2 = *(int **)(lVar3 + lVar9 * 8);
        if ((*piVar2 == 4) && (*(longlong *)(piVar2 + 2) == *(longlong *)(lVar5 + DAT_141c36a00))) {
          free(*(void **)(lVar3 + lVar9 * 8));
          lVar7 = *(longlong *)(*(longlong *)(lVar5 + DAT_141c36a00) + 0x18);
          pvVar6 = (void *)(*(longlong *)(lVar7 + 0x70) + (longlong)iVar4 * 8);
          pvVar1 = (void *)((longlong)pvVar6 + 8);
          memmove(pvVar6,pvVar1,*(longlong *)(lVar7 + 0x78) - (longlong)pvVar1);
          *(longlong *)(lVar7 + 0x78) = *(longlong *)(lVar7 + 0x78) + -8;
          break;
        }
        iVar4 = iVar4 + 1;
        lVar9 = lVar9 + 1;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(*(longlong *)(lVar7 + 0x78) - lVar3 >> 3));
    }
  }
  pvVar1 = *(void **)(lVar5 + DAT_141c36a00);
  if (pvVar1 != (void *)0x0) {
    iVar4 = (int)(DAT_141c36ad8 - DAT_141c36ad0 >> 3) + -1;
    lVar9 = (longlong)iVar4;
    lVar7 = DAT_141c36ad0;
    if (-1 < iVar4) {
      do {
        lVar3 = *(longlong *)(lVar7 + lVar9 * 8);
        if ((*(void **)(lVar3 + 8) == pvVar1) && (lVar3 != 0)) {
          FUN_14095fb00();
          lVar7 = DAT_141c36ad0;
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    free(pvVar1);
  }
  pvVar1 = (void *)(lVar5 + DAT_141c36a00 + 8);
  memmove((void *)(lVar5 + DAT_141c36a00),pvVar1,DAT_141c36a08 - (longlong)pvVar1);
  DAT_141c36a08 = DAT_141c36a08 + -8;
LAB_140c47ba9:
  free(*(void **)(lVar11 + *(longlong *)(param_1 + 0x1a8)));
  pvVar6 = (void *)(*(longlong *)(param_1 + 0x1a8) + lVar10);
  pvVar1 = (void *)((longlong)pvVar6 + 8);
  memmove(pvVar6,pvVar1,*(longlong *)(param_1 + 0x1b0) - (longlong)pvVar1);
  *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + -8;
LAB_140c47be4:
  lVar10 = lVar10 + -8;
  lVar11 = lVar11 + -8;
  iVar8 = iVar8 + -1;
  if (iVar8 < 0) {
    return;
  }
  goto LAB_140c47980;
}

