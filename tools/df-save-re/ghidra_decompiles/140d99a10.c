// FUN_140d99a10 @ 140d99a10
// callees:
//   -> 140da8ec0 FUN_140da8ec0
//   -> 140004830 FUN_140004830
//   -> 14014e120 FUN_14014e120
//   -> 1400c05e0 FUN_1400c05e0
//   -> 140d9e600 FUN_140d9e600
//   -> 14013b560 FUN_14013b560
//   -> 140cf0f90 FUN_140cf0f90
//   -> 1408dea20 FUN_1408dea20
//   -> 14014e2f0 FUN_14014e2f0
//   -> 1400c5d30 FUN_1400c5d30
//   -> 14013b610 FUN_14013b610
//   -> 1405b4fb0 FUN_1405b4fb0
//   -> 140150400 FUN_140150400
//   -> 1405b4ca0 FUN_1405b4ca0
//   -> 1400048f0 FUN_1400048f0
//   -> 14018f680 FUN_14018f680
//   -> 140198ca0 FUN_140198ca0
//   -> 1400c0380 FUN_1400c0380
//   -> 14066a3c0 FUN_14066a3c0
//   -> 1400c0400 FUN_1400c0400
//   -> 14066a430 FUN_14066a430
//   -> 1400c0480 FUN_1400c0480
//   -> 14066a4a0 FUN_14066a4a0
//   -> 1401508a0 FUN_1401508a0
//   -> 14000d840 FUN_14000d840
//   -> 14066a580 FUN_14066a580
//   -> 14066a350 FUN_14066a350
//   -> 140d86a60 FUN_140d86a60
//   -> 140d869c0 FUN_140d869c0
//   -> 140d823e0 FUN_140d823e0
//   -> 140d8d4c0 FUN_140d8d4c0
//   -> 140ceeb10 FUN_140ceeb10
//   -> 14014e280 FUN_14014e280
//   -> 140da7d90 FUN_140da7d90
//   -> 140da7820 FUN_140da7820
//   -> 1403647b0 FUN_1403647b0
//   -> 140364810 FUN_140364810
//   -> 140d22a50 FUN_140d22a50
//   -> 140d226e0 FUN_140d226e0
//   -> 1400c5df0 FUN_1400c5df0
//   -> 140004650 FUN_140004650
//   -> 140cc1de0 FUN_140cc1de0
//   -> 14000c780 FUN_14000c780
//   -> 1407ad2c0 FUN_1407ad2c0
//   -> 14061fbe0 FUN_14061fbe0
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140074660 FUN_140074660
//   -> 140002020 FUN_140002020
//   -> 1401504c0 FUN_1401504c0
//   -> 140d864a0 FUN_140d864a0
//   -> 14075ca40 FUN_14075ca40
//   -> 140106f30 FUN_140106f30
//   -> 1409165e0 FUN_1409165e0
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d99a10(longlong param_1,short param_2,short param_3,short param_4,char param_5,
                  uint param_6)

{
  void *_Src;
  void *_Dst;
  undefined4 uVar1;
  undefined4 *puVar2;
  void *_Memory;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  undefined2 uVar7;
  ushort uVar8;
  short sVar9;
  longlong lVar10;
  short *psVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  short sVar19;
  undefined8 uVar20;
  uint uVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  bool bVar25;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_178 [32];
  short *local_158;
  short *local_150;
  short *local_148;
  ulonglong *local_140;
  short *local_138;
  char local_128;
  short local_124 [2];
  short local_120 [4];
  ulonglong local_118;
  short local_110 [2];
  short local_10c [2];
  int local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_e8;
  undefined1 local_e4;
  short local_e2;
  short local_e0;
  short local_de;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_a8 = 0xfffffffffffffffe;
  local_50 = DAT_1410b5008 ^ (ulonglong)auStack_178;
  if (param_5 != '\0') {
    FUN_140da8ec0();
  }
  sVar6 = FUN_140004830(param_1,param_2,param_3,param_4);
  if (sVar6 == 1) {
    return;
  }
  if (sVar6 == 0x20) {
    return;
  }
  if (sVar6 == 0x23) {
    return;
  }
  if (sVar6 == 0x2a) {
    return;
  }
  uVar7 = FUN_140004830(param_1,param_2);
  cVar5 = FUN_14014e120(uVar7);
  if (cVar5 != '\0') {
    return;
  }
  uVar7 = FUN_140004830(param_1,param_2);
  cVar5 = FUN_1400c05e0(uVar7);
  if (cVar5 != '\0') {
    return;
  }
  local_158 = (short *)((ulonglong)local_158 & 0xffffffffffffff00);
  cVar5 = FUN_140d9e600(param_1,param_2);
  if (((cVar5 == '\0') && (uVar8 = FUN_140004830(param_1,param_2,param_3,param_4), 4 < uVar8 - 0x2b)
      ) && (uVar8 != 0x1e9)) {
    bVar25 = false;
  }
  else {
    bVar25 = true;
  }
  if (param_6 == 2) goto LAB_140d9a694;
  bVar4 = false;
  bVar3 = false;
  uVar8 = FUN_140004830(param_1,param_2,param_3,param_4);
  uVar12 = (ulonglong)uVar8;
  cVar5 = FUN_14013b560(uVar8);
  if (cVar5 != '\0') {
    if (param_5 == '\0') {
      return;
    }
    if (1 < param_6) {
      return;
    }
    lVar10 = FUN_140cf0f90(extraout_XMM0_Da,param_2,param_3);
    if (lVar10 == 0) {
      return;
    }
    if (param_4 < *(short *)(lVar10 + 8)) {
      return;
    }
    lVar13 = *(longlong *)(lVar10 + 0x40);
    local_100 = lVar10;
    if (lVar13 != 0) {
      sVar6 = *(short *)(lVar10 + 4) - (short)(*(int *)(lVar13 + 0x2c) / 2);
      local_124[0] = 0;
      if (0 < *(int *)(lVar13 + 0x2c)) {
        local_108 = 0;
        do {
          uVar12 = 0;
          sVar19 = *(short *)(lVar10 + 6) - (short)(*(int *)(lVar13 + 0x30) / 2);
          local_10c[0] = 0;
          if (0 < *(int *)(lVar13 + 0x30)) {
            local_118 = local_118 & 0xffffffff00000000;
            lVar14 = lVar10;
            do {
              local_128 = '\0';
              sVar24 = *(short *)(lVar13 + 0x28) + -1 + *(short *)(lVar14 + 8);
              sVar23 = *(short *)(lVar13 + 0x28) + -1;
              iVar16 = local_108;
              local_120[0] = sVar23;
              if (-1 < sVar23) {
                sVar22 = sVar24 + -1;
                local_f8 = (longlong)sVar23 << 3;
                do {
                  if ((*(byte *)((longlong)
                                 (*(int *)((longlong)*(longlong **)(lVar14 + 0x40) + 0x2c) *
                                  (int)uVar12 + iVar16) +
                                *(longlong *)(local_f8 + **(longlong **)(lVar14 + 0x40))) & 0x7f) !=
                      0) {
                    local_128 = '\x01';
                    local_120[0] = sVar23;
                    local_110[0] = sVar22;
                    uVar8 = FUN_140004830(param_1,sVar6,sVar19,sVar22);
                    uVar21 = (uint)uVar8;
                    if (((((uVar21 == 0xd7) || (uVar21 == 0x147)) ||
                         ((uVar21 == 0x14b ||
                          ((iVar16 = uVar21 - 0x168, iVar16 == 0 || (iVar16 == 0x4c)))))) ||
                        (cVar5 = FUN_1408dea20(uVar8,iVar16,uVar21), cVar5 != '\0')) ||
                       ((uVar8 - 0x165 < 3 || ((uVar8 - 0x103 & 0xfffd) == 0)))) {
                      cVar5 = FUN_1400c0380(uVar8);
                      if (cVar5 == '\0') {
                        cVar5 = FUN_1400c0400(uVar8);
                        if (cVar5 == '\0') {
                          cVar5 = FUN_1400c0480(uVar8);
                          if (cVar5 == '\0') {
                            cVar5 = FUN_14014e120(uVar8);
                            if (cVar5 == '\0') {
                              iVar16 = FUN_1401508a0(param_1,sVar6,sVar19,sVar22);
                              if (-1 < iVar16) {
                                if (((ulonglong)(longlong)iVar16 <
                                     (ulonglong)
                                     (*(longlong *)(param_1 + 0x11a778) -
                                      *(longlong *)(param_1 + 0x11a770) >> 3)) &&
                                   (cVar5 = FUN_14000d840(*(longlong *)
                                                           (*(longlong *)(param_1 + 0x11a770) +
                                                           (longlong)iVar16 * 8) + 0x38,0xb),
                                   cVar5 != '\0')) {
                                  uVar7 = FUN_14066a580();
                                  goto LAB_140d99fac;
                                }
                              }
                              if (uVar8 == 0x103) {
                                uVar7 = 0x104;
                              }
                              else {
                                uVar7 = FUN_14066a350();
                              }
                            }
                            else {
                              uVar7 = 0xff;
                            }
                          }
                          else {
                            uVar7 = FUN_14066a4a0();
                          }
                        }
                        else {
                          uVar7 = FUN_14066a430();
                        }
                      }
                      else {
                        uVar7 = FUN_14066a3c0();
                      }
LAB_140d99fac:
                      local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
                      FUN_1400c5d30(param_1,sVar6,sVar19,sVar24);
                    }
                    else {
                      uVar7 = FUN_140004830(param_1,sVar6,sVar19,sVar22);
                      cVar5 = FUN_14014e2f0(uVar7);
                      uVar7 = 1;
                      if (cVar5 == '\0') {
                        uVar7 = 0x20;
                      }
                      local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
                      FUN_1400c5d30(param_1,sVar6);
                      sVar9 = FUN_140004830(param_1,sVar6,sVar19,sVar22);
                      if (sVar9 == 0x1eb) {
LAB_140d99d81:
                        local_150 = (short *)CONCAT44(local_150._4_4_,
                                                      (int)(*(longlong *)(param_1 + 0x128) -
                                                            *(longlong *)(param_1 + 0x120) >> 3) +
                                                      -1);
                        local_158 = (short *)((ulonglong)local_158 & 0xffffffff00000000);
                        lVar10 = FUN_1405b4fb0(param_1,sVar6,sVar19,sVar22);
                        sVar23 = local_120[0];
                        if (lVar10 != 0) {
                          psVar11 = (short *)FUN_140150400();
                          *psVar11 = sVar6;
                          psVar11[1] = sVar19;
                          psVar11[2] = sVar24;
                          psVar11[3] = *(short *)(lVar10 + 6);
                          psVar11[4] = *(short *)(lVar10 + 8);
                          psVar11[5] = *(short *)(lVar10 + 10);
                          *(undefined4 *)(psVar11 + 6) = *(undefined4 *)(lVar10 + 0xc);
                          *(byte *)(psVar11 + 8) = *(byte *)(psVar11 + 8) | 2;
                          sVar23 = FUN_140004830(param_1,sVar6,sVar19,sVar24);
                          psVar11[9] = sVar23;
                          FUN_1405b4ca0(param_1,psVar11);
                          local_158 = (short *)CONCAT62(local_158._2_6_,0x1e9);
                          FUN_1400c5d30(param_1,sVar6,sVar19,sVar24);
                          sVar23 = local_120[0];
                        }
                      }
                      else {
                        uVar7 = FUN_140004830(param_1,sVar6);
                        cVar5 = FUN_14013b610(uVar7);
                        if (cVar5 != '\0') {
                          uVar7 = FUN_140004830(param_1,sVar6);
                          cVar5 = FUN_1400c05e0(uVar7);
                          if (cVar5 != '\0') goto LAB_140d99d81;
                        }
                      }
                      uVar12 = FUN_1400048f0(&DAT_141c53470,sVar6,sVar19,sVar24);
                      if (((uVar12 & 7) != 0) &&
                         (iVar16 = (int)(DAT_141c6fdc0 - DAT_141c6fdb8 >> 3) + -1,
                         lVar10 = (longlong)iVar16, -1 < iVar16)) {
                        do {
                          plVar15 = *(longlong **)(DAT_141c6fdb8 + lVar10 * 8);
                          if (((int)plVar15[4] == (int)sVar24) &&
                             (iVar16 = (**(code **)(*plVar15 + 0xd8))(), iVar16 != 0x13)) {
                            local_158 = (short *)((ulonglong)local_158 & 0xffffffffffffff00);
                            cVar5 = FUN_14018f680(*(undefined8 *)(DAT_141c6fdb8 + lVar10 * 8),sVar6,
                                                  sVar19,sVar24);
                            if (cVar5 != '\0') {
                              FUN_140198ca0(*(undefined8 *)(DAT_141c6fdb8 + lVar10 * 8),0,1);
                            }
                          }
                          lVar10 = lVar10 + -1;
                          sVar22 = local_110[0];
                        } while (-1 < lVar10);
                      }
                    }
                    FUN_140d86a60(&DAT_141c53470,sVar6,sVar19,sVar24);
                    FUN_140d869c0(&DAT_141c53470,sVar6,sVar19,sVar24);
                    uVar12 = local_118 & 0xffffffff;
                    lVar14 = local_100;
                    iVar16 = local_108;
                  }
                  sVar24 = sVar24 + -1;
                  sVar22 = sVar22 + -1;
                  sVar23 = sVar23 + -1;
                  local_f8 = local_f8 + -8;
                  local_120[0] = sVar23;
                  local_110[0] = sVar22;
                } while (-1 < sVar23);
              }
              lVar10 = local_100;
              sVar23 = *(short *)(lVar14 + 8);
              sVar22 = 0;
              lVar13 = *(longlong *)(local_100 + 0x40);
              sVar24 = sVar23;
              cVar5 = local_128;
              if (0 < *(int *)(lVar13 + 0x40)) {
                do {
                  if ((*(byte *)((longlong)(*(int *)(lVar13 + 0x2c) * (int)uVar12 + iVar16) +
                                *(longlong *)(*(longlong *)(lVar13 + 0x38) + (longlong)sVar22 * 8))
                      & 0x7f) != 0) {
                    sVar9 = FUN_140004830(param_1,sVar6,sVar19,sVar24 + -1);
                    if (sVar9 == 0x5c) {
                      local_158 = (short *)CONCAT62(local_158._2_6_,0x105);
                      FUN_1400c5d30(&DAT_141c53470,sVar6);
                      sVar9 = FUN_140004830(param_1,sVar6);
                      if ((((sVar9 == 1) || (sVar9 == 0x20)) || (sVar9 == 0x23)) || (sVar9 == 0x2a))
                      {
                        uVar7 = FUN_14066a580();
                        local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
                        FUN_1400c5d30(&DAT_141c53470,sVar6,sVar19,sVar23);
                        local_128 = '\x01';
                      }
                    }
                    uVar12 = local_118 & 0xffffffff;
                    iVar16 = local_108;
                    cVar5 = local_128;
                  }
                  sVar23 = sVar23 + -1;
                  sVar22 = sVar22 + 1;
                  lVar13 = *(longlong *)(lVar10 + 0x40);
                  sVar24 = sVar24 + -1;
                } while ((int)sVar22 < *(int *)(lVar13 + 0x40));
              }
              if (cVar5 != '\0') {
                FUN_140d823e0(&DAT_141c53470,sVar6,sVar19);
                FUN_140d8d4c0(&DAT_141c53470,sVar6,sVar19,1);
              }
              sVar19 = sVar19 + 1;
              local_10c[0] = local_10c[0] + 1;
              lVar13 = *(longlong *)(lVar10 + 0x40);
              uVar21 = (uint)local_10c[0];
              uVar12 = (ulonglong)uVar21;
              local_118 = CONCAT44(local_118._4_4_,uVar21);
              lVar14 = lVar10;
            } while ((int)uVar21 < *(int *)(lVar13 + 0x30));
          }
          sVar6 = sVar6 + 1;
          local_124[0] = local_124[0] + 1;
          lVar13 = *(longlong *)(lVar10 + 0x40);
          local_108 = (int)local_124[0];
        } while (local_108 < *(int *)(lVar13 + 0x2c));
      }
    }
    FUN_140ceeb10(param_1 + 0x1d3d0,lVar10);
    return;
  }
  cVar5 = FUN_14014e280(uVar12 & 0xffff);
  if (cVar5 != '\0') {
    if (((param_5 == '\0') && (param_6 < 2)) &&
       (lVar10 = FUN_140da7d90(&DAT_141c53470,param_2,param_3,param_4), lVar10 != 0)) {
      uVar21 = (int)param_2 & 0x8000000f;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xfffffff0) + 1;
      }
      uVar17 = (int)param_3 & 0x8000000f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
      }
      lVar10 = (longlong)(short)uVar21 * 0x10 + lVar10;
      pcVar18 = (char *)((longlong)(short)uVar17 + 0xc + lVar10);
      *pcVar18 = *pcVar18 + -10;
      if (*pcVar18 != '\0') goto LAB_140d9a262;
      *(undefined1 *)((longlong)(short)uVar17 + 0xc + lVar10) = 0;
    }
    uVar7 = FUN_14066a580();
    local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
    FUN_1400c5d30(param_1,param_2,param_3,param_4);
  }
LAB_140d9a262:
  uVar8 = FUN_140004830(param_1,param_2,param_3,param_4);
  if (uVar8 < 0xe9) {
    if (uVar8 < 0xe5) {
      if (uVar8 == 0x22) {
        uVar7 = 0x185;
      }
      else {
        bVar3 = bVar4;
        if (uVar8 != 0xe3) goto LAB_140d9a388;
        uVar7 = 0x184;
      }
LAB_140d9a371:
      local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
      FUN_1400c5d30(param_1,param_2);
      bVar3 = true;
      goto LAB_140d9a388;
    }
    if ((param_5 != '\0') || (1 < param_6)) {
      local_158 = (short *)CONCAT62(local_158._2_6_,0xed);
      FUN_1400c5d30(param_1,param_2);
      bVar3 = bVar4;
      goto LAB_140d9a388;
    }
    lVar10 = FUN_140da7d90(&DAT_141c53470,param_2);
    if (lVar10 == 0) {
LAB_140d9a321:
      local_158 = (short *)CONCAT62(local_158._2_6_,0xed);
      FUN_1400c5d30(param_1,param_2,param_3,param_4);
    }
    else {
      uVar21 = (int)param_2 & 0x8000000f;
      if ((int)uVar21 < 0) {
        uVar21 = (uVar21 - 1 | 0xfffffff0) + 1;
      }
      uVar17 = (int)param_3 & 0x8000000f;
      if ((int)uVar17 < 0) {
        uVar17 = (uVar17 - 1 | 0xfffffff0) + 1;
      }
      lVar10 = (longlong)(short)uVar21 * 0x10 + lVar10;
      pcVar18 = (char *)((longlong)(short)uVar17 + 0xc + lVar10);
      *pcVar18 = *pcVar18 + -10;
      if (*pcVar18 == '\0') {
        *(undefined1 *)((longlong)(short)uVar17 + 0xc + lVar10) = 0;
        goto LAB_140d9a321;
      }
    }
  }
  else {
    bVar3 = bVar4;
    if (uVar8 - 0x184 < 2) {
      uVar7 = FUN_14066a580();
      goto LAB_140d9a371;
    }
LAB_140d9a388:
    if (param_5 != '\0') {
      local_138 = local_10c;
      local_140 = &local_118;
      local_148 = local_124;
      local_150 = local_110;
      local_158 = local_120;
      FUN_140da7820(&DAT_141c53470,param_2,param_3,param_4);
      uVar7 = FUN_140004830(param_1,param_2,param_3,param_4);
      cVar5 = FUN_1403647b0(uVar7);
      if (cVar5 == '\0') {
        uVar7 = FUN_140004830(param_1,param_2);
        cVar5 = FUN_140364810(uVar7);
        if (cVar5 == '\0') {
          uVar7 = FUN_140004830(param_1,param_2);
          cVar5 = FUN_14014e2f0(uVar7);
          if ((cVar5 != '\0') && (sVar6 = FUN_140004830(param_1,param_2), sVar6 == 1)) {
            local_158 = (short *)CONCAT62(local_158._2_6_,0x20);
            FUN_1400c5d30(param_1,param_2);
          }
          if ((((local_124[0] == 0) && (uVar12 = (ulonglong)(int)local_118, -1 < (int)local_118)) &&
              (uVar12 < (ulonglong)
                        (*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3)
              )) && (cVar5 = FUN_14000d840(*(longlong *)
                                            (*(longlong *)(param_1 + 0x11a770) + uVar12 * 8) + 0x38,
                                           0xb), cVar5 != '\0')) {
            if ((uVar12 < (ulonglong)
                          (*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >>
                          3)) &&
               (cVar5 = FUN_14000d840(*(longlong *)(*(longlong *)(param_1 + 0x11a770) + uVar12 * 8)
                                      + 0x38,0xd), cVar5 != '\0')) {
              uVar7 = FUN_14066a580();
            }
            else {
              uVar7 = 0x101;
            }
          }
          else {
            uVar7 = FUN_14066a350();
          }
          goto LAB_140d9a5b7;
        }
      }
      else {
        uVar7 = FUN_140004830(param_1,param_2);
        cVar5 = FUN_1400c0380(uVar7);
        if (cVar5 == '\0') {
          uVar7 = FUN_140004830(param_1,param_2);
          cVar5 = FUN_1400c0400(uVar7);
          if (cVar5 == '\0') {
            uVar7 = FUN_140004830(param_1,param_2);
            cVar5 = FUN_1400c0480(uVar7);
            if (cVar5 == '\0') {
              if (((local_124[0] == 0) && (-1 < (int)local_118)) &&
                 (((ulonglong)(longlong)(int)local_118 <
                   (ulonglong)
                   (*(longlong *)(param_1 + 0x11a778) - *(longlong *)(param_1 + 0x11a770) >> 3) &&
                  (cVar5 = FUN_14000d840(*(longlong *)
                                          (*(longlong *)(param_1 + 0x11a770) +
                                          (longlong)(int)local_118 * 8) + 0x38,0xb), cVar5 != '\0'))
                 )) {
                uVar7 = 0x28;
              }
              else {
                uVar7 = 0x38;
              }
            }
            else {
              uVar7 = 0x3b;
            }
          }
          else {
            uVar7 = 0x3e;
          }
        }
        else {
          uVar7 = 0x25;
        }
LAB_140d9a5b7:
        local_158 = (short *)CONCAT62(local_158._2_6_,uVar7);
        FUN_1400c5d30(param_1,param_2);
      }
      FUN_140d22a50(param_1,param_2,param_3,param_4);
    }
  }
  if (((DAT_1410b67dc == 0) &&
      (iVar16 = FUN_140d226e0(param_1,param_2,param_3,param_4), iVar16 == 0x10)) && (bVar3)) {
    local_158._0_4_ = iVar16;
    FUN_1400c5df0(param_1,param_2);
    local_158._0_4_ = 0x20;
    FUN_1400c5df0(param_1,param_2);
    local_158 = (short *)CONCAT44(local_158._4_4_,0x40);
    FUN_1400c5df0(param_1,param_2);
  }
  plVar15 = *(longlong **)(param_1 + 0x14be8);
  while (plVar15 != (longlong *)0x0) {
    lVar10 = *plVar15;
    if (((*(short *)(lVar10 + 0x14) == 10) && ((*(byte *)(lVar10 + 0x40) & 1) == 0)) &&
       ((*(short *)(lVar10 + 0x1c) == param_2 &&
        ((*(short *)(lVar10 + 0x1e) == param_3 && (*(short *)(lVar10 + 0x20) == param_4)))))) {
      plVar15 = (longlong *)plVar15[2];
      (*(code *)**(undefined8 **)(param_1 + 0x14bd0))();
    }
    else {
      plVar15 = (longlong *)plVar15[2];
    }
  }
LAB_140d9a694:
  if (bVar25) {
    local_158 = (short *)((ulonglong)local_158 & 0xffffffffffffff00);
    cVar5 = FUN_140d9e600(param_1,param_2,param_3,param_4);
    if ((((cVar5 == '\0') &&
         (uVar8 = FUN_140004830(param_1,param_2,param_3,param_4), 4 < uVar8 - 0x2b)) &&
        (uVar8 != 0x1e9)) &&
       (iVar16 = (int)(*(longlong *)(param_1 + 0x50) - *(longlong *)(param_1 + 0x48) >> 3) + -1,
       local_118 = (ulonglong)iVar16, -1 < iVar16)) {
      do {
        puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x48) + local_118 * 8);
        if (((*(short *)(puVar2 + 3) == param_2) && (*(short *)((longlong)puVar2 + 0xe) == param_3))
           && (*(short *)(puVar2 + 4) == param_4)) {
          if (*(short *)((longlong)puVar2 + 0x22) == 5) {
            uVar1 = *puVar2;
            lVar10 = FUN_140004650(param_1 + 0x126bd8,uVar1);
            lVar13 = FUN_140cc1de0(param_1 + 0x13b60,uVar1);
            if (lVar10 != 0) {
              if (DAT_1410b67dc == 0) {
                bVar25 = (DAT_141c3457c & 0x70) != 0;
              }
              else {
                bVar25 = (bool)(DAT_141c3457c >> 3 & 1);
              }
              if (bVar25 != false) {
                local_88 = 0xf;
                local_90 = 0;
                uStack_8c = 0;
                local_a0 = local_a0 & 0xffffff00;
                local_58 = 0xf;
                local_60 = 0;
                local_70 = 0;
                if (param_6 == 1) {
                  uVar20 = 0x20;
                  pcVar18 = "A careless farmer has defaced a ";
                }
                else {
                  uVar20 = 0x1c;
                  pcVar18 = "A foolish builder defaced a ";
                }
                FUN_14000c780(&local_a0,pcVar18,uVar20);
                lVar14 = FUN_1407ad2c0(lVar10);
                if ((lVar14 != 0) && (*(char *)(lVar14 + 0x72) != '\0')) {
                  FUN_14061fbe0(lVar14,&local_70);
                }
                FUN_14000cb40(&local_a0,&local_70,0,0xffffffffffffffff);
                FUN_14000c9f0(&local_a0,&DAT_140e5e8bc,1);
                local_dc = 0;
                local_d8 = 0x8ad08ad0;
                local_d4 = 0x8ad0;
                local_d0 = 0;
                local_c8 = 0;
                uStack_c0 = 0;
                local_b8 = 0xffffffffffffffff;
                local_b0 = 0xffffffff;
                local_ac = 0;
                local_e8 = 0x400ff;
                local_e4 = 0;
                local_cc = 2000;
                local_e2 = param_2;
                local_e0 = param_3;
                local_de = param_4;
                FUN_140074660(&DAT_141d64dc8,&local_a0);
                if (0xf < local_58) {
                  FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1);
                }
                local_58 = 0xf;
                local_60 = 0;
                local_70 = 0;
                if (0xf < local_88) {
                  FUN_140002020(CONCAT44(uStack_9c,local_a0),local_88 + 1);
                }
              }
              if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + local_118 * 8) + 4) != -1)
              {
                plVar15 = (longlong *)FUN_1401504c0();
                *(undefined4 *)(plVar15 + 5) =
                     *(undefined4 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x48) + local_118 * 8) + 4);
                local_150 = (short *)((ulonglong)local_150 & 0xffffffffffffff00);
                local_158 = (short *)CONCAT71(local_158._1_7_,1);
                lVar14 = FUN_140d864a0(param_1,param_2);
                if (lVar14 != 0) {
                  *(undefined4 *)(plVar15 + 6) = *(undefined4 *)(lVar14 + 0x88);
                }
                *(undefined4 *)(plVar15 + 1) = DAT_1416b1980;
                *(undefined4 *)((longlong)plVar15 + 0xc) = DAT_1416b1974;
                (**(code **)(*plVar15 + 0x128))(plVar15);
                FUN_14075ca40(lVar10,*(undefined4 *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x48) + local_118 * 8)
                                      + 4));
              }
            }
            if (lVar13 != 0) {
              uStack_9c = 0xffffffff;
              local_98 = 0;
              uStack_94 = 100;
              local_90 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_78 = 0;
              local_a0 = 0x9d;
              lVar10 = *(longlong *)(lVar13 + 0xa78);
              if (((lVar10 != 0) && ((*(uint *)(lVar13 + 0x110) & 0x502) != 2)) &&
                 ((*(uint *)(lVar13 + 0x118) & 0x1000) == 0)) {
                FUN_140106f30(lVar13);
                FUN_1409165e0(lVar10 + 0x248,&local_a0);
              }
            }
          }
          _Memory = *(void **)(*(longlong *)(param_1 + 0x48) + local_118 * 8);
          if (_Memory != (void *)0x0) {
            iVar16 = (int)(DAT_141c534c0 - DAT_141c534b8 >> 3) + -1;
            if (-1 < iVar16) {
              lVar10 = (longlong)iVar16;
              do {
                if (*(void **)(DAT_141c534b8 + lVar10 * 8) == _Memory) {
                  _Dst = (void *)(DAT_141c534b8 + (longlong)iVar16 * 8);
                  _Src = (void *)((longlong)_Dst + 8);
                  memmove(_Dst,_Src,DAT_141c534c0 - (longlong)_Src);
                  DAT_141c534c0 = DAT_141c534c0 + -8;
                  break;
                }
                iVar16 = iVar16 + -1;
                lVar10 = lVar10 + -1;
              } while (-1 < lVar10);
            }
            free(_Memory);
          }
        }
        local_118 = local_118 - 1;
      } while (-1 < (longlong)local_118);
    }
  }
  return;
}

