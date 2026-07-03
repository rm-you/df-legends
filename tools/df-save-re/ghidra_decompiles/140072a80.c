// FUN_140072a80 @ 140072a80
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1400156e0 FUN_1400156e0
//   -> 140dfb5b4 free
//   -> 140072260 FUN_140072260
//   -> 140002020 FUN_140002020


void FUN_140072a80(int *param_1)

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
  iVar5 = (int)(DAT_141d69318 - DAT_141d69310 >> 3) + -1;
  iVar10 = 0;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + iVar10 >> 1;
      piVar1 = *(int **)(DAT_141d69310 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69310 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69318 - (longlong)pvVar2);
        DAT_141d69318 = DAT_141d69318 + -8;
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
  puVar6 = *(undefined8 **)(param_1 + 2);
  uVar9 = (*(longlong *)(param_1 + 4) - (longlong)puVar6) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar6) {
    uVar9 = uVar8;
  }
  uVar7 = uVar8;
  if (uVar9 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_1400156e0(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  puVar6 = *(undefined8 **)(param_1 + 10);
  uVar9 = (*(longlong *)(param_1 + 0xc) - (longlong)puVar6) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0xc) < puVar6) {
    uVar9 = uVar8;
  }
  if (uVar9 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_140072260(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  lVar3 = *(longlong *)(param_1 + 10);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0xe) - lVar3 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 2);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 6) - lVar3 >> 3,8);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

