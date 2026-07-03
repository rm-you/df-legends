// FUN_140b894f0 @ 140b894f0
// callees:
//   -> 140d23130 FUN_140d23130
//   -> 1401507f0 FUN_1401507f0
//   -> 140168d00 FUN_140168d00
//   -> 140168c40 FUN_140168c40
//   -> 14014a480 FUN_14014a480
//   -> 1408f4110 FUN_1408f4110
//   -> 140b88940 FUN_140b88940


void FUN_140b894f0(longlong param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short *psVar20;
  short sVar21;
  uint uVar22;
  undefined4 uVar23;
  short *psVar24;
  uint uVar25;
  short sVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  short sVar31;
  char local_res8;
  int local_a8;
  int local_9c;
  int local_94;
  int local_74;
  longlong local_70;
  uint local_68;
  
  *(undefined1 *)(param_1 + 0x132fa4) = 0;
  *(undefined2 *)(param_1 + 0x26b7ee) = 1;
  if (1999999999 < *(int *)(param_1 + 0x26b7e4)) {
    *(undefined1 *)(param_1 + 0x26b7e8) = 1;
  }
  if (*(char *)(param_1 + 0x26b7e8) == '\0') {
    *(int *)(param_1 + 0x26b7e4) = *(int *)(param_1 + 0x26b7e4) + 300000;
  }
  else {
    FUN_140d23130();
    *(undefined4 *)(param_1 + 0x26b7e4) = 5;
    *(undefined1 *)(param_1 + 0x26b7e8) = 0;
  }
  local_9c = *(int *)(param_1 + 0x26b7e4);
  plVar4 = *(longlong **)(param_1 + 0x1160a0);
  iVar13 = local_9c + -2;
  for (plVar16 = *(longlong **)(param_1 + 0x116098); plVar16 < plVar4; plVar16 = plVar16 + 1) {
    lVar28 = *plVar16;
    lVar27 = 0x10;
    uVar1 = *(undefined2 *)(lVar28 + 0x8c);
    sVar17 = *(short *)(lVar28 + 0x88);
    do {
      sVar18 = *(short *)(lVar28 + 0x8a);
      lVar30 = 0x10;
      do {
        cVar8 = FUN_1401507f0(param_1,sVar17,sVar18,uVar1);
        if (cVar8 != '\0') {
          FUN_140168d00(param_1,sVar17,sVar18,uVar1,iVar13);
        }
        sVar18 = sVar18 + 1;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      sVar17 = sVar17 + 1;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
  }
  psVar20 = &DAT_1416b1990;
  iVar14 = (int)(*(longlong *)(param_1 + 0x1160a0) - *(longlong *)(param_1 + 0x116098) >> 3) + -1;
  local_a8 = 0;
  iVar6 = iVar14;
  if (-1 < iVar14) {
    lVar28 = (longlong)iVar14 * 8;
    do {
      lVar27 = *(longlong *)(lVar28 + *(longlong *)(param_1 + 0x116098));
      iVar29 = 0;
      sVar17 = *(short *)(lVar27 + 0x8c);
      sVar18 = *(short *)(lVar27 + 0x88);
      do {
        sVar21 = *(short *)(lVar27 + 0x8a);
        iVar15 = 0;
        do {
          iVar9 = FUN_140168c40(param_1,sVar18,sVar21,sVar17);
          if (iVar9 == iVar13) {
            if (local_a8 < 120000) {
              FUN_140168d00(param_1,sVar18);
              *psVar20 = sVar18;
              local_a8 = local_a8 + 1;
              psVar20[1] = sVar21;
              psVar20[2] = sVar17;
              psVar20 = psVar20 + 6;
              iVar6 = iVar14;
              if (local_a8 == 120000) {
                FUN_14014a480("Connectivity Overflow");
              }
            }
            break;
          }
          sVar21 = sVar21 + 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0x10);
        if (0 < local_a8) goto LAB_140b89750;
        sVar18 = sVar18 + 1;
        iVar29 = iVar29 + 1;
      } while (iVar29 < 0x10);
      lVar28 = lVar28 + -8;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
LAB_140b89750:
  local_res8 = (char)param_1;
  local_70 = (longlong)iVar6;
LAB_140b8976a:
  do {
    sVar17 = 1;
    sVar18 = 0;
    lVar28 = DAT_141d69520;
    iVar14 = DAT_141d69554;
    iVar29 = DAT_141d69558;
    iVar15 = DAT_141d6955c;
    do {
      iVar9 = 0;
      bVar5 = false;
      psVar24 = &DAT_1416b1990 + (longlong)sVar18 * 720000;
      local_94 = 0;
      psVar20 = &DAT_1416b1990 + (longlong)sVar17 * 720000;
      local_74 = 0;
      bVar7 = false;
      if (0 < local_a8) {
        do {
          bVar5 = bVar7;
          sVar21 = *psVar24;
          sVar2 = psVar24[1];
          sVar3 = psVar24[2];
          psVar24 = psVar24 + 6;
          if (((((sVar21 < 0) || (iVar14 <= sVar21)) || (sVar2 < 0)) ||
              ((iVar29 <= sVar2 || (sVar3 < 0)))) ||
             ((iVar15 <= sVar3 ||
              ((lVar28 == 0 ||
               (lVar27 = *(longlong *)
                          (*(longlong *)
                            (*(longlong *)(lVar28 + ((longlong)sVar21 >> 4) * 8) +
                            ((longlong)sVar2 >> 4) * 8) + (longlong)sVar3 * 8), lVar27 == 0)))))) {
            uVar1 = 0;
          }
          else {
            uVar22 = (int)sVar21 & 0x8000000f;
            if ((int)uVar22 < 0) {
              uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
            }
            uVar25 = (int)sVar2 & 0x8000000f;
            if ((int)uVar25 < 0) {
              uVar25 = (uVar25 - 1 | 0xfffffff0) + 1;
            }
            uVar1 = *(undefined2 *)
                     (lVar27 + 0x92 + ((longlong)(int)uVar22 * 0x10 + (longlong)(int)uVar25) * 2);
          }
          if ((((-1 < sVar21) && (sVar21 < iVar14)) && (-1 < sVar2)) &&
             (((sVar2 < iVar29 && (-1 < sVar3)) &&
              ((sVar3 < iVar15 &&
               ((lVar28 != 0 &&
                (lVar27 = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(lVar28 + ((longlong)sVar21 >> 4) * 8) +
                             ((longlong)sVar2 >> 4) * 8) + (longlong)sVar3 * 8), lVar27 != 0))))))))
          {
            uVar22 = (int)sVar21 & 0x8000000f;
            if ((int)uVar22 < 0) {
              uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
            }
            uVar25 = (int)sVar2 & 0x8000000f;
            if ((int)uVar25 < 0) {
              uVar25 = (uVar25 - 1 | 0xfffffff0) + 1;
            }
            uVar22 = *(uint *)(lVar27 + 0x294 +
                              ((longlong)(short)uVar22 * 0x10 + (longlong)(short)uVar25) * 4);
            local_68 = uVar22 & 0x200000;
            local_res8 = (uVar22 & 1) != 0;
            if ((uVar22 & 2) != 0) {
              local_res8 = local_res8 + '\x02';
            }
            if ((uVar22 & 4) != 0) {
              local_res8 = local_res8 + '\x04';
            }
          }
          sVar26 = sVar21 + -1;
          uVar22 = (uint)sVar26;
          if ((int)uVar22 <= sVar21 + 1) {
            do {
              uVar25 = (uint)(short)(sVar2 + -1);
              if ((int)uVar25 <= sVar2 + 1) {
                uVar12 = uVar25;
                do {
                  sVar31 = (short)uVar25;
                  uVar25 = (uint)(short)(sVar3 + -1);
                  uVar10 = uVar25;
                  while ((int)uVar25 <= sVar3 + 1) {
                    sVar19 = (short)uVar10;
                    if (((sVar26 != sVar21) || (sVar31 != sVar2)) || (sVar19 != sVar3)) {
                      if (119999 < local_94) break;
                      if ((((sVar26 < 0) || (iVar14 <= (int)uVar22)) ||
                          ((sVar31 < 0 || ((iVar29 <= (int)uVar12 || (sVar19 < 0)))))) ||
                         ((iVar15 <= (int)uVar25 ||
                          ((lVar28 == 0 ||
                           (lVar27 = *(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(lVar28 + ((longlong)sVar26 >> 4) * 8) +
                                        ((longlong)sVar31 >> 4) * 8) + (longlong)sVar19 * 8),
                           lVar27 == 0)))))) {
                        iVar9 = 0;
                      }
                      else {
                        uVar10 = uVar22 & 0x8000000f;
                        if ((int)uVar10 < 0) {
                          uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
                        }
                        uVar11 = uVar12 & 0x8000000f;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                        }
                        iVar9 = *(int *)(lVar27 + 0xb94 +
                                        ((longlong)(int)uVar10 * 0x10 + (longlong)(int)uVar11) * 4);
                      }
                      if (iVar9 == iVar13) {
                        cVar8 = FUN_1408f4110(&DAT_141c53470,sVar21,sVar2,sVar3,sVar26,sVar31,sVar19
                                              ,0x901020,0,1,uVar1,local_68,local_res8);
                        lVar28 = DAT_141d69520;
                        iVar14 = DAT_141d69554;
                        iVar29 = DAT_141d69558;
                        iVar15 = DAT_141d6955c;
                        if (cVar8 != '\0') {
                          if ((((((sVar21 < 0) || (DAT_141d69554 <= sVar21)) || (sVar2 < 0)) ||
                               ((DAT_141d69558 <= sVar2 || (sVar3 < 0)))) ||
                              (DAT_141d6955c <= sVar3)) ||
                             ((DAT_141d69520 == 0 ||
                              (lVar28 = *(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (DAT_141d69520 + ((longlong)sVar21 >> 4) * 8) +
                                           ((longlong)sVar2 >> 4) * 8) + (longlong)sVar3 * 8),
                              lVar28 == 0)))) {
                            uVar23 = 0;
                          }
                          else {
                            uVar22 = (int)sVar21 & 0x8000000f;
                            if ((int)uVar22 < 0) {
                              uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                            }
                            uVar12 = (int)sVar2 & 0x8000000f;
                            if ((int)uVar12 < 0) {
                              uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
                            }
                            uVar23 = *(undefined4 *)
                                      (lVar28 + 0xb94 +
                                      ((longlong)(int)uVar22 * 0x10 + (longlong)(int)uVar12) * 4);
                          }
                          if ((((-1 < sVar26) && (sVar26 < DAT_141d69554)) && (-1 < sVar31)) &&
                             (((sVar31 < DAT_141d69558 && (-1 < sVar19)) &&
                              (((int)uVar25 < DAT_141d6955c &&
                               ((DAT_141d69520 != 0 &&
                                (lVar28 = *(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)
                                               (DAT_141d69520 + ((longlong)sVar26 >> 4) * 8) +
                                             ((longlong)sVar31 >> 4) * 8) + (longlong)sVar19 * 8),
                                lVar28 != 0)))))))) {
                            uVar22 = (int)sVar26 & 0x8000000f;
                            if ((int)uVar22 < 0) {
                              uVar22 = (uVar22 - 1 | 0xfffffff0) + 1;
                            }
                            uVar25 = (int)sVar31 & 0x8000000f;
                            if ((int)uVar25 < 0) {
                              uVar25 = (uVar25 - 1 | 0xfffffff0) + 1;
                            }
                            *(undefined4 *)
                             (lVar28 + 0xb94 +
                             ((longlong)(int)uVar22 * 0x10 + (longlong)(int)uVar25) * 4) = uVar23;
                          }
                          iVar15 = DAT_141d6955c;
                          iVar29 = DAT_141d69558;
                          iVar14 = DAT_141d69554;
                          lVar28 = DAT_141d69520;
                          *psVar20 = sVar26;
                          bVar5 = true;
                          psVar20[1] = sVar31;
                          psVar20[2] = sVar19;
                          psVar20 = psVar20 + 6;
                          local_94 = local_94 + 1;
                        }
                        uVar12 = (uint)sVar31;
                        uVar22 = (uint)sVar26;
                      }
                    }
                    uVar10 = (uint)(ushort)(sVar19 + 1U);
                    uVar25 = (uint)(short)(sVar19 + 1U);
                  }
                  uVar25 = (uint)(ushort)(sVar31 + 1U);
                  uVar12 = (uint)(short)(sVar31 + 1U);
                } while ((int)uVar12 <= sVar2 + 1);
              }
              sVar26 = sVar26 + 1;
              uVar22 = (uint)sVar26;
              iVar9 = local_94;
            } while ((int)uVar22 <= sVar21 + 1);
          }
          if (iVar9 == 120000) {
            FUN_14014a480("Connectivity Placement Overflow");
            lVar28 = DAT_141d69520;
            iVar14 = DAT_141d69554;
            iVar29 = DAT_141d69558;
            iVar15 = DAT_141d6955c;
            break;
          }
          local_74 = local_74 + 1;
          bVar7 = bVar5;
        } while (local_74 < local_a8);
      }
      psVar20 = &DAT_1416b1990;
      sVar18 = 1 - sVar18;
      sVar17 = 1 - sVar17;
      local_a8 = iVar9;
    } while (bVar5);
    local_9c = local_9c + 1;
    local_a8 = 0;
    lVar28 = local_70;
    iVar14 = iVar6;
    if (iVar6 < 0) break;
    do {
      iVar29 = 0;
      lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x116098) + lVar28 * 8);
      sVar17 = *(short *)(lVar27 + 0x8c);
      sVar18 = *(short *)(lVar27 + 0x88);
      do {
        sVar21 = *(short *)(lVar27 + 0x8a);
        iVar15 = 0;
        do {
          iVar9 = FUN_140168c40(param_1,sVar18,sVar21,sVar17);
          if (iVar9 == iVar13) {
            if (local_a8 < 120000) {
              FUN_140168d00(param_1,sVar18);
              *psVar20 = sVar18;
              local_a8 = local_a8 + 1;
              psVar20[1] = sVar21;
              psVar20[2] = sVar17;
              psVar20 = psVar20 + 6;
              local_70 = lVar28;
              iVar6 = iVar14;
              if (local_a8 == 120000) {
                FUN_14014a480("Connectivity Overflow");
              }
            }
            break;
          }
          sVar21 = sVar21 + 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 0x10);
        if (0 < local_a8) goto LAB_140b8976a;
        sVar18 = sVar18 + 1;
        iVar29 = iVar29 + 1;
      } while (iVar29 < 0x10);
      lVar28 = lVar28 + -1;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  } while (local_a8 != 0);
  iVar13 = (int)(*(longlong *)(param_1 + 0x1160a0) - *(longlong *)(param_1 + 0x116098) >> 3) + -1;
  lVar28 = (longlong)iVar13;
  if (-1 < iVar13) {
    do {
      lVar30 = 0x10;
      lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x116098) + lVar28 * 8);
      sVar17 = *(short *)(lVar27 + 0x8a);
      sVar18 = *(short *)(lVar27 + 0x88);
      uVar1 = *(undefined2 *)(lVar27 + 0x8c);
      do {
        lVar27 = 0x10;
        sVar21 = sVar17;
        do {
          FUN_140168c40(param_1,sVar18,sVar21,uVar1);
          FUN_140b88940(param_1,sVar18);
          sVar21 = sVar21 + 1;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        sVar18 = sVar18 + 1;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar28 = lVar28 + -1;
    } while (-1 < lVar28);
  }
  if (29999 < (local_9c - *(int *)(param_1 + 0x26b7e4)) + 2) {
    FUN_14014a480("Connected Component Overflow");
  }
  sVar17 = *(short *)(param_1 + 0x26b7e4);
  *(undefined4 *)(param_1 + 0x26b7e4) = 1;
  *(short *)(param_1 + 0x26b7ee) = ((short)local_9c - sVar17) + 2;
  *(undefined1 *)(param_1 + 0x26b7e8) = 1;
  return;
}

