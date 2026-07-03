// FUN_1408a5e50 @ 1408a5e50
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140dfdcc0 memcmp
//   -> 14014aad0 FUN_14014aad0
//   -> 14000c260 FUN_14000c260
//   -> 14000c230 FUN_14000c230
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014a5a0 FUN_14014a5a0
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a240 FUN_14014a240
//   -> 1400bd570 FUN_1400bd570
//   -> 14000d730 FUN_14000d730
//   -> 140051b70 FUN_140051b70
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408a5e50(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  size_t sVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  char local_168;
  int local_164;
  longlong *local_160;
  int local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  ulonglong local_128;
  ulonglong local_120;
  undefined1 local_118;
  undefined7 uStack_117;
  longlong local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_140 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_188;
  lVar11 = *param_2;
  local_168 = param_3;
  local_160 = param_2;
  if (lVar11 != 0) {
    local_e0 = 0xf;
    local_e8 = 0;
    local_f8 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = (longlong)(int)(*(longlong *)(lVar11 + 0x158) - *(longlong *)(lVar11 + 0x150) >> 3);
    if (0 < local_148) {
      do {
        puVar6 = *(undefined1 **)(*(longlong *)(*param_2 + 0x150) + local_150 * 8);
        if (&local_f8 != puVar6) {
          FUN_14000c8b0(&local_f8,puVar6,0,0xffffffffffffffff);
        }
        iVar14 = 0;
        if (local_e8 != 0) {
          do {
            puVar6 = &local_f8;
            if (0xf < local_e0) {
              puVar6 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
            }
            if (puVar6[iVar14] == '[') {
              uVar13 = 0xf;
              local_120 = 0xf;
              local_128 = 0;
              local_138 = 0;
              if (local_e8 != 0) {
                iVar14 = iVar14 + 1;
                local_164 = iVar14;
                if ((ulonglong)(longlong)iVar14 <= local_e8) {
                  puVar6 = &local_f8;
                  if (0xf < local_e0) {
                    puVar6 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                  }
                  pcVar10 = puVar6 + local_e8;
                  uVar13 = local_120;
                  uVar9 = local_128;
                  for (pcVar8 = puVar6 + iVar14;
                      ((local_164 = iVar14, local_128 = uVar9, local_120 = uVar13, pcVar8 < pcVar10
                       && (*pcVar8 != ':')) && (*pcVar8 != ']')); pcVar8 = pcVar8 + 1) {
                    FUN_140050540(&local_138,1);
                    iVar14 = iVar14 + 1;
                    uVar13 = local_120;
                    uVar9 = local_128;
                  }
                  if (uVar9 != 0) {
                    if ((param_3 == '\0') ||
                       (iVar4 = FUN_14000c110(&local_138,"GENERATED"), iVar4 != 0)) {
                      lVar11 = *param_2;
                      puVar6 = (undefined1 *)CONCAT71(uStack_137,local_138);
                      puVar7 = &local_138;
                      if (0xf < uVar13) {
                        puVar7 = puVar6;
                      }
                      sVar12 = 4;
                      if (uVar9 < 4) {
                        sVar12 = uVar9;
                      }
                      if ((sVar12 == 0) ||
                         (uVar5 = memcmp(puVar7,&DAT_140f43954,sVar12), uVar5 == 0)) {
                        if (uVar9 < 4) {
                          uVar5 = 0xffffffff;
                        }
                        else {
                          uVar5 = (uint)(4 < uVar9);
                        }
                      }
                      if (uVar5 == 0) {
                        local_80 = 0xf;
                        uVar15 = 0xf;
                        local_100 = 0xf;
                        local_108 = 0;
                        local_118 = 0;
                        local_88 = 0;
                        local_98 = 0;
                        uVar9 = local_80;
                        uVar2 = 0;
                        if (local_e8 != 0) {
                          iVar14 = iVar14 + 1;
                          uVar2 = local_118;
                          if ((ulonglong)(longlong)iVar14 <= local_e8) {
                            puVar6 = &local_f8;
                            if (0xf < local_e0) {
                              puVar6 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                            }
                            pcVar10 = puVar6 + local_e8;
                            local_118 = 0;
                            for (pcVar8 = puVar6 + iVar14;
                                ((local_80 = uVar9, pcVar8 < pcVar10 && (*pcVar8 != ':')) &&
                                (*pcVar8 != ']')); pcVar8 = pcVar8 + 1) {
                              FUN_140050540(&local_98,1);
                              iVar14 = iVar14 + 1;
                              uVar9 = local_80;
                            }
                            uVar2 = local_118;
                            if (local_88 != 0) {
                              local_108 = 0;
                              local_118 = 0;
                              if (local_e8 != 0) {
                                iVar14 = iVar14 + 1;
                                if ((ulonglong)(longlong)iVar14 <= local_e8) {
                                  puVar6 = &local_f8;
                                  if (0xf < local_e0) {
                                    puVar6 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                                  }
                                  pcVar10 = puVar6 + local_e8;
                                  for (pcVar8 = puVar6 + iVar14;
                                      ((pcVar8 < pcVar10 && (uVar15 = local_100, *pcVar8 != ':')) &&
                                      (*pcVar8 != ']')); pcVar8 = pcVar8 + 1) {
                                    FUN_140050540(&local_118,1);
                                    iVar14 = iVar14 + 1;
                                    uVar15 = local_100;
                                  }
                                }
                              }
                              if ((undefined1 *)(lVar11 + 0x20) != &local_98) {
                                FUN_14000c8b0((undefined1 *)(lVar11 + 0x20),&local_98,0,
                                              0xffffffffffffffff);
                                uVar9 = local_80;
                              }
                              if ((undefined1 *)(lVar11 + 0x40) != &local_118) {
                                FUN_14000c8b0((undefined1 *)(lVar11 + 0x40),&local_118,0,
                                              0xffffffffffffffff);
                                uVar15 = local_100;
                              }
                              uVar2 = local_118;
                              if (0xf < uVar15) {
                                FUN_140002020(CONCAT71(uStack_117,local_118),uVar15 + 1,1);
                                uVar2 = local_118;
                              }
                            }
                          }
                        }
                        local_118 = uVar2;
                        if (0xf < uVar9) {
                          FUN_140002020(CONCAT71(uStack_97,local_98),uVar9 + 1,1);
                        }
                        param_2 = local_160;
                        param_3 = local_168;
                        if (uVar13 < 0x10) goto LAB_1408a6a2f;
                        puVar6 = (undefined1 *)CONCAT71(uStack_137,local_138);
LAB_1408a623a:
                        FUN_140002020(puVar6,uVar13 + 1,1);
                        param_2 = local_160;
                        param_3 = local_168;
                        goto LAB_1408a6a2f;
                      }
                      puVar7 = &local_138;
                      if (0xf < uVar13) {
                        puVar7 = puVar6;
                      }
                      sVar12 = 3;
                      if (uVar9 < 3) {
                        sVar12 = uVar9;
                      }
                      if ((sVar12 == 0) ||
                         (iVar4 = memcmp(puVar7,&DAT_140ec340c,sVar12), iVar4 == 0)) {
                        if (uVar9 < 3) {
                          uVar5 = 0xffffffff;
                        }
                        else {
                          uVar5 = (uint)(3 < uVar9);
                        }
                        if (uVar5 != 0) goto LAB_1408a6381;
                        local_100 = 0xf;
                        local_108 = 0;
                        local_118 = 0;
                        uVar2 = 0;
                        if (local_e8 != 0) {
                          iVar14 = iVar14 + 1;
                          uVar2 = local_118;
                          if ((ulonglong)(longlong)iVar14 <= local_e8) {
                            puVar7 = &local_f8;
                            if (0xf < local_e0) {
                              puVar7 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                            }
                            pcVar10 = puVar7 + local_e8;
                            local_118 = 0;
                            for (pcVar8 = puVar7 + iVar14;
                                ((pcVar8 < pcVar10 && (*pcVar8 != ':')) && (*pcVar8 != ']'));
                                pcVar8 = pcVar8 + 1) {
                              FUN_140050540(&local_118,1);
                              iVar14 = iVar14 + 1;
                            }
                            uVar2 = local_118;
                            if ((local_108 != 0) && ((undefined1 *)(lVar11 + 0x60) != &local_118)) {
                              FUN_14000c8b0((undefined1 *)(lVar11 + 0x60),&local_118,0,
                                            0xffffffffffffffff);
                              uVar2 = local_118;
                            }
                          }
                        }
                        goto LAB_1408a6354;
                      }
LAB_1408a6381:
                      puVar7 = &local_138;
                      if (0xf < uVar13) {
                        puVar7 = puVar6;
                      }
                      sVar12 = 6;
                      if (uVar9 < 6) {
                        sVar12 = uVar9;
                      }
                      if ((sVar12 == 0) || (iVar4 = memcmp(puVar7,"PREFIX",sVar12), iVar4 == 0)) {
                        if (uVar9 < 6) {
                          uVar5 = 0xffffffff;
                        }
                        else {
                          uVar5 = (uint)(6 < uVar9);
                        }
                        if (uVar5 == 0) {
                          local_100 = 0xf;
                          local_108 = 0;
                          local_118 = 0;
                          uVar2 = 0;
                          if (local_e8 != 0) {
                            iVar14 = iVar14 + 1;
                            uVar2 = local_118;
                            if ((ulonglong)(longlong)iVar14 <= local_e8) {
                              puVar7 = &local_f8;
                              if (0xf < local_e0) {
                                puVar7 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                              }
                              pcVar10 = puVar7 + local_e8;
                              local_118 = 0;
                              for (pcVar8 = puVar7 + iVar14;
                                  ((pcVar8 < pcVar10 && (*pcVar8 != ':')) && (*pcVar8 != ']'));
                                  pcVar8 = pcVar8 + 1) {
                                FUN_140050540(&local_118,1);
                                iVar14 = iVar14 + 1;
                              }
                              uVar2 = local_118;
                              if ((local_108 != 0) && ((undefined1 *)(lVar11 + 0x80) != &local_118))
                              {
                                FUN_14000c8b0((undefined1 *)(lVar11 + 0x80),&local_118,0,
                                              0xffffffffffffffff);
                                uVar2 = local_118;
                              }
                            }
                          }
                          goto LAB_1408a6354;
                        }
                      }
                      puVar7 = &local_138;
                      if (0xf < uVar13) {
                        puVar7 = puVar6;
                      }
                      sVar12 = 4;
                      if (uVar9 < 4) {
                        sVar12 = uVar9;
                      }
                      if ((sVar12 == 0) ||
                         (iVar4 = memcmp(puVar7,&DAT_140f4395c,sVar12), iVar4 == 0)) {
                        if (uVar9 < 4) {
                          uVar5 = 0xffffffff;
                        }
                        else {
                          uVar5 = (uint)(4 < uVar9);
                        }
                        if (uVar5 != 0) goto LAB_1408a6745;
                        local_100 = 0xf;
                        local_80 = 0xf;
                        local_88 = 0;
                        local_98 = 0;
                        local_a0 = 0xf;
                        local_a8 = 0;
                        local_b8[0] = 0;
                        local_60 = 0xf;
                        local_68 = 0;
                        local_78[0] = 0;
                        local_c0 = 0xf;
                        local_c8 = 0;
                        local_d8[0] = 0;
                        local_108 = 0;
                        local_118 = 0;
                        uVar2 = local_118;
                        if (local_e8 == 0) {
LAB_1408a6354:
                          local_118 = uVar2;
                          if (0xf < local_100) {
                            FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
                          }
                          param_2 = local_160;
                          param_3 = local_168;
                          if (uVar13 < 0x10) goto LAB_1408a6a2f;
                          goto LAB_1408a623a;
                        }
                        iVar14 = iVar14 + 1;
                        if (local_e8 < (ulonglong)(longlong)iVar14) goto LAB_1408a6354;
                        puVar7 = &local_f8;
                        if (0xf < local_e0) {
                          puVar7 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                        }
                        pcVar10 = puVar7 + local_e8;
                        for (pcVar8 = puVar7 + iVar14;
                            ((pcVar8 < pcVar10 && (*pcVar8 != ':')) && (*pcVar8 != ']'));
                            pcVar8 = pcVar8 + 1) {
                          FUN_140050540(&local_118,1);
                          iVar14 = iVar14 + 1;
                        }
                        uVar2 = local_118;
                        if (local_108 == 0) goto LAB_1408a6354;
                        local_88 = 0;
                        local_98 = 0;
                        if (local_e8 == 0) {
LAB_1408a6718:
                          FUN_14000c260(local_78);
                          FUN_14000c260(local_b8);
                          FUN_14000c260(&local_98);
                          puVar6 = &local_118;
LAB_1408a6a14:
                          FUN_14000c260(puVar6);
                          goto LAB_1408a6a1a;
                        }
                        iVar14 = iVar14 + 1;
                        local_164 = iVar14;
                        if (local_e8 < (ulonglong)(longlong)iVar14) goto LAB_1408a6718;
                        puVar6 = &local_f8;
                        if (0xf < local_e0) {
                          puVar6 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                        }
                        pcVar10 = puVar6 + local_e8;
                        for (pcVar8 = puVar6 + iVar14;
                            ((local_164 = iVar14, pcVar8 < pcVar10 && (*pcVar8 != ':')) &&
                            (*pcVar8 != ']')); pcVar8 = pcVar8 + 1) {
                          FUN_140050540(&local_98,1);
                          iVar14 = iVar14 + 1;
                        }
                        if (local_88 == 0) goto LAB_1408a6718;
                        cVar3 = FUN_14014aad0(local_b8,&local_f8,&local_164);
                        if (((cVar3 != '\0') &&
                            (cVar3 = FUN_14014aad0(local_78,&local_f8,&local_164), cVar3 != '\0'))
                           && (cVar3 = FUN_14014aad0(local_d8,&local_f8,&local_164), cVar3 != '\0'))
                        {
                          FUN_14000c230(lVar11 + 0xa0,&local_118);
                          FUN_14000c230(lVar11 + 0xc0,&local_98);
                          FUN_14000c230(lVar11 + 0xe0,local_b8);
                          FUN_14000c230(lVar11 + 0x100,local_78);
                          FUN_14000c230(lVar11 + 0x120,local_d8);
                        }
                        FUN_14000c260(local_d8);
                        FUN_14000c260(local_78);
                        FUN_14000c260(local_b8);
                        FUN_14000c260(&local_98);
                        puVar6 = &local_118;
                      }
                      else {
LAB_1408a6745:
                        iVar4 = FUN_14000c110(&local_138,"ADJ_DIST");
                        if (iVar4 != 0) {
                          iVar4 = FUN_14000c110(&local_138,"THE_NOUN_SING");
                          if (iVar4 == 0) {
                            *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x80;
                          }
                          else {
                            iVar4 = FUN_14000c110(&local_138,"THE_NOUN_PLUR");
                            if (iVar4 == 0) {
                              *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x100;
                            }
                            else {
                              iVar4 = FUN_14000c110(&local_138,"THE_COMPOUND_NOUN_SING");
                              if (iVar4 == 0) {
                                *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x200;
                              }
                              else {
                                iVar4 = FUN_14000c110(&local_138,"THE_COMPOUND_NOUN_PLUR");
                                if (iVar4 == 0) {
                                  *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x400;
                                }
                                else {
                                  iVar4 = FUN_14000c110(&local_138,"THE_COMPOUND_ADJ");
                                  if (iVar4 == 0) {
                                    *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x800;
                                  }
                                  else {
                                    iVar4 = FUN_14000c110(&local_138,"OF_NOUN_SING");
                                    if (iVar4 == 0) {
                                      *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 0x2000
                                      ;
                                    }
                                    else {
                                      iVar4 = FUN_14000c110(&local_138,"OF_NOUN_PLUR");
                                      if (iVar4 == 0) {
                                        *(uint *)(lVar11 + 0x148) =
                                             *(uint *)(lVar11 + 0x148) | 0x4000;
                                      }
                                      else {
                                        iVar4 = FUN_14000c110(&local_138,"FRONT_COMPOUND_NOUN_SING")
                                        ;
                                        if (iVar4 == 0) {
                                          *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
                                        }
                                        else {
                                          iVar4 = FUN_14000c110(&local_138,
                                                                "FRONT_COMPOUND_NOUN_PLUR");
                                          if (iVar4 == 0) {
                                            *(uint *)(lVar11 + 0x148) =
                                                 *(uint *)(lVar11 + 0x148) | 2;
                                          }
                                          else {
                                            iVar4 = FUN_14000c110(&local_138,
                                                                  "REAR_COMPOUND_NOUN_SING");
                                            if (iVar4 == 0) {
                                              *(uint *)(lVar11 + 0x148) =
                                                   *(uint *)(lVar11 + 0x148) | 0x10;
                                            }
                                            else {
                                              iVar4 = FUN_14000c110(&local_138,
                                                                    "REAR_COMPOUND_NOUN_PLUR");
                                              if (iVar4 == 0) {
                                                *(uint *)(lVar11 + 0x148) =
                                                     *(uint *)(lVar11 + 0x148) | 0x20;
                                              }
                                              else {
                                                iVar4 = FUN_14000c110(&local_138,
                                                                      "FRONT_COMPOUND_ADJ");
                                                if (iVar4 == 0) {
                                                  *(uint *)(lVar11 + 0x148) =
                                                       *(uint *)(lVar11 + 0x148) | 4;
                                                }
                                                else {
                                                  iVar4 = FUN_14000c110(&local_138,
                                                                        "REAR_COMPOUND_ADJ");
                                                  if (iVar4 == 0) {
                                                    *(uint *)(lVar11 + 0x148) =
                                                         *(uint *)(lVar11 + 0x148) | 0x40;
                                                  }
                                                  else {
                                                    iVar4 = FUN_14000c110(&local_138,
                                                                          "FRONT_COMPOUND_PREFIX");
                                                    if (iVar4 == 0) {
                                                      *(uint *)(lVar11 + 0x148) =
                                                           *(uint *)(lVar11 + 0x148) | 8;
                                                    }
                                                    else {
                                                      iVar4 = FUN_14000c110(&local_138,
                                                                            "THE_COMPOUND_PREFIX");
                                                      if (iVar4 == 0) {
                                                        *(uint *)(lVar11 + 0x148) =
                                                             *(uint *)(lVar11 + 0x148) | 0x1000;
                                                      }
                                                      else {
                                                        iVar4 = FUN_14000c110(&local_138,
                                                                              "STANDARD_VERB");
                                                        if (iVar4 != 0) {
                                                          FUN_14007b5f0(local_58,lVar11,
                                                                        &DAT_140e7aaf8);
                                                          FUN_14000c1f0(local_58,
                                                  "Unrecognized Word Token: ");
                                                  FUN_140050380(local_58,&local_138);
                                                  FUN_14014a240(local_58);
                                                  puVar6 = local_58;
                                                  goto LAB_1408a6a14;
                                                  }
                                                  *(uint *)(lVar11 + 0x148) =
                                                       *(uint *)(lVar11 + 0x148) | 0x8000;
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
LAB_1408a6a1a:
                          FUN_14000c260(&local_138);
                          param_2 = local_160;
                          param_3 = local_168;
                          goto LAB_1408a6a2f;
                        }
                        FUN_14000c2b0(local_d8);
                        cVar3 = FUN_14014aad0(local_d8,&local_f8,&local_164);
                        if (cVar3 == '\0') {
                          puVar6 = local_d8;
                        }
                        else {
                          uVar2 = FUN_14014a5a0(local_d8);
                          *(undefined1 *)(lVar11 + 0x140) = uVar2;
                          puVar6 = local_d8;
                        }
                      }
                      FUN_14000c260(puVar6);
                      FUN_14000c260(&local_138);
                      param_2 = local_160;
                      param_3 = local_168;
                      iVar14 = local_164;
                      goto LAB_1408a6a2f;
                    }
                    *(uint *)(*param_2 + 0x148) = *(uint *)(*param_2 + 0x148) | 0x10000;
                  }
                }
              }
              if (0xf < uVar13) {
                FUN_140002020(CONCAT71(uStack_137,local_138),uVar13 + 1,1);
              }
            }
LAB_1408a6a2f:
            iVar14 = iVar14 + 1;
          } while ((ulonglong)(longlong)iVar14 < local_e8);
        }
        local_158 = local_158 + 1;
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
    }
    FUN_14000c260(&local_f8);
  }
  if (param_2[1] != 0) {
    FUN_14000c2b0(local_d8);
    lVar11 = 0;
    iVar14 = (int)(*(longlong *)(param_2[1] + 0x60) - *(longlong *)(param_2[1] + 0x58) >> 3);
    if (0 < iVar14) {
      do {
        FUN_14000c230(local_d8,*(undefined8 *)(*(longlong *)(param_2[1] + 0x58) + lVar11 * 8));
        local_164 = 0;
        if (local_c8 != 0) {
          do {
            pcVar8 = (char *)FUN_1400bd570(local_d8,(longlong)local_164);
            if (*pcVar8 == '[') {
              FUN_14000c2b0(local_b8);
              cVar3 = FUN_14014aad0(local_b8,local_d8,&local_164,0x3a);
              if (cVar3 != '\0') {
                if ((param_3 == '\0') ||
                   (cVar3 = FUN_14000d730(local_b8,"GENERATED"), cVar3 == '\0')) {
                  lVar1 = param_2[1];
                  iVar4 = FUN_14000c110(local_b8,"S_WORD");
                  if (iVar4 == 0) {
                    FUN_14000c2b0(local_58);
                    cVar3 = FUN_14014aad0(local_58,local_d8,&local_164,0x3a);
                    if (cVar3 == '\0') {
                      puVar6 = local_58;
                    }
                    else {
                      FUN_140051b70(lVar1 + 0x20,local_58);
                      puVar6 = local_58;
                    }
                  }
                  else {
                    FUN_14007b5f0(local_78,lVar1,&DAT_140e7aaf8);
                    FUN_14000c1f0(local_78,"Unrecognized Symbol Token: ");
                    FUN_140050380(local_78,local_b8);
                    FUN_14014a240(local_78);
                    puVar6 = local_78;
                  }
                  FUN_14000c260(puVar6);
                }
                else {
                  *(uint *)(param_2[1] + 0x50) = *(uint *)(param_2[1] + 0x50) | 1;
                }
              }
              FUN_14000c260(local_b8);
            }
            local_164 = local_164 + 1;
          } while ((ulonglong)(longlong)local_164 < local_c8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar14);
    }
    FUN_14000c260(local_d8);
  }
  if (param_2[2] != 0) {
    FUN_14000c2b0(local_d8);
    lVar11 = 0;
    iVar14 = (int)(*(longlong *)(param_2[2] + 0x78) - *(longlong *)(param_2[2] + 0x70) >> 3);
    if (0 < iVar14) {
      do {
        FUN_14000c230(local_d8,*(undefined8 *)(*(longlong *)(param_2[2] + 0x70) + lVar11 * 8));
        local_164 = 0;
        if (local_c8 != 0) {
          do {
            pcVar8 = (char *)FUN_1400bd570(local_d8,(longlong)local_164);
            if (*pcVar8 == '[') {
              FUN_14000c2b0(&local_118);
              cVar3 = FUN_14014aad0(&local_118,local_d8,&local_164,0x3a);
              if (cVar3 != '\0') {
                if ((param_3 == '\0') ||
                   (cVar3 = FUN_14000d730(&local_118,"GENERATED"), cVar3 == '\0')) {
                  lVar1 = param_2[2];
                  iVar4 = FUN_14000c110(&local_118,"T_WORD");
                  if (iVar4 == 0) {
                    FUN_14000c2b0(local_78);
                    FUN_14000c2b0(local_b8);
                    cVar3 = FUN_14014aad0(local_78,local_d8,&local_164,0x3a);
                    if (cVar3 == '\0') {
                      FUN_14000c260(local_b8);
                      puVar6 = local_78;
                    }
                    else {
                      cVar3 = FUN_14014aad0(local_b8,local_d8,&local_164,0x3a);
                      if (cVar3 == '\0') {
                        FUN_14000c260(local_b8);
                        puVar6 = local_78;
                      }
                      else {
                        FUN_140051b70(lVar1 + 0x20,local_78);
                        FUN_140051b70(lVar1 + 0x38,local_b8);
                        FUN_14000c260(local_b8);
                        puVar6 = local_78;
                      }
                    }
                  }
                  else {
                    FUN_14007b5f0(local_58,lVar1,&DAT_140e7aaf8);
                    FUN_14000c1f0(local_58,"Unrecognized Translation Token: ");
                    FUN_140050380(local_58,&local_118);
                    FUN_14014a240(local_58);
                    puVar6 = local_58;
                  }
                  FUN_14000c260(puVar6);
                }
                else {
                  *(uint *)(param_2[2] + 0x68) = *(uint *)(param_2[2] + 0x68) | 1;
                }
              }
              FUN_14000c260(&local_118);
            }
            local_164 = local_164 + 1;
          } while ((ulonglong)(longlong)local_164 < local_c8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar14);
    }
    FUN_14000c260(local_d8);
  }
  return;
}

