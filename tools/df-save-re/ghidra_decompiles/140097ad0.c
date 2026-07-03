// FUN_140097ad0 @ 140097ad0
// callees:
//   -> 14008f860 FUN_14008f860
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140073930 FUN_140073930
//   -> EXTERNAL:000000e1 memmove


void FUN_140097ad0(int *param_1)

{
  longlong *plVar1;
  void *_Dst;
  void *pvVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  FUN_14008f860();
  uVar10 = 0;
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(param_1 + 0x4c);
  puVar8 = *(undefined8 **)(param_1 + 8);
  uVar9 = (*(longlong *)(param_1 + 10) - (longlong)puVar8) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 10) < puVar8) {
    uVar9 = uVar10;
  }
  uVar11 = uVar10;
  if (uVar9 != 0) {
    do {
      pvVar2 = (void *)*puVar8;
      if (pvVar2 != (void *)0x0) {
        FUN_140051e20((longlong)pvVar2 + 0x40);
        lVar4 = *(longlong *)((longlong)pvVar2 + 0x40);
        if (lVar4 != 0) {
          FUN_140002020(lVar4,*(longlong *)((longlong)pvVar2 + 0x50) - lVar4 >> 3,8);
          *(undefined8 *)((longlong)pvVar2 + 0x40) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x48) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x50) = 0;
        }
        free(pvVar2);
      }
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 8);
  puVar8 = *(undefined8 **)(param_1 + 0xe);
  uVar9 = (*(longlong *)(param_1 + 0x10) - (longlong)puVar8) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x10) < puVar8) {
    uVar9 = uVar10;
  }
  uVar11 = uVar10;
  if (uVar9 != 0) {
    do {
      free((void *)*puVar8);
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < uVar9);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xe);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 4);
    lVar4 = DAT_141c53720 - DAT_141c53718 >> 3;
    if (((lVar4 != 0) && (iVar7 != -1)) && (iVar6 = (int)lVar4 + -1, uVar9 = uVar10, -1 < iVar6)) {
      do {
        iVar5 = iVar6 + (int)uVar9 >> 1;
        lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar5 * 8);
        if (*(int *)(lVar4 + 4) == iVar7) {
          if (lVar4 != 0) {
            FUN_140073930(param_1,lVar4 + 0x13e0);
          }
          break;
        }
        if (iVar7 < *(int *)(lVar4 + 4)) {
          iVar6 = iVar5 + -1;
        }
        else {
          uVar9 = (ulonglong)(iVar5 + 1);
        }
      } while ((int)uVar9 <= iVar6);
    }
  }
  iVar7 = (int)(DAT_141d69258 - DAT_141d69250 >> 3) + -1;
  if (-1 < iVar7) {
    do {
      iVar6 = iVar7 + (int)uVar10 >> 1;
      piVar3 = *(int **)(DAT_141d69250 + (longlong)iVar6 * 8);
      if (piVar3 == param_1) {
        _Dst = (void *)(DAT_141d69250 + (longlong)iVar6 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69258 - (longlong)pvVar2);
        DAT_141d69258 = DAT_141d69258 + -8;
        break;
      }
      if (*param_1 < *piVar3) {
        iVar7 = iVar6 + -1;
      }
      else {
        uVar10 = (ulonglong)(iVar6 + 1);
      }
    } while ((int)uVar10 <= iVar7);
  }
  lVar4 = *(longlong *)(param_1 + 0x4c);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x50) - lVar4 >> 3,8);
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x42);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x46) - lVar4 >> 3,8);
    *plVar1 = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x3c);
  FUN_140051e20(plVar1);
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x40) - lVar4 >> 3,8);
    *plVar1 = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x34) - lVar4 >> 2,4);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x2a);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x2e) - lVar4 >> 2,4);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x24);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x28) - lVar4 >> 2,4);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x1e);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x22) - lVar4 >> 2,4);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (*(void **)(param_1 + 0x1a) != (void *)0x0) {
    free(*(void **)(param_1 + 0x1a));
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar4 = *(longlong *)(param_1 + 0xe);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0x12) - lVar4 >> 3,8);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    FUN_140002020(lVar4,*(longlong *)(param_1 + 0xc) - lVar4 >> 3,8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return;
}

