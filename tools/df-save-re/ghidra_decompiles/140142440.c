// FUN_140142440 @ 140142440
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1401426a0 FUN_1401426a0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 14000e930 FUN_14000e930


void FUN_140142440(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = 0;
  iVar4 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
  uVar7 = uVar9;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + (int)uVar7 >> 1;
      piVar1 = *(int **)(DAT_141d692e0 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d692e0 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d692e8 - (longlong)_Src);
        DAT_141d692e8 = DAT_141d692e8 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        uVar7 = (ulonglong)(iVar3 + 1);
      }
    } while ((int)uVar7 <= iVar4);
  }
  plVar5 = *(longlong **)(param_1 + 4);
  uVar7 = (*(longlong *)(param_1 + 6) - (longlong)plVar5) + 7U >> 3;
  if (*(longlong **)(param_1 + 6) < plVar5) {
    uVar7 = uVar9;
  }
  uVar8 = uVar9;
  if (uVar7 != 0) {
    do {
      if (*plVar5 != 0) {
        FUN_1401426a0();
      }
      plVar5 = plVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 4);
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  uVar7 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x6a) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x6a) < puVar6) {
    uVar7 = uVar9;
  }
  if (uVar7 != 0) {
    do {
      free((void *)*puVar6);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 < uVar7);
  }
  *(undefined8 *)(param_1 + 0x6a) = *(undefined8 *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x6e);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x72) - lVar2 >> 3,8);
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x6c) - lVar2 >> 3,8);
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x5e);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x62) - lVar2 >> 2,4);
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
  }
  plVar5 = (longlong *)(param_1 + 0x56);
  FUN_14000e930(plVar5);
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x5a) - lVar2 >> 3,8);
    *plVar5 = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 4);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 8) - lVar2 >> 3,8);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}

