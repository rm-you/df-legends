// FUN_1400bf170 @ 1400bf170
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1400bee40 FUN_1400bee40
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1400bf170(int *param_1)

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
  int iVar9;
  
  uVar7 = 0;
  iVar5 = (int)(DAT_141d69468 - DAT_141d69460 >> 3) + -1;
  iVar9 = 0;
  if (-1 < iVar5) {
    do {
      iVar4 = iVar5 + iVar9 >> 1;
      piVar1 = *(int **)(DAT_141d69460 + (longlong)iVar4 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69460 + (longlong)iVar4 * 8);
        pvVar2 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar2,DAT_141d69468 - (longlong)pvVar2);
        DAT_141d69468 = DAT_141d69468 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar5 = iVar4 + -1;
      }
      else {
        iVar9 = iVar4 + 1;
      }
    } while (iVar9 <= iVar5);
  }
  puVar6 = *(undefined8 **)(param_1 + 2);
  uVar8 = (*(longlong *)(param_1 + 4) - (longlong)puVar6) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 4) < puVar6) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      pvVar2 = (void *)*puVar6;
      if (pvVar2 != (void *)0x0) {
        FUN_1400bee40(pvVar2);
        free(pvVar2);
      }
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar8);
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 2);
  lVar3 = *(longlong *)(param_1 + 0xe);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0x12) - lVar3 >> 2,4);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_140002020(lVar3,*(longlong *)(param_1 + 0xc) - lVar3 >> 2,4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
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

