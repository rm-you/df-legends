// FUN_140140de0 @ 140140de0
// callees:
//   -> 140141130 FUN_140141130
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140140de0(int *param_1)

{
  void *_Dst;
  void *pvVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  plVar6 = *(longlong **)(param_1 + 0x3e);
  uVar8 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x40) + (7 - (longlong)plVar6)) >> 3;
  if (*(longlong **)(param_1 + 0x40) < plVar6) {
    uVar8 = uVar10;
  }
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      if (*plVar6 != 0) {
        FUN_140141130();
      }
      plVar6 = plVar6 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x3e);
  puVar7 = *(undefined8 **)(param_1 + 0x32);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x34) + (7 - (longlong)puVar7)) >> 3;
  if (*(undefined8 **)(param_1 + 0x34) < puVar7) {
    uVar8 = uVar10;
  }
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      pvVar1 = (void *)*puVar7;
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(longlong *)((longlong)pvVar1 + 0x10);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x20) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
        }
        free(pvVar1);
      }
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x32);
  puVar7 = *(undefined8 **)(param_1 + 0x38);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x3a) + (7 - (longlong)puVar7)) >> 3;
  if (*(undefined8 **)(param_1 + 0x3a) < puVar7) {
    uVar8 = uVar10;
  }
  uVar9 = uVar10;
  if (uVar8 != 0) {
    do {
      pvVar1 = (void *)*puVar7;
      if (pvVar1 != (void *)0x0) {
        lVar2 = *(longlong *)((longlong)pvVar1 + 0x10);
        if (lVar2 != 0) {
          FUN_140002020(lVar2,*(longlong *)((longlong)pvVar1 + 0x20) - lVar2 >> 2,4);
          *(undefined8 *)((longlong)pvVar1 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
          *(undefined8 *)((longlong)pvVar1 + 0x20) = 0;
        }
        free(pvVar1);
      }
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x3a) = *(undefined8 *)(param_1 + 0x38);
  iVar5 = (int)(DAT_141d691e0 - DAT_141d691d8 >> 3) + -1;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + (int)uVar10 >> 1;
      piVar3 = *(int **)(DAT_141d691d8 + (longlong)iVar4 * 8);
      if (piVar3 == param_1) {
        _Dst = (void *)(DAT_141d691d8 + (longlong)iVar4 * 8);
        pvVar1 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar1,DAT_141d691e0 - (longlong)pvVar1);
        DAT_141d691e0 = DAT_141d691e0 + -8;
        break;
      }
      if (*param_1 < *piVar3) {
        iVar5 = iVar4 + -1;
      }
      else {
        uVar10 = (ulonglong)(iVar4 + 1);
      }
    } while ((int)uVar10 <= iVar5);
  }
  lVar2 = *(longlong *)(param_1 + 0x3e);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x42) - lVar2 >> 3,8);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x3c) - lVar2 >> 3,8);
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x32);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x36) - lVar2 >> 3,8);
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x22);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x26) - lVar2 >> 2,4);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x16);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1a) - lVar2 >> 2,4);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 10);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xe) - lVar2 >> 2,4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return;
}

