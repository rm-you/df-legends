// FUN_1408ff8a0 @ 1408ff8a0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1408fee10 FUN_1408fee10
//   -> 140dfb5b4 free
//   -> 1408feb70 FUN_1408feb70
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_1408ff8a0(int *param_1)

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
  iVar5 = (int)(DAT_141d69378 - DAT_141d69370 >> 3) + -1;
  uVar8 = uVar9;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + (int)uVar8 >> 1;
      piVar1 = *(int **)(DAT_141d69370 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69370 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69378 - (longlong)pvVar2);
        DAT_141d69378 = DAT_141d69378 + -8;
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
  puVar6 = *(undefined8 **)(param_1 + 0x22);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x24) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x24) < puVar6) {
    uVar8 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar8 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_1408fee10(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x22);
  puVar6 = *(undefined8 **)(param_1 + 0x28);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x2a) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x2a) < puVar6) {
    uVar8 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar8 != 0) {
    do {
      free((void *)*puVar6);
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x28);
  puVar6 = *(undefined8 **)(param_1 + 0x2e);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x30) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x30) < puVar6) {
    uVar8 = uVar9;
  }
  uVar7 = uVar9;
  if (uVar8 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_1408feb70(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x2e);
  puVar6 = *(undefined8 **)(param_1 + 0x34);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x36) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x36) < puVar6) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      free((void *)*puVar6);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_1 + 0x34);
  lVar3 = *(longlong *)(param_1 + 0x34);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x38) - lVar3 >> 3,8);
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x2e);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x32) - lVar3 >> 3,8);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x2c) - lVar3 >> 3,8);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x22);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x26) - lVar3 >> 3,8);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  FUN_140002740(param_1 + 2);
  return;
}

