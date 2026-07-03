// FUN_140af5bf0 @ 140af5bf0
// callees:


void FUN_140af5bf0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  iVar9 = (int)(DAT_141d7a0e0 - DAT_141d7a0d8 >> 3) + -1;
  uVar12 = uVar13;
  if (-1 < iVar9) {
    while( true ) {
      iVar5 = iVar9 + (int)uVar12 >> 1;
      lVar1 = *(longlong *)(DAT_141d7a0d8 + (longlong)iVar5 * 8);
      if (*(int *)(lVar1 + 0x58) == param_2) break;
      if (param_2 < *(int *)(lVar1 + 0x58)) {
        iVar9 = iVar5 + -1;
      }
      else {
        uVar12 = (ulonglong)(iVar5 + 1);
      }
      if (iVar9 < (int)uVar12) {
        return;
      }
    }
    bVar2 = false;
    iVar9 = (int)(*(longlong *)(lVar1 + 0x110) - *(longlong *)(lVar1 + 0x108) >> 2) + -1;
    lVar7 = (longlong)iVar9;
    lVar8 = DAT_141c53718;
    if (-1 < iVar9) {
      do {
        iVar9 = *(int *)(*(longlong *)(lVar1 + 0x108) + lVar7 * 4);
        lVar4 = DAT_141c53720 - lVar8 >> 3;
        if (((lVar4 != 0) && (iVar9 != -1)) && (iVar5 = (int)lVar4 + -1, iVar10 = 0, -1 < iVar5)) {
          do {
            iVar3 = iVar5 + iVar10 >> 1;
            lVar4 = *(longlong *)(lVar8 + (longlong)iVar3 * 8);
            if (*(int *)(lVar4 + 4) == iVar9) {
              if (lVar4 != 0) {
                plVar6 = *(longlong **)(lVar4 + 0x1018);
                uVar12 = (ulonglong)
                         ((longlong)*(longlong **)(lVar4 + 0x1020) + (7 - (longlong)plVar6)) >> 3;
                if (*(longlong **)(lVar4 + 0x1020) < plVar6) {
                  uVar12 = uVar13;
                }
                uVar11 = uVar13;
                if (uVar12 != 0) {
                  do {
                    lVar8 = *plVar6;
                    if ((*(short *)(lVar8 + 4) - 1U & 0xfffb) == 0) {
                      if (*(int *)(lVar8 + 8) == *(int *)(lVar1 + 0x58)) {
                        bVar2 = true;
                      }
                    }
                    else {
                      *(undefined4 *)(lVar8 + 8) = 0xffffffff;
                    }
                    plVar6 = plVar6 + 1;
                    uVar11 = uVar11 + 1;
                    lVar8 = DAT_141c53718;
                  } while (uVar11 < uVar12);
                }
              }
              break;
            }
            if (iVar9 < *(int *)(lVar4 + 4)) {
              iVar5 = iVar3 + -1;
            }
            else {
              iVar10 = iVar3 + 1;
            }
          } while (iVar10 <= iVar5);
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      if (bVar2) {
        return;
      }
    }
    if (*(int *)(lVar1 + 0x3c) == -1) {
      *(undefined4 *)(lVar1 + 0x3c) = DAT_1416b1980;
      *(undefined4 *)(lVar1 + 0x44) = DAT_1416b1974;
    }
  }
  return;
}

