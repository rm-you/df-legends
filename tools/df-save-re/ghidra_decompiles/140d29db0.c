// FUN_140d29db0 @ 140d29db0
// callees:
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140050d90 FUN_140050d90
//   -> 14049f0b0 FUN_14049f0b0
//   -> 14049f860 FUN_14049f860
//   -> 14000c390 FUN_14000c390
//   -> 140050b50 FUN_140050b50
//   -> 14000c460 FUN_14000c460
//   -> 140518960 FUN_140518960
//   -> 1404a8af0 FUN_1404a8af0
//   -> 14049b380 FUN_14049b380
//   -> 140050070 FUN_140050070
//   -> 140050410 FUN_140050410
//   -> 1400b3970 FUN_1400b3970
//   -> 1400b3770 FUN_1400b3770


void FUN_140d29db0(longlong param_1,undefined4 param_2)

{
  short *psVar1;
  int **ppiVar2;
  int **ppiVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 *puVar20;
  short sVar21;
  char *pcVar22;
  undefined8 *puVar23;
  short sVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ushort uVar27;
  int *piVar28;
  short *psVar29;
  int *piVar30;
  longlong lVar31;
  ulonglong *puVar32;
  int *piVar33;
  short sVar34;
  short sVar35;
  uint uVar36;
  longlong local_res8;
  undefined4 local_res10;
  int *local_res18;
  short local_res20 [4];
  short local_76;
  int local_64;
  longlong local_58;
  
  local_64 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x2b0) - *(longlong *)(param_1 + 0x2a8) >> 3 != 0) {
    local_58 = 0;
    do {
      lVar31 = local_res8;
      uVar25 = 0;
      psVar1 = *(short **)(*(longlong *)(local_res8 + 0x2a8) + local_58 * 8);
      uVar26 = uVar25;
      if (*(longlong *)(psVar1 + 0x74) - *(longlong *)(psVar1 + 0x70) >> 2 != 0) {
        do {
          piVar30 = (int *)0x0;
          iVar11 = *(int *)(uVar25 + *(longlong *)(psVar1 + 0x70));
          piVar28 = piVar30;
          if (((*(longlong *)(lVar31 + 0x126c40) - *(longlong *)(lVar31 + 0x126c38) &
               0xfffffffffffffff8U) != 0) && (iVar11 != -1)) {
            iVar19 = (int)(*(longlong *)(lVar31 + 0x126c40) - *(longlong *)(lVar31 + 0x126c38) >> 3)
                     + -1;
            piVar33 = piVar30;
            if (-1 < iVar19) {
              do {
                iVar16 = iVar19 + (int)piVar33 >> 1;
                piVar28 = *(int **)(*(longlong *)(lVar31 + 0x126c38) + (longlong)iVar16 * 8);
                iVar17 = piVar28[0x38];
                if (iVar17 == iVar11) break;
                if (iVar11 < iVar17) {
                  iVar19 = iVar16 + -1;
                }
                else {
                  piVar33 = (int *)(ulonglong)(iVar16 + 1);
                }
                piVar28 = piVar30;
              } while ((int)piVar33 <= iVar19);
            }
          }
          local_res18 = piVar28;
          if (piVar28 != (int *)0x0) {
            puVar32 = (ulonglong *)(psVar1 + 0xa08);
            ppiVar2 = *(int ***)(psVar1 + 0xa0c);
            if ((&local_res18 < ppiVar2) && (ppiVar3 = (int **)*puVar32, ppiVar3 <= &local_res18)) {
              if (ppiVar2 == *(int ***)(psVar1 + 0xa10)) {
                FUN_14000c2d0(puVar32,1);
              }
              if (*(undefined8 **)(psVar1 + 0xa0c) != (undefined8 *)0x0) {
                **(undefined8 **)(psVar1 + 0xa0c) =
                     *(undefined8 *)
                      (*puVar32 + ((longlong)local_res20 + (-8 - (longlong)ppiVar3) >> 3) * 8);
              }
            }
            else {
              if (ppiVar2 == *(int ***)(psVar1 + 0xa10)) {
                FUN_14000c2d0(puVar32,1);
              }
              if (*(undefined8 **)(psVar1 + 0xa0c) != (undefined8 *)0x0) {
                **(undefined8 **)(psVar1 + 0xa0c) = piVar28;
              }
            }
            *(longlong *)(psVar1 + 0xa0c) = *(longlong *)(psVar1 + 0xa0c) + 8;
          }
          uVar36 = (int)uVar26 + 1;
          uVar25 = uVar25 + 4;
          uVar26 = (ulonglong)uVar36;
        } while ((ulonglong)(longlong)(int)uVar36 <
                 (ulonglong)(*(longlong *)(psVar1 + 0x74) - *(longlong *)(psVar1 + 0x70) >> 2));
      }
      uVar25 = 0;
      uVar26 = uVar25;
      if (*(longlong *)(psVar1 + 0x884) - *(longlong *)(psVar1 + 0x880) >> 3 != 0) {
        do {
          iVar11 = 0;
          lVar31 = *(longlong *)(uVar26 + *(longlong *)(psVar1 + 0x880));
          if (*(int *)(lVar31 + 4) != -1) {
            iVar19 = (int)(*(longlong *)(psVar1 + 0x85c) - *(longlong *)(psVar1 + 0x858) >> 3) + -1;
            if (-1 < iVar19) {
LAB_140d29fc0:
              iVar16 = iVar19 + iVar11 >> 1;
              lVar14 = *(longlong *)(*(longlong *)(psVar1 + 0x858) + (longlong)iVar16 * 8);
              iVar17 = *(int *)(lVar14 + 0x20);
              if (iVar17 != *(int *)(lVar31 + 0xc)) goto code_r0x000140d29fd5;
              pcVar22 = (char *)(lVar14 + 0x328);
              psVar29 = psVar1 + 3000;
              lVar14 = 0x2a;
              do {
                if (*pcVar22 != '\0') {
                  FUN_140050d90(lVar31,psVar29);
                }
                psVar29 = psVar29 + 0xc;
                pcVar22 = pcVar22 + 1;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
            }
          }
LAB_140d2a020:
          uVar36 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar36;
          lVar31 = local_res8;
          uVar26 = uVar26 + 8;
        } while ((ulonglong)(longlong)(int)uVar36 <
                 (ulonglong)(*(longlong *)(psVar1 + 0x884) - *(longlong *)(psVar1 + 0x880) >> 3));
      }
      uVar25 = 0;
      uVar26 = uVar25;
      if (*(longlong *)(psVar1 + 0x8c) - *(longlong *)(psVar1 + 0x88) >> 2 != 0) {
        do {
          piVar28 = (int *)0x0;
          iVar11 = *(int *)(uVar25 + *(longlong *)(psVar1 + 0x88));
          if (iVar11 != -1) {
            iVar19 = (int)(*(longlong *)(lVar31 + 0x13c28) - *(longlong *)(lVar31 + 0x13c20) >> 3) +
                     -1;
            piVar30 = piVar28;
            piVar33 = piVar28;
            if (-1 < iVar19) {
              do {
                iVar16 = iVar19 + (int)piVar33 >> 1;
                piVar30 = *(int **)(*(longlong *)(lVar31 + 0x13c20) + (longlong)iVar16 * 8);
                iVar17 = *piVar30;
                if (iVar17 == iVar11) break;
                if (iVar11 < iVar17) {
                  iVar19 = iVar16 + -1;
                }
                else {
                  piVar33 = (int *)(ulonglong)(iVar16 + 1);
                }
                piVar30 = piVar28;
              } while ((int)piVar33 <= iVar19);
            }
            local_res18 = piVar30;
            if (piVar30 != (int *)0x0) {
              puVar32 = (ulonglong *)(psVar1 + 0xa14);
              ppiVar2 = *(int ***)(psVar1 + 0xa18);
              if ((&local_res18 < ppiVar2) && (ppiVar3 = (int **)*puVar32, ppiVar3 <= &local_res18))
              {
                if (ppiVar2 == *(int ***)(psVar1 + 0xa1c)) {
                  FUN_14000c2d0(puVar32,1);
                }
                if (*(undefined8 **)(psVar1 + 0xa18) != (undefined8 *)0x0) {
                  **(undefined8 **)(psVar1 + 0xa18) =
                       *(undefined8 *)
                        (*puVar32 + ((longlong)local_res20 + (-8 - (longlong)ppiVar3) >> 3) * 8);
                }
              }
              else {
                if (ppiVar2 == *(int ***)(psVar1 + 0xa1c)) {
                  FUN_14000c2d0(puVar32,1);
                }
                if (*(undefined8 **)(psVar1 + 0xa18) != (undefined8 *)0x0) {
                  **(undefined8 **)(psVar1 + 0xa18) = piVar30;
                }
              }
              *(longlong *)(psVar1 + 0xa18) = *(longlong *)(psVar1 + 0xa18) + 8;
            }
          }
          uVar36 = (int)uVar26 + 1;
          uVar25 = uVar25 + 4;
          uVar26 = (ulonglong)uVar36;
        } while ((ulonglong)(longlong)(int)uVar36 <
                 (ulonglong)(*(longlong *)(psVar1 + 0x8c) - *(longlong *)(psVar1 + 0x88) >> 2));
      }
      FUN_14049f0b0(psVar1);
      FUN_14049f860(psVar1);
      plVar18 = (longlong *)(psVar1 + 0xdf8);
      piVar30 = (int *)*plVar18;
      piVar28 = (int *)(psVar1 + 2);
      *(int **)(psVar1 + 0xdfc) = piVar30;
      if ((piVar28 < piVar30) && (piVar30 <= piVar28)) {
        if (piVar30 == *(int **)(psVar1 + 0xe00)) {
          FUN_14000c390(plVar18,1);
        }
        if (*(undefined4 **)(psVar1 + 0xdfc) != (undefined4 *)0x0) {
          **(undefined4 **)(psVar1 + 0xdfc) =
               *(undefined4 *)(*plVar18 + ((longlong)piVar28 - (longlong)piVar30 >> 2) * 4);
        }
      }
      else {
        if (piVar30 == *(int **)(psVar1 + 0xe00)) {
          FUN_14000c390(plVar18,1);
        }
        if (*(int **)(psVar1 + 0xdfc) != (int *)0x0) {
          **(int **)(psVar1 + 0xdfc) = *piVar28;
        }
      }
      *(longlong *)(psVar1 + 0xdfc) = *(longlong *)(psVar1 + 0xdfc) + 4;
      iVar11 = (int)(*(longlong *)(psVar1 + 0x5c) - *(longlong *)(psVar1 + 0x58) >> 3) + -1;
      lVar31 = (longlong)iVar11;
      if (-1 < iVar11) {
        do {
          psVar29 = *(short **)(*(longlong *)(psVar1 + 0x58) + lVar31 * 8);
          if (*psVar29 == 1) {
            FUN_140050b50(*(undefined4 *)(psVar29 + 2),plVar18);
          }
          lVar31 = lVar31 + -1;
        } while (-1 < lVar31);
      }
      lVar31 = local_res8;
      if (*psVar1 == 0) {
        if (*(longlong *)(*(longlong *)(local_res8 + 0x119b60) + 0x148) != 0) {
          sVar35 = *(short *)(*(longlong *)(local_res8 + 0x119b60) + 0x150) + -1;
          local_res18 = (int *)CONCAT62(local_res18._2_6_,sVar35);
          while (-1 < sVar35) {
            sVar24 = *(short *)(*(longlong *)(lVar31 + 0x119b60) + 0x152) + -1;
            local_res10._2_2_ = (undefined2)((uint)local_res10 >> 0x10);
            local_res10 = CONCAT22(local_res10._2_2_,sVar24);
            if (-1 < sVar24) {
              do {
                puVar20 = (undefined8 *)
                          ((longlong)sVar24 * 0x30 +
                          *(longlong *)
                           (*(longlong *)(*(longlong *)(lVar31 + 0x119b60) + 0x148) +
                           (longlong)sVar35 * 8));
                piVar30 = (int *)*puVar20;
                for (piVar33 = piVar30; piVar33 < (int *)puVar20[1]; piVar33 = piVar33 + 1) {
                  if (*piVar33 == *piVar28) {
                    if ((int)((longlong)piVar33 - (longlong)piVar30 >> 2) != -1) {
                      puVar32 = (ulonglong *)(psVar1 + 0xdb0);
                      ppiVar2 = *(int ***)(psVar1 + 0xdb4);
                      if ((&local_res18 < ppiVar2) &&
                         (ppiVar3 = (int **)*puVar32, ppiVar3 <= &local_res18)) {
                        if (ppiVar2 == *(int ***)(psVar1 + 0xdb8)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(undefined2 **)(psVar1 + 0xdb4) != (undefined2 *)0x0) {
                          **(undefined2 **)(psVar1 + 0xdb4) =
                               *(undefined2 *)
                                (*puVar32 +
                                ((longlong)local_res20 + (-8 - (longlong)ppiVar3) >> 1) * 2);
                        }
                      }
                      else {
                        if (ppiVar2 == *(int ***)(psVar1 + 0xdb8)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(short **)(psVar1 + 0xdb4) != (short *)0x0) {
                          **(short **)(psVar1 + 0xdb4) = sVar35;
                        }
                      }
                      *(longlong *)(psVar1 + 0xdb4) = *(longlong *)(psVar1 + 0xdb4) + 2;
                      puVar32 = (ulonglong *)(psVar1 + 0xdbc);
                      puVar5 = *(undefined4 **)(psVar1 + 0xdc0);
                      if ((&local_res10 < puVar5) &&
                         (puVar6 = (undefined4 *)*puVar32, puVar6 <= &local_res10)) {
                        if (puVar5 == *(undefined4 **)(psVar1 + 0xdc4)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(undefined2 **)(psVar1 + 0xdc0) != (undefined2 *)0x0) {
                          **(undefined2 **)(psVar1 + 0xdc0) =
                               *(undefined2 *)
                                (*puVar32 + ((longlong)&local_res10 - (longlong)puVar6 >> 1) * 2);
                        }
                      }
                      else {
                        if (puVar5 == *(undefined4 **)(psVar1 + 0xdc4)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(short **)(psVar1 + 0xdc0) != (short *)0x0) {
                          **(short **)(psVar1 + 0xdc0) = sVar24;
                        }
                      }
                      *(longlong *)(psVar1 + 0xdc0) = *(longlong *)(psVar1 + 0xdc0) + 2;
                    }
                    break;
                  }
                }
                sVar24 = sVar24 + -1;
                local_res10 = CONCAT22(local_res10._2_2_,sVar24);
              } while (-1 < sVar24);
            }
            sVar35 = sVar35 + -1;
            local_res18 = (int *)CONCAT62(local_res18._2_6_,sVar35);
          }
        }
        if ((*psVar1 == 0) && (*(longlong *)(*(longlong *)(local_res8 + 0x119b60) + 0x158) != 0)) {
          sVar35 = *(short *)(*(longlong *)(local_res8 + 0x119b60) + 0x160);
          lVar31 = local_res8;
          while (sVar35 = sVar35 + -1, local_res20[0] = sVar35, -1 < sVar35) {
            local_76 = *(short *)(*(longlong *)(lVar31 + 0x119b60) + 0x162) + -1;
            local_res10._2_2_ = (undefined2)((uint)local_res10 >> 0x10);
            local_res10 = CONCAT22(local_res10._2_2_,local_76);
            if (-1 < local_76) {
              do {
                puVar20 = (undefined8 *)
                          ((longlong)local_76 * 0x30 +
                          *(longlong *)
                           (*(longlong *)(*(longlong *)(lVar31 + 0x119b60) + 0x158) +
                           (longlong)sVar35 * 8));
                piVar28 = (int *)*puVar20;
                for (piVar30 = piVar28; piVar30 < (int *)puVar20[1]; piVar30 = piVar30 + 1) {
                  if (*piVar30 == *(int *)(psVar1 + 2)) {
                    if ((int)((longlong)piVar30 - (longlong)piVar28 >> 2) != -1) {
                      puVar32 = (ulonglong *)(psVar1 + 0xdc8);
                      psVar29 = *(short **)(psVar1 + 0xdcc);
                      if ((local_res20 < psVar29) &&
                         (psVar4 = (short *)*puVar32, psVar4 <= local_res20)) {
                        if (psVar29 == *(short **)(psVar1 + 0xdd0)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(undefined2 **)(psVar1 + 0xdcc) != (undefined2 *)0x0) {
                          **(undefined2 **)(psVar1 + 0xdcc) =
                               *(undefined2 *)
                                (*puVar32 + ((longlong)local_res20 - (longlong)psVar4 >> 1) * 2);
                        }
                      }
                      else {
                        if (psVar29 == *(short **)(psVar1 + 0xdd0)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(short **)(psVar1 + 0xdcc) != (short *)0x0) {
                          **(short **)(psVar1 + 0xdcc) = sVar35;
                        }
                      }
                      *(longlong *)(psVar1 + 0xdcc) = *(longlong *)(psVar1 + 0xdcc) + 2;
                      puVar32 = (ulonglong *)(psVar1 + 0xdd4);
                      puVar5 = *(undefined4 **)(psVar1 + 0xdd8);
                      if ((&local_res10 < puVar5) &&
                         (puVar6 = (undefined4 *)*puVar32, puVar6 <= &local_res10)) {
                        if (puVar5 == *(undefined4 **)(psVar1 + 0xddc)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(undefined2 **)(psVar1 + 0xdd8) != (undefined2 *)0x0) {
                          **(undefined2 **)(psVar1 + 0xdd8) =
                               *(undefined2 *)
                                (*puVar32 + ((longlong)&local_res10 - (longlong)puVar6 >> 1) * 2);
                        }
                      }
                      else {
                        if (puVar5 == *(undefined4 **)(psVar1 + 0xddc)) {
                          FUN_14000c460(puVar32,1);
                        }
                        if (*(short **)(psVar1 + 0xdd8) != (short *)0x0) {
                          **(short **)(psVar1 + 0xdd8) = local_76;
                        }
                      }
                      *(longlong *)(psVar1 + 0xdd8) = *(longlong *)(psVar1 + 0xdd8) + 2;
                      sVar24 = sVar35 * 0x10;
                      iVar19 = (int)sVar24;
                      sVar15 = local_76 << 4;
                      local_res18 = (int *)CONCAT62(local_res18._2_6_,sVar24);
                      iVar11 = iVar19 + 0x10;
                      while ((iVar19 < iVar11 &&
                             (iVar19 < *(int *)(*(longlong *)(lVar31 + 0x119b60) + 0xa0)))) {
                        iVar16 = (int)sVar15;
                        local_res10._2_2_ = (undefined2)((uint)local_res10 >> 0x10);
                        local_res10 = CONCAT22(local_res10._2_2_,sVar15);
                        iVar17 = iVar16 + 0x10;
                        sVar34 = sVar15;
                        while ((iVar16 < iVar17 &&
                               (iVar16 < *(int *)(*(longlong *)(lVar31 + 0x119b60) + 0xa4)))) {
                          cVar10 = FUN_140518960(psVar1,sVar24,sVar34);
                          if (cVar10 != '\0') {
                            sVar21 = sVar24 + -1;
                            if ((int)sVar21 <= iVar19 + 1) {
                              do {
                                uVar36 = (uint)(short)(sVar34 + -1);
                                lVar31 = local_res8;
                                uVar12 = uVar36;
                                while (local_res8 = lVar31, (int)uVar12 <= iVar16 + 1) {
                                  cVar10 = FUN_140518960(psVar1,sVar21,uVar36 & 0xffff);
                                  if (cVar10 == '\0') {
                                    puVar32 = (ulonglong *)(psVar1 + 0xde0);
                                    ppiVar2 = *(int ***)(psVar1 + 0xde4);
                                    if ((&local_res18 < ppiVar2) &&
                                       (ppiVar3 = (int **)*puVar32, ppiVar3 <= &local_res18)) {
                                      if (ppiVar2 == *(int ***)(psVar1 + 0xde8)) {
                                        FUN_14000c460(puVar32,1);
                                      }
                                      if (*(undefined2 **)(psVar1 + 0xde4) != (undefined2 *)0x0) {
                                        **(undefined2 **)(psVar1 + 0xde4) =
                                             *(undefined2 *)
                                              (*puVar32 +
                                              ((longlong)local_res20 + (-8 - (longlong)ppiVar3) >> 1
                                              ) * 2);
                                      }
                                    }
                                    else {
                                      if (ppiVar2 == *(int ***)(psVar1 + 0xde8)) {
                                        FUN_14000c460(puVar32,1);
                                      }
                                      if (*(short **)(psVar1 + 0xde4) != (short *)0x0) {
                                        **(short **)(psVar1 + 0xde4) = sVar24;
                                      }
                                    }
                                    *(longlong *)(psVar1 + 0xde4) =
                                         *(longlong *)(psVar1 + 0xde4) + 2;
                                    puVar32 = (ulonglong *)(psVar1 + 0xdec);
                                    puVar5 = *(undefined4 **)(psVar1 + 0xdf0);
                                    if ((&local_res10 < puVar5) &&
                                       (puVar6 = (undefined4 *)*puVar32, puVar6 <= &local_res10)) {
                                      if (puVar5 == *(undefined4 **)(psVar1 + 0xdf4)) {
                                        FUN_14000c460(puVar32,1);
                                      }
                                      if (*(undefined2 **)(psVar1 + 0xdf0) != (undefined2 *)0x0) {
                                        **(undefined2 **)(psVar1 + 0xdf0) =
                                             *(undefined2 *)
                                              (*puVar32 +
                                              ((longlong)&local_res10 - (longlong)puVar6 >> 1) * 2);
                                      }
                                      *(longlong *)(psVar1 + 0xdf0) =
                                           *(longlong *)(psVar1 + 0xdf0) + 2;
                                      iVar19 = (int)sVar24;
                                      lVar31 = local_res8;
                                    }
                                    else {
                                      if (puVar5 == *(undefined4 **)(psVar1 + 0xdf4)) {
                                        FUN_14000c460(puVar32,1);
                                      }
                                      if (*(short **)(psVar1 + 0xdf0) != (short *)0x0) {
                                        **(short **)(psVar1 + 0xdf0) = sVar34;
                                      }
                                      *(longlong *)(psVar1 + 0xdf0) =
                                           *(longlong *)(psVar1 + 0xdf0) + 2;
                                      iVar19 = (int)sVar24;
                                      lVar31 = local_res8;
                                    }
                                    goto LAB_140d2a6ca;
                                  }
                                  uVar27 = (short)uVar36 + 1;
                                  uVar36 = (uint)uVar27;
                                  lVar31 = local_res8;
                                  uVar12 = (uint)(short)uVar27;
                                }
                                sVar21 = sVar21 + 1;
                              } while ((int)sVar21 <= iVar19 + 1);
                              iVar19 = (int)sVar24;
                            }
                          }
LAB_140d2a6ca:
                          sVar34 = sVar34 + 1;
                          local_res10 = CONCAT22(local_res10._2_2_,sVar34);
                          iVar16 = (int)sVar34;
                        }
                        sVar24 = sVar24 + 1;
                        local_res18._2_6_ = (undefined6)((ulonglong)local_res18 >> 0x10);
                        local_res18 = (int *)CONCAT62(local_res18._2_6_,sVar24);
                        iVar19 = (int)sVar24;
                      }
                    }
                    break;
                  }
                }
                local_76 = local_76 + -1;
                local_res10 = CONCAT22(local_res10._2_2_,local_76);
              } while (-1 < local_76);
            }
          }
        }
      }
      FUN_1404a8af0(psVar1);
      FUN_14049b380(psVar1);
      iVar11 = *(int *)(psVar1 + 0x8f8);
      piVar28 = (int *)0x0;
      if (iVar11 != -1) {
        iVar19 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x1a0) - *(longlong *)(DAT_141d6cfd0 + 0x198)
                      >> 3) + -1;
        piVar33 = piVar28;
        piVar30 = piVar28;
        if (-1 < iVar19) {
          do {
            iVar16 = (int)piVar33 + iVar19 >> 1;
            piVar30 = *(int **)(*(longlong *)(DAT_141d6cfd0 + 0x198) + (longlong)iVar16 * 8);
            iVar17 = *piVar30;
            if (iVar17 == iVar11) break;
            if (iVar11 < iVar17) {
              iVar19 = iVar16 + -1;
            }
            else {
              piVar33 = (int *)(ulonglong)(iVar16 + 1);
            }
            piVar30 = piVar28;
          } while ((int)piVar33 <= iVar19);
        }
        *(int **)(psVar1 + 0xe14) = piVar30;
      }
      puVar20 = *(undefined8 **)(psVar1 + 0x68);
      for (puVar23 = *(undefined8 **)(psVar1 + 100); puVar23 < puVar20; puVar23 = puVar23 + 1) {
        iVar11 = *(int *)*puVar23;
        if (((*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) &
             0xfffffffffffffff8U) != 0) && (iVar11 != -1)) {
          iVar19 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168)
                        >> 3) + -1;
          piVar30 = piVar28;
          if (-1 < iVar19) {
            do {
              iVar17 = iVar19 + (int)piVar30 >> 1;
              lVar31 = *(longlong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + (longlong)iVar17 * 8);
              if (*(int *)(lVar31 + 0x88) == iVar11) {
                if (lVar31 != 0) {
                  FUN_140050070(lVar31 + 0x428,puVar23);
                }
                break;
              }
              if (iVar11 < *(int *)(lVar31 + 0x88)) {
                iVar19 = iVar17 + -1;
              }
              else {
                piVar30 = (int *)(ulonglong)(iVar17 + 1);
              }
            } while ((int)piVar30 <= iVar19);
          }
        }
      }
      local_64 = local_64 + 1;
      local_58 = local_58 + 1;
    } while ((ulonglong)(longlong)local_64 <
             (ulonglong)(*(longlong *)(local_res8 + 0x2b0) - *(longlong *)(local_res8 + 0x2a8) >> 3)
            );
  }
  lVar31 = local_res8;
  uVar25 = 0;
  plVar18 = *(longlong **)(local_res8 + 0x115e70);
  uVar26 = (ulonglong)((longlong)*(longlong **)(local_res8 + 0x115e78) + (7 - (longlong)plVar18)) >>
           3;
  if (*(longlong **)(local_res8 + 0x115e78) < plVar18) {
    uVar26 = uVar25;
  }
  if (uVar26 != 0) {
    do {
      iVar11 = 0;
      lVar14 = *(longlong *)(lVar31 + 0x119b60);
      lVar13 = *plVar18;
      iVar19 = *(int *)(lVar13 + 4);
      local_res8 = lVar13;
      if (((*(longlong *)(lVar14 + 0x170) - *(longlong *)(lVar14 + 0x168) & 0xfffffffffffffff8U) !=
           0) && (iVar19 != -1)) {
        iVar17 = (int)(*(longlong *)(lVar14 + 0x170) - *(longlong *)(lVar14 + 0x168) >> 3) + -1;
        if (-1 < iVar17) {
          do {
            iVar16 = iVar17 + iVar11 >> 1;
            lVar7 = *(longlong *)(*(longlong *)(lVar14 + 0x168) + (longlong)iVar16 * 8);
            if (*(int *)(lVar7 + 0x88) == iVar19) {
              if (lVar7 != 0) {
                puVar32 = (ulonglong *)(lVar7 + 0x440);
                plVar8 = *(longlong **)(lVar7 + 0x448);
                if ((&local_res8 < plVar8) && (plVar9 = (longlong *)*puVar32, plVar9 <= &local_res8)
                   ) {
                  if (plVar8 == *(longlong **)(lVar7 + 0x450)) {
                    FUN_140050410(puVar32);
                  }
                  if (*(undefined8 **)(lVar7 + 0x448) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar7 + 0x448) =
                         *(undefined8 *)
                          (*puVar32 + ((longlong)&local_res8 - (longlong)plVar9 >> 3) * 8);
                  }
                }
                else {
                  if (plVar8 == *(longlong **)(lVar7 + 0x450)) {
                    FUN_140050410(puVar32);
                  }
                  if (*(longlong **)(lVar7 + 0x448) != (longlong *)0x0) {
                    **(longlong **)(lVar7 + 0x448) = lVar13;
                  }
                }
                *(longlong *)(lVar7 + 0x448) = *(longlong *)(lVar7 + 0x448) + 8;
              }
              break;
            }
            if (iVar19 < *(int *)(lVar7 + 0x88)) {
              iVar17 = iVar16 + -1;
            }
            else {
              iVar11 = iVar16 + 1;
            }
          } while (iVar11 <= iVar17);
        }
      }
      plVar18 = plVar18 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar26);
  }
  uVar25 = 0;
  plVar18 = *(longlong **)(lVar31 + 0x115de0);
  uVar26 = (ulonglong)((longlong)*(longlong **)(lVar31 + 0x115de8) + (7 - (longlong)plVar18)) >> 3;
  if (*(longlong **)(lVar31 + 0x115de8) < plVar18) {
    uVar26 = uVar25;
  }
  if (uVar26 != 0) {
    do {
      iVar11 = 0;
      lVar14 = *plVar18;
      iVar19 = *(int *)(lVar14 + 0x5c);
      if (iVar19 != -1) {
        iVar17 = (int)(*(longlong *)(lVar31 + 0x115e18) - *(longlong *)(lVar31 + 0x115e10) >> 3) +
                 -1;
        if (-1 < iVar17) {
          do {
            iVar16 = iVar17 + iVar11 >> 1;
            piVar28 = *(int **)(*(longlong *)(lVar31 + 0x115e10) + (longlong)iVar16 * 8);
            if (*piVar28 == iVar19) goto LAB_140d2abaf;
            if (iVar19 < *piVar28) {
              iVar17 = iVar16 + -1;
            }
            else {
              iVar11 = iVar16 + 1;
            }
          } while (iVar11 <= iVar17);
        }
        piVar28 = (int *)0x0;
LAB_140d2abaf:
        *(int **)(lVar14 + 0x60) = piVar28;
        if ((piVar28 != (int *)0x0) && (iVar11 = piVar28[1], iVar11 != -1)) {
          lVar13 = *(longlong *)(lVar31 + 0x2b0) - *(longlong *)(lVar31 + 0x2a8) >> 3;
          if ((lVar13 != 0) && (iVar11 != -1)) {
            iVar17 = 0;
            iVar19 = (int)lVar13 + -1;
            if (-1 < iVar19) {
              do {
                iVar16 = iVar19 + iVar17 >> 1;
                lVar13 = *(longlong *)(*(longlong *)(lVar31 + 0x2a8) + (longlong)iVar16 * 8);
                if (*(int *)(lVar13 + 4) == iVar11) {
                  if (lVar13 != 0) {
                    FUN_1400b3970(lVar14,lVar13 + 0x13e0);
                  }
                  break;
                }
                if (iVar11 < *(int *)(lVar13 + 4)) {
                  iVar19 = iVar16 + -1;
                }
                else {
                  iVar17 = iVar16 + 1;
                }
              } while (iVar17 <= iVar19);
            }
          }
        }
      }
      plVar18 = plVar18 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar26);
  }
  uVar25 = 0;
  plVar18 = *(longlong **)(lVar31 + 0x115e10);
  uVar26 = (ulonglong)((longlong)*(longlong **)(lVar31 + 0x115e18) + (7 - (longlong)plVar18)) >> 3;
  if (*(longlong **)(lVar31 + 0x115e18) < plVar18) {
    uVar26 = uVar25;
  }
  if (uVar26 != 0) {
    do {
      lVar14 = *(longlong *)(lVar31 + 0x2b0) - *(longlong *)(lVar31 + 0x2a8) >> 3;
      iVar11 = *(int *)(*plVar18 + 4);
      if (((lVar14 != 0) && (iVar11 != -1)) && (iVar19 = (int)lVar14 + -1, iVar17 = 0, -1 < iVar19))
      {
        do {
          iVar16 = iVar19 + iVar17 >> 1;
          lVar14 = *(longlong *)(*(longlong *)(lVar31 + 0x2a8) + (longlong)iVar16 * 8);
          if (*(int *)(lVar14 + 4) == iVar11) {
            if (lVar14 != 0) {
              FUN_1400b3770(*plVar18,lVar14 + 0x13f8);
            }
            break;
          }
          if (iVar11 < *(int *)(lVar14 + 4)) {
            iVar19 = iVar16 + -1;
          }
          else {
            iVar17 = iVar16 + 1;
          }
        } while (iVar17 <= iVar19);
      }
      plVar18 = plVar18 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar26);
  }
  uVar25 = 0;
  plVar18 = *(longlong **)(lVar31 + 0x13b60);
  uVar26 = (ulonglong)((longlong)*(longlong **)(lVar31 + 0x13b68) + (7 - (longlong)plVar18)) >> 3;
  if (*(longlong **)(lVar31 + 0x13b68) < plVar18) {
    uVar26 = uVar25;
  }
  if (uVar26 != 0) {
    piVar28 = (int *)0x0;
    do {
      iVar11 = *(int *)(*plVar18 + 0x11e0);
      if (iVar11 != -1) {
        iVar19 = (int)(*(longlong *)(lVar31 + 0x115e18) - *(longlong *)(lVar31 + 0x115e10) >> 3) +
                 -1;
        piVar33 = piVar28;
        piVar30 = piVar28;
        if (-1 < iVar19) {
          do {
            iVar16 = iVar19 + (int)piVar33 >> 1;
            piVar30 = *(int **)(*(longlong *)(lVar31 + 0x115e10) + (longlong)iVar16 * 8);
            iVar17 = *piVar30;
            if (iVar17 == iVar11) break;
            if (iVar11 < iVar17) {
              iVar19 = iVar16 + -1;
            }
            else {
              piVar33 = (int *)(ulonglong)(iVar16 + 1);
            }
            piVar30 = piVar28;
          } while ((int)piVar33 <= iVar19);
        }
        *(int **)(*plVar18 + 0x11e8) = piVar30;
      }
      plVar18 = plVar18 + 1;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar26);
  }
  return;
code_r0x000140d29fd5:
  if (*(int *)(lVar31 + 0xc) < iVar17) {
    iVar19 = iVar16 + -1;
  }
  else {
    iVar11 = iVar16 + 1;
  }
  if (iVar19 < iVar11) goto LAB_140d2a020;
  goto LAB_140d29fc0;
}

