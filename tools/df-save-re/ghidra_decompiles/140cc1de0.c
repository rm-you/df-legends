// FUN_140cc1de0 @ 140cc1de0
// callees:


longlong FUN_140cc1de0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  if (param_2 != -1) {
    lVar2 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if (lVar2 != 0) {
      iVar7 = 0;
      iVar5 = (int)lVar2 + -1;
      if (-1 < iVar5) {
        do {
          iVar3 = iVar5 + iVar7 >> 1;
          lVar2 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar3 * 8);
          if (*(int *)(lVar2 + 0xe0) == param_2) {
            if (lVar2 != 0) {
              iVar7 = *(int *)(lVar2 + 0xd8);
              iVar5 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
              if (iVar5 == 0) {
                return 0;
              }
              if (iVar7 == -1) {
                return 0;
              }
              iVar5 = iVar5 + -1;
              iVar3 = 0;
              if (iVar5 < 0) {
                return 0;
              }
              do {
                iVar4 = iVar3 + iVar5 >> 1;
                lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar4 * 8);
                iVar1 = *(int *)(lVar2 + 0x130);
                if (iVar1 == iVar7) {
                  return lVar2;
                }
                if (iVar7 < iVar1) {
                  iVar5 = iVar4 + -1;
                }
                else {
                  iVar3 = iVar4 + 1;
                }
              } while (iVar3 <= iVar5);
              return 0;
            }
            break;
          }
          if (param_2 < *(int *)(lVar2 + 0xe0)) {
            iVar5 = iVar3 + -1;
          }
          else {
            iVar7 = iVar3 + 1;
          }
        } while (iVar7 <= iVar5);
      }
    }
    lVar2 = *param_1;
    iVar5 = (int)(param_1[1] - lVar2 >> 3) + -1;
    if (-1 < iVar5) {
      lVar6 = (longlong)iVar5;
      plVar8 = (longlong *)(lVar2 + lVar6 * 8);
      do {
        if (*(int *)(*plVar8 + 0xc10) == param_2) {
          return *(longlong *)(lVar2 + (longlong)iVar5 * 8);
        }
        iVar5 = iVar5 + -1;
        plVar8 = plVar8 + -1;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
  }
  return 0;
}

