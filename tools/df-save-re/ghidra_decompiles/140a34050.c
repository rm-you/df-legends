// FUN_140a34050 @ 140a34050
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140002020 FUN_140002020
//   -> 140051b70 FUN_140051b70
//   -> 140480880 FUN_140480880
//   -> 140071310 FUN_140071310
//   -> 140475070 FUN_140475070
//   -> 14014aad0 FUN_14014aad0
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14000c230 FUN_14000c230
//   -> 14014a5a0 FUN_14014a5a0
//   -> 1402f86f0 FUN_1402f86f0
//   -> 140071570 FUN_140071570
//   -> 140dfb5c4 operator_new
//   -> 140a33b60 FUN_140a33b60
//   -> 140106910 FUN_140106910
//   -> 140a33b30 FUN_140a33b30
//   -> 1402d6280 FUN_1402d6280
//   -> 140a32e90 FUN_140a32e90
//   -> 1402d72b0 FUN_1402d72b0
//   -> 14000c210 FUN_14000c210
//   -> 140a33390 FUN_140a33390
//   -> 14007bda0 FUN_14007bda0
//   -> 14004ffe0 FUN_14004ffe0
//   -> 1402d23a0 FUN_1402d23a0
//   -> 1402d22c0 FUN_1402d22c0
//   -> 140a33760 FUN_140a33760
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a34050(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  void **ppvVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  char *pcVar19;
  ulonglong *puVar20;
  longlong *plVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_1f8 [32];
  int local_1d8 [2];
  void *local_1d0;
  longlong local_1c8;
  int local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  void *local_198;
  void *local_190;
  void *local_188;
  undefined1 local_180;
  undefined7 uStack_17f;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  longlong local_150;
  ulonglong local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  ulonglong local_130;
  ulonglong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  longlong local_110;
  ulonglong local_108;
  undefined1 local_100 [32];
  undefined8 local_e0 [4];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined8 local_80 [3];
  ulonglong local_68;
  undefined8 local_60 [4];
  ulonglong local_40;
  
  local_1a8 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_1f8;
  lVar17 = *param_2;
  if (lVar17 != 0) {
    local_128 = 0xf;
    local_130 = 0;
    local_140 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b0 = (longlong)(int)(*(longlong *)(lVar17 + 0x130) - *(longlong *)(lVar17 + 0x128) >> 3);
    local_1c8 = param_1;
    if (0 < local_1b0) {
      do {
        puVar13 = *(undefined1 **)(*(longlong *)(*param_2 + 0x128) + local_1b8 * 8);
        if (&local_140 != puVar13) {
          FUN_14000c8b0(&local_140,puVar13,0,0xffffffffffffffff);
        }
        local_1d8[0] = 0;
        if (local_130 != 0) {
          do {
            puVar13 = &local_140;
            if (0xf < local_128) {
              puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
            }
            if (puVar13[local_1d8[0]] == '[') {
              uVar24 = 0xf;
              local_148 = 0xf;
              local_150 = 0;
              local_160 = 0;
              if (local_130 == 0) {
LAB_140a342e3:
                if (0xf < uVar24) {
                  FUN_140002020(CONCAT71(uStack_15f,local_160),uVar24 + 1,1);
                }
                goto LAB_140a36753;
              }
              local_1d8[0] = local_1d8[0] + 1;
              if (local_130 < (ulonglong)(longlong)local_1d8[0]) goto LAB_140a342e3;
              puVar13 = &local_140;
              if (0xf < local_128) {
                puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
              }
              pcVar22 = puVar13 + local_130;
              uVar24 = local_148;
              for (pcVar19 = puVar13 + local_1d8[0];
                  ((local_148 = uVar24, pcVar19 < pcVar22 && (*pcVar19 != ':')) && (*pcVar19 != ']')
                  ); pcVar19 = pcVar19 + 1) {
                FUN_140050540(&local_160,1);
                local_1d8[0] = local_1d8[0] + 1;
                uVar24 = local_148;
              }
              if (local_150 == 0) goto LAB_140a342e3;
              iVar10 = FUN_14000c110(&local_160,&DAT_140e8c9f4);
              if (iVar10 == 0) {
                local_168 = 0xf;
                local_170 = 0;
                local_180 = 0;
                uVar6 = 0;
                if (local_130 != 0) {
                  local_1d8[0] = local_1d8[0] + 1;
                  uVar6 = local_180;
                  if ((ulonglong)(longlong)local_1d8[0] <= local_130) {
                    puVar13 = &local_140;
                    if (0xf < local_128) {
                      puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
                    }
                    pcVar22 = puVar13 + local_130;
                    local_180 = 0;
                    for (pcVar19 = puVar13 + local_1d8[0];
                        ((pcVar19 < pcVar22 && (*pcVar19 != ':')) && (*pcVar19 != ']'));
                        pcVar19 = pcVar19 + 1) {
                      FUN_140050540(&local_180,1);
                      local_1d8[0] = local_1d8[0] + 1;
                    }
                    uVar6 = local_180;
                    if ((local_170 != 0) && ((undefined1 *)(*param_2 + 0x20) != &local_180)) {
                      FUN_14000c8b0((undefined1 *)(*param_2 + 0x20),&local_180,0,0xffffffffffffffff)
                      ;
                      uVar6 = local_180;
                    }
                  }
                }
                goto LAB_140a342c8;
              }
              iVar10 = FUN_14000c110(&local_160,"BUILDING");
              if (iVar10 == 0) {
                local_108 = 0xf;
                uVar23 = 0xf;
                local_168 = 0xf;
                local_170 = 0;
                local_180 = 0;
                local_110 = 0;
                local_120 = 0;
                uVar6 = 0;
                if (local_130 == 0) {
LAB_140a345cc:
                  local_180 = uVar6;
                  if (0xf < local_108) {
                    lVar17 = local_108 + 1;
LAB_140a34573:
                    FUN_140002020(CONCAT71(uStack_11f,local_120),lVar17,1);
                  }
                }
                else {
                  local_1d8[0] = local_1d8[0] + 1;
                  uVar6 = local_180;
                  if (local_130 < (ulonglong)(longlong)local_1d8[0]) goto LAB_140a345cc;
                  puVar13 = &local_140;
                  if (0xf < local_128) {
                    puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
                  }
                  pcVar22 = puVar13 + local_130;
                  local_180 = 0;
                  uVar5 = local_108;
                  for (pcVar19 = puVar13 + local_1d8[0];
                      ((local_108 = uVar5, pcVar19 < pcVar22 && (*pcVar19 != ':')) &&
                      (*pcVar19 != ']')); pcVar19 = pcVar19 + 1) {
                    FUN_140050540(&local_120,1);
                    local_1d8[0] = local_1d8[0] + 1;
                    uVar5 = local_108;
                  }
                  uVar6 = local_180;
                  if (local_110 == 0) goto LAB_140a345cc;
                  local_170 = 0;
                  local_180 = 0;
                  if (local_130 == 0) {
LAB_140a345a5:
                    if (0xf < uVar23) {
                      FUN_140002020(CONCAT71(uStack_17f,local_180),uVar23 + 1,1);
                    }
                    if (uVar5 < 0x10) goto LAB_140a34583;
                    lVar17 = uVar5 + 1;
                    goto LAB_140a34573;
                  }
                  local_1d8[0] = local_1d8[0] + 1;
                  if (local_130 < (ulonglong)(longlong)local_1d8[0]) goto LAB_140a345a5;
                  puVar13 = &local_140;
                  if (0xf < local_128) {
                    puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
                  }
                  pcVar22 = puVar13 + local_130;
                  for (pcVar19 = puVar13 + local_1d8[0];
                      ((pcVar19 < pcVar22 && (uVar23 = local_168, *pcVar19 != ':')) &&
                      (*pcVar19 != ']')); pcVar19 = pcVar19 + 1) {
                    FUN_140050540(&local_180,1);
                    local_1d8[0] = local_1d8[0] + 1;
                    uVar23 = local_168;
                  }
                  if (local_170 == 0) goto LAB_140a345a5;
                  FUN_140051b70(*param_2 + 0x88,&local_120);
                  iVar10 = 0;
                  local_1d0 = (void *)((ulonglong)local_1d0 & 0xffffffff00000000);
                  iVar18 = 0;
                  do {
                    uVar14 = FUN_140480880();
                    iVar11 = FUN_140071310(&local_180,uVar14);
                    if (0xf < local_68) {
                      FUN_140002020(local_80[0],local_68 + 1,1);
                    }
                    if (iVar11 == 0) {
                      local_1d0 = (void *)CONCAT44(local_1d0._4_4_,iVar18);
                      iVar10 = iVar18;
                      break;
                    }
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < 0x64f);
                  lVar17 = *param_2;
                  puVar20 = (ulonglong *)(lVar17 + 0xa0);
                  if ((&local_1d0 < *(void ***)(lVar17 + 0xa8)) &&
                     (ppvVar2 = (void **)*puVar20, ppvVar2 <= &local_1d0)) {
                    if (*(longlong *)(lVar17 + 0xa8) == *(longlong *)(lVar17 + 0xb0)) {
                      FUN_140475070(puVar20);
                    }
                    if (*(undefined4 **)(lVar17 + 0xa8) != (undefined4 *)0x0) {
                      **(undefined4 **)(lVar17 + 0xa8) =
                           *(undefined4 *)
                            (*puVar20 + ((longlong)&local_1d0 - (longlong)ppvVar2 >> 2) * 4);
                    }
                  }
                  else {
                    if (*(longlong *)(lVar17 + 0xa8) == *(longlong *)(lVar17 + 0xb0)) {
                      FUN_140475070(puVar20);
                    }
                    if (*(int **)(lVar17 + 0xa8) != (int *)0x0) {
                      **(int **)(lVar17 + 0xa8) = iVar10;
                    }
                  }
                  *(longlong *)(lVar17 + 0xa8) = *(longlong *)(lVar17 + 0xa8) + 4;
                  if (0xf < uVar23) {
                    FUN_140002020(CONCAT71(uStack_17f,local_180),uVar23 + 1,1);
                  }
                  if (0xf < local_108) {
                    lVar17 = local_108 + 1;
                    goto LAB_140a34573;
                  }
                }
LAB_140a34583:
                param_1 = local_1c8;
                if (0xf < uVar24) {
                  FUN_140002020(CONCAT71(uStack_15f,local_160),uVar24 + 1,1);
                  param_1 = local_1c8;
                }
                goto LAB_140a36753;
              }
              iVar10 = FUN_14000c110(&local_160,&DAT_140f7561c);
              if (iVar10 == 0) {
                if (0 < *(int *)(*param_2 + 0x48)) {
                  pbVar3 = *(byte **)(*param_2 + 0x40);
                  *pbVar3 = *pbVar3 | 1;
                }
                goto LAB_140a342e3;
              }
              iVar10 = FUN_14000c110(&local_160,"AUTOMATIC");
              if (iVar10 == 0) {
                if (0 < *(int *)(*param_2 + 0x48)) {
                  pbVar3 = *(byte **)(*param_2 + 0x40);
                  *pbVar3 = *pbVar3 | 2;
                }
                goto LAB_140a342e3;
              }
              iVar10 = FUN_14000c110(&local_160,"ADVENTURE_MODE_ENABLED");
              if (iVar10 == 0) {
                if (0 < *(int *)(*param_2 + 0x48)) {
                  pbVar3 = *(byte **)(*param_2 + 0x40);
                  *pbVar3 = *pbVar3 | 4;
                }
                goto LAB_140a342e3;
              }
              iVar10 = FUN_14000c110(&local_160,"REACTION_CLASS");
              if (iVar10 == 0) {
                if (param_2[1] != 0) {
                  local_168 = 0xf;
                  local_170 = 0;
                  local_180 = 0;
                  uVar6 = 0;
                  if (local_130 != 0) {
                    local_1d8[0] = local_1d8[0] + 1;
                    uVar6 = local_180;
                    if ((ulonglong)(longlong)local_1d8[0] <= local_130) {
                      puVar13 = &local_140;
                      if (0xf < local_128) {
                        puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
                      }
                      pcVar22 = puVar13 + local_130;
                      local_180 = 0;
                      for (pcVar19 = puVar13 + local_1d8[0];
                          ((pcVar19 < pcVar22 && (*pcVar19 != ':')) && (*pcVar19 != ']'));
                          pcVar19 = pcVar19 + 1) {
                        FUN_140050540(&local_180,1);
                        local_1d8[0] = local_1d8[0] + 1;
                      }
                      uVar6 = local_180;
                      if ((local_170 != 0) && ((undefined1 *)(param_2[1] + 0x38) != &local_180)) {
                        FUN_14000c8b0((undefined1 *)(param_2[1] + 0x38),&local_180,0,
                                      0xffffffffffffffff);
                        uVar6 = local_180;
                      }
                    }
                  }
LAB_140a342c8:
                  local_180 = uVar6;
                  if (0xf < local_168) {
                    FUN_140002020(CONCAT71(uStack_17f,local_180),local_168 + 1,1);
                  }
                }
                goto LAB_140a342e3;
              }
              iVar10 = FUN_14000c110(&local_160,"HAS_MATERIAL_REACTION_PRODUCT");
              if ((iVar10 == 0) ||
                 (iVar10 = FUN_14000c110(&local_160,"HAS_ITEM_REACTION_PRODUCT"), iVar10 == 0)) {
                if (param_2[1] != 0) {
                  local_168 = 0xf;
                  local_170 = 0;
                  local_180 = 0;
                  uVar6 = local_180;
                  if (local_130 != 0) {
                    local_1d8[0] = local_1d8[0] + 1;
                    if ((ulonglong)(longlong)local_1d8[0] <= local_130) {
                      puVar13 = &local_140;
                      if (0xf < local_128) {
                        puVar13 = (undefined1 *)CONCAT71(uStack_13f,local_140);
                      }
                      pcVar22 = puVar13 + local_130;
                      for (pcVar19 = puVar13 + local_1d8[0];
                          ((pcVar19 < pcVar22 && (*pcVar19 != ':')) && (*pcVar19 != ']'));
                          pcVar19 = pcVar19 + 1) {
                        FUN_140050540(&local_180,1);
                        local_1d8[0] = local_1d8[0] + 1;
                      }
                      uVar6 = local_180;
                      if ((local_170 != 0) && ((undefined1 *)(param_2[1] + 0x58) != &local_180)) {
                        FUN_14000c8b0((undefined1 *)(param_2[1] + 0x58),&local_180,0,
                                      0xffffffffffffffff);
                        uVar6 = local_180;
                      }
                    }
                  }
                  goto LAB_140a342c8;
                }
                goto LAB_140a342e3;
              }
              iVar10 = FUN_14000c110(&local_160,"CONTAINS");
              if (iVar10 == 0) {
                if (param_2[1] != 0) {
                  local_168 = 0xf;
                  local_170 = 0;
                  local_180 = 0;
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 != '\0') {
                    FUN_140051b70(param_2[1] + 0x178,&local_180);
                  }
                  goto LAB_140a347c2;
                }
LAB_140a347cd:
                FUN_14000c260(&local_160);
                goto LAB_140a36753;
              }
              cVar7 = FUN_14000d730(&local_160,"UNROTTEN");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x10;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"CONTAINS_LYE");
              if ((cVar7 != '\0') || (cVar7 = FUN_14000d730(&local_160,"POTASHABLE"), cVar7 != '\0')
                 ) {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x80000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NOT_WEB");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x40;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"WEB_ONLY");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x20;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"EMPTY");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x400;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NOT_CONTAIN_BARREL_ITEM");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x8000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,&DAT_140e8c888);
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x1000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"GLASS_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x78);
                  *puVar1 = *puVar1 | 0x1000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"BUILDMAT");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x40;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"FIRE_BUILD_SAFE");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x80;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"MAGMA_BUILD_SAFE");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x100;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"CAN_USE_ARTIFACT");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x2000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"WORTHLESS_STONE_ONLY");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x800;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_PLANT_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x4000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_SILK_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x8000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_YARN_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x80000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_SOAP_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x1000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_LEATHER_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x10000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_BONE_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x20000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_STRAND_TISSUE");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x40000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_SHELL_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x40000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_TOOTH_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x4000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_HORN_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x100000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ANY_PEARL_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x200000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"USE_BODY_COMPONENT");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x2000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"CAN_USE_HOSPITAL_RESERVED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x800000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"CAN_USE_LOCATION_RESERVED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x400;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NO_EDGE_ALLOWED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x10000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"HAS_EDGE");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x1000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"ON_GROUND");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x2000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NOT_ENGRAVED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x7c);
                  *puVar1 = *puVar1 | 0x20000000;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NOT_IMPROVED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 1;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"HAS_WRITING_IMPROVEMENT");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x800;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"DOES_NOT_ABSORB");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 4;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"FOOD_STORAGE_CONTAINER");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x80;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"HARD_ITEM_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x40;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"NOT_PRESSED");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 8;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"METAL_ITEM_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x100;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"IS_SAND_MATERIAL");
              if (cVar7 != '\0') {
                if (param_2[1] != 0) {
                  puVar1 = (uint *)(param_2[1] + 0x80);
                  *puVar1 = *puVar1 | 0x200;
                }
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"METAL_ORE");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if ((cVar7 != '\0') && (param_2[1] != 0)) {
                  FUN_14000c230(param_2[1] + 0x158,&local_180);
                }
LAB_140a347c2:
                puVar16 = (undefined8 *)&local_180;
LAB_140a347c7:
                FUN_14000c260(puVar16);
                goto LAB_140a347cd;
              }
              cVar7 = FUN_14000d730(&local_160,"MIN_DIMENSION");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if ((cVar7 != '\0') && (param_2[1] != 0)) {
                  uVar12 = FUN_14014a5a0(&local_180);
                  *(undefined4 *)(param_2[1] + 0x90) = uVar12;
                }
                goto LAB_140a347c2;
              }
              cVar7 = FUN_14000d730(&local_160,"HAS_TOOL_USE");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if ((cVar7 != '\0') && (param_2[1] != 0)) {
                  uVar8 = FUN_1402f86f0(&local_180);
                  *(undefined2 *)(param_2[1] + 0xb0) = uVar8;
                }
                goto LAB_140a347c2;
              }
              cVar7 = FUN_14000d730(&local_160,"SKILL_ROLL_RANGE");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_120);
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8);
                if (cVar7 == '\0') {
                  FUN_14000c260(&local_180);
                  puVar16 = (undefined8 *)&local_120;
                }
                else {
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 == '\0') {
                    FUN_14000c260(&local_180);
                    puVar16 = (undefined8 *)&local_120;
                  }
                  else {
                    uVar12 = FUN_14014a5a0(&local_120);
                    *(undefined4 *)(*param_2 + 0x178) = uVar12;
                    uVar12 = FUN_14014a5a0(&local_180);
                    *(undefined4 *)(*param_2 + 0x17c) = uVar12;
                    if (*(int *)(*param_2 + 0x178) < 1) {
                      *(undefined4 *)(*param_2 + 0x178) = 1;
                    }
                    if (*(int *)(*param_2 + 0x17c) < 0) {
                      *(undefined4 *)(*param_2 + 0x17c) = 0;
                    }
                    FUN_14000c260(&local_180);
                    puVar16 = (undefined8 *)&local_120;
                  }
                }
                goto LAB_140a347c7;
              }
              cVar7 = FUN_14000d730(&local_160,"SKILL_IP");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if (cVar7 != '\0') {
                  uVar12 = FUN_14014a5a0(&local_180);
                  *(undefined4 *)(*param_2 + 0x184) = uVar12;
                  if (*(int *)(*param_2 + 0x184) < 0) {
                    *(undefined4 *)(*param_2 + 0x184) = 0;
                  }
                }
                goto LAB_140a347c2;
              }
              cVar7 = FUN_14000d730(&local_160,"ATTRIBUTE_IP");
              if (cVar7 != '\0') {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if (cVar7 != '\0') {
                  uVar12 = FUN_14014a5a0(&local_180);
                  *(undefined4 *)(*param_2 + 0x180) = uVar12;
                  if (*(int *)(*param_2 + 0x180) < 0) {
                    *(undefined4 *)(*param_2 + 0x180) = 0;
                  }
                }
                goto LAB_140a347c2;
              }
              cVar7 = FUN_14000d730(&local_160,"CATEGORY");
              if (cVar7 == '\0') {
                cVar7 = FUN_14000d730(&local_160,"CATEGORY_NAME");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if ((cVar7 != '\0') && (param_2[4] != 0)) {
                    FUN_14000c230(param_2[4] + 0x40,&local_180);
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"CATEGORY_DESCRIPTION");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if ((cVar7 != '\0') && (param_2[4] != 0)) {
                    FUN_14000c230(param_2[4] + 0x68,&local_180);
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"CATEGORY_PARENT");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if ((cVar7 != '\0') && (param_2[4] != 0)) {
                    FUN_14000c230(param_2[4] + 0x20,&local_180);
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"CATEGORY_KEY");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 != '\0') {
                    iVar10 = 0;
                    do {
                      uVar14 = FUN_140480880();
                      cVar7 = FUN_140071570(&local_180,uVar14);
                      FUN_14000c260(&local_120);
                      iVar18 = iVar10;
                      if (cVar7 != '\0') break;
                      iVar10 = iVar10 + 1;
                      iVar18 = 0;
                    } while (iVar10 < 0x64f);
                    if (param_2[4] != 0) {
                      *(int *)(param_2[4] + 0x60) = iVar18;
                    }
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"DESCRIPTION");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 != '\0') {
                    cVar7 = FUN_14000d730(&local_180,"USE_TOOL");
                    if (cVar7 == '\0') {
                      cVar7 = FUN_14000d730(&local_180,"USE_INSTRUMENT");
                      if (cVar7 == '\0') {
                        local_1d0 = operator_new(0x48);
                        local_1d0 = (void *)FUN_140a33b30(local_1d0);
                        FUN_14000c230(local_1d0,&local_180);
                        FUN_140106910(*param_2 + 0x160,&local_1d0);
                      }
                      else {
                        FUN_14000c2b0(&local_120);
                        cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8);
                        if (cVar7 == '\0') {
                          FUN_14000c260(&local_120);
                        }
                        else {
                          local_1d0 = operator_new(0x48);
                          local_1d0 = (void *)FUN_140a33b30(local_1d0);
                          *(undefined2 *)((longlong)local_1d0 + 0x20) = 0xd;
                          FUN_14000c230((longlong)local_1d0 + 0x28,&local_120);
                          FUN_140106910(*param_2 + 0x160,&local_1d0);
                          FUN_14000c260(&local_120);
                        }
                      }
                    }
                    else {
                      FUN_14000c2b0(&local_120);
                      cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8);
                      if (cVar7 == '\0') {
                        FUN_14000c260(&local_120);
                      }
                      else {
                        local_1d0 = operator_new(0x48);
                        local_1d0 = (void *)FUN_140a33b30(local_1d0);
                        *(undefined2 *)((longlong)local_1d0 + 0x20) = 0x55;
                        FUN_14000c230((longlong)local_1d0 + 0x28,&local_120);
                        FUN_140106910(*param_2 + 0x160,&local_1d0);
                        FUN_14000c260(&local_120);
                      }
                    }
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"SKILL");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 != '\0') {
                    uVar8 = FUN_1402d6280(&local_180);
                    *(undefined2 *)(*param_2 + 0x80) = uVar8;
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"MAX_MULTIPLIER");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(&local_180);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (cVar7 != '\0') {
                    uVar12 = FUN_14014a5a0(&local_180);
                    *(undefined4 *)(*param_2 + 0x84) = uVar12;
                    if (*(int *)(*param_2 + 0x84) < 1) {
                      *(undefined4 *)(*param_2 + 0x84) = 0xffffffff;
                    }
                  }
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"REAGENT");
                if (cVar7 != '\0') {
                  FUN_14000c2b0(local_e0);
                  cVar7 = FUN_14014aad0(local_e0,&local_140,local_1d8);
                  if (cVar7 == '\0') {
                    puVar16 = local_e0;
                  }
                  else {
                    FUN_14000c2b0(local_100);
                    cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8);
                    if (cVar7 == '\0') {
                      FUN_14000c260(local_100);
                      puVar16 = local_e0;
                    }
                    else {
                      FUN_14000c2b0(local_a0);
                      cVar7 = FUN_14014aad0(local_a0,&local_140,local_1d8);
                      if (cVar7 != '\0') {
                        cVar7 = FUN_14000d730(local_a0,"METAL_ORE");
                        if (cVar7 == '\0') {
                          FUN_14000c2b0(local_c0);
                          FUN_14000c2b0(&local_180);
                          FUN_14000c2b0(local_80);
                          FUN_14000c2b0(&local_120);
                          cVar7 = FUN_14014aad0(local_c0,&local_140,local_1d8);
                          if ((((cVar7 != '\0') &&
                               (cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8),
                               cVar7 != '\0')) &&
                              ((cVar7 = FUN_1402d72b0(&local_180), cVar7 != '\0' ||
                               (cVar7 = FUN_14014aad0(local_80,&local_140,local_1d8), cVar7 != '\0')
                               ))) && (((cVar7 = FUN_14000d730(&local_180,"CREATURE_MAT"),
                                        cVar7 == '\0' &&
                                        (cVar7 = FUN_14000d730(&local_180,"PLANT_MAT"),
                                        cVar7 == '\0')) ||
                                       (cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8),
                                       cVar7 != '\0')))) {
                            local_1d0 = operator_new(400);
                            pvVar15 = (void *)FUN_140a32e90(local_1d0);
                            FUN_14000c230((longlong)pvVar15 + 8,local_e0);
                            cVar7 = FUN_14000d730(local_a0,"ANY_RAW_MATERIAL");
                            if (cVar7 != '\0') {
                              FUN_14000c210(local_a0,&DAT_140e8cc54);
                              *(uint *)((longlong)pvVar15 + 0x80) =
                                   *(uint *)((longlong)pvVar15 + 0x80) | 2;
                            }
                            cVar7 = FUN_14000d730(local_a0,"ANY_CRAFT");
                            if (cVar7 != '\0') {
                              FUN_14000c210(local_a0,&DAT_140e8cc54);
                              *(uint *)((longlong)pvVar15 + 0x80) =
                                   *(uint *)((longlong)pvVar15 + 0x80) | 0x20;
                            }
                            FUN_14000c230((longlong)pvVar15 + 0xb8,local_a0);
                            FUN_14000c230((longlong)pvVar15 + 0xd8,local_c0);
                            FUN_14000c230((longlong)pvVar15 + 0xf8,&local_180);
                            FUN_14000c230((longlong)pvVar15 + 0x118,local_80);
                            FUN_14000c230((longlong)pvVar15 + 0x138,&local_120);
                            uVar12 = FUN_14014a5a0(local_100);
                            *(undefined4 *)((longlong)pvVar15 + 0x28) = uVar12;
                            local_1d0 = pvVar15;
                            FUN_140106910(*param_2 + 0x50,&local_1d0);
                            param_2[1] = (longlong)pvVar15;
                          }
                          FUN_14000c260(&local_120);
                          FUN_14000c260(local_80);
                          FUN_14000c260(&local_180);
                          FUN_14000c260(local_c0);
                        }
                        else {
                          FUN_14000c2b0(&local_180);
                          cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                          if (cVar7 == '\0') {
                            FUN_14000c260(&local_180);
                          }
                          else {
                            local_1d0 = operator_new(400);
                            pvVar15 = (void *)FUN_140a32e90(local_1d0);
                            FUN_14000c230((longlong)pvVar15 + 8,local_e0);
                            *(undefined2 *)((longlong)pvVar15 + 0x30) = 4;
                            FUN_14000c230((longlong)pvVar15 + 0x158,&local_180);
                            uVar12 = FUN_14014a5a0(local_100);
                            *(undefined4 *)((longlong)pvVar15 + 0x28) = uVar12;
                            local_1d0 = pvVar15;
                            FUN_140106910(*param_2 + 0x50,&local_1d0);
                            param_2[1] = (longlong)pvVar15;
                            FUN_14000c260(&local_180);
                          }
                        }
                      }
                      FUN_14000c260(local_a0);
                      FUN_14000c260(local_100);
                      puVar16 = local_e0;
                    }
                  }
                  goto LAB_140a347c7;
                }
                cVar7 = FUN_14000d730(&local_160,"PRODUCT");
                if (cVar7 != '\0') {
                  param_2[2] = 0;
                  param_2[3] = 0;
                  FUN_14000c2b0(&local_180);
                  FUN_14000c2b0(&local_120);
                  FUN_14000c2b0(local_e0);
                  FUN_14000c2b0(local_80);
                  FUN_14000c2b0(local_a0);
                  FUN_14000c2b0(local_100);
                  FUN_14000c2b0(local_c0);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (((cVar7 != '\0') &&
                      (cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8), cVar7 != '\0')) &&
                     (cVar7 = FUN_14014aad0(local_e0,&local_140,local_1d8), cVar7 != '\0')) {
                    cVar7 = FUN_14000d730(local_e0,"GET_ITEM_DATA_FROM_REAGENT");
                    if (cVar7 == '\0') {
                      cVar7 = FUN_14014aad0(local_80,&local_140,local_1d8);
                      if (((cVar7 != '\0') &&
                          (cVar7 = FUN_14014aad0(local_a0,&local_140,local_1d8), cVar7 != '\0')) &&
                         ((cVar7 = FUN_1402d72b0(local_a0), cVar7 != '\0' ||
                          (cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8), cVar7 != '\0'))))
                      {
                        cVar7 = FUN_14000d730(local_a0,"CREATURE_MAT");
                        if (((cVar7 != '\0') ||
                            (cVar7 = FUN_14000d730(local_a0,"PLANT_MAT"), cVar7 != '\0')) ||
                           (cVar7 = FUN_14000d730(local_a0,"GET_MATERIAL_FROM_REAGENT"),
                           cVar7 != '\0')) goto LAB_140a35c18;
LAB_140a35c35:
                        uVar8 = FUN_14014a5a0(&local_180);
                        uVar9 = FUN_14014a5a0(&local_120);
                        local_1a0 = operator_new(0x150);
                        pvVar15 = (void *)FUN_140a33390(local_1a0);
                        *(undefined2 *)((longlong)pvVar15 + 0x54) = uVar8;
                        *(undefined2 *)((longlong)pvVar15 + 0x56) = uVar9;
                        cVar7 = FUN_14000d730(local_e0,"CRAFTS");
                        if (cVar7 != '\0') {
                          FUN_14000c210(local_e0,&DAT_140e8cc54);
                          FUN_14007bda0((longlong)pvVar15 + 0x60,5);
                        }
                        FUN_14000c230((longlong)pvVar15 + 0xb0,local_e0);
                        FUN_14000c230((longlong)pvVar15 + 0xd0,local_80);
                        FUN_14000c230((longlong)pvVar15 + 0xf0,local_a0);
                        FUN_14000c230((longlong)pvVar15 + 0x110,local_100);
                        FUN_14000c230((longlong)pvVar15 + 0x130,local_c0);
                        local_1d0 = pvVar15;
                        FUN_14004ffe0(*param_2 + 0x68,&local_1d0);
                        param_2[2] = (longlong)pvVar15;
                      }
                    }
                    else {
                      cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8);
                      if (cVar7 != '\0') {
LAB_140a35c18:
                        cVar7 = FUN_14014aad0(local_c0,&local_140,local_1d8);
                        if (cVar7 != '\0') goto LAB_140a35c35;
                      }
                    }
                  }
                  FUN_14000c260(local_c0);
                  FUN_14000c260(local_100);
                  FUN_14000c260(local_a0);
                  FUN_14000c260(local_80);
                  FUN_14000c260(local_e0);
                  FUN_14000c260(&local_120);
                  goto LAB_140a347c2;
                }
                cVar7 = FUN_14000d730(&local_160,"IMPROVEMENT");
                if (cVar7 == '\0') {
                  cVar7 = FUN_14000d730(&local_160,"PRODUCT_TOKEN");
                  if (cVar7 == '\0') {
                    cVar7 = FUN_14000d730(&local_160,"PRODUCT_DIMENSION");
                    if (cVar7 == '\0') {
                      cVar7 = FUN_14000d730(&local_160,"PRODUCT_TO_CONTAINER");
                      if (cVar7 == '\0') {
                        cVar7 = FUN_14000d730(&local_160,"PRESERVE_REAGENT");
                        if (cVar7 == '\0') {
                          cVar7 = FUN_14000d730(&local_160,"DOES_NOT_DETERMINE_PRODUCT_AMOUNT");
                          if (cVar7 == '\0') {
                            cVar7 = FUN_14000d730(&local_160,"FORCE_EDGE");
                            if (cVar7 == '\0') {
                              cVar7 = FUN_14000d730(&local_160,"PRODUCT_PASTE");
                              if (cVar7 == '\0') {
                                cVar7 = FUN_14000d730(&local_160,"PRODUCT_PRESSED");
                                if (cVar7 == '\0') {
                                  cVar7 = FUN_14000d730(&local_160,"TRANSFER_ARTIFACT_STATUS");
                                  if (cVar7 == '\0') {
                                    if (param_3 == '\0') {
LAB_140a365fe:
                                      FUN_14007b5f0(local_60,*param_2,&DAT_140e7aaf8);
                                      FUN_14000c1f0(local_60,"Unrecognized Reaction Token: ");
                                      FUN_140050380(local_60,&local_160);
                                      FUN_14014a240(local_60);
                                      puVar16 = local_60;
                                      goto LAB_140a347c7;
                                    }
                                    cVar7 = FUN_14000d730(&local_160,"GENERATED");
                                    if (cVar7 == '\0') {
                                      cVar7 = FUN_14000d730(&local_160,"SOURCE_HFID");
                                      if (cVar7 == '\0') {
                                        cVar7 = FUN_14000d730(&local_160,"SOURCE_ENID");
                                        if (cVar7 == '\0') goto LAB_140a365fe;
                                        FUN_14000c2b0(&local_180);
                                        cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                                        if (cVar7 != '\0') {
                                          uVar12 = FUN_14014a5a0(&local_180);
                                          *(undefined4 *)(*param_2 + 0x120) = uVar12;
                                        }
                                      }
                                      else {
                                        FUN_14000c2b0(&local_180);
                                        cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                                        if (cVar7 != '\0') {
                                          uVar12 = FUN_14014a5a0(&local_180);
                                          *(undefined4 *)(*param_2 + 0x11c) = uVar12;
                                        }
                                      }
                                      goto LAB_140a347c2;
                                    }
                                    FUN_14007bda0(*param_2 + 0x40,3);
                                  }
                                  else if (param_2[2] != 0) {
                                    FUN_14007bda0(param_2[2] + 0x60,8);
                                  }
                                }
                                else if (param_2[2] != 0) {
                                  FUN_14007bda0(param_2[2] + 0x60,4);
                                }
                              }
                              else if (param_2[2] != 0) {
                                FUN_14007bda0(param_2[2] + 0x60,3);
                              }
                            }
                            else if (param_2[2] != 0) {
                              FUN_14007bda0(param_2[2] + 0x60,2);
                            }
                          }
                          else if (param_2[1] != 0) {
                            puVar1 = (uint *)(param_2[1] + 0x2c);
                            *puVar1 = *puVar1 | 4;
                          }
                        }
                        else if (param_2[1] != 0) {
                          puVar1 = (uint *)(param_2[1] + 0x2c);
                          *puVar1 = *puVar1 | 1;
                        }
                        goto LAB_140a347cd;
                      }
                      FUN_14000c2b0(&local_180);
                      cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                      if ((cVar7 != '\0') && (param_2[2] != 0)) {
                        FUN_14000c230(param_2[2] + 0x28,&local_180);
                      }
                    }
                    else {
                      FUN_14000c2b0(&local_180);
                      cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                      if ((cVar7 != '\0') && (param_2[2] != 0)) {
                        uVar12 = FUN_14014a5a0(&local_180);
                        *(undefined4 *)(param_2[2] + 0x58) = uVar12;
                      }
                    }
                  }
                  else {
                    FUN_14000c2b0(&local_180);
                    cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                    if ((cVar7 != '\0') && (param_2[2] != 0)) {
                      FUN_14000c230(param_2[2] + 8,&local_180);
                    }
                  }
                  goto LAB_140a347c2;
                }
                param_2[2] = 0;
                param_2[3] = 0;
                FUN_14000c2b0(local_80);
                FUN_14000c2b0(&local_120);
                FUN_14000c2b0(local_a0);
                cVar7 = FUN_14014aad0(local_80,&local_140,local_1d8);
                if (((cVar7 == '\0') ||
                    (cVar7 = FUN_14014aad0(&local_120,&local_140,local_1d8), cVar7 == '\0')) ||
                   (cVar7 = FUN_14014aad0(local_a0,&local_140,local_1d8), cVar7 == '\0')) {
                  FUN_14000c260(local_a0);
                  FUN_14000c260(&local_120);
                  puVar16 = local_80;
                  goto LAB_140a347c7;
                }
                uVar12 = FUN_1402d23a0(local_a0);
                switch(uVar12) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 9:
                case 0xc:
                  FUN_14000c2b0(&local_180);
                  FUN_14000c2b0(local_c0);
                  FUN_14000c2b0(local_100);
                  cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                  if (((cVar7 != '\0') &&
                      ((cVar7 = FUN_1402d72b0(&local_180), cVar7 != '\0' ||
                       (cVar7 = FUN_14014aad0(local_c0,&local_140,local_1d8), cVar7 != '\0')))) &&
                     (((cVar7 = FUN_14000d730(&local_180,"CREATURE_MAT"), cVar7 == '\0' &&
                       ((cVar7 = FUN_14000d730(&local_180,"PLANT_MAT"), cVar7 == '\0' &&
                        (cVar7 = FUN_14000d730(&local_180,"GET_MATERIAL_FROM_REAGENT"),
                        cVar7 == '\0')))) ||
                      (cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8), cVar7 != '\0')))) {
                    uVar8 = FUN_14014a5a0(local_80);
                    local_188 = operator_new(0x150);
                    pvVar15 = (void *)FUN_140a33760(local_188);
                    *(undefined2 *)((longlong)pvVar15 + 0x78) = uVar8;
                    FUN_14000c230((longlong)pvVar15 + 0x48,&local_120);
                    *(undefined4 *)((longlong)pvVar15 + 0x68) = uVar12;
                    FUN_14000c230((longlong)pvVar15 + 0xf0,&local_180);
                    FUN_14000c230((longlong)pvVar15 + 0x110,local_c0);
                    FUN_14000c230((longlong)pvVar15 + 0x130,local_100);
                    cVar7 = FUN_14000d730(local_a0,"GLAZED");
                    if (cVar7 != '\0') {
                      FUN_14007bda0((longlong)pvVar15 + 0x80,2);
                    }
                    local_1d0 = pvVar15;
                    FUN_14004ffe0(*param_2 + 0x68,&local_1d0);
                    param_2[3] = (longlong)pvVar15;
                  }
                  FUN_14000c260(local_100);
                  FUN_14000c260(local_c0);
                  puVar16 = (undefined8 *)&local_180;
                  goto LAB_140a362ba;
                case 5:
                  FUN_14000c2b0(local_e0);
                  FUN_14000c2b0(&local_180);
                  FUN_14000c2b0(local_c0);
                  FUN_14000c2b0(local_100);
                  cVar7 = FUN_14014aad0(local_e0,&local_140,local_1d8);
                  if ((((cVar7 != '\0') &&
                       (cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8), cVar7 != '\0')) &&
                      ((cVar7 = FUN_1402d72b0(&local_180), cVar7 != '\0' ||
                       (cVar7 = FUN_14014aad0(local_c0,&local_140,local_1d8), cVar7 != '\0')))) &&
                     (((((cVar7 = FUN_14000d730(&local_180,"CREATURE_MAT"), cVar7 == '\0' &&
                         (cVar7 = FUN_14000d730(&local_180,"PLANT_MAT"), cVar7 == '\0')) &&
                        (cVar7 = FUN_14000d730(&local_180,"GET_MATERIAL_FROM_REAGENT"),
                        cVar7 == '\0')) ||
                       (cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8), cVar7 != '\0')) &&
                      (iVar10 = FUN_1402d22c0(local_e0), iVar10 != -1)))) {
                    uVar8 = FUN_14014a5a0(local_80);
                    local_198 = operator_new(0x150);
                    pvVar15 = (void *)FUN_140a33760(local_198);
                    *(undefined2 *)((longlong)pvVar15 + 0x78) = uVar8;
                    FUN_14000c230((longlong)pvVar15 + 0x48,&local_120);
                    *(undefined4 *)((longlong)pvVar15 + 0x68) = uVar12;
                    *(int *)((longlong)pvVar15 + 0x6c) = iVar10;
                    FUN_14000c230((longlong)pvVar15 + 0xf0,&local_180);
                    FUN_14000c230((longlong)pvVar15 + 0x110,local_c0);
                    FUN_14000c230((longlong)pvVar15 + 0x130,local_100);
                    local_1d0 = pvVar15;
                    FUN_14004ffe0(*param_2 + 0x68,&local_1d0);
                    param_2[3] = (longlong)pvVar15;
                  }
                  FUN_14000c260(local_100);
                  FUN_14000c260(local_c0);
                  FUN_14000c260(&local_180);
                  break;
                default:
                  goto switchD_140a35de6_caseD_6;
                case 0xb:
                  FUN_14000c2b0(local_e0);
                  FUN_14000c2b0(&local_180);
                  FUN_14000c2b0(local_c0);
                  FUN_14000c2b0(local_100);
                  cVar7 = FUN_14014aad0(local_e0,&local_140,local_1d8);
                  if ((((cVar7 != '\0') &&
                       (cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8), cVar7 != '\0')) &&
                      ((cVar7 = FUN_1402d72b0(&local_180), cVar7 != '\0' ||
                       (cVar7 = FUN_14014aad0(local_c0,&local_140,local_1d8), cVar7 != '\0')))) &&
                     ((((cVar7 = FUN_14000d730(&local_180,"CREATURE_MAT"), cVar7 == '\0' &&
                        (cVar7 = FUN_14000d730(&local_180,"PLANT_MAT"), cVar7 == '\0')) &&
                       (cVar7 = FUN_14000d730(&local_180,"GET_MATERIAL_FROM_REAGENT"), cVar7 == '\0'
                       )) || (cVar7 = FUN_14014aad0(local_100,&local_140,local_1d8), cVar7 != '\0'))
                     )) {
                    uVar8 = FUN_14014a5a0(local_80);
                    local_190 = operator_new(0x150);
                    pvVar15 = (void *)FUN_140a33760(local_190);
                    *(undefined2 *)((longlong)pvVar15 + 0x78) = uVar8;
                    FUN_14000c230((longlong)pvVar15 + 0x48,&local_120);
                    *(undefined4 *)((longlong)pvVar15 + 0x68) = uVar12;
                    FUN_14000c230((longlong)pvVar15 + 0xd0,local_e0);
                    FUN_14000c230((longlong)pvVar15 + 0xf0,&local_180);
                    FUN_14000c230((longlong)pvVar15 + 0x110,local_c0);
                    FUN_14000c230((longlong)pvVar15 + 0x130,local_100);
                    local_1d0 = pvVar15;
                    FUN_14004ffe0(*param_2 + 0x68,&local_1d0);
                    param_2[3] = (longlong)pvVar15;
                  }
                  FUN_14000c260(local_100);
                  FUN_14000c260(local_c0);
                  FUN_14000c260(&local_180);
                }
                puVar16 = local_e0;
LAB_140a362ba:
                FUN_14000c260(puVar16);
switchD_140a35de6_caseD_6:
                FUN_14000c260(local_a0);
                FUN_14000c260(&local_120);
                puVar16 = local_80;
              }
              else {
                FUN_14000c2b0(&local_180);
                cVar7 = FUN_14014aad0(&local_180,&local_140,local_1d8);
                if (cVar7 == '\0') goto LAB_140a347c2;
                FUN_14000c230(*param_2 + 0x140,&local_180);
                param_2[4] = 0;
                plVar4 = *(longlong **)(param_1 + 0x20);
                for (plVar21 = *(longlong **)(param_1 + 0x18); plVar21 < plVar4;
                    plVar21 = plVar21 + 1) {
                  cVar7 = FUN_140071570(*plVar21,&local_180);
                  if (cVar7 != '\0') {
                    param_2[4] = *plVar21;
                    break;
                  }
                }
                if (param_2[4] == 0) {
                  local_1d0 = operator_new(0x88);
                  lVar17 = FUN_140a33b60(local_1d0);
                  param_2[4] = lVar17;
                  FUN_14000c230(lVar17,&local_180);
                  FUN_140106910(param_1 + 0x18,param_2 + 4);
                }
                puVar16 = (undefined8 *)&local_180;
              }
              FUN_14000c260(puVar16);
              FUN_14000c260(&local_160);
              param_1 = local_1c8;
            }
LAB_140a36753:
            local_1d8[0] = local_1d8[0] + 1;
          } while ((ulonglong)(longlong)local_1d8[0] < local_130);
        }
        local_1c0 = local_1c0 + 1;
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < local_1b0);
    }
    FUN_14000c260(&local_140);
  }
  return;
}

