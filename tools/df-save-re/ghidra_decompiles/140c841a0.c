// FUN_140c841a0 @ 140c841a0
// callees:
//   -> 140c840a0 FUN_140c840a0


void FUN_140c841a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  if (*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x4d8);
    lVar3 = *(longlong *)(param_1 + 0x4d0);
    iVar11 = (int)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3) + -1;
    if (-1 < iVar11) {
      lVar12 = (longlong)iVar11 * 8;
      do {
        piVar4 = *(int **)(lVar12 + *(longlong *)(param_1 + 0xaf8));
        iVar8 = piVar4[1];
        if (((-1 < iVar8) && (iVar8 < (int)(lVar2 - lVar3 >> 2))) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)iVar8 * 4) & 2) != 0)) {
          iVar1 = *piVar4;
          iVar8 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
          if ((iVar8 != 0) && (iVar1 != -1)) {
            iVar8 = iVar8 + -1;
            iVar10 = 0;
            if (-1 < iVar8) {
              do {
                iVar7 = iVar10 + iVar8 >> 1;
                lVar5 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
                if (*(int *)(lVar5 + 0x130) == iVar1) {
                  if ((lVar5 != 0) &&
                     (iVar8 = (int)(*(longlong *)(lVar5 + 0xb00) - *(longlong *)(lVar5 + 0xaf8) >> 3
                                   ) + -1, -1 < iVar8)) {
                    lVar9 = (longlong)iVar8 * 8;
                    do {
                      piVar4 = *(int **)(lVar9 + *(longlong *)(lVar5 + 0xaf8));
                      if (((((*piVar4 == *(int *)(param_1 + 0x130)) &&
                            (lVar6 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0xaf8)),
                            piVar4[1] == *(int *)(lVar6 + 8))) && (piVar4[2] == *(int *)(lVar6 + 4))
                           ) && ((piVar4[3] == *(int *)(lVar6 + 0x10) &&
                                 (piVar4[4] == *(int *)(lVar6 + 0xc))))) &&
                         ((piVar4[5] == *(int *)(lVar6 + 0x18) &&
                          (piVar4[6] == *(int *)(lVar6 + 0x14))))) {
                        FUN_140c840a0(lVar5,iVar8);
                      }
                      lVar9 = lVar9 + -8;
                      iVar8 = iVar8 + -1;
                    } while (-1 < iVar8);
                  }
                  break;
                }
                if (iVar1 < *(int *)(lVar5 + 0x130)) {
                  iVar8 = iVar7 + -1;
                }
                else {
                  iVar10 = iVar7 + 1;
                }
              } while (iVar10 <= iVar8);
            }
          }
          FUN_140c840a0(param_1,iVar11);
        }
        lVar12 = lVar12 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return;
}

