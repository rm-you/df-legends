// FUN_140de9940 @ 140de9940
// callees:
//   -> 140004830 FUN_140004830
//   -> 140cf0f90 FUN_140cf0f90
//   -> 140d89d60 FUN_140d89d60
//   -> 14000d840 FUN_14000d840
//   -> 140087df0 FUN_140087df0


undefined8 FUN_140de9940(undefined8 param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short *psVar9;
  int *piVar10;
  short *psVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined2 uVar19;
  longlong lVar20;
  int iVar21;
  
  sVar5 = FUN_140004830(&DAT_141c53470);
  if ((sVar5 == 0x22) && (lVar6 = FUN_140cf0f90(), lVar8 = DAT_141d6dc10, lVar6 != 0)) {
    sVar5 = *(short *)(lVar6 + 2);
    uVar12 = (ulonglong)sVar5;
    if ((-1 < sVar5) &&
       ((uVar15 = DAT_141d6dc18 - DAT_141d6dc10 >> 3, uVar12 < uVar15 &&
        (lVar6 = *(longlong *)(DAT_141d6dc10 + uVar12 * 8), lVar6 != 0)))) {
      if ((sVar5 < 0) || (uVar15 <= uVar12)) {
        uVar14 = 0xffffffff;
        uVar19 = 0xffff;
      }
      else {
        uVar19 = *(undefined2 *)(lVar6 + 0x268);
        uVar14 = *(undefined4 *)(lVar6 + 0x27c);
      }
      lVar7 = FUN_140d89d60(&DAT_141c53470,uVar19,uVar14);
      if ((((((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x298))) &&
            ((**(byte **)(lVar7 + 0x290) & 8) != 0)) ||
           (((lVar7 = FUN_140d89d60(&DAT_141c53470,uVar19,uVar14), lVar7 != 0 &&
             (0 < *(int *)(lVar7 + 0x298))) && ((**(byte **)(lVar7 + 0x290) & 0x10) != 0)))) ||
          ((-1 < sVar5 &&
           (((uVar12 < uVar15 &&
             (cVar4 = FUN_14000d840(*(longlong *)(lVar8 + uVar12 * 8) + 0x40,0xc), cVar4 != '\0'))
            || ((-1 < sVar5 &&
                (((uVar12 < uVar15 &&
                  (cVar4 = FUN_14000d840(*(longlong *)(lVar8 + uVar12 * 8) + 0x40,0xd),
                  cVar4 != '\0')) ||
                 ((-1 < sVar5 &&
                  (((uVar12 < uVar15 &&
                    (cVar4 = FUN_14000d840(*(longlong *)(lVar8 + uVar12 * 8) + 0x40,9),
                    cVar4 != '\0')) ||
                   ((-1 < sVar5 &&
                    (((uVar12 < uVar15 &&
                      (cVar4 = FUN_14000d840(*(longlong *)(lVar8 + uVar12 * 8) + 0x40,8),
                      cVar4 != '\0')) ||
                     ((-1 < sVar5 &&
                      ((uVar12 < uVar15 &&
                       (cVar4 = FUN_14000d840(*(longlong *)(lVar8 + uVar12 * 8) + 0x40,10),
                       cVar4 != '\0')))))))))))))))))))))) ||
         ((lVar8 = FUN_140d89d60(&DAT_141c53470,uVar19,uVar14), lVar8 != 0 &&
          ((*(longlong *)(lVar8 + 0x350) - *(longlong *)(lVar8 + 0x348) >> 3 != 0 ||
           (*(longlong *)(lVar8 + 0x4a8) - *(longlong *)(lVar8 + 0x4a0) >> 3 != 0)))))) {
        return 1;
      }
      iVar16 = (int)param_3;
      iVar21 = 0;
      plVar3 = *(longlong **)(lVar6 + 0x610);
      iVar18 = (int)((0x19f58c5dU -
                      ((iVar16 + 3) * (int)param_2 + 5) *
                      ((iVar16 + 7) * iVar16 * 0x17da48e3 + 0x114478ac) & 0x3fffffff) % 2000 +
                    DAT_1416b1974) % 0x62700;
      for (plVar13 = *(longlong **)(lVar6 + 0x608); plVar13 < plVar3; plVar13 = plVar13 + 1) {
        lVar8 = *plVar13;
        sVar5 = *(short *)(lVar8 + 0x100);
        if (sVar5 == -1) goto LAB_140de9e13;
        iVar1 = *(int *)(lVar8 + 0x128);
        if (iVar1 == -1) {
LAB_140de9c4a:
          lVar6 = FUN_140087df0(DAT_141d6cfd0,
                                (DAT_141d69564 + iVar16 / 0x30) * *(int *)(DAT_141d6cfd0 + 0xa0) *
                                0x10 + (int)param_2 / 0x30 + DAT_141d69560);
          if (lVar6 != 0) {
            psVar11 = *(short **)(lVar6 + 0x120);
            piVar10 = *(int **)(lVar6 + 0x180);
            if (psVar11 < *(short **)(lVar6 + 0x128)) {
              psVar9 = *(short **)(lVar6 + 0x138);
              lVar7 = *(longlong *)(lVar6 + 0x150) - (longlong)psVar9;
              lVar20 = *(longlong *)(lVar6 + 0x168) - (longlong)piVar10;
              lVar17 = *(longlong *)(lVar6 + 0x198) - (longlong)piVar10;
              do {
                if ((((*psVar11 == param_2 % 0x30) &&
                     (*psVar9 == (short)(param_3 + (short)(iVar16 / 0x30) * -0x30))) &&
                    (*(short *)((longlong)psVar9 + lVar7) == (short)((short)DAT_141d69568 + param_4)
                    )) && (((*(int *)(lVar20 + (longlong)piVar10) == iVar21 &&
                            (*(int *)(lVar8 + 0x134) <= *piVar10)) &&
                           (*(int *)(lVar17 + (longlong)piVar10) == DAT_1416b1980))))
                goto LAB_140de9e13;
                psVar11 = psVar11 + 1;
                psVar9 = psVar9 + 1;
                piVar10 = piVar10 + 1;
              } while (psVar11 < *(short **)(lVar6 + 0x128));
              sVar5 = *(short *)(lVar8 + 0x100);
            }
          }
          if (((sVar5 == 0x34) &&
              (lVar6 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(lVar8 + 0x104),
                                     *(undefined4 *)(lVar8 + 0x108)), lVar6 != 0)) &&
             (0 < *(int *)(lVar6 + 0x298))) {
            if ((**(byte **)(lVar6 + 0x290) & 8) != 0) {
              return 1;
            }
            if ((0 < *(int *)(lVar6 + 0x298)) && ((**(byte **)(lVar6 + 0x290) & 0x10) != 0)) {
              return 1;
            }
          }
          if ((((sVar5 == 0x37) &&
               (lVar8 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(lVar8 + 0x104),
                                      *(undefined4 *)(lVar8 + 0x108)), lVar8 != 0)) &&
              (4 < *(int *)(lVar8 + 0x298))) &&
             ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 4) & 0x40) != 0)) {
            return 1;
          }
        }
        else {
          iVar2 = *(int *)(lVar8 + 300);
          if (iVar2 < iVar1) {
            if ((iVar2 <= iVar18) || (iVar1 <= iVar18)) goto LAB_140de9c4a;
          }
          else if ((iVar1 <= iVar18) && (iVar18 <= iVar2)) goto LAB_140de9c4a;
        }
LAB_140de9e13:
        iVar21 = iVar21 + 1;
      }
    }
  }
  return 0;
}

