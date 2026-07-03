// FUN_140c15090 @ 140c15090
// callees:
//   -> 1404549f0 FUN_1404549f0
//   -> 140c14740 FUN_140c14740
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140c14800 FUN_140c14800
//   -> 140002020 FUN_140002020
//   -> 140c17be0 FUN_140c17be0
//   -> 140002740 FUN_140002740


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c15090(int *param_1)

{
  void *_Dst;
  void *pvVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = 0;
  if ((DAT_1410b67dc == 0) && (puVar3 = DAT_141c3d2d8, DAT_141c3d260 == 1)) {
    for (; puVar3 < DAT_141c3d2e0; puVar3 = puVar3 + 1) {
      if ((int *)*puVar3 == param_1) {
        if ((int)((longlong)puVar3 - (longlong)DAT_141c3d2d8 >> 3) != -1) {
          _DAT_141c3d3d8 = 0xffffffffffffffff;
          DAT_1410b6760 = 0xffff8ad0;
          _DAT_1410b676c = 0xffff8ad0;
          DAT_141c3d260 = 0;
          _DAT_1410b6730 = 0xffff8ad0;
          _DAT_141c3e244 = 0x101;
          FUN_1404549f0(0);
        }
        break;
      }
    }
  }
  iVar4 = (int)(*(longlong *)(param_1 + 0x2a) - *(longlong *)(param_1 + 0x28) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x28) + lVar6 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140c14740(pvVar1);
        free(pvVar1);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x28);
  iVar4 = (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x2e) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x2e) + lVar6 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x2e);
  iVar4 = (int)(*(longlong *)(param_1 + 0x3e) - *(longlong *)(param_1 + 0x3c) >> 3) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      free(*(void **)(*(longlong *)(param_1 + 0x3c) + lVar6 * 8));
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_1 + 0x3c);
  iVar4 = (int)(DAT_141d64d40 - DAT_141d64d38 >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar5 = iVar4 + iVar8 >> 1;
      piVar7 = *(int **)(DAT_141d64d38 + (longlong)iVar5 * 8);
      if (piVar7 == param_1) {
        _Dst = (void *)(DAT_141d64d38 + (longlong)iVar5 * 8);
        pvVar1 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar1,DAT_141d64d40 - (longlong)pvVar1);
        DAT_141d64d40 = DAT_141d64d40 + -8;
        break;
      }
      if (*param_1 < *piVar7) {
        iVar4 = iVar5 + -1;
      }
      else {
        iVar8 = iVar5 + 1;
      }
    } while (iVar8 <= iVar4);
  }
  FUN_140c14800(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x48);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)(param_1 + 0x4c) - lVar6 >> 2,4);
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x42);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)(param_1 + 0x46) - lVar6 >> 2,4);
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x3c);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)(param_1 + 0x40) - lVar6 >> 3,8);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
  }
  FUN_140c17be0(param_1 + 0x34);
  lVar6 = *(longlong *)(param_1 + 0x2e);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)(param_1 + 0x32) - lVar6 >> 3,8);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  if (lVar6 != 0) {
    FUN_140002020(lVar6,*(longlong *)(param_1 + 0x2c) - lVar6 >> 3,8);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  piVar7 = param_1 + 0x20;
  if (0xf < *(ulonglong *)(param_1 + 0x26)) {
    FUN_140002020(*(undefined8 *)piVar7,*(ulonglong *)(param_1 + 0x26) + 1,1);
  }
  param_1[0x26] = 0xf;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x26)) {
    piVar7 = *(int **)piVar7;
  }
  *(undefined1 *)piVar7 = 0;
  FUN_140002740(param_1 + 2);
  return;
}

