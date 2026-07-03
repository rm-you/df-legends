// FUN_1407d43b0 @ 1407d43b0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1406f94b0 FUN_1406f94b0
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> 140002740 FUN_140002740


void FUN_1407d43b0(int *param_1)

{
  void *_Dst;
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 0;
  iVar5 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
  uVar8 = uVar9;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + (int)uVar8 >> 1;
      piVar1 = *(int **)(DAT_141d69178 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69178 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69180 - (longlong)pvVar2);
        DAT_141d69180 = DAT_141d69180 + -8;
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
  plVar6 = *(longlong **)(param_1 + 0x2e);
  uVar8 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x30) + (7 - (longlong)plVar6)) >> 3;
  if (*(longlong **)(param_1 + 0x30) < plVar6) {
    uVar8 = uVar9;
  }
  uVar10 = uVar9;
  if (uVar8 != 0) {
    do {
      if (*plVar6 != 0) {
        FUN_1406f94b0();
      }
      plVar6 = plVar6 + 1;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x2e);
  puVar7 = *(undefined8 **)(param_1 + 0x34);
  uVar8 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x36) + (7 - (longlong)puVar7)) >> 3;
  if (*(undefined8 **)(param_1 + 0x36) < puVar7) {
    uVar8 = uVar9;
  }
  if (uVar8 != 0) {
    do {
      pvVar2 = (void *)*puVar7;
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(longlong *)((longlong)pvVar2 + 0x20);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x30) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 0x20) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x28) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x30) = 0;
        }
        lVar3 = *(longlong *)((longlong)pvVar2 + 8);
        if (lVar3 != 0) {
          FUN_140002020(lVar3,*(longlong *)((longlong)pvVar2 + 0x18) - lVar3 >> 2,4);
          *(undefined8 *)((longlong)pvVar2 + 8) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        }
        free(pvVar2);
      }
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 1;
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
  FUN_140002740(param_1 + 2);
  return;
}

