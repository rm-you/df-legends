// FUN_14078e1d0 @ 14078e1d0
// callees:


ulonglong FUN_14078e1d0(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  
  uVar9 = 0;
  plVar8 = *(longlong **)(param_1 + 0xe8);
  iVar14 = 0x7531;
  uVar13 = (ulonglong)((longlong)*(longlong **)(param_1 + 0xf0) + (7 - (longlong)plVar8)) >> 3;
  if (*(longlong **)(param_1 + 0xf0) < plVar8) {
    uVar13 = uVar9;
  }
  uVar12 = uVar9;
  if (uVar13 == 0) {
    return 0;
  }
LAB_14078e230:
  iVar7 = 0;
  plVar1 = (longlong *)*plVar8;
  sVar3 = (**(code **)*plVar1)(plVar1);
  if (((sVar3 == 10) &&
      (((iVar10 = (int)plVar1[1], iVar10 == param_2 || (param_2 == -1)) &&
       (lVar4 = DAT_141c53720 - DAT_141c53718 >> 3, lVar4 != 0)))) &&
     ((iVar10 != -1 && (iVar6 = (int)lVar4 + -1, -1 < iVar6)))) {
    do {
      iVar5 = iVar6 + iVar7 >> 1;
      lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar5 * 8);
      if (*(int *)(lVar4 + 4) == iVar10) {
        if (lVar4 != 0) {
          iVar6 = (**(code **)(*plVar1 + 0x30))(plVar1);
          iVar10 = 0;
          iVar7 = (int)(*(longlong *)(lVar4 + 0x1108) - *(longlong *)(lVar4 + 0x1100) >> 3) + -1;
          if (-1 < iVar7) goto LAB_14078e2f0;
        }
        break;
      }
      if (iVar10 < *(int *)(lVar4 + 4)) {
        iVar6 = iVar5 + -1;
      }
      else {
        iVar7 = iVar5 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  goto LAB_14078e38d;
  while( true ) {
    if (iVar6 < *piVar2) {
      iVar7 = iVar5 + -1;
    }
    else {
      iVar10 = iVar5 + 1;
    }
    if (iVar7 < iVar10) break;
LAB_14078e2f0:
    iVar5 = iVar7 + iVar10 >> 1;
    piVar2 = *(int **)(*(longlong *)(lVar4 + 0x1100) + (longlong)iVar5 * 8);
    if (*piVar2 == iVar6) {
      iVar10 = 0;
      iVar7 = (int)(*(longlong *)(lVar4 + 0x10b8) - *(longlong *)(lVar4 + 0x10b0) >> 3) + -1;
      if (iVar7 < 0) goto LAB_14078e366;
      goto LAB_14078e340;
    }
  }
  goto LAB_14078e38d;
LAB_14078e340:
  do {
    iVar6 = iVar7 + iVar10 >> 1;
    uVar11 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10b0) + (longlong)iVar6 * 8);
    if (*(int *)(uVar11 + 0x20) == piVar2[3]) goto LAB_14078e369;
    if (piVar2[3] < *(int *)(uVar11 + 0x20)) {
      iVar7 = iVar6 + -1;
    }
    else {
      iVar10 = iVar6 + 1;
    }
  } while (iVar10 <= iVar7);
LAB_14078e366:
  uVar11 = 0;
LAB_14078e369:
  iVar7 = *(int *)(uVar11 + 0x2d0);
  if (iVar7 < iVar14) {
    *param_3 = lVar4;
    *param_4 = piVar2;
    uVar12 = uVar11;
    iVar14 = iVar7;
  }
LAB_14078e38d:
  plVar8 = plVar8 + 1;
  uVar9 = uVar9 + 1;
  if (uVar13 <= uVar9) {
    return uVar12;
  }
  goto LAB_14078e230;
}

