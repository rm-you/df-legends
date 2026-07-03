// FUN_14060dfb0 @ 14060dfb0
// callees:
//   -> 1400048f0 FUN_1400048f0
//   -> 14060e430 FUN_14060e430


void FUN_14060dfb0(short param_1,short param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  
  sVar8 = param_2;
  uVar6 = FUN_1400048f0(&DAT_141c53470,param_1,param_2,param_3);
  if (((((((uVar6 & 0x20) != 0) && (-1 < param_1)) && (param_1 < DAT_141d69554)) &&
       (((-1 < sVar8 && (sVar8 < DAT_141d69558)) &&
        ((-1 < param_3 && ((param_3 < DAT_141d6955c && (DAT_141d69520 != 0)))))))) &&
      (lVar2 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(DAT_141d69520 + ((longlong)param_1 >> 4) * 8) +
                  ((longlong)sVar8 >> 4) * 8) + (longlong)param_3 * 8), lVar2 != 0)) &&
     (iVar4 = (int)(*(longlong *)(lVar2 + 0x58) - *(longlong *)(lVar2 + 0x50) >> 2) + -1,
     lVar7 = (longlong)iVar4, lVar10 = DAT_141c67368, -1 < iVar4)) {
    do {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x50) + lVar7 * 4);
      iVar4 = (int)(DAT_141c67370 - lVar10 >> 3);
      if ((iVar4 != 0) && (iVar1 != -1)) {
        iVar4 = iVar4 + -1;
        iVar9 = 0;
        if (-1 < iVar4) {
          do {
            iVar5 = iVar9 + iVar4 >> 1;
            lVar3 = *(longlong *)(lVar10 + (longlong)iVar5 * 8);
            if (*(int *)(lVar3 + 0x1c) == iVar1) {
              if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 1) != 0)) &&
                  (*(short *)(lVar3 + 8) == param_1)) &&
                 ((*(short *)(lVar3 + 10) == param_2 && (*(short *)(lVar3 + 0xc) == param_3)))) {
                FUN_14060e430();
                lVar10 = DAT_141c67368;
              }
              break;
            }
            if (iVar1 < *(int *)(lVar3 + 0x1c)) {
              iVar4 = iVar5 + -1;
            }
            else {
              iVar9 = iVar5 + 1;
            }
          } while (iVar9 <= iVar4);
        }
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}

