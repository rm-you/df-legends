// FUN_1402cbe40 @ 1402cbe40
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 140dfdcc0 memcmp
//   -> 140dfb5c4 operator_new
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 1401069c0 FUN_1401069c0
//   -> 1402cbca0 FUN_1402cbca0
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c230 FUN_14000c230
//   -> 140106910 FUN_140106910
//   -> 14000c260 FUN_14000c260
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> 1402cbbd0 FUN_1402cbbd0
//   -> 140051b70 FUN_140051b70
//   -> 14000d730 FUN_14000d730
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14014cac0 FUN_14014cac0
//   -> 14007bda0 FUN_14007bda0
//   -> 14007b6d0 FUN_14007b6d0
//   -> 1400be650 FUN_1400be650
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a240 FUN_14014a240
//   -> 14014a5a0 FUN_14014a5a0
//   -> 1400503d0 FUN_1400503d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402cbe40(ulonglong *param_1,longlong *param_2)

{
  undefined8 **ppuVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  char *pcVar13;
  size_t sVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStackY_1a8 [32];
  int local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  int local_160;
  undefined8 *local_158;
  longlong local_150;
  ulonglong *local_148;
  longlong *local_140;
  undefined8 local_138;
  void *local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  ulonglong local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  longlong local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_138 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStackY_1a8;
  local_d0 = 0xf;
  puVar7 = (undefined8 *)0x0;
  local_d8 = 0;
  local_e8 = 0;
  local_168 = (undefined8 *)0x0;
  local_158 = (undefined8 *)0x0;
  local_160 = 1;
  local_148 = param_1;
  local_140 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_150 = 1;
    puVar8 = puVar7;
    do {
      puVar6 = *(undefined1 **)(*local_140 + local_150 * 8);
      if (&local_e8 != puVar6) {
        FUN_14000c8b0(&local_e8,puVar6,0,0xffffffffffffffff);
      }
      local_178 = 0;
      if (local_d8 != 0) {
        do {
          puVar6 = &local_e8;
          if (0xf < local_d0) {
            puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
          }
          if (puVar6[local_178] != '[') goto LAB_1402cd4eb;
          local_110 = 0xf;
          local_118 = 0;
          local_128 = 0;
          if (local_d8 == 0) {
LAB_1402cd4c6:
            if (0xf < local_110) {
              FUN_140002020(CONCAT71(uStack_127,local_128),local_110 + 1,1);
            }
          }
          else {
            local_178 = local_178 + 1;
            local_170 = (undefined8 *)CONCAT44(local_170._4_4_,local_178);
            if (local_d8 < (ulonglong)(longlong)local_178) goto LAB_1402cd4c6;
            puVar6 = &local_e8;
            if (0xf < local_d0) {
              puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
            }
            pcVar13 = puVar6 + local_d8;
            uVar16 = local_110;
            uVar17 = local_118;
            for (pcVar11 = puVar6 + local_178;
                ((local_118 = uVar17, local_110 = uVar16, pcVar11 < pcVar13 &&
                 (puVar7 = local_168, *pcVar11 != ':')) && (*pcVar11 != ']')); pcVar11 = pcVar11 + 1
                ) {
              FUN_140050540(&local_128,1);
              local_178 = local_178 + 1;
              local_170 = (undefined8 *)CONCAT44(local_170._4_4_,local_178);
              puVar7 = local_168;
              uVar16 = local_110;
              uVar17 = local_118;
            }
            if (uVar17 == 0) goto LAB_1402cd4c6;
            puVar6 = (undefined1 *)CONCAT71(uStack_127,local_128);
            puVar10 = &local_128;
            if (0xf < uVar16) {
              puVar10 = puVar6;
            }
            sVar14 = 4;
            if (uVar17 < 4) {
              sVar14 = uVar17;
            }
            if (((sVar14 == 0) || (iVar4 = memcmp(puVar10,&DAT_140ea8780,sVar14), iVar4 == 0)) &&
               (uVar17 == 4)) {
              puVar7 = operator_new(0x38);
              local_168 = puVar7;
              _eh_vector_constructor_iterator_(puVar7,0x20,1,FUN_14000c2b0,FUN_14000c260);
              puVar7[4] = 0;
              puVar7[5] = 0;
              puVar7[6] = 0;
              puVar7[2] = 0;
              puVar8 = puVar7;
              if (0xf < (ulonglong)puVar7[3]) {
                puVar8 = (undefined8 *)*puVar7;
              }
              *(undefined1 *)puVar8 = 0;
              local_170 = puVar7;
              if (local_d8 != 0) {
                local_178 = local_178 + 1;
                if ((ulonglong)(longlong)local_178 <= local_d8) {
                  puVar6 = &local_e8;
                  if (0xf < local_d0) {
                    puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                  }
                  puVar10 = &local_e8;
                  if (0xf < local_d0) {
                    puVar10 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                  }
                  pcVar13 = puVar10 + local_d8;
                  puVar2 = local_148;
                  for (pcVar11 = puVar6 + local_178;
                      ((local_148 = puVar2, pcVar11 < pcVar13 && (*pcVar11 != ':')) &&
                      (*pcVar11 != ']')); pcVar11 = pcVar11 + 1) {
                    FUN_140050540(puVar7,1);
                    local_178 = local_178 + 1;
                    puVar2 = local_148;
                  }
                  if (puVar7[2] != 0) {
                    if ((&local_170 < (undefined8 **)puVar2[1]) &&
                       (ppuVar1 = (undefined8 **)*puVar2, ppuVar1 <= &local_170)) {
                      if (puVar2[1] == puVar2[2]) {
                        FUN_1401069c0(puVar2);
                      }
                      if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                        *(undefined8 *)puVar2[1] =
                             *(undefined8 *)
                              (*puVar2 + ((longlong)&local_170 - (longlong)ppuVar1 >> 3) * 8);
                      }
                      puVar2[1] = puVar2[1] + 8;
                    }
                    else {
                      if (puVar2[1] == puVar2[2]) {
                        FUN_1401069c0(puVar2);
                      }
                      if ((undefined8 *)puVar2[1] != (undefined8 *)0x0) {
                        *(undefined8 *)puVar2[1] = puVar7;
                      }
                      puVar2[1] = puVar2[1] + 8;
                    }
                    goto LAB_1402cd4b2;
                  }
                  puVar6 = (undefined1 *)CONCAT71(uStack_127,local_128);
                }
              }
              FUN_1402cbca0(puVar7);
              free(puVar7);
              local_168 = (undefined8 *)0x0;
              puVar7 = (undefined8 *)0x0;
              if (0xf < uVar16) {
                FUN_140002020(puVar6,uVar16 + 1,1);
              }
              goto LAB_1402cd4eb;
            }
            puVar10 = &local_128;
            if (0xf < uVar16) {
              puVar10 = puVar6;
            }
            sVar14 = 9;
            if (uVar17 < 9) {
              sVar14 = uVar17;
            }
            if ((sVar14 == 0) || (uVar5 = memcmp(puVar10,"BODYGLOSS",sVar14), uVar5 == 0)) {
              if (uVar17 < 9) {
                uVar5 = 0xffffffff;
              }
              else {
                uVar5 = (uint)(9 < uVar17);
              }
            }
            if (uVar5 == 0) {
              local_50 = 0xf;
              uVar16 = 0xf;
              local_70 = 0xf;
              local_78 = 0;
              local_88 = 0;
              uVar17 = 0xf;
              local_90 = 0xf;
              local_98 = 0;
              local_a8 = 0;
              local_f0 = 0xf;
              local_f8 = 0;
              local_108 = 0;
              local_b0 = 0xf;
              local_b8 = 0;
              local_c8 = 0;
              local_58 = 0;
              local_68 = 0;
              if (local_d8 == 0) {
LAB_1402cc73a:
                if (0xf < local_50) {
                  FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
                }
                puVar7 = local_168;
                if (local_110 < 0x10) goto LAB_1402cd4eb;
              }
              else {
                local_178 = local_178 + 1;
                if (local_d8 < (ulonglong)(longlong)local_178) goto LAB_1402cc73a;
                puVar6 = &local_e8;
                if (0xf < local_d0) {
                  puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                }
                pcVar13 = puVar6 + local_d8;
                uVar15 = local_50;
                uVar18 = local_b0;
                for (pcVar11 = puVar6 + local_178;
                    ((local_b0 = uVar18, local_50 = uVar15, pcVar11 < pcVar13 && (*pcVar11 != ':'))
                    && (*pcVar11 != ']')); pcVar11 = pcVar11 + 1) {
                  FUN_140050540(&local_68,1);
                  local_178 = local_178 + 1;
                  uVar15 = local_50;
                  uVar18 = local_b0;
                }
                if (local_58 == 0) {
                  puVar6 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  goto LAB_1402cc73a;
                }
                local_78 = 0;
                local_88 = 0;
                if (local_d8 != 0) {
                  local_178 = local_178 + 1;
                  if ((ulonglong)(longlong)local_178 <= local_d8) {
                    puVar6 = &local_e8;
                    if (0xf < local_d0) {
                      puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                    }
                    pcVar13 = puVar6 + local_d8;
                    for (pcVar11 = puVar6 + local_178;
                        ((local_50 = uVar15, pcVar11 < pcVar13 &&
                         (uVar16 = local_70, *pcVar11 != ':')) && (*pcVar11 != ']'));
                        pcVar11 = pcVar11 + 1) {
                      FUN_140050540(&local_88,1);
                      local_178 = local_178 + 1;
                      uVar16 = local_70;
                      uVar15 = local_50;
                    }
                    if (local_78 != 0) {
                      local_98 = 0;
                      local_a8 = 0;
                      if (local_d8 != 0) {
                        local_178 = local_178 + 1;
                        if ((ulonglong)(longlong)local_178 <= local_d8) {
                          puVar6 = &local_e8;
                          if (0xf < local_d0) {
                            puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                          }
                          pcVar13 = puVar6 + local_d8;
                          for (pcVar11 = puVar6 + local_178;
                              ((local_50 = uVar15, pcVar11 < pcVar13 &&
                               (uVar17 = local_90, *pcVar11 != ':')) && (*pcVar11 != ']'));
                              pcVar11 = pcVar11 + 1) {
                            FUN_140050540(&local_a8,1);
                            local_178 = local_178 + 1;
                            uVar17 = local_90;
                            uVar15 = local_50;
                          }
                          if (local_98 != 0) {
                            local_f8 = 0;
                            local_108 = 0;
                            uVar12 = 0xf;
                            if (local_d8 != 0) {
                              local_178 = local_178 + 1;
                              uVar12 = 0xf;
                              if ((ulonglong)(longlong)local_178 <= local_d8) {
                                puVar6 = &local_e8;
                                if (0xf < local_d0) {
                                  puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                                }
                                pcVar13 = puVar6 + local_d8;
                                uVar12 = 0xf;
                                for (pcVar11 = puVar6 + local_178;
                                    ((local_50 = uVar15, pcVar11 < pcVar13 &&
                                     (uVar12 = local_f0, *pcVar11 != ':')) && (*pcVar11 != ']'));
                                    pcVar11 = pcVar11 + 1) {
                                  FUN_140050540(&local_108,1);
                                  local_178 = local_178 + 1;
                                  uVar12 = local_f0;
                                  uVar15 = local_50;
                                }
                                if (local_f8 != 0) {
                                  local_b8 = 0;
                                  local_c8 = 0;
                                  if (local_d8 != 0) {
                                    local_178 = local_178 + 1;
                                    if ((ulonglong)(longlong)local_178 <= local_d8) {
                                      puVar6 = &local_e8;
                                      if (0xf < local_d0) {
                                        puVar6 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
                                      }
                                      pcVar13 = puVar6 + local_d8;
                                      for (pcVar11 = puVar6 + local_178;
                                          ((pcVar11 < pcVar13 &&
                                           (uVar18 = local_b0, *pcVar11 != ':')) &&
                                          (*pcVar11 != ']')); pcVar11 = pcVar11 + 1) {
                                        FUN_140050540(&local_c8,1);
                                        local_178 = local_178 + 1;
                                        uVar18 = local_b0;
                                      }
                                      if (local_b8 != 0) {
                                        puVar8 = operator_new(0xa0);
                                        puVar8[3] = 0xf;
                                        puVar8[2] = 0;
                                        puVar7 = puVar8;
                                        if (0xf < (ulonglong)puVar8[3]) {
                                          puVar7 = (undefined8 *)*puVar8;
                                        }
                                        *(undefined1 *)puVar7 = 0;
                                        puVar8[7] = 0xf;
                                        puVar8[6] = 0;
                                        if ((ulonglong)puVar8[7] < 0x10) {
                                          puVar7 = puVar8 + 4;
                                        }
                                        else {
                                          puVar7 = (undefined8 *)puVar8[4];
                                        }
                                        *(undefined1 *)puVar7 = 0;
                                        FUN_14000c2b0(puVar8 + 8);
                                        FUN_14000c2b0(puVar8 + 0xc);
                                        FUN_14000c2b0(puVar8 + 0x10);
                                        local_170 = puVar8;
                                        FUN_14000c230(puVar8,&local_68);
                                        FUN_14000c230(puVar8 + 4,&local_88);
                                        FUN_14000c230(puVar8 + 8,&local_a8);
                                        FUN_14000c230(puVar8 + 0xc,&local_108);
                                        FUN_14000c230(puVar8 + 0x10,&local_c8);
                                        FUN_140106910(local_148 + 3,&local_170);
                                        FUN_14000c260(&local_c8);
                                        FUN_14000c260(&local_108);
                                        FUN_14000c260(&local_a8);
                                        FUN_14000c260(&local_88);
                                        FUN_14000c260(&local_68);
                                        puVar7 = local_168;
                                        goto LAB_1402cd4b2;
                                      }
                                    }
                                  }
                                  uVar15 = local_50;
                                  if (0xf < uVar18) {
                                    FUN_140002020(CONCAT71(uStack_c7,local_c8),uVar18 + 1,1);
                                  }
                                }
                              }
                            }
                            if (0xf < uVar12) {
                              FUN_140002020(CONCAT71(uStack_107,local_108),uVar12 + 1,1);
                            }
                          }
                        }
                      }
                      if (0xf < uVar17) {
                        FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar17 + 1,1);
                      }
                    }
                  }
                }
                if (0xf < uVar16) {
                  FUN_140002020(CONCAT71(uStack_87,local_88),uVar16 + 1,1);
                }
                if (0xf < uVar15) {
                  FUN_140002020(CONCAT71(uStack_67,local_68),uVar15 + 1,1);
                }
                puVar7 = local_168;
                if (local_110 < 0x10) goto LAB_1402cd4eb;
                puVar6 = (undefined1 *)CONCAT71(uStack_127,local_128);
              }
              FUN_140002020(puVar6,local_110 + 1,1);
              puVar7 = local_168;
            }
            else {
              if (puVar7 != (undefined8 *)0x0) {
                iVar4 = FUN_14000c110(&local_128,&DAT_140eb0eac);
                if (iVar4 != 0) {
                  if (puVar8 == (undefined8 *)0x0) {
                    FUN_14007b5f0(&local_108,puVar7,&DAT_140e7aaf8);
                    FUN_14000c1f0(&local_108,"Unrecognized Creature Body Token: ");
                    FUN_140050380(&local_108,&local_128);
                    FUN_14014a240(&local_108);
                    puVar6 = &local_108;
LAB_1402cd4a8:
                    FUN_14000c260(puVar6);
                    goto LAB_1402cd4b2;
                  }
                  iVar4 = FUN_14000c110(&local_128,"UPPERBODY");
                  if (iVar4 == 0) {
                    FUN_14007bda0(puVar8 + 0x11,1);
                    FUN_14000c260(&local_128);
                  }
                  else {
                    iVar4 = FUN_14000c110(&local_128,"LOWERBODY");
                    if (iVar4 == 0) {
                      FUN_14007bda0(puVar8 + 0x11,2);
                      FUN_14000c260(&local_128);
                    }
                    else {
                      iVar4 = FUN_14000c110(&local_128,&DAT_140eb1048);
                      if (iVar4 == 0) {
                        FUN_14007bda0(puVar8 + 0x11,0);
                        FUN_14000c260(&local_128);
                      }
                      else {
                        iVar4 = FUN_14000c110(&local_128,&DAT_140eb1068);
                        if (iVar4 == 0) {
                          FUN_14000c2b0(&local_108);
                          cVar3 = FUN_14014aad0(&local_108,&local_e8,&local_170,0x3a);
                          if (cVar3 == '\0') {
                            puVar6 = &local_108;
                          }
                          else {
                            FUN_14000c230(puVar8 + 4,&local_108);
                            puVar6 = &local_108;
                          }
                        }
                        else {
                          iVar4 = FUN_14000c110(&local_128,"CON_CAT");
                          if (iVar4 == 0) {
                            FUN_14000c2b0(&local_108);
                            cVar3 = FUN_14014aad0(&local_108,&local_e8,&local_170,0x3a);
                            if (cVar3 == '\0') {
                              puVar6 = &local_108;
                            }
                            else {
                              FUN_14000c230(puVar8 + 0xc,&local_108);
                              puVar6 = &local_108;
                            }
                          }
                          else {
                            iVar4 = FUN_14000c110(&local_128,"CONTYPE");
                            if (iVar4 != 0) {
                              iVar4 = FUN_14000c110(&local_128,&DAT_140eb0fdc);
                              if (iVar4 == 0) {
                                FUN_14007bda0(puVar8 + 0x11,8);
                                FUN_14000c260(&local_128);
                              }
                              else {
                                iVar4 = FUN_14000c110(&local_128,"THROAT");
                                if (iVar4 == 0) {
                                  FUN_14007bda0(puVar8 + 0x11,0xe);
                                  FUN_14000c260(&local_128);
                                }
                                else {
                                  iVar4 = FUN_14000c110(&local_128,"JOINT");
                                  if (iVar4 == 0) {
                                    FUN_14007bda0(puVar8 + 0x11,0xf);
                                    FUN_14000c260(&local_128);
                                  }
                                  else {
                                    iVar4 = FUN_14000c110(&local_128,"SKELETON");
                                    if (iVar4 == 0) {
                                      FUN_14007bda0(puVar8 + 0x11,7);
                                      FUN_14000c260(&local_128);
                                    }
                                    else {
                                      iVar4 = FUN_14000c110(&local_128,"THOUGHT");
                                      if (iVar4 == 0) {
                                        FUN_14007bda0(puVar8 + 0x11,0x10);
                                        FUN_14000c260(&local_128);
                                      }
                                      else {
                                        iVar4 = FUN_14000c110(&local_128,"NERVOUS");
                                        if (iVar4 == 0) {
                                          FUN_14007bda0(puVar8 + 0x11,0x11);
                                          FUN_14000c260(&local_128);
                                        }
                                        else {
                                          iVar4 = FUN_14000c110(&local_128,"GRASP");
                                          if (iVar4 == 0) {
                                            FUN_14007bda0(puVar8 + 0x11,9);
                                            FUN_14000c260(&local_128);
                                          }
                                          else {
                                            iVar4 = FUN_14000c110(&local_128,"FLIER");
                                            if (iVar4 == 0) {
                                              FUN_14007bda0(puVar8 + 0x11,0x16);
                                              FUN_14000c260(&local_128);
                                            }
                                            else {
                                              iVar4 = FUN_14000c110(&local_128,"UNDER_PRESSURE");
                                              if (iVar4 == 0) {
                                                FUN_14007bda0(puVar8 + 0x11,0x1c);
                                                FUN_14000c260(&local_128);
                                              }
                                              else {
                                                iVar4 = FUN_14000c110(&local_128,"TOTEMABLE");
                                                if (iVar4 == 0) {
                                                  FUN_14007bda0(puVar8 + 0x11,0x1b);
                                                  FUN_14000c260(&local_128);
                                                }
                                                else {
                                                  iVar4 = FUN_14000c110(&local_128,
                                                                        "VERMIN_BUTCHER_ITEM");
                                                  if (iVar4 == 0) {
                                                    FUN_14007bda0(puVar8 + 0x11,0x1d);
                                                    FUN_14000c260(&local_128);
                                                  }
                                                  else {
                                                    iVar4 = FUN_14000c110(&local_128,"STANCE");
                                                    if (iVar4 == 0) {
                                                      FUN_14007bda0(puVar8 + 0x11,10);
                                                      FUN_14000c260(&local_128);
                                                    }
                                                    else {
                                                      iVar4 = FUN_14000c110(&local_128,"SIGHT");
                                                      if (iVar4 == 0) {
                                                        FUN_14007bda0(puVar8 + 0x11,3);
                                                        FUN_14000c260(&local_128);
                                                      }
                                                      else {
                                                        iVar4 = FUN_14000c110(&local_128,
                                                                              &DAT_140eaa084);
                                                        if (iVar4 == 0) {
                                                          FUN_14007bda0(puVar8 + 0x11,0x14);
                                                          FUN_14000c260(&local_128);
                                                        }
                                                        else {
                                                          iVar4 = FUN_14000c110(&local_128,"SMELL");
                                                          if (iVar4 == 0) {
                                                            FUN_14007bda0(puVar8 + 0x11,0x15);
                                                            FUN_14000c260(&local_128);
                                                          }
                                                          else {
                                                            iVar4 = FUN_14000c110(&local_128,
                                                                                  "EMBEDDED");
                                                            if (iVar4 == 0) {
                                                              FUN_14007bda0(puVar8 + 0x11,4);
                                                              FUN_14000c260(&local_128);
                                                            }
                                                            else {
                                                              iVar4 = FUN_14000c110(&local_128,
                                                                                    "APERTURE");
                                                              if (iVar4 == 0) {
                                                                FUN_14007bda0(puVar8 + 0x11,0x19);
                                                                FUN_14000c260(&local_128);
                                                              }
                                                              else {
                                                                iVar4 = FUN_14000c110(&local_128,
                                                                                      "SMALL");
                                                                if (iVar4 == 0) {
                                                                  FUN_14007bda0(puVar8 + 0x11,0xd);
                                                                  FUN_14000c260(&local_128);
                                                                }
                                                                else {
                                                                  iVar4 = FUN_14000c110(&local_128,
                                                                                        "INTERNAL");
                                                                  if (iVar4 == 0) {
                                                                    FUN_14007bda0(puVar8 + 0x11,5);
                                                                    FUN_14000c260(&local_128);
                                                                  }
                                                                  else {
                                                                    iVar4 = FUN_14000c110(&local_128
                                                                                          ,"BREATHE"
                                                                                         );
                                                                    if (iVar4 == 0) {
                                                                      FUN_14007bda0(puVar8 + 0x11,
                                                                                    0xc);
                                                                      FUN_14000c260(&local_128);
                                                                    }
                                                                    else {
                                                                      iVar4 = FUN_14000c110(&
                                                  local_128,"CIRCULATION");
                                                  if (iVar4 == 0) {
                                                    FUN_14007bda0(puVar8 + 0x11,6);
                                                    FUN_14000c260(&local_128);
                                                  }
                                                  else {
                                                    iVar4 = FUN_14000c110(&local_128,&DAT_140eb0f3c)
                                                    ;
                                                    if (iVar4 == 0) {
                                                      FUN_14007bda0(puVar8 + 0x11,0xb);
                                                      FUN_14000c260(&local_128);
                                                    }
                                                    else {
                                                      iVar4 = FUN_14000c110(&local_128,"GELDABLE");
                                                      if (iVar4 == 0) {
                                                        FUN_14007bda0(puVar8 + 0x11,0x20);
                                                        FUN_14000c260(&local_128);
                                                      }
                                                      else {
                                                        iVar4 = FUN_14000c110(&local_128,"RIGHT");
                                                        if (iVar4 == 0) {
                                                          FUN_14007bda0(puVar8 + 0x11,0x12);
                                                          FUN_14000c260(&local_128);
                                                        }
                                                        else {
                                                          iVar4 = FUN_14000c110(&local_128,
                                                                                &DAT_140eb0f44);
                                                          if (iVar4 == 0) {
                                                            FUN_14007bda0(puVar8 + 0x11,0x13);
                                                            FUN_14000c260(&local_128);
                                                          }
                                                          else {
                                                            iVar4 = FUN_14000c110(&local_128,"DIGIT"
                                                                                 );
                                                            if (iVar4 == 0) {
                                                              FUN_14007bda0(puVar8 + 0x11,0x17);
                                                              FUN_14000c260(&local_128);
                                                            }
                                                            else {
                                                              iVar4 = FUN_14000c110(&local_128,
                                                                                    "CONNECTOR");
                                                              if (iVar4 == 0) {
                                                                FUN_14007bda0(puVar8 + 0x11,0x1e);
                                                                FUN_14000c260(&local_128);
                                                              }
                                                              else {
                                                                cVar3 = FUN_14000d730(&local_128,
                                                                                                                                                                            
                                                  "PREVENTS_PARENT_COLLAPSE");
                                                  if (cVar3 == '\0') {
                                                    iVar4 = FUN_14000c110(&local_128,"SOCKET");
                                                    if (iVar4 == 0) {
                                                      FUN_14007bda0(puVar8 + 0x11,0x1a);
                                                      FUN_14000c260(&local_128);
                                                    }
                                                    else {
                                                      iVar4 = FUN_14000c110(&local_128,"MOUTH");
                                                      if (iVar4 != 0) {
                                                        cVar3 = FUN_14000d730(&local_128,"CATEGORY")
                                                        ;
                                                        if (cVar3 == '\0') {
                                                          cVar3 = FUN_14000d730(&local_128,
                                                                                "DEFAULT_RELSIZE");
                                                          if (cVar3 == '\0') {
                                                            cVar3 = FUN_14000d730(&local_128,
                                                                                  "NUMBER");
                                                            if (cVar3 == '\0') {
                                                              cVar3 = FUN_14000d730(&local_128,
                                                                                                                                                                        
                                                  "INDIVIDUAL_NAME");
                                                  if (cVar3 == '\0') {
                                                    uVar9 = FUN_14007b5f0(&local_c8,puVar7,
                                                                          &DAT_140e7aaf8);
                                                    uVar9 = FUN_14007b6d0(&local_108,uVar9,puVar8);
                                                    FUN_1400be650(&local_a8,uVar9,&DAT_140e7aaf8);
                                                    FUN_14000c260(&local_108);
                                                    FUN_14000c260(&local_c8);
                                                    FUN_14000c1f0(&local_a8,
                                                                                                                                    
                                                  "Unrecognized Creature Bodypart Token: ");
                                                  FUN_140050380(&local_a8,&local_128);
                                                  FUN_14014a240(&local_a8);
                                                  puVar6 = &local_a8;
                                                  goto LAB_1402cd4a8;
                                                  }
                                                  FUN_14000c2b0();
                                                  FUN_14000c2b0(&local_108);
                                                  cVar3 = FUN_14014aad0(&local_c8,&local_e8,
                                                                        &local_170,0x3a);
                                                  if (cVar3 == '\0') {
                                                    FUN_14000c260(&local_108);
                                                    puVar6 = &local_c8;
                                                  }
                                                  else {
                                                    cVar3 = FUN_14014aad0(&local_108,&local_e8,
                                                                          &local_170,0x3a);
                                                    if (cVar3 == '\0') {
                                                      FUN_14000c260(&local_108);
                                                      puVar6 = &local_c8;
                                                    }
                                                    else {
                                                      cVar3 = FUN_14000d730(&local_108,
                                                                            &DAT_140ea7a78);
                                                      if (cVar3 != '\0') {
                                                        uVar9 = FUN_14007b5f0(&local_88,&local_c8,
                                                                              &DAT_140e5a3c0);
                                                        FUN_14014cac0(&local_108,uVar9);
                                                        FUN_14000c260(&local_88);
                                                      }
                                                      FUN_140051b70(puVar8 + 0x14,&local_c8);
                                                      FUN_140051b70(puVar8 + 0x17,&local_108);
                                                      FUN_14000c260(&local_108);
                                                      puVar6 = &local_c8;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(&local_108);
                                                    cVar3 = FUN_14014aad0(&local_108,&local_e8,
                                                                          &local_170,0x3a);
                                                    if (cVar3 == '\0') {
                                                      puVar6 = &local_108;
                                                    }
                                                    else {
                                                      iVar4 = FUN_14014a5a0(&local_108);
                                                      *(int *)((longlong)puVar8 + 0x9c) = iVar4;
                                                      if (iVar4 < 1) {
                                                        *(undefined4 *)((longlong)puVar8 + 0x9c) = 1
                                                        ;
                                                      }
                                                      if (0x20 < *(int *)((longlong)puVar8 + 0x9c))
                                                      {
                                                        FUN_1400503d0(&local_c8,puVar8);
                                                        FUN_14000c1f0(&local_c8,
                                                                      ": number capped at 32");
                                                        FUN_14014a240(&local_c8);
                                                        *(undefined4 *)((longlong)puVar8 + 0x9c) =
                                                             0x20;
                                                        FUN_14000c260(&local_c8);
                                                      }
                                                      puVar6 = &local_108;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(&local_108);
                                                    cVar3 = FUN_14014aad0(&local_108,&local_e8,
                                                                          &local_170,0x3a);
                                                    if (cVar3 == '\0') {
                                                      puVar6 = &local_108;
                                                    }
                                                    else {
                                                      iVar4 = FUN_14014a5a0(&local_108);
                                                      *(int *)(puVar8 + 0x13) = iVar4;
                                                      if (iVar4 < 0) {
                                                        *(undefined4 *)(puVar8 + 0x13) = 0;
                                                      }
                                                      puVar6 = &local_108;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(&local_108);
                                                    cVar3 = FUN_14014aad0(&local_108,&local_e8,
                                                                          &local_170,0x3a);
                                                    if (cVar3 == '\0') {
                                                      puVar6 = &local_108;
                                                    }
                                                    else {
                                                      FUN_14000c230(puVar8 + 8,&local_108);
                                                      puVar6 = &local_108;
                                                    }
                                                  }
                                                  goto LAB_1402cc7da;
                                                  }
                                                  FUN_14007bda0(puVar8 + 0x11,0x18);
                                                  FUN_14000c260(&local_128);
                                                  }
                                                  }
                                                  else {
                                                    FUN_14007bda0(puVar8 + 0x11,0x1f);
                                                    FUN_14000c260(&local_128);
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
                              goto LAB_1402cd4eb;
                            }
                            FUN_14000c2b0(&local_108);
                            cVar3 = FUN_14014aad0(&local_108,&local_e8,&local_170,0x3a);
                            if (cVar3 == '\0') {
                              puVar6 = &local_108;
                            }
                            else {
                              iVar4 = FUN_14000c110(&local_108,"UPPERBODY");
                              if (iVar4 == 0) {
                                *(undefined2 *)(puVar8 + 0x10) = 0;
                              }
                              else {
                                iVar4 = FUN_14000c110(&local_108,"LOWERBODY");
                                if (iVar4 == 0) {
                                  *(undefined2 *)(puVar8 + 0x10) = 1;
                                }
                                else {
                                  iVar4 = FUN_14000c110(&local_108,&DAT_140eb1048);
                                  if (iVar4 == 0) {
                                    *(undefined2 *)(puVar8 + 0x10) = 2;
                                  }
                                  else {
                                    iVar4 = FUN_14000c110(&local_108,"GRASP");
                                    if (iVar4 == 0) {
                                      *(undefined2 *)(puVar8 + 0x10) = 3;
                                    }
                                    else {
                                      iVar4 = FUN_14000c110(&local_108,"STANCE");
                                      if (iVar4 == 0) {
                                        *(undefined2 *)(puVar8 + 0x10) = 4;
                                      }
                                      else {
                                        uVar9 = FUN_14007b5f0(&local_68,puVar7,&DAT_140e7aaf8);
                                        uVar9 = FUN_14007b6d0(&local_88,uVar9,puVar8);
                                        FUN_1400be650(&local_c8,uVar9,&DAT_140e7aaf8);
                                        FUN_14000c260(&local_88);
                                        FUN_14000c260(&local_68);
                                        FUN_14000c1f0(&local_c8,
                                                                                                            
                                                  "Unrecognized Creature Bodypart CONTYPE Token: ");
                                        FUN_140050380(&local_c8,&local_108);
                                        FUN_14014a240(&local_c8);
                                        FUN_14000c260(&local_c8);
                                      }
                                    }
                                  }
                                }
                              }
                              puVar6 = &local_108;
                            }
                          }
                        }
LAB_1402cc7da:
                        FUN_14000c260(puVar6);
                        FUN_14000c260(&local_128);
                        local_178 = (int)local_170;
                      }
                    }
                  }
                  goto LAB_1402cd4eb;
                }
                FUN_14000c2b0(&local_a8);
                FUN_14000c2b0(&local_c8);
                FUN_14000c2b0(&local_108);
                cVar3 = FUN_14014aad0(&local_a8,&local_e8,&local_170,0x3a);
                if (((cVar3 == '\0') ||
                    (cVar3 = FUN_14014aad0(&local_c8,&local_e8,&local_170,0x3a), cVar3 == '\0')) ||
                   (cVar3 = FUN_14014aad0(&local_108,&local_e8,&local_170,0x3a), cVar3 == '\0')) {
                  FUN_14000c260(&local_108);
                  FUN_14000c260(&local_c8);
                  puVar6 = &local_a8;
                  goto LAB_1402cc7da;
                }
                local_130 = operator_new(0xd0);
                puVar8 = (undefined8 *)FUN_1402cbbd0(local_130);
                local_158 = puVar8;
                FUN_14000c230(puVar8,&local_a8);
                FUN_140051b70(puVar8 + 0x14,&local_c8);
                cVar3 = FUN_14000d730(&local_108,&DAT_140ea7a78);
                if (cVar3 != '\0') {
                  uVar9 = FUN_14007b5f0(&local_88,&local_c8,&DAT_140e5a3c0);
                  FUN_14014cac0(&local_108,uVar9);
                  FUN_14000c260(&local_88);
                }
                FUN_140051b70(puVar8 + 0x17,&local_108);
                FUN_140106910(puVar7 + 4,&local_158);
                FUN_14000c260(&local_108);
                FUN_14000c260(&local_c8);
                FUN_14000c260(&local_a8);
                local_178 = (int)local_170;
              }
LAB_1402cd4b2:
              FUN_14000c260(&local_128);
            }
          }
LAB_1402cd4eb:
          local_178 = local_178 + 1;
          puVar8 = local_158;
        } while ((ulonglong)(longlong)local_178 < local_d8);
      }
      local_160 = local_160 + 1;
      local_150 = local_150 + 1;
    } while ((ulonglong)(longlong)local_160 < (ulonglong)(local_140[1] - *local_140 >> 3));
  }
  FUN_14000c260(&local_e8);
  return;
}

