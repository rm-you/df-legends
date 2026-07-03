// FUN_1408d2530 @ 1408d2530
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140071310 FUN_140071310
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 1408b14b0 FUN_1408b14b0
//   -> 1408b55a0 FUN_1408b55a0
//   -> 140051b70 FUN_140051b70
//   -> 14000be20 FUN_14000be20
//   -> EXTERNAL:00000115 atoi
//   -> 14000d730 FUN_14000d730
//   -> 14007bda0 FUN_14007bda0
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014aad0 FUN_14014aad0
//   -> 140050390 FUN_140050390
//   -> 140050380 FUN_140050380
//   -> 14000c260 FUN_14000c260
//   -> 14000c1f0 FUN_14000c1f0
//   -> 1402db670 FUN_1402db670
//   -> 14014a5a0 FUN_14014a5a0
//   -> 1401b2ee0 FUN_1401b2ee0
//   -> 14007b5f0 FUN_14007b5f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408d2530(undefined8 param_1,longlong *param_2,char param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined2 local_158;
  undefined2 local_156;
  int local_154;
  int local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  longlong local_120;
  ulonglong local_118;
  char local_110;
  undefined7 uStack_10f;
  longlong local_100;
  ulonglong local_f8;
  char local_f0;
  undefined7 uStack_ef;
  longlong local_e0;
  ulonglong local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  longlong local_a0;
  ulonglong local_98;
  char local_90 [32];
  char local_70 [32];
  char local_50 [32];
  ulonglong local_30;
  
  local_138 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    local_b8 = 0xf;
    local_c0 = 0;
    local_d0 = 0;
    local_150 = 0;
    iVar3 = (int)(*(longlong *)(lVar7 + 0x28) - *(longlong *)(lVar7 + 0x20) >> 3);
    if (0 < iVar3) {
      local_148 = 0;
      local_140 = (longlong)iVar3;
      do {
        lVar7 = local_148;
        puVar6 = *(undefined1 **)(*(longlong *)(*param_2 + 0x20) + local_148 * 8);
        if (&local_d0 != puVar6) {
          FUN_14000c8b0(&local_d0,puVar6,0,0xffffffffffffffff);
        }
        local_154 = 0;
        if (local_c0 != 0) {
          do {
            uVar8 = 1;
            puVar6 = &local_d0;
            if (0xf < local_b8) {
              puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
            }
            if (puVar6[local_154] != '[') goto LAB_1408d3b22;
            local_118 = 0xf;
            local_120 = 0;
            local_130 = 0;
            if (local_c0 == 0) {
LAB_1408d3aeb:
              uVar13 = local_118;
              if (0xf < local_118) {
LAB_1408d2cde:
                FUN_140002020(CONCAT71(uStack_12f,local_130),uVar13 + 1);
              }
            }
            else {
              local_154 = local_154 + 1;
              if (local_c0 < (ulonglong)(longlong)local_154) goto LAB_1408d3aeb;
              puVar6 = &local_d0;
              if (0xf < local_b8) {
                puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
              }
              pcVar12 = puVar6 + local_c0;
              uVar13 = local_118;
              for (pcVar10 = puVar6 + local_154;
                  ((local_118 = uVar13, pcVar10 < pcVar12 && (*pcVar10 != ':')) && (*pcVar10 != ']')
                  ); pcVar10 = pcVar10 + 1) {
                FUN_140050540(&local_130,1);
                local_154 = local_154 + 1;
                uVar13 = local_118;
              }
              if (local_120 == 0) goto LAB_1408d3aeb;
              iVar3 = FUN_14000c110(&local_130,"USE_MATERIAL_TEMPLATE");
              if (iVar3 == 0) {
                local_98 = 0xf;
                local_a0 = 0;
                local_b0 = 0;
                if (local_c0 != 0) {
                  local_154 = local_154 + 1;
                  if ((ulonglong)(longlong)local_154 <= local_c0) {
                    puVar6 = &local_d0;
                    if (0xf < local_b8) {
                      puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                    }
                    pcVar12 = puVar6 + local_c0;
                    uVar14 = local_98;
                    lVar7 = DAT_141d6dbc8;
                    for (pcVar10 = puVar6 + local_154;
                        ((DAT_141d6dbc8 = lVar7, local_98 = uVar14, pcVar10 < pcVar12 &&
                         (uVar13 = local_118, *pcVar10 != ':')) && (*pcVar10 != ']'));
                        pcVar10 = pcVar10 + 1) {
                      FUN_140050540(&local_b0,1);
                      local_154 = local_154 + 1;
                      uVar14 = local_98;
                      lVar7 = DAT_141d6dbc8;
                      uVar13 = local_118;
                    }
                    if (local_a0 != 0) {
                      iVar3 = (int)(DAT_141d6dbd0 - lVar7 >> 3) + -1;
                      if (-1 < iVar3) {
                        lVar11 = (longlong)iVar3;
                        do {
                          iVar4 = FUN_140071310(*(undefined8 *)(lVar7 + lVar11 * 8),&local_b0);
                          if (iVar4 == 0) {
                            lVar7 = *(longlong *)(lVar7 + (longlong)iVar3 * 8);
                            goto LAB_1408d27ca;
                          }
                          iVar3 = iVar3 + -1;
                          lVar11 = lVar11 + -1;
                        } while (-1 < lVar11);
                      }
                      lVar7 = 0;
LAB_1408d27ca:
                      if (lVar7 == 0) {
                        local_d8 = 0xf;
                        local_e0 = 0;
                        local_f0 = '\0';
                        FUN_14000c8b0(&local_f0,*param_2,0,0xffffffffffffffff);
                        FUN_14000c9f0(&local_f0,": Could not locate material template ");
                        FUN_14000cb40(&local_f0,&local_b0,0,0xffffffffffffffff);
                        FUN_14014a240(&local_f0);
                        if (0xf < local_d8) {
                          FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1);
                        }
                        local_d8 = 0xf;
                        local_e0 = 0;
                        local_f0 = '\0';
                        if (0xf < local_98) {
                          FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1);
                        }
                        if (0xf < local_118) {
                          FUN_140002020(CONCAT71(uStack_12f,local_130),local_118 + 1);
                        }
                        goto LAB_1408d3b22;
                      }
                      FUN_1408b14b0(param_2[1]);
                      uVar13 = local_118;
                      if (0xf < uVar14) {
                        FUN_140002020(CONCAT71(uStack_af,local_b0),uVar14 + 1);
                        uVar13 = local_118;
                      }
                      goto joined_r0x0001408d299f;
                    }
                  }
                }
                if (0xf < local_98) {
                  FUN_140002020(CONCAT71(uStack_af,local_b0),local_98 + 1);
                  uVar13 = local_118;
                }
                if (0xf < uVar13) {
                  FUN_140002020(CONCAT71(uStack_12f,local_130),uVar13 + 1);
                }
                goto LAB_1408d3b22;
              }
              if (param_2[1] == 0) {
LAB_1408d2971:
                iVar3 = FUN_14000c110(&local_130,"WAFERS");
                if (iVar3 == 0) {
                  if (3 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 3);
                    *pbVar1 = *pbVar1 | 2;
                    uVar13 = local_118;
                  }
                  goto joined_r0x0001408d299f;
                }
                iVar3 = FUN_14000c110(&local_130,"SPECIAL");
                if (iVar3 == 0) {
                  if (2 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 2);
                    *pbVar1 = *pbVar1 | 1;
                    uVar13 = local_118;
                  }
                  goto joined_r0x0001408d299f;
                }
                iVar3 = FUN_14000c110(&local_130,"DEEP_SPECIAL");
                if (iVar3 == 0) {
                  if (2 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 2);
                    *pbVar1 = *pbVar1 | 1;
                    uVar13 = local_118;
                  }
                  if (2 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 2);
                    *pbVar1 = *pbVar1 | 4;
                    uVar13 = local_118;
                  }
                  goto joined_r0x0001408d299f;
                }
                iVar3 = FUN_14000c110(&local_130,"DIVINE");
                if (iVar3 == 0) {
                  if (2 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 2);
                    *pbVar1 = *pbVar1 | 1;
                    uVar13 = local_118;
                  }
                  if (2 < *(int *)(*param_2 + 0x40)) {
                    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x38) + 2);
                    *pbVar1 = *pbVar1 | 8;
                    uVar13 = local_118;
                  }
                  goto joined_r0x0001408d299f;
                }
                iVar3 = FUN_14000c110(&local_130,"METAL_ORE");
                if (iVar3 != 0) {
                  iVar3 = FUN_14000c110(&local_130,"THREAD_METAL");
                  if (iVar3 == 0) {
                    local_d8 = 0xf;
                    local_f8 = 0xf;
                    local_100 = 0;
                    local_110 = '\0';
                    local_e0 = 0;
                    local_f0 = '\0';
                    if (local_c0 != 0) {
                      local_154 = local_154 + 1;
                      if ((ulonglong)(longlong)local_154 <= local_c0) {
                        puVar6 = &local_d0;
                        if (0xf < local_b8) {
                          puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                        }
                        pcVar12 = puVar6 + local_c0;
                        uVar14 = local_d8;
                        for (pcVar10 = puVar6 + local_154;
                            ((local_d8 = uVar14, pcVar10 < pcVar12 &&
                             (uVar13 = local_118, *pcVar10 != ':')) && (*pcVar10 != ']'));
                            pcVar10 = pcVar10 + 1) {
                          FUN_140050540(&local_f0,1);
                          local_154 = local_154 + 1;
                          uVar13 = local_118;
                          uVar14 = local_d8;
                        }
                        if (local_e0 != 0) {
                          local_100 = 0;
                          pcVar10 = &local_110;
                          if (0xf < local_f8) {
                            pcVar10 = (char *)CONCAT71(uStack_10f,local_110);
                          }
                          *pcVar10 = '\0';
                          if (local_c0 != 0) {
                            local_154 = local_154 + 1;
                            if ((ulonglong)(longlong)local_154 <= local_c0) {
                              puVar6 = &local_d0;
                              if (0xf < local_b8) {
                                puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                              }
                              pcVar12 = puVar6 + local_c0;
                              for (pcVar10 = puVar6 + local_154;
                                  ((pcVar10 < pcVar12 && (*pcVar10 != ':')) && (*pcVar10 != ']'));
                                  pcVar10 = pcVar10 + 1) {
                                FUN_140050540(&local_110,1);
                                local_154 = local_154 + 1;
                              }
                              if (local_100 != 0) {
                                FUN_140051b70(*param_2 + 0x98,&local_f0);
                                local_156 = 0xffff;
                                FUN_14000be20(*param_2 + 0xb0,&local_156);
                                pcVar10 = &local_110;
                                if (0xf < local_f8) {
                                  pcVar10 = (char *)CONCAT71(uStack_10f,local_110);
                                }
                                iVar3 = atoi(pcVar10);
                                local_156 = (short)iVar3;
                                FUN_14000be20(*param_2 + 200,&local_156);
                                if (0xf < local_f8) {
                                  FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                                }
                                local_f8 = 0xf;
                                local_100 = 0;
                                local_110 = '\0';
                                if (0xf < local_d8) {
                                  FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1);
                                }
                                if (0xf < local_118) {
                                  FUN_140002020(CONCAT71(uStack_12f,local_130),local_118 + 1);
                                }
                                goto LAB_1408d3b22;
                              }
                              local_100 = 0;
                            }
                          }
                          if (0xf < local_f8) {
                            FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                          }
                          goto LAB_1408d2cad;
                        }
                      }
                    }
                    uVar14 = local_d8;
                    if (0xf < local_f8) {
                      FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                      uVar13 = local_118;
                    }
                    goto LAB_1408d2d1c;
                  }
                  cVar2 = FUN_14000d730(&local_130,"DEEP_SURFACE");
                  if (cVar2 == '\0') {
                    cVar2 = FUN_14000d730(&local_130,"AQUIFER");
                    if (cVar2 != '\0') {
                      uVar8 = 10;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"METAMORPHIC");
                    if (cVar2 != '\0') {
                      lVar7 = *param_2 + 0x38;
                      uVar8 = 7;
LAB_1408d3afd:
                      FUN_14007bda0(lVar7,uVar8);
                      uVar8 = 2;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"SEDIMENTARY");
                    if (cVar2 != '\0') {
                      lVar7 = *param_2 + 0x38;
                      uVar8 = 3;
                      goto LAB_1408d3afd;
                    }
                    cVar2 = FUN_14000d730(&local_130,&DAT_140f487b4);
                    if (cVar2 != '\0') {
                      FUN_14007bda0(*param_2 + 0x38,0xb);
                      lVar7 = *param_2 + 0x38;
                      uVar8 = 0x11;
                      goto LAB_1408d3afd;
                    }
                    cVar2 = FUN_14000d730(&local_130,"SOIL_OCEAN");
                    if (cVar2 != '\0') {
                      FUN_14007bda0(*param_2 + 0x38,0xb);
                      uVar8 = 0xc;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"SOIL_SAND");
                    if (cVar2 != '\0') {
                      FUN_14007bda0(*param_2 + 0x38,0xb);
                      lVar7 = *param_2 + 0x38;
                      uVar8 = 0xd;
                      goto LAB_1408d3afd;
                    }
                    cVar2 = FUN_14000d730(&local_130,"SEDIMENTARY_OCEAN_SHALLOW");
                    if (cVar2 != '\0') {
                      uVar8 = 4;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"SEDIMENTARY_OCEAN_DEEP");
                    if (cVar2 != '\0') {
                      uVar8 = 0xe;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"IGNEOUS_INTRUSIVE");
                    if (cVar2 != '\0') {
                      uVar8 = 5;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"IGNEOUS_EXTRUSIVE");
                    if (cVar2 != '\0') {
                      uVar8 = 6;
                      goto LAB_1408d3b05;
                    }
                    cVar2 = FUN_14000d730(&local_130,"ENVIRONMENT");
                    if (cVar2 == '\0') {
                      cVar2 = FUN_14000d730(&local_130,"ENVIRONMENT_SPEC");
                      if (cVar2 != '\0') {
                        FUN_14000c2b0(&local_f0);
                        FUN_14000c2b0(&local_b0);
                        FUN_14000c2b0(&local_110);
                        cVar2 = FUN_14014aad0(&local_f0,&local_d0,&local_154,0x3a);
                        if (cVar2 == '\0') {
                          FUN_140050390(local_70,"Missing Stone Environment Spec Token: ");
                          FUN_140050380(local_70,*param_2);
                          FUN_14014a240(local_70);
                          pcVar10 = local_70;
LAB_1408d381c:
                          FUN_14000c260(pcVar10);
                        }
                        else {
                          cVar2 = FUN_14014aad0(&local_b0,&local_d0,&local_154,0x3a);
                          if (cVar2 == '\0') {
                            FUN_140050390(local_90,
                                          "Missing Stone Environment Spec Inclusion Type Token: ");
                            FUN_140050380(local_90,*param_2);
                            FUN_14000c1f0(local_90,&DAT_140e5a200);
                            FUN_140050380(local_90,&local_f0);
                            FUN_14014a240(local_90);
                            pcVar10 = local_90;
                            goto LAB_1408d381c;
                          }
                          cVar2 = FUN_14014aad0(&local_110,&local_d0,&local_154,0x3a);
                          if (cVar2 == '\0') {
                            FUN_140050390(local_90,"Missing Frequency for Stone Environment Spec: ")
                            ;
                            FUN_140050380(local_90,*param_2);
                            FUN_14000c1f0(local_90,&DAT_140e5a200);
                            FUN_140050380(local_90,&local_f0);
                            FUN_14000c1f0(local_90,&DAT_140e5a200);
                            FUN_140050380(local_90,&local_b0);
                            FUN_14014a240(local_90);
                            pcVar10 = local_90;
                            goto LAB_1408d381c;
                          }
                          iVar3 = FUN_1402db670(&local_b0);
                          if (iVar3 != -1) {
                            cVar2 = FUN_14014a5a0(&local_110);
                            if (cVar2 < '\x01') {
                              local_156 = CONCAT11(local_156._1_1_,1);
                            }
                            else {
                              if ('d' < cVar2) {
                                cVar2 = 'd';
                              }
                              local_156 = CONCAT11(local_156._1_1_,cVar2);
                            }
                            FUN_140051b70(*param_2 + 0xf8,&local_f0);
                            local_158 = (undefined2)iVar3;
                            FUN_14000be20(*param_2 + 0x128,&local_158);
                            FUN_1401b2ee0(*param_2 + 0x140,&local_156);
                          }
                        }
                        FUN_14000c260(&local_110);
                        FUN_14000c260(&local_b0);
                        pcVar10 = &local_f0;
                        goto LAB_1408d322d;
                      }
                      cVar2 = FUN_14000d730(&local_130,&DAT_140f4887c);
                      if (cVar2 == '\0') {
                        if (param_3 == '\0') {
LAB_1408d3aa4:
                          FUN_14007b5f0(local_50,*param_2);
                          FUN_14000c1f0(local_50,
                                        "Unrecognized Inorganic Material Definition Token: ");
                          FUN_140050380(local_50,&local_130);
                          FUN_14014a240(local_50);
                          pcVar10 = local_50;
                        }
                        else {
                          cVar2 = FUN_14000d730(&local_130,"GENERATED");
                          if (cVar2 != '\0') goto LAB_1408d3b05;
                          cVar2 = FUN_14000d730(&local_130,"SOURCE_HFID");
                          if (cVar2 == '\0') {
                            cVar2 = FUN_14000d730(&local_130,"SOURCE_ENID");
                            if (cVar2 == '\0') goto LAB_1408d3aa4;
                            FUN_14000c2b0(local_70);
                            cVar2 = FUN_14014aad0(local_70,&local_d0,&local_154,0x3a);
                            if (cVar2 == '\0') {
                              pcVar10 = local_70;
                            }
                            else {
                              uVar5 = FUN_14014a5a0(local_70);
                              *(undefined4 *)(*param_2 + 0x4c) = uVar5;
                              pcVar10 = local_70;
                            }
                          }
                          else {
                            FUN_14000c2b0(local_70);
                            cVar2 = FUN_14014aad0(local_70,&local_d0,&local_154,0x3a);
                            if (cVar2 == '\0') {
                              pcVar10 = local_70;
                            }
                            else {
                              uVar5 = FUN_14014a5a0(local_70);
                              *(undefined4 *)(*param_2 + 0x48) = uVar5;
                              pcVar10 = local_70;
                            }
                          }
                        }
                        goto LAB_1408d322d;
                      }
                      lVar7 = *param_2;
                      uVar8 = 0;
                      goto LAB_1408d3b0c;
                    }
                    FUN_14000c2b0(&local_110);
                    FUN_14000c2b0(&local_b0);
                    FUN_14000c2b0(&local_f0);
                    cVar2 = FUN_14014aad0(&local_110,&local_d0,&local_154,0x3a);
                    if (cVar2 == '\0') {
                      FUN_140050390(local_90,"Missing Stone Environment Token: ");
                      FUN_140050380(local_90,*param_2);
                      FUN_14014a240(local_90);
LAB_1408d320b:
                      pcVar10 = local_90;
LAB_1408d320f:
                      FUN_14000c260(pcVar10);
                    }
                    else {
                      cVar2 = FUN_14014aad0(&local_b0,&local_d0,&local_154,0x3a);
                      if (cVar2 == '\0') {
                        FUN_140050390(local_90,"Missing Stone Environment Inclusion Type Token: ");
                        FUN_140050380(local_90,*param_2);
                        FUN_14000c1f0(local_90,&DAT_140e5a200);
                        FUN_140050380(local_90,&local_110);
                        FUN_14014a240(local_90);
                        goto LAB_1408d320b;
                      }
                      cVar2 = FUN_14014aad0(&local_f0,&local_d0,&local_154,0x3a);
                      if (cVar2 == '\0') {
                        FUN_140050390(local_90,"Missing Frequency for Stone Environment: ");
                        FUN_140050380(local_90,*param_2);
                        FUN_14000c1f0(local_90,&DAT_140e5a200);
                        FUN_140050380(local_90,&local_110);
                        FUN_14000c1f0(local_90,&DAT_140e5a200);
                        FUN_140050380(local_90,&local_b0);
                        FUN_14014a240(local_90);
                        goto LAB_1408d320b;
                      }
                      iVar3 = FUN_1402db670(&local_b0);
                      if (iVar3 != -1) {
                        cVar2 = FUN_14014a5a0(&local_f0);
                        if (cVar2 < '\x01') {
                          local_156 = CONCAT11(local_156._1_1_,1);
                        }
                        else {
                          if ('d' < cVar2) {
                            cVar2 = 'd';
                          }
                          local_156 = CONCAT11(local_156._1_1_,cVar2);
                        }
                        cVar2 = FUN_14000d730(&local_110,"ALL_STONE");
                        uVar9 = (undefined2)iVar3;
                        if (cVar2 != '\0') {
                          local_158 = 4;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = 7;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = 3;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = 5;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = 6;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
LAB_1408d34bb:
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
LAB_1408d34cf:
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
                          FUN_14007bda0(*param_2 + 0x38,2);
                          goto LAB_1408d3215;
                        }
                        cVar2 = FUN_14000d730(&local_110,"IGNEOUS_ALL");
                        if (cVar2 != '\0') {
                          local_158 = 5;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = 6;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          goto LAB_1408d34bb;
                        }
                        cVar2 = FUN_14000d730(&local_110,"METAMORPHIC");
                        if (cVar2 != '\0') {
                          local_158 = 3;
LAB_1408d3597:
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          goto LAB_1408d34cf;
                        }
                        cVar2 = FUN_14000d730(&local_110,"SEDIMENTARY");
                        if (cVar2 != '\0') {
                          local_158 = 4;
                          goto LAB_1408d3597;
                        }
                        cVar2 = FUN_14000d730(&local_110,"IGNEOUS_INTRUSIVE");
                        if (cVar2 != '\0') {
                          local_158 = 5;
                          goto LAB_1408d3597;
                        }
                        cVar2 = FUN_14000d730(&local_110,"IGNEOUS_EXTRUSIVE");
                        if (cVar2 != '\0') {
                          local_158 = 6;
                          goto LAB_1408d3597;
                        }
                        cVar2 = FUN_14000d730(&local_110,"ALLUVIAL");
                        if (cVar2 != '\0') {
                          local_158 = 7;
                          goto LAB_1408d3597;
                        }
                        cVar2 = FUN_14000d730(&local_110,&DAT_140f487b4);
                        if (cVar2 != '\0') {
                          local_158 = 0;
                          goto LAB_1408d3597;
                        }
                        cVar2 = FUN_14000d730(&local_110,"SOIL_OCEAN");
                        if (cVar2 != '\0') {
                          local_158 = 1;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
                          goto LAB_1408d3215;
                        }
                        cVar2 = FUN_14000d730(&local_110,"SOIL_SAND");
                        if (cVar2 != '\0') {
                          local_158 = 2;
                          FUN_14000be20(*param_2 + 0x158,&local_158);
                          local_158 = uVar9;
                          FUN_14000be20(*param_2 + 0x170,&local_158);
                          FUN_1401b2ee0(*param_2 + 0x188,&local_156);
                          FUN_14007bda0(*param_2 + 0x38,2);
                          FUN_14000c260(&local_f0);
                          FUN_14000c260(&local_b0);
                          FUN_14000c260(&local_110);
                          FUN_14000c260(&local_130);
                          goto LAB_1408d3b22;
                        }
                        FUN_14007b5f0(local_70,*param_2);
                        FUN_14000c1f0(local_70,"Unrecognized Stone Environment Token: ");
                        FUN_140050380(local_70,&local_110);
                        FUN_14014a240(local_70);
                        pcVar10 = local_70;
                        goto LAB_1408d320f;
                      }
                    }
LAB_1408d3215:
                    FUN_14000c260(&local_f0);
                    FUN_14000c260(&local_b0);
                    pcVar10 = &local_110;
LAB_1408d322d:
                    FUN_14000c260(pcVar10);
                  }
                  else {
                    FUN_14007bda0(*param_2 + 0x38,0x10);
                    uVar8 = 8;
LAB_1408d3b05:
                    lVar7 = *param_2;
LAB_1408d3b0c:
                    FUN_14007bda0(lVar7 + 0x38,uVar8);
                  }
                  FUN_14000c260(&local_130);
                  goto LAB_1408d3b22;
                }
                local_d8 = 0xf;
                local_f8 = 0xf;
                local_100 = 0;
                local_110 = '\0';
                local_e0 = 0;
                local_f0 = '\0';
                if (local_c0 == 0) {
LAB_1408d2cef:
                  uVar14 = local_d8;
                  if (0xf < local_f8) {
                    FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                    uVar13 = local_118;
                  }
LAB_1408d2d1c:
                  local_f8 = 0xf;
                  local_100 = 0;
                  local_110 = '\0';
                  if (0xf < uVar14) {
                    FUN_140002020(CONCAT71(uStack_ef,local_f0),uVar14 + 1);
                    uVar13 = local_118;
                  }
                }
                else {
                  local_154 = local_154 + 1;
                  if (local_c0 < (ulonglong)(longlong)local_154) goto LAB_1408d2cef;
                  puVar6 = &local_d0;
                  if (0xf < local_b8) {
                    puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                  }
                  pcVar12 = puVar6 + local_c0;
                  uVar14 = local_d8;
                  for (pcVar10 = puVar6 + local_154;
                      ((local_d8 = uVar14, pcVar10 < pcVar12 &&
                       (uVar13 = local_118, *pcVar10 != ':')) && (*pcVar10 != ']'));
                      pcVar10 = pcVar10 + 1) {
                    FUN_140050540(&local_f0,1);
                    local_154 = local_154 + 1;
                    uVar13 = local_118;
                    uVar14 = local_d8;
                  }
                  if (local_e0 == 0) goto LAB_1408d2cef;
                  local_100 = 0;
                  pcVar10 = &local_110;
                  if (0xf < local_f8) {
                    pcVar10 = (char *)CONCAT71(uStack_10f,local_110);
                  }
                  *pcVar10 = '\0';
                  if (local_c0 != 0) {
                    local_154 = local_154 + 1;
                    if (local_c0 < (ulonglong)(longlong)local_154) goto LAB_1408d2c81;
                    puVar6 = &local_d0;
                    if (0xf < local_b8) {
                      puVar6 = (undefined1 *)CONCAT71(uStack_cf,local_d0);
                    }
                    pcVar12 = puVar6 + local_c0;
                    for (pcVar10 = puVar6 + local_154;
                        ((pcVar10 < pcVar12 && (*pcVar10 != ':')) && (*pcVar10 != ']'));
                        pcVar10 = pcVar10 + 1) {
                      FUN_140050540(&local_110,1);
                      local_154 = local_154 + 1;
                    }
                    if (local_100 == 0) {
                      local_100 = 0;
                      goto LAB_1408d2c81;
                    }
                    FUN_140051b70(*param_2 + 0x50,&local_f0);
                    local_156 = 0xffff;
                    FUN_14000be20(*param_2 + 0x68,&local_156);
                    pcVar10 = &local_110;
                    if (0xf < local_f8) {
                      pcVar10 = (char *)CONCAT71(uStack_10f,local_110);
                    }
                    iVar3 = atoi(pcVar10);
                    local_156 = (short)iVar3;
                    FUN_14000be20(*param_2 + 0x80,&local_156);
                    if (0xf < local_f8) {
                      FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                    }
                    local_f8 = 0xf;
                    local_100 = 0;
                    local_110 = '\0';
                    if (0xf < local_d8) {
                      FUN_140002020(CONCAT71(uStack_ef,local_f0),local_d8 + 1);
                    }
                    if (0xf < local_118) {
                      FUN_140002020(CONCAT71(uStack_12f,local_130),local_118 + 1);
                    }
                    goto LAB_1408d3b22;
                  }
LAB_1408d2c81:
                  if (0xf < local_f8) {
                    FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1);
                  }
LAB_1408d2cad:
                  local_f8 = 0xf;
                  local_100 = 0;
                  local_110 = '\0';
                  uVar13 = local_118;
                  if (0xf < uVar14) {
                    FUN_140002020(CONCAT71(uStack_ef,local_f0),uVar14 + 1);
                    uVar13 = local_118;
                  }
                }
                if (uVar13 < 0x10) goto LAB_1408d3b22;
                goto LAB_1408d2cde;
              }
              local_160 = param_2 + 0xe;
              local_168 = param_2 + 0xb;
              local_170 = param_2 + 8;
              local_178 = param_2 + 5;
              cVar2 = FUN_1408b55a0(&local_130,&local_154,&local_d0,param_2 + 2);
              uVar13 = local_118;
              if (cVar2 == '\0') goto LAB_1408d2971;
joined_r0x0001408d299f:
              if (0xf < uVar13) {
                FUN_140002020(CONCAT71(uStack_12f,local_130),uVar13 + 1);
              }
            }
LAB_1408d3b22:
            local_154 = local_154 + 1;
            lVar7 = local_148;
          } while ((ulonglong)(longlong)local_154 < local_c0);
        }
        local_150 = local_150 + 1;
        local_148 = lVar7 + 1;
      } while (local_148 < local_140);
    }
    FUN_14000c260(&local_d0);
  }
  return;
}

