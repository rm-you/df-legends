// FUN_140cc94a0 @ 140cc94a0
// callees:
//   -> 140c7fb40 FUN_140c7fb40
//   -> 140d89d60 FUN_140d89d60
//   -> 1407f2a40 FUN_1407f2a40
//   -> 14014ea60 FUN_14014ea60
//   -> 1402b9d70 FUN_1402b9d70
//   -> 14007be00 FUN_14007be00


void FUN_140cc94a0(longlong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  short sVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  short sVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined8 local_res20;
  
  piVar20 = *(int **)(param_1 + 0x8c8);
  *(undefined8 *)(param_1 + 0x136c) = 0;
  iVar24 = *(int *)(param_1 + 0x5e4) - *(int *)(param_1 + 0x5f4);
  if (piVar20 != (int *)0x0) {
    iVar24 = (*piVar20 * iVar24) / 100 + piVar20[6];
  }
  sVar15 = *(short *)(param_1 + 0xa4);
  if (iVar24 < 0) {
    iVar24 = 0;
  }
  if (-1 < sVar15) {
    uVar10 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
    if (((((ulonglong)(longlong)sVar15 < uVar10) &&
         (lVar16 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar15 * 8), lVar16 != 0)) &&
        (sVar19 = *(short *)(param_1 + 300), -1 < sVar15)) &&
       (((ulonglong)(longlong)sVar15 < uVar10 && (-1 < sVar19)))) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar15 * 8);
      if (((ulonglong)(longlong)sVar19 <
           (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) &&
         (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar19 * 8), lVar3 != 0)) {
        sVar15 = (short)((longlong)
                         (ulonglong)
                         (uint)((*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8)) >> 3)
                 + -1;
        if (-1 < sVar15) {
          lVar18 = (longlong)sVar15 * 8;
          lVar22 = (longlong)sVar15 * 4;
          do {
            if ((*(byte *)(lVar22 + *(longlong *)(param_1 + 0x4d0)) & 2) == 0) {
              FUN_140c7fb40(param_1);
              iVar9 = *(int *)(lVar22 + *(longlong *)(param_1 + 0x12a0));
              iVar7 = (int)(((longlong)*(int *)(param_1 + 0x690) * (longlong)iVar9) /
                           (longlong)(int)(*(longlong **)(param_1 + 0x5d8))[0xc]);
              if (((iVar7 < 1) && (0 < iVar9)) && (0 < *(int *)(param_1 + 0x690))) {
                iVar7 = 1;
              }
              lVar23 = *(longlong *)(lVar18 + **(longlong **)(param_1 + 0x5d8));
              iVar9 = *(int *)(lVar23 + 0x70);
              iVar8 = (short)((longlong)
                              (ulonglong)(uint)(*(int *)(lVar23 + 0x60) - *(int *)(lVar23 + 0x58))
                             >> 3) + -1;
              lVar23 = (longlong)iVar8;
              if (-1 < iVar8) {
                do {
                  lVar12 = *(longlong *)
                            (*(longlong *)
                              (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar18) + 0x58) +
                            lVar23 * 8);
                  iVar8 = *(int *)(lVar12 + 0x20);
                  if ((-1 < iVar8) &&
                     ((ulonglong)(longlong)iVar8 <
                      (ulonglong)
                      (*(longlong *)(lVar16 + 0x24d0) - *(longlong *)(lVar16 + 0x24c8) >> 3))) {
                    lVar4 = *(longlong *)(*(longlong *)(lVar16 + 0x24c8) + (longlong)iVar8 * 8);
                    sVar19 = *(short *)(lVar4 + 0x11c);
                    if ((sVar19 != 2) &&
                       (((*(byte *)(*(longlong *)(param_1 + 0x518) +
                                   (longlong)*(int *)(lVar12 + 0x68) * 4) & 1) == 0 &&
                        (lVar11 = FUN_140d89d60(&DAT_141c53470,*(undefined2 *)(lVar4 + 0xd0),
                                                *(undefined4 *)(lVar4 + 0xd4)), lVar11 != 0)))) {
                      lVar17 = 100;
                      iVar8 = (int)(*(longlong *)(lVar12 + 0x58) - *(longlong *)(lVar12 + 0x50) >> 2
                                   ) + -1;
                      if (-1 < iVar8) {
                        lVar21 = (longlong)iVar8;
                        piVar20 = (int *)(*(longlong *)(lVar12 + 0x50) + lVar21 * 4);
                        do {
                          iVar8 = *piVar20;
                          uVar10 = (ulonglong)iVar8;
                          puVar5 = *(ushort **)
                                    (*(longlong *)(lVar3 + 0x15e8) +
                                    (longlong)*(int *)(*(longlong *)(lVar3 + 0x1600) + uVar10 * 4) *
                                    8);
                          if (iVar8 < 0) {
LAB_140cc98fd:
                            if (*puVar5 == 10) {
                              if (iVar8 < 0) {
                                iVar8 = 100;
                              }
                              else {
                                iVar8 = *(int *)(*(longlong *)(param_1 + 0x6e0) + uVar10 * 4);
                                if (uVar10 < (ulonglong)
                                             (*(longlong *)(param_1 + 0x8b0) -
                                              *(longlong *)(param_1 + 0x8a8) >> 2)) {
                                  iVar8 = (*(int *)(*(longlong *)(param_1 + 0x8a8) + uVar10 * 4) *
                                          iVar8) / 100;
                                }
                              }
                              lVar17 = (longlong)iVar8;
                            }
                          }
                          else {
                            iVar14 = *(int *)(*(longlong *)(param_1 + 0x6e0) + uVar10 * 4);
                            if (uVar10 < (ulonglong)
                                         (*(longlong *)(param_1 + 0x8b0) -
                                          *(longlong *)(param_1 + 0x8a8) >> 2)) {
                              iVar14 = (*(int *)(*(longlong *)(param_1 + 0x8a8) + uVar10 * 4) *
                                       iVar14) / 100;
                            }
                            if (iVar14 != 0) goto LAB_140cc98fd;
                            uVar1 = *puVar5;
                            if ((uVar1 < 3) || (uVar1 == 10)) goto LAB_140cc980c;
                          }
                          piVar20 = piVar20 + -1;
                          lVar21 = lVar21 + -1;
                        } while (-1 < lVar21);
                        sVar19 = *(short *)(lVar4 + 0x11c);
                      }
                      if ((*(int *)(lVar4 + 0x28) < 1) || ((**(byte **)(lVar4 + 0x20) & 2) == 0)) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = 1;
                      }
                      if ((*(int *)(lVar4 + 0x28) < 1) || ((**(byte **)(lVar4 + 0x20) & 1) == 0)) {
                        uVar6 = 0;
                      }
                      else {
                        uVar6 = 1;
                      }
                      iVar8 = FUN_1402b9d70(&DAT_141d6dd30,*(undefined2 *)(param_1 + 0xa4),
                                            *(undefined2 *)(param_1 + 300),
                                            *(undefined4 *)(lVar12 + 0x38),iVar24,
                                            *(undefined4 *)(param_1 + 0x980),uVar6,uVar13);
                      lVar12 = ((longlong)iVar8 * (longlong)iVar7) / (longlong)iVar9;
                      if (((lVar12 < 1) && (0 < (longlong)iVar7)) && (0 < (longlong)iVar8)) {
                        lVar12 = 1;
                      }
                      if (lVar17 != 100) {
                        lVar12 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar12 * lVar17),8) +
                                 lVar12 * lVar17;
                        lVar12 = (lVar12 >> 6) - (lVar12 >> 0x3f);
                      }
                      local_res20 = 0;
                      if (sVar19 == 0) {
LAB_140cc9a51:
                        uVar2 = *(undefined4 *)(lVar11 + 0x90);
LAB_140cc9a59:
                        FUN_14007be00(&local_res20,lVar12,uVar2);
                      }
                      else {
                        if (sVar19 == 1) {
                          uVar2 = *(undefined4 *)(lVar11 + 0x94);
                          goto LAB_140cc9a59;
                        }
                        if ((int)sVar19 - 3U < 3) goto LAB_140cc9a51;
                      }
                      *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + (int)local_res20;
                      *(int *)(param_1 + 0x1370) = *(int *)(param_1 + 0x1370) + local_res20._4_4_;
                      iVar8 = *(int *)(param_1 + 0x1370);
                      if (iVar8 < 0xf4241) {
                        if (iVar8 < 0) {
                          *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) - -iVar8 / 1000000
                          ;
                          iVar8 = -(-iVar8 % 1000000);
                          *(int *)(param_1 + 0x1370) = iVar8;
                          if (iVar8 < 0) {
                            *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + -1;
                            *(int *)(param_1 + 0x1370) = iVar8 + 1000000;
                          }
                        }
                      }
                      else {
                        *(int *)(param_1 + 0x136c) = iVar8 / 1000000 + *(int *)(param_1 + 0x136c);
                        *(int *)(param_1 + 0x1370) = iVar8 % 1000000;
                      }
                    }
                  }
LAB_140cc980c:
                  lVar23 = lVar23 + -1;
                } while (-1 < lVar23);
              }
            }
            sVar15 = sVar15 + -1;
            lVar22 = lVar22 + -4;
            lVar18 = lVar18 + -8;
          } while (-1 < sVar15);
        }
        iVar24 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) + -1;
        lVar16 = (longlong)iVar24;
        if (-1 < iVar24) {
          do {
            lVar3 = **(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar16 * 8);
            if ((*(uint *)(lVar3 + 0x10) & 0x20000000) == 0) {
              FUN_1407f2a40(lVar3);
            }
            iVar24 = *(int *)(lVar3 + 0x74);
            iVar9 = FUN_14014ea60(lVar3);
            *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + iVar9;
            *(int *)(param_1 + 0x1370) = *(int *)(param_1 + 0x1370) + iVar24;
            iVar24 = *(int *)(param_1 + 0x1370);
            if (iVar24 < 0xf4241) {
              if (iVar24 < 0) {
                *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) - -iVar24 / 1000000;
                iVar24 = -(-iVar24 % 1000000);
                *(int *)(param_1 + 0x1370) = iVar24;
                if (iVar24 < 0) {
                  *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + -1;
                  *(int *)(param_1 + 0x1370) = iVar24 + 1000000;
                }
              }
            }
            else {
              *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + iVar24 / 1000000;
              *(int *)(param_1 + 0x1370) = iVar24 % 1000000;
            }
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
        }
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x80;
      }
    }
  }
  return;
}

