// FUN_140c1e0c0 @ 140c1e0c0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 140dfdcc0 memcmp
//   -> 140dfb5c4 operator_new
//   -> 140c1f3d0 FUN_140c1f3d0
//   -> 140002020 FUN_140002020
//   -> 140071310 FUN_140071310
//   -> 14000c110 FUN_14000c110
//   -> 14014a5a0 FUN_14014a5a0
//   -> 1400503d0 FUN_1400503d0
//   -> 140296510 FUN_140296510
//   -> 14000c260 FUN_14000c260
//   -> 1402d2b50 FUN_1402d2b50
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014aad0 FUN_14014aad0
//   -> 1402d2780 FUN_1402d2780
//   -> 140296990 FUN_140296990
//   -> 1402d4530 FUN_1402d4530
//   -> 140296b30 FUN_140296b30
//   -> 140296680 FUN_140296680
//   -> 14000c230 FUN_14000c230
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140c1e0c0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  longlong lVar17;
  ulonglong uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  size_t sVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 *local_218;
  undefined8 *local_210;
  int local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  longlong local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  ulonglong local_190;
  ulonglong local_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  longlong local_150;
  ulonglong local_148;
  undefined8 local_140 [2];
  longlong local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  longlong local_110;
  ulonglong local_108;
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_1d0 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_258;
  if ((0 < DAT_141c51398) && ((*DAT_141c51390 & 1) != 0)) {
    local_1a8 = 0xf;
    local_1b0 = 0;
    local_1c0 = 0;
    puVar20 = (undefined8 *)0x0;
    local_210 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    local_1f8 = (undefined8 *)0x0;
    local_208 = 1;
    local_200 = param_3;
    local_1d8 = param_2;
    if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
      local_1f0 = 1;
      do {
        puVar11 = *(undefined1 **)(*local_1d8 + local_1f0 * 8);
        if (&local_1c0 != puVar11) {
          FUN_14000c8b0(&local_1c0,puVar11,0,0xffffffffffffffff);
        }
        iVar22 = 0;
        if (local_1b0 != 0) {
          do {
            puVar11 = &local_1c0;
            if (0xf < local_1a8) {
              puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
            }
            if (puVar11[iVar22] == '[') {
              local_188 = 0xf;
              local_190 = 0;
              local_1a0 = 0;
              if (local_1b0 == 0) {
LAB_140c1f337:
                if (local_188 < 0x10) goto LAB_140c1f34b;
                puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                uVar23 = local_188;
              }
              else {
                iVar22 = iVar22 + 1;
                local_218 = (undefined1 *)CONCAT44(local_218._4_4_,iVar22);
                if (local_1b0 < (ulonglong)(longlong)iVar22) goto LAB_140c1f337;
                puVar11 = &local_1c0;
                if (0xf < local_1a8) {
                  puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                }
                pcVar19 = puVar11 + local_1b0;
                uVar23 = local_188;
                uVar18 = local_190;
                for (pcVar16 = puVar11 + iVar22;
                    ((local_190 = uVar18, local_188 = uVar23, pcVar16 < pcVar19 && (*pcVar16 != ':')
                     ) && (*pcVar16 != ']')); pcVar16 = pcVar16 + 1) {
                  FUN_140050540(&local_1a0,1);
                  iVar22 = iVar22 + 1;
                  local_218 = (undefined1 *)CONCAT44(local_218._4_4_,iVar22);
                  uVar23 = local_188;
                  uVar18 = local_190;
                }
                if (uVar18 == 0) goto LAB_140c1f337;
                puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                puVar15 = &local_1a0;
                if (0xf < uVar23) {
                  puVar15 = puVar11;
                }
                sVar21 = 9;
                if (uVar18 < 9) {
                  sVar21 = uVar18;
                }
                if ((sVar21 != 0) && (iVar4 = memcmp(puVar15,"TILE_PAGE",sVar21), iVar4 != 0)) {
LAB_140c1e519:
                  puVar15 = &local_1a0;
                  if (0xf < uVar23) {
                    puVar15 = puVar11;
                  }
                  sVar21 = 0x11;
                  if (uVar18 < 0x11) {
                    sVar21 = uVar18;
                  }
                  if ((sVar21 == 0) ||
                     (iVar4 = memcmp(puVar15,"CREATURE_GRAPHICS",sVar21), iVar4 == 0)) {
                    if (uVar18 < 0x11) {
                      uVar5 = 0xffffffff;
                    }
                    else {
                      uVar5 = (uint)(0x11 < uVar18);
                    }
                    if (uVar5 == 0) {
                      local_108 = 0xf;
                      local_110 = 0;
                      local_120 = 0;
                      if (local_1b0 != 0) {
                        iVar22 = iVar22 + 1;
                        if ((ulonglong)(longlong)iVar22 <= local_1b0) {
                          puVar11 = &local_1c0;
                          if (0xf < local_1a8) {
                            puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                          }
                          pcVar19 = puVar11 + local_1b0;
                          uVar18 = local_108;
                          lVar17 = DAT_141d6dd50;
                          for (pcVar16 = puVar11 + iVar22;
                              ((DAT_141d6dd50 = lVar17, local_108 = uVar18, pcVar16 < pcVar19 &&
                               (*pcVar16 != ':')) && (*pcVar16 != ']')); pcVar16 = pcVar16 + 1) {
                            FUN_140050540(&local_120,1);
                            iVar22 = iVar22 + 1;
                            uVar18 = local_108;
                            lVar17 = DAT_141d6dd50;
                          }
                          if (local_110 != 0) {
                            if (local_110 != 0) {
                              iVar4 = (int)(DAT_141d6dd58 - lVar17 >> 3);
                              do {
                                iVar4 = iVar4 + -1;
                                if (iVar4 < 0) {
                                  puVar20 = (undefined8 *)0x0;
                                  goto LAB_140c1e647;
                                }
                                iVar6 = FUN_140071310(*(undefined8 *)(lVar17 + (longlong)iVar4 * 8),
                                                      &local_120);
                              } while (iVar6 != 0);
                              puVar20 = *(undefined8 **)(lVar17 + (longlong)iVar4 * 8);
LAB_140c1e647:
                              local_1f8 = (undefined8 *)0x0;
                              local_210 = puVar20;
                            }
                            if (0xf < uVar18) {
                              FUN_140002020(CONCAT71(uStack_11f,local_120),uVar18 + 1,1);
                            }
                            goto LAB_140c1f32c;
                          }
                          puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                        }
                      }
                      if (0xf < local_108) {
                        uVar12 = CONCAT71(uStack_11f,local_120);
                        uVar18 = local_108;
                        goto LAB_140c1e4e8;
                      }
                      goto LAB_140c1e4f8;
                    }
                  }
                  if (puVar20 == (undefined8 *)0x0) {
                    if (puVar10 == (undefined8 *)0x0) {
LAB_140c1f32c:
                      FUN_14000c260(&local_1a0);
                      goto LAB_140c1f34b;
                    }
                    iVar4 = FUN_14000c110(&local_1a0,&DAT_140f8a0f4);
                    if (iVar4 == 0) {
                      FUN_14000c2b0(local_100);
                      cVar1 = FUN_14014aad0(local_100,&local_1c0,&local_218,0x3a);
                      if (cVar1 != '\0') {
                        FUN_14000c230(puVar10 + 4,local_100);
                      }
LAB_140c1efec:
                      puVar11 = local_100;
                    }
                    else {
                      iVar4 = FUN_14000c110(&local_1a0,"TILE_DIM");
                      if (iVar4 == 0) {
                        FUN_14000c2b0(local_e0);
                        FUN_14000c2b0(local_100);
                        cVar1 = FUN_14014aad0(local_e0,&local_1c0,&local_218,0x3a);
                        if (cVar1 == '\0') {
                          FUN_14000c260(local_100);
                          puVar11 = local_e0;
                        }
                        else {
                          cVar1 = FUN_14014aad0(local_100,&local_1c0,&local_218,0x3a);
                          if (cVar1 == '\0') {
                            FUN_14000c260(local_100);
                            puVar11 = local_e0;
                          }
                          else {
                            uVar3 = FUN_14014a5a0(local_e0);
                            *(undefined2 *)(puVar10 + 8) = uVar3;
                            uVar3 = FUN_14014a5a0(local_100);
                            *(undefined2 *)((longlong)puVar10 + 0x42) = uVar3;
                            FUN_14000c260(local_100);
                            puVar11 = local_e0;
                          }
                        }
                      }
                      else {
                        iVar4 = FUN_14000c110(&local_1a0,"PAGE_DIM");
                        if (iVar4 != 0) {
                          FUN_14007b5f0(local_80,puVar10,&DAT_140e7aaf8);
                          FUN_14000c1f0(local_80,"Unrecognized Tile Page Token: ");
                          FUN_140050380(local_80,&local_1a0);
                          FUN_14014a240(local_80);
                          FUN_14000c260(local_80);
                          goto LAB_140c1f32c;
                        }
                        FUN_14000c2b0(local_e0);
                        FUN_14000c2b0(local_100);
                        cVar1 = FUN_14014aad0(local_e0,&local_1c0,&local_218,0x3a);
                        if (cVar1 == '\0') {
                          FUN_14000c260(local_100);
                          puVar11 = local_e0;
                        }
                        else {
                          cVar1 = FUN_14014aad0(local_100,&local_1c0,&local_218,0x3a);
                          if (cVar1 == '\0') {
                            FUN_14000c260(local_100);
                            puVar11 = local_e0;
                          }
                          else {
                            uVar3 = FUN_14014a5a0(local_e0);
                            *(undefined2 *)((longlong)puVar10 + 0x44) = uVar3;
                            uVar3 = FUN_14014a5a0(local_100);
                            *(undefined2 *)((longlong)puVar10 + 0x46) = uVar3;
                            FUN_14000c260(local_100);
                            puVar11 = local_e0;
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_14000c110(&local_1a0,"DEFAULT");
                    if (iVar4 == 0) {
                      iVar6 = 0;
                    }
                    else {
                      iVar4 = FUN_14000c110(&local_1a0,"LAW_ENFORCE");
                      if (iVar4 == 0) {
                        iVar6 = 1;
                      }
                      else {
                        iVar4 = FUN_14000c110(&local_1a0,"TAX_ESCORT");
                        if (iVar4 == 0) {
                          iVar6 = 2;
                        }
                        else {
                          iVar4 = FUN_14000c110(&local_1a0,"ANIMATED");
                          if (iVar4 == 0) {
                            iVar6 = 3;
                          }
                          else {
                            iVar4 = FUN_14000c110(&local_1a0,"GHOST");
                            if (iVar4 == 0) {
                              iVar6 = 5;
                            }
                            else {
                              iVar4 = FUN_14000c110(&local_1a0,"ADVENTURER");
                              iVar6 = -1;
                              if (iVar4 == 0) {
                                iVar6 = 4;
                              }
                            }
                          }
                        }
                      }
                    }
                    if (iVar6 != -1) {
                      local_128 = 0xf;
                      local_148 = 0xf;
                      local_150 = 0;
                      local_160 = 0;
                      local_168 = 0xf;
                      local_170 = 0;
                      local_180 = 0;
                      local_108 = 0xf;
                      local_110 = 0;
                      local_120 = 0;
                      local_130 = 0;
                      local_140[0]._0_1_ = 0;
                      if (local_1b0 == 0) {
LAB_140c1ebaa:
                        uVar23 = local_128;
                        if (0xf < local_168) {
                          FUN_140002020(CONCAT71(uStack_17f,local_180),local_168 + 1,1);
                        }
                        local_168 = 0xf;
                        local_170 = 0;
                        local_180 = 0;
                        if (0xf < local_148) {
                          FUN_140002020(CONCAT71(uStack_15f,local_160),local_148 + 1,1);
                        }
                        local_148 = 0xf;
                        local_150 = 0;
                        local_160 = 0;
                        if (0xf < uVar23) {
                          FUN_140002020(CONCAT71(local_140[0]._1_7_,(undefined1)local_140[0]),
                                        uVar23 + 1,1);
                        }
                        puVar20 = local_210;
                        if (local_188 < 0x10) goto LAB_140c1f34b;
                      }
                      else {
                        iVar22 = iVar22 + 1;
                        if (local_1b0 < (ulonglong)(longlong)iVar22) {
LAB_140c1eba6:
                          puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                          goto LAB_140c1ebaa;
                        }
                        puVar11 = &local_1c0;
                        if (0xf < local_1a8) {
                          puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                        }
                        pcVar19 = puVar11 + local_1b0;
                        uVar23 = local_128;
                        for (pcVar16 = puVar11 + iVar22;
                            ((local_128 = uVar23, pcVar16 < pcVar19 && (*pcVar16 != ':')) &&
                            (*pcVar16 != ']')); pcVar16 = pcVar16 + 1) {
                          FUN_140050540(local_140,1);
                          iVar22 = iVar22 + 1;
                          uVar23 = local_128;
                        }
                        if (local_130 == 0) goto LAB_140c1eba6;
                        local_150 = 0;
                        puVar11 = &local_160;
                        if (0xf < local_148) {
                          puVar11 = (undefined1 *)CONCAT71(uStack_15f,local_160);
                        }
                        *puVar11 = 0;
                        if (local_1b0 != 0) {
                          iVar22 = iVar22 + 1;
                          if ((ulonglong)(longlong)iVar22 <= local_1b0) {
                            puVar11 = &local_1c0;
                            if (0xf < local_1a8) {
                              puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                            }
                            pcVar19 = puVar11 + local_1b0;
                            for (pcVar16 = puVar11 + iVar22;
                                ((pcVar16 < pcVar19 && (*pcVar16 != ':')) && (*pcVar16 != ']'));
                                pcVar16 = pcVar16 + 1) {
                              FUN_140050540(&local_160,1);
                              iVar22 = iVar22 + 1;
                            }
                            if (local_150 != 0) {
                              local_170 = 0;
                              puVar11 = &local_180;
                              if (0xf < local_168) {
                                puVar11 = (undefined1 *)CONCAT71(uStack_17f,local_180);
                              }
                              *puVar11 = 0;
                              if (local_1b0 != 0) {
                                iVar22 = iVar22 + 1;
                                if ((ulonglong)(longlong)iVar22 <= local_1b0) {
                                  puVar11 = &local_1c0;
                                  if (0xf < local_1a8) {
                                    puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                                  }
                                  pcVar19 = puVar11 + local_1b0;
                                  for (pcVar16 = puVar11 + iVar22;
                                      ((pcVar16 < pcVar19 && (*pcVar16 != ':')) && (*pcVar16 != ']')
                                      ); pcVar16 = pcVar16 + 1) {
                                    FUN_140050540(&local_180,1);
                                    iVar22 = iVar22 + 1;
                                  }
                                  if (local_170 != 0) {
                                    local_110 = 0;
                                    local_120 = 0;
                                    uVar18 = 0xf;
                                    if (local_1b0 != 0) {
                                      iVar22 = iVar22 + 1;
                                      uVar18 = 0xf;
                                      if ((ulonglong)(longlong)iVar22 <= local_1b0) {
                                        puVar11 = &local_1c0;
                                        if (0xf < local_1a8) {
                                          puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                                        }
                                        pcVar19 = puVar11 + local_1b0;
                                        uVar18 = 0xf;
                                        for (pcVar16 = puVar11 + iVar22;
                                            ((pcVar16 < pcVar19 &&
                                             (uVar18 = local_108, *pcVar16 != ':')) &&
                                            (*pcVar16 != ']')); pcVar16 = pcVar16 + 1) {
                                          FUN_140050540(&local_120,1);
                                          iVar22 = iVar22 + 1;
                                          uVar18 = local_108;
                                        }
                                        if (local_110 != 0) {
                                          uVar7 = FUN_14014a5a0(&local_160);
                                          uVar8 = FUN_14014a5a0(&local_180);
                                          local_218 = local_100;
                                          uVar12 = FUN_1400503d0(local_100,&local_120);
                                          uVar13 = FUN_1400503d0(local_a0,local_140);
                                          puVar20 = local_210;
                                          local_228 = local_200;
                                          local_238 = uVar8;
                                          local_230 = uVar12;
                                          FUN_140296510(local_210,iVar6,uVar13,uVar7);
                                          FUN_14000c260(&local_120);
                                          FUN_14000c260(&local_180);
                                          FUN_14000c260(&local_160);
                                          FUN_14000c260(local_140);
                                          FUN_14000c260(&local_1a0);
                                          goto LAB_140c1f34b;
                                        }
                                      }
                                    }
                                    if (0xf < uVar18) {
                                      FUN_140002020(CONCAT71(uStack_11f,local_120),uVar18 + 1,1);
                                    }
                                    if (0xf < local_168) {
                                      FUN_140002020(CONCAT71(uStack_17f,local_180),local_168 + 1,1);
                                    }
                                    local_168 = 0xf;
                                    local_170 = 0;
                                    local_180 = 0;
                                    if (0xf < local_148) {
                                      FUN_140002020(CONCAT71(uStack_15f,local_160),local_148 + 1,1);
                                    }
                                    local_148 = 0xf;
                                    local_150 = 0;
                                    local_160 = 0;
                                    if (0xf < uVar23) {
                                      FUN_140002020(CONCAT71(local_140[0]._1_7_,
                                                             (undefined1)local_140[0]),uVar23 + 1,1)
                                      ;
                                    }
                                    FUN_14000c260(&local_1a0);
                                    puVar20 = local_210;
                                    goto LAB_140c1f34b;
                                  }
                                }
                              }
                            }
                          }
                        }
                        if (0xf < local_168) {
                          FUN_140002020(CONCAT71(uStack_17f,local_180),local_168 + 1,1);
                        }
                        local_180 = 0;
                        local_170 = 0;
                        local_168 = 0xf;
                        if (0xf < local_148) {
                          FUN_140002020(CONCAT71(uStack_15f,local_160),local_148 + 1,1);
                        }
                        local_160 = 0;
                        local_150 = 0;
                        local_148 = 0xf;
                        if (0xf < uVar23) {
                          FUN_140002020(CONCAT71(local_140[0]._1_7_,(undefined1)local_140[0]),
                                        uVar23 + 1,1);
                        }
                        puVar20 = local_210;
                        if (local_188 < 0x10) goto LAB_140c1f34b;
                        puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                      }
                      FUN_140002020(puVar11,local_188 + 1,1);
                      puVar20 = local_210;
                      goto LAB_140c1f34b;
                    }
                    sVar2 = FUN_1402d2b50(&local_1a0);
                    if (sVar2 == -1) {
                      iVar22 = FUN_1402d4530(&local_1a0,0);
                      if (iVar22 == -1) {
                        FUN_14000c2b0(local_100);
                        FUN_14000c2b0(local_e0);
                        FUN_14000c2b0(local_80);
                        FUN_14000c2b0(local_a0);
                        FUN_14000c2b0(local_60);
                        cVar1 = FUN_14014aad0(local_100,&local_1c0,&local_218,0x3a);
                        if (((cVar1 != '\0') &&
                            (cVar1 = FUN_14014aad0(local_e0,&local_1c0,&local_218,0x3a),
                            cVar1 != '\0')) &&
                           ((cVar1 = FUN_14014aad0(local_80,&local_1c0,&local_218,0x3a),
                            cVar1 != '\0' &&
                            ((cVar1 = FUN_14014aad0(local_a0,&local_1c0,&local_218,0x3a),
                             cVar1 != '\0' &&
                             (cVar1 = FUN_14014aad0(local_60,&local_1c0,&local_218,0x3a),
                             cVar1 != '\0')))))) {
                          uVar7 = FUN_14014a5a0(local_e0);
                          uVar8 = FUN_14014a5a0(local_80);
                          iVar22 = FUN_1402d2780(local_60,1);
                          if (iVar22 != -1) {
                            local_1e0 = local_c0;
                            local_1e8 = &local_120;
                            uVar12 = FUN_1400503d0(local_c0,local_a0);
                            uVar13 = FUN_1400503d0(&local_120,local_100);
                            uVar14 = FUN_1400503d0(local_140,&local_1a0);
                            local_220 = local_200;
                            local_228 = CONCAT44(local_228._4_4_,iVar22);
                            local_238 = uVar8;
                            local_230 = uVar12;
                            FUN_140296680(puVar20,uVar14,uVar13,uVar7);
                          }
                        }
                        FUN_14000c260(local_60);
                        FUN_14000c260(local_a0);
                        FUN_14000c260(local_80);
                        FUN_14000c260(local_e0);
                        goto LAB_140c1efec;
                      }
                      FUN_14000c2b0(&local_180);
                      FUN_14000c2b0(&local_160);
                      FUN_14000c2b0(local_140);
                      FUN_14000c2b0(&local_120);
                      FUN_14000c2b0(local_c0);
                      cVar1 = FUN_14014aad0(&local_180,&local_1c0,&local_218,0x3a);
                      if ((((cVar1 != '\0') &&
                           (cVar1 = FUN_14014aad0(&local_160,&local_1c0,&local_218,0x3a),
                           cVar1 != '\0')) &&
                          (cVar1 = FUN_14014aad0(local_140,&local_1c0,&local_218,0x3a),
                          cVar1 != '\0')) &&
                         ((cVar1 = FUN_14014aad0(&local_120,&local_1c0,&local_218,0x3a),
                          cVar1 != '\0' &&
                          (cVar1 = FUN_14014aad0(local_c0,&local_1c0,&local_218,0x3a), cVar1 != '\0'
                          )))) {
                        uVar7 = FUN_14014a5a0(&local_160);
                        uVar8 = FUN_14014a5a0(local_140);
                        iVar4 = FUN_1402d2780(local_c0,1);
                        if (iVar4 != -1) {
                          local_1e0 = local_100;
                          uVar12 = FUN_1400503d0(local_100,&local_120);
                          uVar13 = FUN_1400503d0(local_a0,&local_180);
                          local_220 = local_200;
                          local_228 = CONCAT44(local_228._4_4_,iVar4);
                          local_238 = uVar8;
                          local_230 = uVar12;
                          FUN_140296b30(puVar20,iVar22,uVar13,uVar7);
                        }
                      }
                      FUN_14000c260(local_c0);
                      FUN_14000c260(&local_120);
                      FUN_14000c260(local_140);
                      FUN_14000c260(&local_160);
                      puVar11 = &local_180;
                    }
                    else {
                      FUN_14000c2b0(local_c0);
                      FUN_14000c2b0(&local_180);
                      FUN_14000c2b0(&local_160);
                      FUN_14000c2b0(local_140);
                      FUN_14000c2b0(&local_120);
                      cVar1 = FUN_14014aad0(local_c0,&local_1c0,&local_218,0x3a);
                      if (((cVar1 != '\0') &&
                          (cVar1 = FUN_14014aad0(&local_180,&local_1c0,&local_218,0x3a),
                          cVar1 != '\0')) &&
                         ((cVar1 = FUN_14014aad0(&local_160,&local_1c0,&local_218,0x3a),
                          cVar1 != '\0' &&
                          ((cVar1 = FUN_14014aad0(local_140,&local_1c0,&local_218,0x3a),
                           cVar1 != '\0' &&
                           (cVar1 = FUN_14014aad0(&local_120,&local_1c0,&local_218,0x3a),
                           cVar1 != '\0')))))) {
                        uVar7 = FUN_14014a5a0(&local_180);
                        uVar8 = FUN_14014a5a0(&local_160);
                        iVar22 = FUN_1402d2780(&local_120,1);
                        if (iVar22 != -1) {
                          local_1e8 = local_100;
                          uVar12 = FUN_1400503d0(local_100,local_140);
                          uVar13 = FUN_1400503d0(local_a0,local_c0);
                          local_220 = local_200;
                          local_228 = CONCAT44(local_228._4_4_,iVar22);
                          local_238 = uVar8;
                          local_230 = uVar12;
                          FUN_140296990(puVar20,sVar2,uVar13,uVar7);
                        }
                      }
                      FUN_14000c260(&local_120);
                      FUN_14000c260(local_140);
                      FUN_14000c260(&local_160);
                      FUN_14000c260(&local_180);
                      puVar11 = local_c0;
                    }
                  }
                  FUN_14000c260(puVar11);
                  FUN_14000c260(&local_1a0);
                  iVar22 = (int)local_218;
                  goto LAB_140c1f34b;
                }
                if (uVar18 < 9) {
                  uVar5 = 0xffffffff;
                }
                else {
                  uVar5 = (uint)(9 < uVar18);
                }
                if (uVar5 != 0) goto LAB_140c1e519;
                local_128 = 0xf;
                local_130 = 0;
                local_140[0]._0_1_ = 0;
                if (local_1b0 != 0) {
                  iVar22 = iVar22 + 1;
                  if (local_1b0 < (ulonglong)(longlong)iVar22) goto LAB_140c1e4de;
                  puVar11 = &local_1c0;
                  if (0xf < local_1a8) {
                    puVar11 = (undefined1 *)CONCAT71(uStack_1bf,local_1c0);
                  }
                  pcVar19 = puVar11 + local_1b0;
                  uVar18 = local_128;
                  for (pcVar16 = puVar11 + iVar22;
                      ((local_128 = uVar18, pcVar16 < pcVar19 && (*pcVar16 != ':')) &&
                      (*pcVar16 != ']')); pcVar16 = pcVar16 + 1) {
                    FUN_140050540(local_140,1);
                    iVar22 = iVar22 + 1;
                    uVar18 = local_128;
                  }
                  if (local_130 == 0) {
                    puVar11 = (undefined1 *)CONCAT71(uStack_19f,local_1a0);
                    goto LAB_140c1e4de;
                  }
                  if (local_130 != 0) {
                    puVar9 = operator_new(0xb0);
                    puVar20 = (undefined8 *)0x0;
                    puVar9[3] = 0xf;
                    puVar9[2] = 0;
                    puVar10 = puVar9;
                    if (0xf < (ulonglong)puVar9[3]) {
                      puVar10 = (undefined8 *)*puVar9;
                    }
                    *(undefined1 *)puVar10 = 0;
                    puVar10 = puVar9 + 4;
                    puVar9[7] = 0xf;
                    puVar9[6] = 0;
                    if (0xf < (ulonglong)puVar9[7]) {
                      puVar10 = (undefined8 *)*puVar10;
                    }
                    *(undefined1 *)puVar10 = 0;
                    puVar9[9] = 0;
                    puVar9[10] = 0;
                    puVar9[0xb] = 0;
                    puVar9[0xc] = 0;
                    puVar9[0xd] = 0;
                    puVar9[0xe] = 0;
                    puVar9[0xf] = 0;
                    puVar9[0x10] = 0;
                    puVar9[0x11] = 0;
                    puVar9[0x12] = 0;
                    puVar9[0x13] = 0;
                    puVar9[0x14] = 0;
                    *(undefined1 *)(puVar9 + 0x15) = 0;
                    local_210 = puVar9;
                    local_1f8 = puVar9;
                    if (puVar9 != local_140) {
                      FUN_14000c8b0(puVar9,local_140,0,0xffffffffffffffff);
                      uVar18 = local_128;
                    }
                    if ((&local_210 < DAT_141c3d458) && (DAT_141c3d450 <= &local_210)) {
                      lVar17 = (longlong)&local_210 - (longlong)DAT_141c3d450;
                      if (DAT_141c3d458 == DAT_141c3d460) {
                        FUN_140c1f3d0();
                      }
                      if (DAT_141c3d458 != (undefined8 **)0x0) {
                        *DAT_141c3d458 = DAT_141c3d450[lVar17 >> 3];
                      }
                    }
                    else {
                      if (DAT_141c3d458 == DAT_141c3d460) {
                        FUN_140c1f3d0();
                      }
                      if (DAT_141c3d458 != (undefined8 **)0x0) {
                        *DAT_141c3d458 = puVar9;
                      }
                    }
                    DAT_141c3d458 = DAT_141c3d458 + 1;
                    local_210 = (undefined8 *)0x0;
                  }
                  if (0xf < uVar18) {
                    FUN_140002020(CONCAT71(local_140[0]._1_7_,(undefined1)local_140[0]),uVar18 + 1,1
                                 );
                  }
                  goto LAB_140c1f32c;
                }
LAB_140c1e4de:
                if (0xf < local_128) {
                  uVar12 = CONCAT71(local_140[0]._1_7_,(undefined1)local_140[0]);
                  uVar18 = local_128;
LAB_140c1e4e8:
                  FUN_140002020(uVar12,uVar18 + 1,1);
                }
LAB_140c1e4f8:
                if (uVar23 < 0x10) goto LAB_140c1f34b;
              }
              FUN_140002020(puVar11,uVar23 + 1,1);
            }
LAB_140c1f34b:
            iVar22 = iVar22 + 1;
            puVar10 = local_1f8;
          } while ((ulonglong)(longlong)iVar22 < local_1b0);
        }
        local_208 = local_208 + 1;
        local_1f0 = local_1f0 + 1;
      } while ((ulonglong)(longlong)local_208 < (ulonglong)(local_1d8[1] - *local_1d8 >> 3));
    }
    FUN_14000c260(&local_1c0);
  }
  return;
}

