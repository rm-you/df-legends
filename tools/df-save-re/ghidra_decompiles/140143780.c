// FUN_140143780 @ 140143780
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140143aa0 FUN_140143aa0
//   -> 140dfb5b4 free
//   -> 140143bb0 FUN_140143bb0
//   -> 140002020 FUN_140002020
//   -> 140002740 FUN_140002740


void FUN_140143780(int *param_1)

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
  int iVar10;
  
  uVar8 = 0;
  iVar5 = (int)(DAT_141d693a8 - DAT_141d693a0 >> 3) + -1;
  iVar10 = 0;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + iVar10 >> 1;
      piVar1 = *(int **)(DAT_141d693a0 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d693a0 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d693a8 - (longlong)pvVar2);
        DAT_141d693a8 = DAT_141d693a8 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar10 = iVar4 + 1;
      }
    } while (iVar10 <= iVar5);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x52);
  uVar9 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x54) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x54) < puVar6) {
    uVar9 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar9 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_140143aa0(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x52);
  puVar6 = *(undefined8 **)(param_1 + 0x58);
  uVar9 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x5a) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x5a) < puVar6) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_140143bb0(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(param_1 + 0x58);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x5c) - lVar3 >> 3,8);
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x52);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x56) - lVar3 >> 3,8);
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x4c);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x50) - lVar3 >> 2,4);
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x46);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x4a) - lVar3 >> 2,4);
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x44) - lVar3 >> 2,4);
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x3a);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x3e) - lVar3 >> 2,4);
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x34) - lVar3 >> 2,4);
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  FUN_140002740(param_1 + 2);
  return;
}

