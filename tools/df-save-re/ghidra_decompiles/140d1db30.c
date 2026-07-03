// FUN_140d1db30 @ 140d1db30
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 1400ff040 FUN_1400ff040
//   -> 140002020 FUN_140002020


void FUN_140d1db30(int *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  int *_Memory;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  void *_Dst;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar6 = (int)((longlong)DAT_141c536e8 - (longlong)DAT_141c536e0 >> 3) + -1;
  plVar2 = DAT_141c536e0;
  plVar4 = DAT_141c536e8;
  if (-1 < iVar6) {
    lVar7 = (longlong)iVar6;
    do {
      if ((int *)DAT_141c536e0[lVar7] == param_1) {
        plVar2 = DAT_141c536e0 + iVar6;
        memmove(plVar2,plVar2 + 1,(longlong)DAT_141c536e8 - (longlong)(plVar2 + 1));
        DAT_141c536e8 = DAT_141c536e8 + -1;
        plVar2 = DAT_141c536e0;
        plVar4 = DAT_141c536e8;
        break;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  for (; plVar5 = DAT_141c536e8, plVar2 < DAT_141c536e8; plVar2 = plVar2 + 1) {
    iVar6 = (int)(*(longlong *)(*plVar2 + 0x90) - *(longlong *)(*plVar2 + 0x88) >> 3) + -1;
    DAT_141c536e8 = plVar4;
    if (-1 < iVar6) {
      lVar7 = (longlong)iVar6 * 8;
      lVar12 = lVar7;
      do {
        _Memory = *(int **)(lVar12 + *(longlong *)(*plVar2 + 0x88));
        if (*_Memory == *param_1) {
          free(_Memory);
          lVar3 = *plVar2;
          _Dst = (void *)(*(longlong *)(lVar3 + 0x88) + lVar7);
          pvVar1 = (void *)((longlong)_Dst + 8);
          memmove(_Dst,pvVar1,*(longlong *)(lVar3 + 0x90) - (longlong)pvVar1);
          *(longlong *)(lVar3 + 0x90) = *(longlong *)(lVar3 + 0x90) + -8;
        }
        lVar7 = lVar7 + -8;
        lVar12 = lVar12 + -8;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    plVar4 = DAT_141c536e8;
    DAT_141c536e8 = plVar5;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x1c);
  uVar11 = 0;
  uVar10 = (*(longlong *)(param_1 + 0x1e) - (longlong)puVar8) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x1e) < puVar8) {
    uVar10 = uVar11;
  }
  uVar9 = uVar11;
  DAT_141c536e8 = plVar4;
  if (uVar10 != 0) {
    do {
      pvVar1 = (void *)*puVar8;
      if (pvVar1 != (void *)0x0) {
        FUN_1400ff040(pvVar1);
        free(pvVar1);
      }
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x1c);
  puVar8 = *(undefined8 **)(param_1 + 0x22);
  uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x24) + (7 - (longlong)puVar8)) >> 3;
  if (*(undefined8 **)(param_1 + 0x24) < puVar8) {
    uVar10 = uVar11;
  }
  if (uVar10 != 0) {
    do {
      free((void *)*puVar8);
      uVar11 = uVar11 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar11 < uVar10);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x22);
  lVar7 = *(longlong *)(param_1 + 0x22);
  if (lVar7 != 0) {
    FUN_140002020(lVar7,*(longlong *)(param_1 + 0x26) - lVar7 >> 3,8);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x1c);
  if (lVar7 != 0) {
    FUN_140002020(lVar7,*(longlong *)(param_1 + 0x20) - lVar7 >> 3,8);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 10)) {
    FUN_140002020(*(undefined8 *)(param_1 + 4),*(ulonglong *)(param_1 + 10) + 1,1);
  }
  param_1[10] = 0xf;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(ulonglong *)(param_1 + 10) < 0x10) {
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
  **(undefined1 **)(param_1 + 4) = 0;
  return;
}

