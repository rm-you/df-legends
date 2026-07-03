// FUN_140c13c60 @ 140c13c60
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1400512a0 FUN_1400512a0
//   -> 140dfb5c4 operator_new
//   -> 140c142e0 FUN_140c142e0


ulonglong FUN_140c13c60(longlong param_1,short param_2,int param_3)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong in_RAX;
  longlong lVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  lVar6 = DAT_141d6dd50;
  if ((param_2 == -1) || (param_3 < 1)) {
    return in_RAX & 0xffffffffffffff00;
  }
  sVar2 = *(short *)(param_1 + 0x86);
  sVar3 = *(short *)(param_1 + 0x80);
  if (-1 < sVar3) {
    uVar12 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
    if (((ulonglong)(longlong)sVar3 < uVar12) && (-1 < sVar2)) {
      lVar4 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar3 * 8);
      in_RAX = *(longlong *)(lVar4 + 0x180) - *(longlong *)(lVar4 + 0x178) >> 3;
      if (((ulonglong)(longlong)sVar2 < in_RAX) &&
         (in_RAX = FUN_14000d840(*(longlong *)(*(longlong *)(lVar4 + 0x178) + (longlong)sVar2 * 8) +
                                 0x6a8,0x3a), (char)in_RAX != '\0')) {
        iVar8 = param_3;
        if (((-1 < sVar3) && ((ulonglong)(longlong)sVar3 < uVar12)) && (-1 < sVar2)) {
          lVar6 = *(longlong *)(lVar6 + (longlong)sVar3 * 8);
          if (((ulonglong)(longlong)sVar2 <
               (ulonglong)(*(longlong *)(lVar6 + 0x180) - *(longlong *)(lVar6 + 0x178) >> 3)) &&
             (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x178) + (longlong)sVar2 * 8), lVar6 != 0)
             ) {
            in_RAX = (ulonglong)param_2;
            piVar1 = (int *)(lVar6 + (in_RAX + 0x230) * 4);
            iVar11 = *piVar1;
            if (iVar11 == -1) goto LAB_140c14090;
            if (iVar11 < 100) {
              iVar8 = (iVar11 * param_3) / 100;
              if ((iVar8 == 0) && (param_3 < 100)) {
                for (; param_3 != 0; param_3 = param_3 + -1) {
                  uVar5 = FUN_1409fc0c0();
                  if ((int)((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) / 0x147ae15) < *piVar1) {
                    iVar8 = iVar8 + 1;
                  }
                }
              }
            }
            else if ((100 < iVar11) && (iVar8 = (iVar11 * param_3) / 100, iVar8 == param_3)) {
              for (; param_3 != 0; param_3 = param_3 + -1) {
                uVar5 = FUN_1409fc0c0();
                if ((int)((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x147ae15 + 100) < *piVar1) {
                  iVar8 = iVar8 + 1;
                }
                uVar5 = FUN_1409fc0c0();
                if ((int)((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x147ae15 + 200) < *piVar1) {
                  iVar8 = iVar8 + 1;
                }
                uVar5 = FUN_1409fc0c0();
                if ((int)((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x147ae15 + 300) < *piVar1) {
                  iVar8 = iVar8 + 1;
                }
                uVar5 = FUN_1409fc0c0();
                if ((int)((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x147ae15 + 400) < *piVar1) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
          }
        }
        uVar12 = 0;
        lVar6 = FUN_1400512a0(param_2);
        if (lVar6 == 0) {
          psVar7 = operator_new(0x20);
          iVar11 = 0;
          psVar7[2] = 0;
          psVar7[3] = 0;
          psVar7[4] = 0;
          psVar7[5] = 0;
          psVar7[6] = 0;
          psVar7[7] = 0;
          psVar7[8] = 0;
          psVar7[9] = 0;
          psVar7[10] = 0;
          psVar7[0xb] = 0;
          psVar7[0xc] = 0;
          psVar7[0xd] = 0;
          psVar7[0xe] = 0;
          psVar7[0xf] = 0;
          *psVar7 = param_2;
          psVar7[2] = 0;
          psVar7[3] = 0;
          *(int *)(psVar7 + 4) = iVar8;
          if (499 < iVar8) {
            do {
              iVar8 = iVar8 + (-5 - iVar11) * 100;
              if (iVar11 < 3000) {
                iVar11 = iVar11 + 1;
                uVar12 = 1;
              }
            } while ((iVar11 + 5) * 100 <= iVar8);
            *(int *)(psVar7 + 2) = iVar11;
            *(int *)(psVar7 + 4) = iVar8;
          }
          FUN_140c142e0(psVar7,param_1 + 0x218);
          return uVar12;
        }
        *(undefined4 *)(lVar6 + 0xc) = 0;
        if (0 < *(int *)(lVar6 + 0x14)) {
          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + -1;
        }
        uVar5 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar5) {
          uVar5 = uVar5 - 1;
          *(uint *)(lVar6 + 0x18) = uVar5;
        }
        iVar11 = *(int *)(lVar6 + 0x10);
        if (0 < iVar11) {
          iVar9 = (iVar8 >> 1) + 1;
          uVar5 = -(iVar9 >> 0x1f);
          iVar10 = iVar9 / 10 + 1;
          if (iVar11 < iVar10) {
            uVar5 = iVar11 * 5;
            iVar9 = iVar11 * 10 + -10;
            iVar10 = iVar11;
          }
          *(int *)(lVar6 + 0x10) = iVar11 - iVar10;
          iVar8 = iVar8 - iVar9;
        }
        in_RAX = (ulonglong)uVar5;
        if (0 < iVar8) {
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + iVar8;
          iVar8 = *(int *)(lVar6 + 4);
          iVar11 = *(int *)(lVar6 + 8);
          if (iVar11 < (iVar8 + 5) * 100) {
            return 0;
          }
          do {
            iVar11 = iVar11 + (-5 - iVar8) * 100;
            if (iVar8 < 3000) {
              iVar8 = iVar8 + 1;
              uVar12 = 1;
            }
          } while ((iVar8 + 5) * 100 <= iVar11);
          *(int *)(lVar6 + 8) = iVar11;
          *(int *)(lVar6 + 4) = iVar8;
          return uVar12;
        }
      }
    }
  }
LAB_140c14090:
  return in_RAX & 0xffffffffffffff00;
}

