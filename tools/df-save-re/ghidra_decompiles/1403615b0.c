// FUN_1403615b0 @ 1403615b0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 140dfdcc0 memcmp
//   -> 140dfb5c4 operator_new
//   -> 140362600 FUN_140362600
//   -> 140362be0 FUN_140362be0
//   -> 140051b70 FUN_140051b70
//   -> 140002020 FUN_140002020
//   -> 140362870 FUN_140362870
//   -> 14000c110 FUN_14000c110
//   -> 1402ec800 FUN_1402ec800
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 14000c9e0 FUN_14000c9e0
//   -> 14000c260 FUN_14000c260
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014aad0 FUN_14014aad0
//   -> 14014a5a0 FUN_14014a5a0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14000c230 FUN_14000c230
//   -> 1400bd570 FUN_1400bd570
//   -> 14000d730 FUN_14000d730
//   -> 140051c50 FUN_140051c50
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1403615b0(undefined8 param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  size_t sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auStack_1b8 [32];
  int local_198;
  int local_194;
  undefined1 *local_190;
  undefined1 *local_188;
  longlong local_180;
  longlong *local_178;
  undefined8 local_170;
  void *local_168;
  void *local_160;
  void *local_158;
  void *local_150;
  undefined8 local_148 [2];
  ulonglong local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  ulonglong local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8 [4];
  undefined8 local_c8 [3];
  ulonglong local_b0;
  undefined8 local_a8 [4];
  undefined8 local_88 [4];
  ulonglong local_68;
  
  fVar2 = DAT_140f92c1c;
  fVar1 = DAT_140f92aa8;
  local_170 = 0xfffffffffffffffe;
  local_68 = DAT_1410b5008 ^ (ulonglong)auStack_1b8;
  local_110 = 0xf;
  local_118 = 0;
  local_128 = 0;
  local_190 = (undefined1 *)0x0;
  puVar9 = (undefined1 *)0x0;
  local_188 = (undefined1 *)0x0;
  local_194 = 1;
  local_178 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_180 = 1;
    do {
      puVar10 = *(undefined1 **)(*local_178 + local_180 * 8);
      if (&local_128 != puVar10) {
        FUN_14000c8b0(&local_128,puVar10,0,0xffffffffffffffff);
      }
      iVar15 = 0;
      if (local_118 != 0) {
        do {
          puVar10 = &local_128;
          if (0xf < local_110) {
            puVar10 = (undefined1 *)CONCAT71(uStack_127,local_128);
          }
          if (puVar10[iVar15] != '[') goto LAB_140362576;
          local_f0 = 0xf;
          local_f8 = 0;
          local_108 = 0;
          if (local_118 == 0) {
LAB_14036255d:
            if (0xf < local_f0) {
              puVar10 = (undefined1 *)CONCAT71(uStack_107,local_108);
              uVar19 = local_f0;
LAB_140362567:
              FUN_140002020(puVar10,uVar19 + 1,1);
            }
          }
          else {
            iVar15 = iVar15 + 1;
            local_198 = iVar15;
            if (local_118 < (ulonglong)(longlong)iVar15) goto LAB_14036255d;
            puVar10 = &local_128;
            if (0xf < local_110) {
              puVar10 = (undefined1 *)CONCAT71(uStack_127,local_128);
            }
            pcVar16 = puVar10 + local_118;
            uVar19 = local_f0;
            uVar18 = local_f8;
            for (pcVar14 = puVar10 + iVar15;
                ((local_198 = iVar15, local_f8 = uVar18, local_f0 = uVar19, pcVar14 < pcVar16 &&
                 (*pcVar14 != ':')) && (*pcVar14 != ']')); pcVar14 = pcVar14 + 1) {
              FUN_140050540(&local_108,1);
              iVar15 = iVar15 + 1;
              uVar19 = local_f0;
              uVar18 = local_f8;
            }
            if (uVar18 == 0) goto LAB_14036255d;
            puVar10 = (undefined1 *)CONCAT71(uStack_107,local_108);
            puVar8 = &local_108;
            if (0xf < uVar19) {
              puVar8 = puVar10;
            }
            sVar17 = 5;
            if (uVar18 < 5) {
              sVar17 = uVar18;
            }
            if ((sVar17 == 0) || (iVar6 = memcmp(puVar8,"COLOR",sVar17), iVar6 == 0)) {
              if (uVar18 < 5) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)(5 < uVar18);
              }
              if (uVar7 != 0) goto LAB_1403618f7;
              local_130 = 0xf;
              local_138 = 0;
              local_148[0]._0_1_ = 0;
              if (local_118 != 0) {
                iVar15 = iVar15 + 1;
                if ((ulonglong)(longlong)iVar15 <= local_118) {
                  puVar8 = &local_128;
                  if (0xf < local_110) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  }
                  pcVar16 = puVar8 + local_118;
                  for (pcVar14 = puVar8 + iVar15;
                      ((pcVar14 < pcVar16 && (*pcVar14 != ':')) && (*pcVar14 != ']'));
                      pcVar14 = pcVar14 + 1) {
                    FUN_140050540(local_148,1);
                    iVar15 = iVar15 + 1;
                  }
                  if (local_138 != 0) {
                    puVar9 = (undefined1 *)0x0;
                    local_188 = (undefined1 *)0x0;
                    local_168 = operator_new(0x80);
                    local_190 = (undefined1 *)FUN_140362600(local_168);
                    if ((undefined8 *)local_190 != local_148) {
                      FUN_14000c8b0(local_190,local_148,0,0xffffffffffffffff);
                    }
                    local_160 = operator_new(0x58);
                    puVar8 = (undefined1 *)FUN_140362be0(local_160);
                    FUN_140051b70(puVar8 + 0x40,local_148);
                    if ((undefined8 *)puVar8 != local_148) {
                      FUN_14000c8b0(puVar8,local_148,0,0xffffffffffffffff);
                    }
                  }
                }
              }
LAB_1403618c7:
              if (local_130 < 0x10) goto LAB_1403618e5;
              lVar13 = local_130 + 1;
LAB_1403618d4:
              FUN_140002020(CONCAT71(local_148[0]._1_7_,(undefined1)local_148[0]),lVar13,1);
LAB_1403618e5:
              if (uVar19 < 0x10) goto LAB_140362576;
              goto LAB_140362567;
            }
LAB_1403618f7:
            puVar8 = &local_108;
            if (0xf < uVar19) {
              puVar8 = puVar10;
            }
            sVar17 = 5;
            if (uVar18 < 5) {
              sVar17 = uVar18;
            }
            if ((sVar17 == 0) || (iVar6 = memcmp(puVar8,"SHAPE",sVar17), iVar6 == 0)) {
              if (uVar18 < 5) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)(5 < uVar18);
              }
              if (uVar7 != 0) goto LAB_140361a37;
              local_130 = 0xf;
              local_138 = 0;
              local_148[0]._0_1_ = 0;
              uVar18 = 0xf;
              if (local_118 != 0) {
                iVar15 = iVar15 + 1;
                if ((ulonglong)(longlong)iVar15 <= local_118) {
                  puVar8 = &local_128;
                  if (0xf < local_110) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  }
                  pcVar16 = puVar8 + local_118;
                  uVar18 = local_130;
                  for (pcVar14 = puVar8 + iVar15;
                      ((local_130 = uVar18, pcVar14 < pcVar16 && (*pcVar14 != ':')) &&
                      (*pcVar14 != ']')); pcVar14 = pcVar14 + 1) {
                    FUN_140050540(local_148,1);
                    iVar15 = iVar15 + 1;
                    uVar18 = local_130;
                  }
                  if (local_138 != 0) {
                    local_190 = (undefined1 *)0x0;
                    local_188 = (undefined1 *)0x0;
                    local_158 = operator_new(0xd0);
                    puVar9 = (undefined1 *)FUN_140362870(local_158);
                    if ((undefined8 *)puVar9 != local_148) {
                      FUN_14000c8b0(puVar9,local_148,0,0xffffffffffffffff);
                      uVar18 = local_130;
                    }
                  }
                }
              }
              if (uVar18 < 0x10) goto LAB_1403618e5;
              lVar13 = uVar18 + 1;
              goto LAB_1403618d4;
            }
LAB_140361a37:
            puVar8 = &local_108;
            if (0xf < uVar19) {
              puVar8 = puVar10;
            }
            sVar17 = 0xd;
            if (uVar18 < 0xd) {
              sVar17 = uVar18;
            }
            if ((sVar17 == 0) || (iVar6 = memcmp(puVar8,"COLOR_PATTERN",sVar17), iVar6 == 0)) {
              if (uVar18 < 0xd) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)(0xd < uVar18);
              }
              if (uVar7 != 0) goto LAB_140361b73;
              local_130 = 0xf;
              local_138 = 0;
              local_148[0]._0_1_ = 0;
              uVar18 = 0xf;
              if (local_118 != 0) {
                iVar15 = iVar15 + 1;
                if ((ulonglong)(longlong)iVar15 <= local_118) {
                  puVar8 = &local_128;
                  if (0xf < local_110) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  }
                  pcVar16 = puVar8 + local_118;
                  uVar18 = local_130;
                  for (pcVar14 = puVar8 + iVar15;
                      ((local_130 = uVar18, pcVar14 < pcVar16 && (*pcVar14 != ':')) &&
                      (*pcVar14 != ']')); pcVar14 = pcVar14 + 1) {
                    FUN_140050540(local_148,1);
                    iVar15 = iVar15 + 1;
                    uVar18 = local_130;
                  }
                  if (local_138 != 0) {
                    puVar9 = (undefined1 *)0x0;
                    local_190 = (undefined1 *)0x0;
                    local_150 = operator_new(0x58);
                    local_188 = (undefined1 *)FUN_140362be0(local_150);
                    if ((undefined8 *)local_188 != local_148) {
                      FUN_14000c8b0(local_188,local_148,0,0xffffffffffffffff);
                      uVar18 = local_130;
                    }
                  }
                }
              }
              if (0xf < uVar18) {
                lVar13 = uVar18 + 1;
                goto LAB_1403618d4;
              }
              goto LAB_1403618e5;
            }
LAB_140361b73:
            puVar11 = local_188;
            puVar8 = local_190;
            if (local_188 != (undefined1 *)0x0) {
              iVar6 = FUN_14000c110(&local_108,"CP_COLOR");
              if (iVar6 == 0) {
                local_130 = 0xf;
                local_148[0]._0_1_ = 0;
                do {
                  do {
                    local_138 = 0;
                    puVar8 = (undefined1 *)local_148;
                    if (0xf < local_130) {
                      puVar8 = (undefined1 *)CONCAT71(local_148[0]._1_7_,(undefined1)local_148[0]);
                    }
                    *puVar8 = 0;
                    if (local_118 == 0) goto LAB_1403618c7;
                    iVar15 = iVar15 + 1;
                    if (local_118 < (ulonglong)(longlong)iVar15) goto LAB_1403618c7;
                    puVar8 = &local_128;
                    if (0xf < local_110) {
                      puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                    }
                    pcVar16 = puVar8 + local_118;
                    for (pcVar14 = puVar8 + iVar15;
                        ((pcVar14 < pcVar16 && (*pcVar14 != ':')) && (*pcVar14 != ']'));
                        pcVar14 = pcVar14 + 1) {
                      FUN_140050540(local_148,1);
                      iVar15 = iVar15 + 1;
                    }
                    if (local_138 == 0) goto LAB_1403618c7;
                    FUN_140051b70(local_188 + 0x40,local_148);
                  } while (local_118 <= (ulonglong)(longlong)iVar15);
                  puVar8 = &local_128;
                  if (0xf < local_110) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  }
                } while (puVar8[iVar15] != ']');
                goto LAB_1403618c7;
              }
              iVar6 = FUN_14000c110(&local_108,"PATTERN");
              if (iVar6 != 0) {
                FUN_14007b5f0(local_c8,puVar11,&DAT_140e7aaf8);
                FUN_14000c9f0(local_c8,"Unrecognized Colored Pattern Token: ",0x24);
                FUN_14000cb40(local_c8,&local_108,0,0xffffffffffffffff);
                FUN_14014a240(local_c8);
                if (0xf < local_b0) {
                  FUN_140002020(local_c8[0],local_b0 + 1,1);
                }
                goto LAB_140362552;
              }
              local_130 = 0xf;
              local_138 = 0;
              local_148[0]._0_1_ = 0;
              if (local_118 != 0) {
                iVar15 = iVar15 + 1;
                if ((ulonglong)(longlong)iVar15 <= local_118) {
                  puVar8 = &local_128;
                  if (0xf < local_110) {
                    puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                  }
                  pcVar16 = puVar8 + local_118;
                  for (pcVar14 = puVar8 + iVar15;
                      ((pcVar14 < pcVar16 && (*pcVar14 != ':')) && (*pcVar14 != ']'));
                      pcVar14 = pcVar14 + 1) {
                    FUN_140050540(local_148,1);
                    iVar15 = iVar15 + 1;
                  }
                  if (local_138 != 0) {
                    uVar5 = FUN_1402ec800(local_148);
                    *(undefined2 *)(local_188 + 0x38) = uVar5;
                    goto LAB_1403618c7;
                  }
                }
              }
              if (0xf < local_130) {
                lVar13 = local_130 + 1;
                goto LAB_1403618d4;
              }
              goto LAB_1403618e5;
            }
            if (local_190 == (undefined1 *)0x0) {
              if (puVar9 == (undefined1 *)0x0) goto LAB_140362552;
              iVar6 = FUN_14000c110(&local_108,&DAT_140ec3400);
              if (iVar6 == 0) {
                FUN_14000c2b0(local_e8);
                cVar3 = FUN_14014aad0(local_e8,&local_128,&local_198,0x3a);
                if (cVar3 == '\0') {
                  puVar12 = local_e8;
                }
                else {
                  FUN_140051b70(puVar9 + 0x20,local_e8);
                  puVar12 = local_e8;
                }
LAB_14036206e:
                FUN_14000c260(puVar12);
                FUN_14000c260(&local_108);
                iVar15 = local_198;
              }
              else {
                iVar6 = FUN_14000c110(&local_108,&DAT_140e8c9f4);
                if (iVar6 == 0) {
                  FUN_14000c2b0(local_a8);
                  FUN_14000c2b0(local_c8);
                  cVar3 = FUN_14014aad0(local_a8,&local_128,&local_198,0x3a);
                  if (cVar3 == '\0') {
                    FUN_14000c260(local_c8);
                    puVar12 = local_a8;
                  }
                  else {
                    cVar3 = FUN_14014aad0(local_c8,&local_128,&local_198,0x3a);
                    if (cVar3 == '\0') {
                      FUN_14000c260(local_c8);
                      puVar12 = local_a8;
                    }
                    else {
                      FUN_14000c230(puVar9 + 0x50,local_a8);
                      FUN_14000c230(puVar9 + 0x70,local_c8);
                      FUN_14000c260(local_c8);
                      puVar12 = local_a8;
                    }
                  }
                  goto LAB_14036206e;
                }
                iVar6 = FUN_14000c110(&local_108,&DAT_140ec340c);
                if (iVar6 == 0) {
                  FUN_14000c2b0(local_e8);
                  cVar3 = FUN_14014aad0(local_e8,&local_128,&local_198,0x3a);
                  if (cVar3 == '\0') {
                    puVar12 = local_e8;
                  }
                  else {
                    FUN_140051b70(puVar9 + 0x90,local_e8);
                    puVar12 = local_e8;
                  }
                  goto LAB_14036206e;
                }
                iVar6 = FUN_14000c110(&local_108,&DAT_140e8ca90);
                if (iVar6 == 0) {
                  FUN_14000c2b0(local_148);
                  cVar3 = FUN_14014aad0(local_148,&local_128,&local_198,0x3a);
                  if (cVar3 == '\0') {
                    puVar12 = local_148;
                  }
                  else {
                    pcVar14 = (char *)FUN_1400bd570(local_148,0);
                    if (*pcVar14 == '\'') {
                      if (1 < local_138) {
                        puVar10 = (undefined1 *)FUN_1400bd570(local_148,1);
                        puVar9[0xcc] = *puVar10;
                      }
                    }
                    else {
                      uVar4 = FUN_14014a5a0(local_148);
                      puVar9[0xcc] = uVar4;
                    }
                    puVar12 = local_148;
                  }
                  goto LAB_14036206e;
                }
                cVar3 = FUN_14000d730(&local_108,"CATEGORY");
                if (cVar3 != '\0') {
                  FUN_14000c2b0(local_e8);
                  cVar3 = FUN_14014aad0(local_e8,&local_128,&local_198,0x3a);
                  if (cVar3 == '\0') {
                    puVar12 = local_e8;
                  }
                  else {
                    FUN_140051c50(puVar9 + 0xb0,local_e8);
                    puVar12 = local_e8;
                  }
                  goto LAB_14036206e;
                }
                cVar3 = FUN_14000d730(&local_108,"FACES");
                if (cVar3 != '\0') {
                  FUN_14000c2b0(local_e8);
                  cVar3 = FUN_14014aad0(local_e8,&local_128,&local_198,0x3a);
                  if (cVar3 == '\0') {
                    puVar12 = local_e8;
                  }
                  else {
                    iVar15 = FUN_14014a5a0(local_e8);
                    *(int *)(puVar9 + 200) = iVar15;
                    if (iVar15 < 1) {
                      *(undefined4 *)(puVar9 + 200) = 1;
                    }
                    puVar12 = local_e8;
                  }
                  goto LAB_14036206e;
                }
                cVar3 = FUN_14000d730(&local_108,"GEMS_USE_NOUN");
                if (cVar3 == '\0') {
                  cVar3 = FUN_14000d730(&local_108,"GEMS_USE_ADJ");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_14000d730(&local_108,"GEMS_USE_ADJ_NOUN");
                    if (cVar3 == '\0') {
                      FUN_14007b5f0(local_88,puVar9,&DAT_140e7aaf8);
                      FUN_14000c1f0(local_88,"Unrecognized Shape Token: ");
                      FUN_140050380(local_88,&local_108);
                      FUN_14014a240(local_88);
                      puVar12 = local_88;
                      goto LAB_14036254c;
                    }
                    *(uint *)(puVar9 + 0xa8) = *(uint *)(puVar9 + 0xa8) | 4;
                    FUN_14000c260(&local_108);
                  }
                  else {
                    *(uint *)(puVar9 + 0xa8) = *(uint *)(puVar9 + 0xa8) | 2;
                    FUN_14000c260(&local_108);
                  }
                }
                else {
                  *(uint *)(puVar9 + 0xa8) = *(uint *)(puVar9 + 0xa8) | 1;
                  FUN_14000c260(&local_108);
                }
              }
            }
            else {
              puVar11 = &local_108;
              if (0xf < uVar19) {
                puVar11 = puVar10;
              }
              sVar17 = 4;
              if (uVar18 < 4) {
                sVar17 = uVar18;
              }
              if ((sVar17 == 0) || (iVar6 = memcmp(puVar11,&DAT_140ec3400,sVar17), iVar6 == 0)) {
                if (uVar18 < 4) {
                  uVar7 = 0xffffffff;
                }
                else {
                  uVar7 = (uint)(4 < uVar18);
                }
                if (uVar7 == 0) {
                  local_130 = 0xf;
                  local_138 = 0;
                  local_148[0]._0_1_ = 0;
                  if (local_118 != 0) {
                    iVar15 = iVar15 + 1;
                    if ((ulonglong)(longlong)iVar15 <= local_118) {
                      puVar8 = &local_128;
                      if (0xf < local_110) {
                        puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                      }
                      pcVar16 = puVar8 + local_118;
                      for (pcVar14 = puVar8 + iVar15;
                          ((pcVar14 < pcVar16 && (*pcVar14 != ':')) && (*pcVar14 != ']'));
                          pcVar14 = pcVar14 + 1) {
                        FUN_140050540(local_148,1);
                        iVar15 = iVar15 + 1;
                      }
                      if (local_138 != 0) {
                        FUN_140051b70(local_190 + 0x20,local_148);
                        goto LAB_1403618c7;
                      }
                    }
                  }
                  if (0xf < local_130) {
                    lVar13 = local_130 + 1;
                    goto LAB_1403618d4;
                  }
                  goto LAB_1403618e5;
                }
              }
              puVar11 = &local_108;
              if (0xf < uVar19) {
                puVar11 = puVar10;
              }
              sVar17 = 4;
              if (uVar18 < 4) {
                sVar17 = uVar18;
              }
              if ((sVar17 == 0) || (iVar6 = memcmp(puVar11,&DAT_140e8c9f4,sVar17), iVar6 == 0)) {
                if (uVar18 < 4) {
                  uVar7 = 0xffffffff;
                }
                else {
                  uVar7 = (uint)(4 < uVar18);
                }
                if (uVar7 == 0) {
                  local_130 = 0xf;
                  local_138 = 0;
                  local_148[0]._0_1_ = 0;
                  if (local_118 != 0) {
                    iVar15 = iVar15 + 1;
                    if ((ulonglong)(longlong)iVar15 <= local_118) {
                      puVar8 = &local_128;
                      if (0xf < local_110) {
                        puVar8 = (undefined1 *)CONCAT71(uStack_127,local_128);
                      }
                      pcVar16 = puVar8 + local_118;
                      for (pcVar14 = puVar8 + iVar15;
                          ((pcVar14 < pcVar16 && (*pcVar14 != ':')) && (*pcVar14 != ']'));
                          pcVar14 = pcVar14 + 1) {
                        FUN_140050540(local_148,1);
                        iVar15 = iVar15 + 1;
                      }
                      if (local_138 != 0) {
                        if ((undefined8 *)(local_190 + 0x50) != local_148) {
                          FUN_14000c9e0(local_190 + 0x50,local_148);
                        }
                        FUN_14000c260(local_148);
                        FUN_14000c260(&local_108);
                        goto LAB_140362576;
                      }
                    }
                  }
                  if (0xf < local_130) {
                    lVar13 = local_130 + 1;
                    goto LAB_1403618d4;
                  }
                  goto LAB_1403618e5;
                }
              }
              iVar6 = FUN_14000c110(&local_108,&DAT_140ec3408);
              if (iVar6 == 0) {
                FUN_14000c2b0(local_c8);
                FUN_14000c2b0(local_a8);
                FUN_14000c2b0(local_148);
                cVar3 = FUN_14014aad0(local_c8,&local_128,&local_198,0x3a);
                if (((cVar3 != '\0') &&
                    (cVar3 = FUN_14014aad0(local_a8,&local_128,&local_198,0x3a), cVar3 != '\0')) &&
                   (cVar3 = FUN_14014aad0(local_148,&local_128,&local_198,0x3a), cVar3 != '\0')) {
                  iVar15 = FUN_14014a5a0(local_c8);
                  puVar10 = local_190;
                  *(float *)(local_190 + 0x74) = (float)iVar15;
                  iVar15 = FUN_14014a5a0(local_a8);
                  *(float *)(puVar10 + 0x78) = (float)iVar15;
                  iVar15 = FUN_14014a5a0(local_148);
                  *(float *)(puVar10 + 0x7c) = (float)iVar15;
                  fVar20 = *(float *)(puVar10 + 0x74) / fVar2;
                  *(float *)(puVar10 + 0x74) = fVar20;
                  if (fVar20 < 0.0) {
                    fVar20 = 0.0;
                  }
                  *(float *)(puVar10 + 0x74) = fVar20;
                  if (fVar1 < fVar20) {
                    *(undefined4 *)(puVar10 + 0x74) = 0x3f800000;
                  }
                  fVar20 = *(float *)(puVar10 + 0x78) / fVar2;
                  *(float *)(puVar10 + 0x78) = fVar20;
                  if (fVar20 < 0.0) {
                    fVar20 = 0.0;
                  }
                  *(float *)(puVar10 + 0x78) = fVar20;
                  if (fVar1 < fVar20) {
                    *(undefined4 *)(puVar10 + 0x78) = 0x3f800000;
                  }
                  fVar20 = *(float *)(puVar10 + 0x7c) / fVar2;
                  *(float *)(puVar10 + 0x7c) = fVar20;
                  if (fVar20 < 0.0) {
                    fVar20 = 0.0;
                  }
                  *(float *)(puVar10 + 0x7c) = fVar20;
                  if (fVar1 < fVar20) {
                    *(undefined4 *)(puVar10 + 0x7c) = 0x3f800000;
                  }
                }
                FUN_14000c260(local_148);
                FUN_14000c260(local_a8);
                puVar12 = local_c8;
                goto LAB_14036206e;
              }
              FUN_14007b5f0(local_e8,puVar8,&DAT_140e7aaf8);
              FUN_14000c1f0(local_e8,"Unrecognized Color Token: ");
              FUN_140050380(local_e8,&local_108);
              FUN_14014a240(local_e8);
              puVar12 = local_e8;
LAB_14036254c:
              FUN_14000c260(puVar12);
LAB_140362552:
              FUN_14000c260(&local_108);
            }
          }
LAB_140362576:
          iVar15 = iVar15 + 1;
        } while ((ulonglong)(longlong)iVar15 < local_118);
      }
      local_194 = local_194 + 1;
      local_180 = local_180 + 1;
    } while ((ulonglong)(longlong)local_194 < (ulonglong)(local_178[1] - *local_178 >> 3));
  }
  FUN_14000c260(&local_128);
  return;
}

