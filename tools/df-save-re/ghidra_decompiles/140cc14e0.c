// FUN_140cc14e0 @ 140cc14e0
// callees:


void FUN_140cc14e0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  longlong lVar11;
  int iVar12;
  
  iVar9 = *(int *)(param_1 + 0x1d8);
  lVar5 = DAT_141d64d40 - DAT_141d64d38 >> 3;
  if ((lVar5 != 0) && (iVar9 != -1)) {
    iVar8 = (int)lVar5 + -1;
    iVar12 = 0;
    if (-1 < iVar8) {
      while( true ) {
        iVar7 = iVar12 + iVar8 >> 1;
        piVar1 = *(int **)(DAT_141d64d38 + (longlong)iVar7 * 8);
        if (*piVar1 == iVar9) break;
        if (iVar9 < *piVar1) {
          iVar8 = iVar7 + -1;
        }
        else {
          iVar12 = iVar7 + 1;
        }
        if (iVar8 < iVar12) {
          return;
        }
      }
      if (((piVar1 != (int *)0x0) && (-1 < *(int *)(param_1 + 0x1dc))) &&
         ((ulonglong)(longlong)*(int *)(param_1 + 0x1dc) <
          (ulonglong)(*(longlong *)(piVar1 + 0x2a) - *(longlong *)(piVar1 + 0x28) >> 3))) {
        sVar10 = 2;
        lVar11 = 0x18c;
        lVar5 = DAT_141d64d98;
LAB_140cc15c0:
        lVar2 = *(longlong *)
                 (*(longlong *)(piVar1 + 0x28) + (longlong)*(int *)(param_1 + 0x1dc) * 8);
        lVar6 = DAT_141d64da0 - lVar5 >> 3;
        iVar9 = *(int *)(lVar11 + -0xc + lVar2);
        if ((lVar6 != 0) && (iVar9 != -1)) {
          iVar8 = (int)lVar6 + -1;
          iVar12 = 0;
          if (-1 < iVar8) {
            do {
              iVar7 = iVar12 + iVar8 >> 1;
              piVar3 = *(int **)(lVar5 + (longlong)iVar7 * 8);
              if (*piVar3 == iVar9) {
                if (piVar3 != (int *)0x0) {
                  iVar8 = 0;
                  iVar12 = *(int *)(lVar11 + lVar2);
                  iVar9 = (int)(*(longlong *)(piVar3 + 4) - *(longlong *)(piVar3 + 2) >> 3) + -1;
                  if (-1 < iVar9) goto LAB_140cc1660;
                }
                break;
              }
              if (iVar9 < *piVar3) {
                iVar8 = iVar7 + -1;
              }
              else {
                iVar12 = iVar7 + 1;
              }
            } while (iVar12 <= iVar8);
          }
        }
        goto LAB_140cc16dc;
      }
    }
  }
  return;
  while( true ) {
    if (iVar12 < (int)plVar4[1]) {
      iVar9 = iVar7 + -1;
    }
    else {
      iVar8 = iVar7 + 1;
    }
    if (iVar9 < iVar8) break;
LAB_140cc1660:
    iVar7 = iVar9 + iVar8 >> 1;
    plVar4 = *(longlong **)(*(longlong *)(piVar3 + 2) + (longlong)iVar7 * 8);
    if ((int)plVar4[1] == iVar12) {
      (**(code **)(*plVar4 + 0x50))
                (plVar4,*(undefined4 *)(param_1 + 0xc10),*(undefined4 *)(param_1 + 0x130),0);
      *(undefined4 *)
       (lVar11 + -0xc +
       *(longlong *)(*(longlong *)(piVar1 + 0x28) + (longlong)*(int *)(param_1 + 0x1dc) * 8)) =
           0xffffffff;
      *(undefined4 *)
       (lVar11 + *(longlong *)
                  (*(longlong *)(piVar1 + 0x28) + (longlong)*(int *)(param_1 + 0x1dc) * 8)) =
           0xffffffff;
      lVar5 = DAT_141d64d98;
      break;
    }
  }
LAB_140cc16dc:
  lVar11 = lVar11 + -4;
  sVar10 = sVar10 + -1;
  if (sVar10 < 0) {
    return;
  }
  goto LAB_140cc15c0;
}

