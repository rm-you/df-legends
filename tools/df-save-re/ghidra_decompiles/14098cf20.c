// FUN_14098cf20 @ 14098cf20
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 14098d140 FUN_14098d140
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_14098cf20(int *param_1)

{
  void *_Dst;
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  iVar5 = (int)(DAT_141d69348 - DAT_141d69340 >> 3) + -1;
  uVar8 = uVar9;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + (int)uVar8 >> 1;
      piVar1 = *(int **)(DAT_141d69340 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69340 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69348 - (longlong)pvVar2);
        DAT_141d69348 = DAT_141d69348 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar5 = iVar4 + -1;
      }
      else {
        uVar8 = (ulonglong)(iVar4 + 1);
      }
    } while ((int)uVar8 <= iVar5);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x24);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x26) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x26) < puVar6) {
    uVar8 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar8 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_14098d140(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0x24);
  puVar6 = *(undefined8 **)(param_1 + 0x3a);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3c) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3c) < puVar6) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      free((void *)*puVar6);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x3a);
  lVar3 = *(longlong *)(param_1 + 0x3a);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x3e) - lVar3 >> 3,8);
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x2e);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x32) - lVar3 >> 2,4);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x24);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x28) - lVar3 >> 3,8);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  FUN_140002740(param_1 + 2);
  return;
}

