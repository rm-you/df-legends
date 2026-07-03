// FUN_1408b55a0 @ 1408b55a0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140002020 FUN_140002020
//   -> 1408b2110 FUN_1408b2110
//   -> 1408be8a0 FUN_1408be8a0
//   -> 1400bd570 FUN_1400bd570
//   -> EXTERNAL:00000115 atoi
//   -> 14000c620 FUN_14000c620
//   -> 14014a5a0 FUN_14014a5a0
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 1400025a0 FUN_1400025a0
//   -> 1402cdde0 FUN_1402cdde0
//   -> 14000c230 FUN_14000c230
//   -> 140002620 FUN_140002620
//   -> 1402ece60 FUN_1402ece60
//   -> 1402d80b0 FUN_1402d80b0
//   -> 1402d95d0 FUN_1402d95d0
//   -> 1401b7a00 FUN_1401b7a00
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14014cac0 FUN_14014cac0
//   -> 1402d72b0 FUN_1402d72b0
//   -> 140051b70 FUN_140051b70
//   -> 140051cf0 FUN_140051cf0
//   -> 1402d0ed0 FUN_1402d0ed0
//   -> 14000be20 FUN_14000be20
//   -> 1402ecec0 FUN_1402ecec0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1408b55a0(char *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auStack_958 [32];
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  short local_918 [4];
  undefined8 local_910;
  longlong local_908;
  longlong local_900;
  longlong local_8f0;
  longlong local_8e8;
  longlong local_8d8;
  longlong local_8d0;
  longlong local_8c0;
  longlong local_8b8;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined1 local_878 [32];
  undefined1 local_858 [32];
  undefined1 local_838 [32];
  undefined1 local_818;
  undefined7 uStack_817;
  undefined8 local_808;
  ulonglong local_800;
  undefined1 local_7f8 [32];
  undefined1 local_7d8;
  undefined7 uStack_7d7;
  undefined8 local_7c8;
  ulonglong local_7c0;
  undefined1 local_7b8;
  undefined7 uStack_7b7;
  undefined8 local_7a8;
  ulonglong local_7a0;
  undefined1 local_798;
  undefined7 uStack_797;
  undefined8 local_788;
  ulonglong local_780;
  undefined1 local_778;
  undefined7 uStack_777;
  undefined8 local_768;
  ulonglong local_760;
  undefined1 local_758;
  undefined7 uStack_757;
  undefined8 local_748;
  ulonglong local_740;
  undefined1 local_738;
  undefined7 uStack_737;
  undefined8 local_728;
  ulonglong local_720;
  undefined1 local_718 [32];
  undefined1 local_6f8 [32];
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8 [16];
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined1 local_698 [16];
  undefined8 local_688;
  undefined8 local_680;
  undefined1 local_678 [32];
  undefined1 local_658 [32];
  undefined1 local_638 [32];
  undefined1 local_618 [32];
  undefined1 local_5f8 [32];
  undefined1 local_5d8 [32];
  undefined1 local_5b8 [32];
  undefined1 local_598 [32];
  undefined1 local_578 [32];
  undefined1 local_558 [32];
  undefined1 local_538 [32];
  undefined1 local_518 [32];
  undefined1 local_4f8 [32];
  undefined1 local_4d8 [32];
  undefined1 local_4b8 [32];
  undefined1 local_498 [32];
  undefined1 local_478 [32];
  undefined1 local_458 [32];
  undefined1 local_438 [32];
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  undefined1 local_3b8 [32];
  undefined1 local_398 [32];
  undefined1 local_378 [32];
  undefined1 local_358 [32];
  undefined1 local_338 [32];
  undefined1 local_318 [32];
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  puVar11 = local_858;
  local_880 = 0xfffffffffffffffe;
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_958;
  local_910 = param_5;
  local_888 = param_6;
  local_890 = param_7;
  local_898 = param_8;
  local_8a8 = param_2;
  local_8a0 = param_3;
  iVar6 = FUN_14000c110(param_1,"PREFIX");
  uVar16 = 0;
  if (iVar6 == 0) {
    local_760 = 0xf;
    local_768 = 0;
    local_778 = 0;
    cVar3 = FUN_14014aad0(&local_778,param_3,param_2,0x3a);
    if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
      do {
        iVar6 = FUN_14000c110(&local_778,&DAT_140e8cc54);
        lVar18 = *(longlong *)(*param_4 + uVar16);
        if (iVar6 == 0) {
          puVar10 = (undefined8 *)(lVar18 + 0x508);
          *(undefined8 *)(lVar18 + 0x518) = 0;
          if (0xf < *(ulonglong *)(lVar18 + 0x520)) {
            puVar10 = (undefined8 *)*puVar10;
          }
          *(undefined1 *)puVar10 = 0;
        }
        else if ((undefined1 *)(lVar18 + 0x508) != &local_778) {
          FUN_14000c8b0((undefined1 *)(lVar18 + 0x508),&local_778,0,0xffffffffffffffff);
        }
        uVar20 = (int)uVar13 + 1;
        uVar16 = uVar16 + 8;
        uVar13 = (ulonglong)uVar20;
      } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
    }
    if (0xf < local_760) {
      FUN_140002020(CONCAT71(uStack_777,local_778),local_760 + 1,1);
    }
  }
  else {
    bVar2 = false;
    uVar13 = uVar16;
    if (param_4[1] - *param_4 >> 3 != 0) {
      do {
        cVar3 = FUN_1408b2110();
        if (cVar3 != '\0') {
          bVar2 = true;
        }
        uVar20 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar20;
      } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
      param_2 = local_8a8;
      param_3 = local_8a0;
      if (bVar2) {
        return 1;
      }
    }
    local_928 = local_898;
    local_930 = local_890;
    local_938 = local_888;
    cVar3 = FUN_1408be8a0(param_1,param_2,param_3,local_910);
    if (cVar3 != '\0') {
      return 1;
    }
    iVar6 = FUN_14000c110(param_1,"STONE_NAME");
    if (iVar6 == 0) {
      local_740 = 0xf;
      local_748 = 0;
      local_758 = 0;
      cVar3 = FUN_14014aad0(&local_758,param_3,param_2,0x3a);
      if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
        do {
          puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar13) + 0x60);
          if (puVar11 != &local_758) {
            FUN_14000c8b0(puVar11,&local_758,0,0xffffffffffffffff);
          }
          uVar20 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar20;
          uVar13 = uVar13 + 8;
        } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
      }
      if (0xf < local_740) {
        FUN_140002020(CONCAT71(uStack_757,local_758),local_740 + 1,1);
      }
    }
    else {
      iVar6 = FUN_14000c110(param_1,"IS_GEM");
      if (iVar6 == 0) {
        local_800 = 0xf;
        local_808 = 0;
        local_818 = 0;
        local_7a0 = 0xf;
        local_7a8 = 0;
        local_7b8 = 0;
        local_780 = 0xf;
        local_788 = 0;
        local_798 = 0;
        cVar3 = FUN_14014aad0(&local_818,param_3,param_2,0x3a);
        if ((((cVar3 != '\0') &&
             (cVar3 = FUN_14014aad0(&local_7b8,param_3,param_2,0x3a), cVar3 != '\0')) &&
            (cVar3 = FUN_14014aad0(&local_798,param_3,param_2,0x3a), cVar3 != '\0')) &&
           (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
          do {
            puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x20);
            if (puVar11 != &local_818) {
              FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
            }
            puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x40);
            if (puVar11 != &local_7b8) {
              FUN_14000c8b0(puVar11,&local_7b8,0,0xffffffffffffffff);
            }
            iVar6 = FUN_14000c110(&local_798,"OVERWRITE_SOLID");
            if (iVar6 == 0) {
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0xb8);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x178);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x118);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x1d8);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x138);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x1f8);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x158);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar16) + 0x218);
              if (puVar11 != &local_818) {
                FUN_14000c8b0(puVar11,&local_818,0,0xffffffffffffffff);
              }
            }
            if (6 < *(int *)(*(longlong *)(*param_4 + uVar16) + 0x298)) {
              pbVar1 = (byte *)(*(longlong *)(*(longlong *)(*param_4 + uVar16) + 0x290) + 6);
              *pbVar1 = *pbVar1 | 1;
            }
            uVar20 = (int)uVar13 + 1;
            uVar16 = uVar16 + 8;
            uVar13 = (ulonglong)uVar20;
          } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
        }
        if (0xf < local_780) {
          FUN_140002020(CONCAT71(uStack_797,local_798),local_780 + 1,1);
        }
        local_780 = 0xf;
        local_788 = 0;
        local_798 = 0;
        if (0xf < local_7a0) {
          FUN_140002020(CONCAT71(uStack_7b7,local_7b8),local_7a0 + 1,1);
        }
        local_7a0 = 0xf;
        local_7a8 = 0;
        local_7b8 = 0;
        if (0xf < local_800) {
          FUN_140002020(CONCAT71(uStack_817,local_818),local_800 + 1,1);
        }
      }
      else {
        iVar6 = FUN_14000c110(param_1,"TEMP_DIET_INFO");
        if (iVar6 == 0) {
          local_7c0 = 0xf;
          local_7c8 = 0;
          local_7d8 = 0;
          cVar3 = FUN_14014aad0(&local_7d8,param_3,param_2,0x3a);
          if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
            do {
              iVar6 = FUN_14000c110(&local_7d8,"BLOOD");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 0;
              }
              iVar6 = FUN_14000c110(&local_7d8,"SLIME");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 1;
              }
              iVar6 = FUN_14000c110(&local_7d8,"VOMIT");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 2;
              }
              iVar6 = FUN_14000c110(&local_7d8,"ICHOR");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 3;
              }
              iVar6 = FUN_14000c110(&local_7d8,&DAT_140ea9a34);
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 4;
              }
              iVar6 = FUN_14000c110(&local_7d8,&DAT_140f4449c);
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 5;
              }
              iVar6 = FUN_14000c110(&local_7d8,"GRIME");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 6;
              }
              iVar6 = FUN_14000c110(&local_7d8,"FILTH");
              if (iVar6 == 0) {
                *(undefined2 *)(*(longlong *)(*param_4 + uVar16) + 0x4ce) = 7;
              }
              uVar20 = (int)uVar13 + 1;
              uVar16 = uVar16 + 8;
              uVar13 = (ulonglong)uVar20;
            } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
          }
          if (0xf < local_7c0) {
            FUN_140002020(CONCAT71(uStack_7d7,local_7d8),local_7c0 + 1,1);
          }
        }
        else {
          iVar6 = FUN_14000c110(param_1,"POWDER_DYE");
          if (iVar6 != 0) {
            iVar6 = FUN_14000c110(param_1,&DAT_140e8ca90);
            if (iVar6 == 0) {
              cVar3 = FUN_14014aad0(param_1,param_3,param_2,0x3a);
              if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                do {
                  pcVar12 = param_1;
                  pcVar8 = (char *)FUN_1400bd570(param_1,0);
                  if (*pcVar8 == '\'') {
                    if (1 < *(ulonglong *)(param_1 + 0x10)) {
                      puVar11 = (undefined1 *)FUN_1400bd570();
                      uVar4 = *puVar11;
                      goto LAB_1408b5ef3;
                    }
                  }
                  else {
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar12 = *(char **)param_1;
                    }
                    iVar6 = atoi(pcVar12);
                    uVar4 = (undefined1)iVar6;
LAB_1408b5ef3:
                    *(undefined1 *)(*(longlong *)(*param_4 + uVar13) + 0x4b8) = uVar4;
                  }
                  uVar20 = (int)uVar16 + 1;
                  uVar16 = (ulonglong)uVar20;
                  uVar13 = uVar13 + 8;
                } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3))
                ;
              }
            }
            else {
              iVar6 = FUN_14000c110(param_1,"ITEM_SYMBOL");
              if (iVar6 != 0) {
                iVar6 = FUN_14000c110(param_1,"DISPLAY_COLOR");
                if (iVar6 == 0) {
                  local_680 = 0xf;
                  local_688 = 0;
                  local_698[0] = 0;
                  local_6a0 = 0xf;
                  local_6a8 = 0;
                  local_6b8[0] = 0;
                  local_6c8 = 0;
                  local_6c0 = 0xf;
                  FUN_14000c620(local_6d8,0);
                  cVar3 = FUN_14014aad0(local_698,param_3,param_2,0x3a);
                  if ((((cVar3 != '\0') &&
                       (cVar3 = FUN_14014aad0(local_6b8,param_3,param_2,0x3a), cVar3 != '\0')) &&
                      (cVar3 = FUN_14014aad0(local_6d8,param_3,param_2,0x3a), cVar3 != '\0')) &&
                     (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                    do {
                      lVar18 = *param_4;
                      uVar5 = FUN_14014a5a0(local_698);
                      *(undefined2 *)(*(longlong *)(lVar18 + uVar16) + 0x4c4) = uVar5;
                      lVar18 = *param_4;
                      uVar5 = FUN_14014a5a0(local_6b8);
                      *(undefined2 *)(*(longlong *)(lVar18 + uVar16) + 0x4c6) = uVar5;
                      lVar18 = *param_4;
                      uVar5 = FUN_14014a5a0(local_6d8);
                      *(undefined2 *)(*(longlong *)(lVar18 + uVar16) + 0x4c8) = uVar5;
                      *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4be) =
                           *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4c6);
                      *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4c0) =
                           *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4c4);
                      lVar18 = *(longlong *)(uVar16 + *param_4);
                      if (*(short *)(lVar18 + 0x4be) == *(short *)(lVar18 + 0x4c0)) {
                        *(undefined2 *)(lVar18 + 0x4c2) = 1;
                      }
                      else {
                        *(undefined2 *)(lVar18 + 0x4c2) = 0;
                      }
                      *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4ba) =
                           *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4c4);
                      *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4bc) =
                           *(undefined2 *)(*(longlong *)(uVar16 + *param_4) + 0x4c8);
                      uVar20 = (int)uVar13 + 1;
                      uVar16 = uVar16 + 8;
                      uVar13 = (ulonglong)uVar20;
                    } while ((ulonglong)(longlong)(int)uVar20 <
                             (ulonglong)(param_4[1] - *param_4 >> 3));
                  }
                  FUN_14000c260(local_6d8);
                  FUN_14000c260(local_6b8);
                  puVar11 = local_698;
                }
                else {
                  cVar3 = FUN_14000d730(param_1,"BUILD_COLOR");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_14000d730(param_1,"TILE_COLOR");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_14000d730(param_1,"BASIC_COLOR");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_14000d730(param_1,"STATE_COLOR");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_14000d730(param_1,"STATE_NAME");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_14000d730(param_1,"STATE_NAME_ADJ");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_14000d730(param_1,"STATE_ADJ");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_14000d730(param_1,"ABSORPTION");
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_14000d730(param_1,"IMPACT_YIELD");
                                  if (cVar3 == '\0') {
                                    cVar3 = FUN_14000d730(param_1,"IMPACT_FRACTURE");
                                    if (cVar3 == '\0') {
                                      cVar3 = FUN_14000d730(param_1,"IMPACT_ELASTICITY");
                                      if ((cVar3 == '\0') &&
                                         (cVar3 = FUN_14000d730(param_1,"IMPACT_STRAIN_AT_YIELD"),
                                         cVar3 == '\0')) {
                                        cVar3 = FUN_14000d730(param_1,"COMPRESSIVE_YIELD");
                                        if (cVar3 == '\0') {
                                          cVar3 = FUN_14000d730(param_1,"COMPRESSIVE_FRACTURE");
                                          if (cVar3 == '\0') {
                                            cVar3 = FUN_14000d730(param_1,"COMPRESSIVE_ELASTICITY");
                                            if ((cVar3 == '\0') &&
                                               (cVar3 = FUN_14000d730(param_1,
                                                  "COMPRESSIVE_STRAIN_AT_YIELD"), cVar3 == '\0')) {
                                              cVar3 = FUN_14000d730(param_1,"TENSILE_YIELD");
                                              if (cVar3 == '\0') {
                                                cVar3 = FUN_14000d730(param_1,"TENSILE_FRACTURE");
                                                if (cVar3 == '\0') {
                                                  cVar3 = FUN_14000d730(param_1,"TENSILE_ELASTICITY"
                                                                       );
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = FUN_14000d730(param_1,
                                                  "TENSILE_STRAIN_AT_YIELD"), cVar3 == '\0')) {
                                                    cVar3 = FUN_14000d730(param_1,"TORSION_YIELD");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,
                                                  "TORSION_FRACTURE");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "TORSION_ELASTICITY");
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = FUN_14000d730(param_1,
                                                  "TORSION_STRAIN_AT_YIELD"), cVar3 == '\0')) {
                                                    cVar3 = FUN_14000d730(param_1,"SHEAR_YIELD");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"SHEAR_FRACTURE"
                                                                           );
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,
                                                  "SHEAR_ELASTICITY");
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = FUN_14000d730(param_1,
                                                  "SHEAR_STRAIN_AT_YIELD"), cVar3 == '\0')) {
                                                    cVar3 = FUN_14000d730(param_1,"BENDING_YIELD");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,
                                                  "BENDING_FRACTURE");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "BENDING_ELASTICITY");
                                                  if ((cVar3 == '\0') &&
                                                     (cVar3 = FUN_14000d730(param_1,
                                                  "BENDING_STRAIN_AT_YIELD"), cVar3 == '\0')) {
                                                    cVar3 = FUN_14000d730(param_1,"MAX_EDGE");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"MATERIAL_VALUE"
                                                                           );
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,
                                                  "MULTIPLY_VALUE");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"SPEC_HEAT");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"HEATDAM_POINT")
                                                      ;
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,
                                                  "COLDDAM_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"IGNITE_POINT");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"MELTING_POINT")
                                                      ;
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,
                                                  "BOILING_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"MAT_FIXED_TEMP");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_HEATDAM_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_COLDDAM_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_IGNITE_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_MELTING_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_BOILING_POINT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "IF_EXISTS_SET_MAT_FIXED_TEMP");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"SOLID_DENSITY");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"LIQUID_DENSITY"
                                                                           );
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,"MOLAR_MASS");
                                                        if (cVar3 == '\0') {
                                                          cVar3 = FUN_14000d730(param_1,
                                                  "EXTRACT_STORAGE");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"BUTCHER_SPECIAL")
                                                    ;
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"MEAT_NAME");
                                                      if (cVar3 == '\0') {
                                                        cVar3 = FUN_14000d730(param_1,"BLOCK_NAME");
                                                        if (cVar3 == '\0') {
                                                          cVar3 = FUN_14000d730(param_1,
                                                  "MATERIAL_REACTION_PRODUCT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,
                                                  "ITEM_REACTION_PRODUCT");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"REACTION_CLASS");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,
                                                  "HARDENS_WITH_WATER");
                                                  if (cVar3 == '\0') {
                                                    cVar3 = FUN_14000d730(param_1,"SOAP_LEVEL");
                                                    if (cVar3 == '\0') {
                                                      cVar3 = FUN_14000d730(param_1,"SPHERE");
                                                      if (cVar3 == '\0') {
                                                        return 0;
                                                      }
                                                      FUN_14000c2b0(local_7f8);
                                                      cVar3 = FUN_14014aad0(local_7f8,param_3,
                                                                            param_2,0x3a);
                                                      if (((cVar3 != '\0') &&
                                                          (local_918[0] = FUN_1402d0ed0(local_7f8),
                                                          local_918[0] != -1)) &&
                                                         (uVar13 = uVar16,
                                                         param_4[1] - *param_4 >> 3 != 0)) {
                                                        do {
                                                          FUN_14000be20(*(longlong *)
                                                                         (*param_4 + uVar13) + 0x4f0
                                                                        ,local_918);
                                                          uVar20 = (int)uVar16 + 1;
                                                          uVar16 = (ulonglong)uVar20;
                                                          uVar13 = uVar13 + 8;
                                                        } while ((ulonglong)(longlong)(int)uVar20 <
                                                                 (ulonglong)
                                                                 (param_4[1] - *param_4 >> 3));
                                                      }
                                                      puVar11 = local_7f8;
                                                    }
                                                    else {
                                                      FUN_14000c2b0(local_178);
                                                      cVar3 = FUN_14014aad0(local_178,param_3,
                                                                            param_2,0x3a);
                                                      if ((cVar3 != '\0') &&
                                                         (uVar13 = uVar16,
                                                         param_4[1] - *param_4 >> 3 != 0)) {
                                                        do {
                                                          lVar18 = *param_4;
                                                          uVar7 = FUN_14014a5a0(local_178);
                                                          *(undefined4 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x4e8)
                                                               = uVar7;
                                                          uVar20 = (int)uVar16 + 1;
                                                          uVar16 = (ulonglong)uVar20;
                                                          uVar13 = uVar13 + 8;
                                                        } while ((ulonglong)(longlong)(int)uVar20 <
                                                                 (ulonglong)
                                                                 (param_4[1] - *param_4 >> 3));
                                                      }
                                                      puVar11 = local_178;
                                                    }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(puVar11);
                                                    FUN_14000c2b0(local_6f8);
                                                    FUN_14000c2b0(local_7f8);
                                                    cVar3 = FUN_14014aad0(puVar11,param_3,param_2,
                                                                          0x3a);
                                                    if (((cVar3 != '\0') &&
                                                        (cVar3 = FUN_14014aad0(local_6f8,param_3,
                                                                               param_2,0x3a),
                                                        cVar3 != '\0')) &&
                                                       ((((cVar3 = FUN_14000d730(puVar11,
                                                  "CREATURE_MAT"), cVar3 == '\0' &&
                                                  (cVar3 = FUN_14000d730(puVar11,"PLANT_MAT"),
                                                  cVar3 == '\0')) ||
                                                  (cVar3 = FUN_14014aad0(local_7f8,param_3,param_2,
                                                                         0x3a), cVar3 != '\0')) &&
                                                  (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)
                                                  ))) {
                                                    do {
                                                      FUN_14000c230(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x440,puVar11);
                                                      FUN_14000c230(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x460,local_6f8);
                                                      FUN_14000c230(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x480,local_7f8);
                                                      uVar20 = (int)uVar16 + 1;
                                                      uVar16 = (ulonglong)uVar20;
                                                      uVar13 = uVar13 + 8;
                                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                                             (ulonglong)(param_4[1] - *param_4 >> 3)
                                                            );
                                                  }
                                                  FUN_14000c260(local_7f8);
                                                  FUN_14000c260(local_6f8);
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_7f8);
                                                    cVar3 = FUN_14014aad0(local_7f8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        FUN_140051b70(*(longlong *)
                                                                       (*param_4 + uVar13) + 0x4a0,
                                                                      local_7f8);
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_7f8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_7f8);
                                                    FUN_14000c2b0(local_6f8);
                                                    FUN_14000c2b0(local_838);
                                                    FUN_14000c2b0(puVar11);
                                                    FUN_14000c2b0(local_878);
                                                    FUN_14000c2b0(local_718);
                                                    cVar3 = FUN_14014aad0(local_7f8,param_3,param_2,
                                                                          0x3a);
                                                    if (((((((cVar3 != '\0') &&
                                                            (cVar3 = FUN_14014aad0(local_6f8,param_3
                                                                                   ,param_2,0x3a),
                                                            cVar3 != '\0')) &&
                                                           (cVar3 = FUN_14014aad0(local_838,param_3,
                                                                                  param_2,0x3a),
                                                           cVar3 != '\0')) &&
                                                          (cVar3 = FUN_14014aad0(puVar11,param_3,
                                                                                 param_2,0x3a),
                                                          cVar3 != '\0')) &&
                                                         ((cVar3 = FUN_1402d72b0(puVar11),
                                                          cVar3 != '\0' ||
                                                          (cVar3 = FUN_14014aad0(local_878,param_3,
                                                                                 param_2,0x3a),
                                                          cVar3 != '\0')))) &&
                                                        (((cVar3 = FUN_14000d730(puVar11,
                                                  "CREATURE_MAT"), cVar3 == '\0' &&
                                                  (cVar3 = FUN_14000d730(puVar11,"PLANT_MAT"),
                                                  cVar3 == '\0')) ||
                                                  (cVar3 = FUN_14014aad0(local_718,param_3,param_2,
                                                                         0x3a), cVar3 != '\0')))) &&
                                                  (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)
                                                  ) {
                                                    do {
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x348,local_7f8);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3c0,local_6f8);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3d8,local_838);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3f0,puVar11);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x408,local_878);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x420,local_718);
                                                      uVar20 = (int)uVar16 + 1;
                                                      uVar16 = (ulonglong)uVar20;
                                                      uVar13 = uVar13 + 8;
                                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                                             (ulonglong)(param_4[1] - *param_4 >> 3)
                                                            );
                                                  }
                                                  FUN_14000c260(local_718);
                                                  FUN_14000c260(local_878);
                                                  FUN_14000c260(puVar11);
                                                  FUN_14000c260(local_838);
                                                  FUN_14000c260(local_6f8);
                                                  puVar11 = local_7f8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_718);
                                                    FUN_14000c2b0(puVar11);
                                                    FUN_14000c2b0(local_838);
                                                    FUN_14000c2b0(local_878);
                                                    cVar3 = FUN_14014aad0(local_718,param_3,param_2,
                                                                          0x3a);
                                                    if ((((cVar3 != '\0') &&
                                                         (cVar3 = FUN_14014aad0(puVar11,param_3,
                                                                                param_2,0x3a),
                                                         cVar3 != '\0')) &&
                                                        ((cVar3 = FUN_1402d72b0(puVar11),
                                                         cVar3 != '\0' ||
                                                         (cVar3 = FUN_14014aad0(local_838,param_3,
                                                                                param_2,0x3a),
                                                         cVar3 != '\0')))) &&
                                                       ((((cVar3 = FUN_14000d730(puVar11,
                                                  "CREATURE_MAT"), cVar3 == '\0' &&
                                                  (cVar3 = FUN_14000d730(puVar11,"PLANT_MAT"),
                                                  cVar3 == '\0')) ||
                                                  (cVar3 = FUN_14014aad0(local_878,param_3,param_2,
                                                                         0x3a), cVar3 != '\0')) &&
                                                  (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)
                                                  ))) {
                                                    do {
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x348,local_718);
                                                      FUN_140051cf0(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3c0,&DAT_140e8cc54);
                                                      FUN_140051cf0(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3d8,&DAT_140e8cc54);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x3f0,puVar11);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x408,local_838);
                                                      FUN_140051b70(*(longlong *)(*param_4 + uVar13)
                                                                    + 0x420,local_878);
                                                      uVar20 = (int)uVar16 + 1;
                                                      uVar16 = (ulonglong)uVar20;
                                                      uVar13 = uVar13 + 8;
                                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                                             (ulonglong)(param_4[1] - *param_4 >> 3)
                                                            );
                                                  }
                                                  FUN_14000c260(local_878);
                                                  FUN_14000c260(local_838);
                                                  FUN_14000c260(puVar11);
                                                  puVar11 = local_718;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_878);
                                                    FUN_14000c2b0(puVar11);
                                                    cVar3 = FUN_14014aad0(local_878,param_3,param_2,
                                                                          0x3a);
                                                    if (((cVar3 != '\0') &&
                                                        (cVar3 = FUN_14014aad0(puVar11,param_3,
                                                                               param_2,0x3a),
                                                        cVar3 != '\0')) &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_1401b7a00(local_878,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 != '\0') {
                                                          FUN_14000c230(*(longlong *)
                                                                         (*param_4 + uVar13) + 0x308
                                                                        ,local_878);
                                                        }
                                                        cVar3 = FUN_1401b7a00(puVar11,&DAT_140e8cc54
                                                                             );
                                                        if (cVar3 != '\0') {
                                                          cVar3 = FUN_14000d730(puVar11,&
                                                  DAT_140ea7a78);
                                                  if (cVar3 == '\0') {
                                                    FUN_14000c230(*(longlong *)(*param_4 + uVar13) +
                                                                  0x328,puVar11);
                                                  }
                                                  else {
                                                    uVar9 = FUN_14007b5f0(local_78,*(longlong *)
                                                                                    (uVar13 + *
                                                  param_4) + 0x308,&DAT_140e5a3c0);
                                                  FUN_14014cac0(*(longlong *)(*param_4 + uVar13) +
                                                                0x328,uVar9);
                                                  FUN_14000c260(local_78);
                                                  }
                                                  }
                                                  uVar20 = (int)uVar16 + 1;
                                                  uVar16 = (ulonglong)uVar20;
                                                  uVar13 = uVar13 + 8;
                                                  } while ((ulonglong)(longlong)(int)uVar20 <
                                                           (ulonglong)(param_4[1] - *param_4 >> 3));
                                                  }
                                                  FUN_14000c260(puVar11);
                                                  puVar11 = local_878;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_878);
                                                    FUN_14000c2b0(local_838);
                                                    FUN_14000c2b0(puVar11);
                                                    cVar3 = FUN_14014aad0(local_878,param_3,param_2,
                                                                          0x3a);
                                                    if (((cVar3 != '\0') &&
                                                        (cVar3 = FUN_14014aad0(local_838,param_3,
                                                                               param_2,0x3a),
                                                        cVar3 != '\0')) &&
                                                       ((cVar3 = FUN_14014aad0(puVar11,param_3,
                                                                               param_2,0x3a),
                                                        cVar3 != '\0' &&
                                                        (uVar13 = uVar16,
                                                        param_4[1] - *param_4 >> 3 != 0)))) {
                                                      do {
                                                        cVar3 = FUN_1401b7a00(local_878,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 != '\0') {
                                                          FUN_14000c230(*(longlong *)
                                                                         (*param_4 + uVar13) + 0x2e8
                                                                        ,local_878);
                                                        }
                                                        cVar3 = FUN_1401b7a00(local_838,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 != '\0') {
                                                          FUN_14000c230(*(longlong *)
                                                                         (*param_4 + uVar13) + 0x2a8
                                                                        ,local_838);
                                                        }
                                                        cVar3 = FUN_1401b7a00(puVar11,&DAT_140e8cc54
                                                                             );
                                                        if (cVar3 != '\0') {
                                                          cVar3 = FUN_14000d730(puVar11,&
                                                  DAT_140ea7a78);
                                                  if (cVar3 == '\0') {
                                                    FUN_14000c230(*(longlong *)(*param_4 + uVar13) +
                                                                  0x2c8,puVar11);
                                                  }
                                                  else {
                                                    uVar9 = FUN_14007b5f0(local_98,*(longlong *)
                                                                                    (uVar13 + *
                                                  param_4) + 0x2a8,&DAT_140e5a3c0);
                                                  FUN_14014cac0(*(longlong *)(*param_4 + uVar13) +
                                                                0x2c8,uVar9);
                                                  FUN_14000c260(local_98);
                                                  }
                                                  }
                                                  uVar20 = (int)uVar16 + 1;
                                                  uVar16 = (ulonglong)uVar20;
                                                  uVar13 = uVar13 + 8;
                                                  } while ((ulonglong)(longlong)(int)uVar20 <
                                                           (ulonglong)(param_4[1] - *param_4 >> 3));
                                                  }
                                                  FUN_14000c260(puVar11);
                                                  FUN_14000c260(local_838);
                                                  puVar11 = local_878;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_838);
                                                    FUN_14000c2b0(local_878);
                                                    cVar3 = FUN_14014aad0(local_838,param_3,param_2,
                                                                          0x3a);
                                                    if (((cVar3 != '\0') &&
                                                        (cVar3 = FUN_14014aad0(local_878,param_3,
                                                                               param_2,0x3a),
                                                        cVar3 != '\0')) &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar5 = FUN_1402d80b0(local_838,param_1);
                                                        *(undefined2 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x2a2) =
                                                             uVar5;
                                                        uVar5 = FUN_1402d95d0(local_878);
                                                        *(undefined2 *)
                                                         (*(longlong *)(*param_4 + uVar13) + 0x2a4)
                                                             = uVar5;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    FUN_14000c260(local_878);
                                                    puVar11 = local_838;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_878);
                                                    cVar3 = FUN_14014aad0(local_878,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar5 = FUN_1402d80b0(local_878,param_1);
                                                        *(undefined2 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x2a0) =
                                                             uVar5;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_878;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_4f8);
                                                    cVar3 = FUN_14014aad0(local_4f8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_4f8,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar7 = FUN_14014a5a0(local_4f8);
                                                          *(undefined4 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x98) =
                                                               uVar7;
                                                        }
                                                        else {
                                                          *(undefined4 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x98)
                                                               = 0xfbbc7818;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_4f8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_518);
                                                    cVar3 = FUN_14014aad0(local_518,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_518,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar7 = FUN_14014a5a0(local_518);
                                                          *(undefined4 *)
                                                           (*(longlong *)(lVar18 + uVar16) + 0x94) =
                                                               uVar7;
                                                          if (*(int *)(*(longlong *)
                                                                        (*param_4 + uVar16) + 0x94)
                                                              < 0) {
                                                            *(undefined4 *)
                                                             (*(longlong *)(*param_4 + uVar16) +
                                                             0x94) = 0;
                                                          }
                                                          if (200000 < *(int *)(*(longlong *)
                                                                                 (*param_4 + uVar16)
                                                                               + 0x94)) {
                                                            *(undefined4 *)
                                                             (*(longlong *)(*param_4 + uVar16) +
                                                             0x94) = 200000;
                                                          }
                                                        }
                                                        else {
                                                          *(undefined4 *)
                                                           (*(longlong *)(*param_4 + uVar16) + 0x94)
                                                               = 0xfbbc7818;
                                                        }
                                                        uVar20 = (int)uVar13 + 1;
                                                        uVar16 = uVar16 + 8;
                                                        uVar13 = (ulonglong)uVar20;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_518;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_538);
                                                    cVar3 = FUN_14014aad0(local_538,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_538,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar7 = FUN_14014a5a0(local_538);
                                                          *(undefined4 *)
                                                           (*(longlong *)(lVar18 + uVar16) + 0x90) =
                                                               uVar7;
                                                          if (*(int *)(*(longlong *)
                                                                        (*param_4 + uVar16) + 0x90)
                                                              < 0) {
                                                            *(undefined4 *)
                                                             (*(longlong *)(*param_4 + uVar16) +
                                                             0x90) = 0;
                                                          }
                                                          if (200000 < *(int *)(*(longlong *)
                                                                                 (*param_4 + uVar16)
                                                                               + 0x90)) {
                                                            *(undefined4 *)
                                                             (*(longlong *)(*param_4 + uVar16) +
                                                             0x90) = 200000;
                                                          }
                                                        }
                                                        else {
                                                          *(undefined4 *)
                                                           (*(longlong *)(*param_4 + uVar16) + 0x90)
                                                               = 0xfbbc7818;
                                                        }
                                                        uVar20 = (int)uVar13 + 1;
                                                        uVar16 = uVar16 + 8;
                                                        uVar13 = (ulonglong)uVar20;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_538;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_558);
                                                    cVar3 = FUN_14014aad0(local_558,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x8c) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_558,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_558);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x8c)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x8c) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_558;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_578);
                                                    cVar3 = FUN_14014aad0(local_578,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x8a) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_578,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_578);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x8a)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x8a) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_578;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_598);
                                                    cVar3 = FUN_14014aad0(local_598,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x88) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_598,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_598);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x88)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x88) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_598;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_5b8);
                                                    cVar3 = FUN_14014aad0(local_5b8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x86) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_5b8,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_5b8);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x86)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x86) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_5b8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_5d8);
                                                    cVar3 = FUN_14014aad0(local_5d8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x84) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_5d8,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_5d8);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x84)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x84) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_5d8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_5f8);
                                                    cVar3 = FUN_14014aad0(local_5f8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        lVar15 = *(longlong *)(lVar18 + uVar13);
                                                        if (*(short *)(lVar15 + 0x82) != -0x159f) {
                                                          cVar3 = FUN_14000d730(local_5f8,
                                                                                &DAT_140e8cc54);
                                                          if (cVar3 == '\0') {
                                                            uVar5 = FUN_14014a5a0(local_5f8);
                                                            *(undefined2 *)
                                                             (*(longlong *)(lVar18 + uVar13) + 0x82)
                                                                 = uVar5;
                                                          }
                                                          else {
                                                            *(undefined2 *)(lVar15 + 0x82) = 0xea61;
                                                          }
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_5f8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_618);
                                                    cVar3 = FUN_14014aad0(local_618,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_618,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_618);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x8c) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x8c)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_618;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_638);
                                                    cVar3 = FUN_14014aad0(local_638,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_638,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_638);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x8a) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x8a)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_638;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_658);
                                                    cVar3 = FUN_14014aad0(local_658,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_658,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_658);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x88) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x88)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_658;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_678);
                                                    cVar3 = FUN_14014aad0(local_678,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_678,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_678);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x86) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x86)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_678;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_458);
                                                    cVar3 = FUN_14014aad0(local_458,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_458,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_458);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x84) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x84)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_458;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_478);
                                                    cVar3 = FUN_14014aad0(local_478,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_478,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_478);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x82) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x82)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_478;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_498);
                                                    cVar3 = FUN_14014aad0(local_498,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_498,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar5 = FUN_14014a5a0(local_498);
                                                          *(undefined2 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x80) =
                                                               uVar5;
                                                        }
                                                        else {
                                                          *(undefined2 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x80)
                                                               = 0xea61;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_498;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_1f8);
                                                    cVar3 = FUN_14014aad0(local_1f8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *(longlong *)(*param_4 + uVar13);
                                                        iVar6 = FUN_14014a5a0(local_1f8);
                                                        *(int *)(lVar18 + 0x288) =
                                                             *(int *)(lVar18 + 0x288) * iVar6;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_1f8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_218);
                                                    cVar3 = FUN_14014aad0(local_218,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_14014a5a0(local_218);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x288) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_218;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_4b8);
                                                    cVar3 = FUN_14014aad0(local_4b8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        cVar3 = FUN_14000d730(local_4b8,
                                                                              &DAT_140e8cc54);
                                                        if (cVar3 == '\0') {
                                                          lVar18 = *param_4;
                                                          uVar7 = FUN_14014a5a0(local_4b8);
                                                          *(undefined4 *)
                                                           (*(longlong *)(lVar18 + uVar13) + 0x284)
                                                               = uVar7;
                                                        }
                                                        else {
                                                          *(undefined4 *)
                                                           (*(longlong *)(*param_4 + uVar13) + 0x284
                                                           ) = 0xfbbc7818;
                                                        }
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_4b8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_158);
                                                    cVar3 = FUN_14014aad0(local_158,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ecec0(local_158);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x26c) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_158;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_238);
                                                    cVar3 = FUN_14014aad0(local_238,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_238);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x254) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_238;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_258);
                                                    cVar3 = FUN_14014aad0(local_258,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_258);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x23c) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_258;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_138);
                                                    cVar3 = FUN_14014aad0(local_138,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ecec0(local_138);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x270) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_138;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_278);
                                                    cVar3 = FUN_14014aad0(local_278,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_278);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 600) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_278;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_298);
                                                    cVar3 = FUN_14014aad0(local_298,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_298);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x240) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_298;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_118);
                                                    cVar3 = FUN_14014aad0(local_118,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ecec0(local_118);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x274) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_118;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_198);
                                                    cVar3 = FUN_14014aad0(local_198,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_198);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x25c) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_198;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_2d8);
                                                    cVar3 = FUN_14014aad0(local_2d8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ece60(local_2d8);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x244) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_2d8;
                                                  }
                                                  }
                                                  else {
                                                    FUN_14000c2b0(local_f8);
                                                    cVar3 = FUN_14014aad0(local_f8,param_3,param_2,
                                                                          0x3a);
                                                    if ((cVar3 != '\0') &&
                                                       (uVar13 = uVar16,
                                                       param_4[1] - *param_4 >> 3 != 0)) {
                                                      do {
                                                        lVar18 = *param_4;
                                                        uVar7 = FUN_1402ecec0(local_f8);
                                                        *(undefined4 *)
                                                         (*(longlong *)(lVar18 + uVar13) + 0x27c) =
                                                             uVar7;
                                                        uVar20 = (int)uVar16 + 1;
                                                        uVar16 = (ulonglong)uVar20;
                                                        uVar13 = uVar13 + 8;
                                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                                               (ulonglong)
                                                               (param_4[1] - *param_4 >> 3));
                                                    }
                                                    puVar11 = local_f8;
                                                  }
                                                }
                                                else {
                                                  FUN_14000c2b0(local_2f8);
                                                  cVar3 = FUN_14014aad0(local_2f8,param_3,param_2,
                                                                        0x3a);
                                                  if ((cVar3 != '\0') &&
                                                     (uVar13 = uVar16,
                                                     param_4[1] - *param_4 >> 3 != 0)) {
                                                    do {
                                                      lVar18 = *param_4;
                                                      uVar7 = FUN_1402ece60(local_2f8);
                                                      *(undefined4 *)
                                                       (*(longlong *)(lVar18 + uVar13) + 0x264) =
                                                           uVar7;
                                                      uVar20 = (int)uVar16 + 1;
                                                      uVar16 = (ulonglong)uVar20;
                                                      uVar13 = uVar13 + 8;
                                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                                             (ulonglong)(param_4[1] - *param_4 >> 3)
                                                            );
                                                  }
                                                  puVar11 = local_2f8;
                                                }
                                              }
                                              else {
                                                FUN_14000c2b0(local_318);
                                                cVar3 = FUN_14014aad0(local_318,param_3,param_2,0x3a
                                                                     );
                                                if ((cVar3 != '\0') &&
                                                   (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0
                                                   )) {
                                                  do {
                                                    lVar18 = *param_4;
                                                    uVar7 = FUN_1402ece60(local_318);
                                                    *(undefined4 *)
                                                     (*(longlong *)(lVar18 + uVar13) + 0x24c) =
                                                         uVar7;
                                                    uVar20 = (int)uVar16 + 1;
                                                    uVar16 = (ulonglong)uVar20;
                                                    uVar13 = uVar13 + 8;
                                                  } while ((ulonglong)(longlong)(int)uVar20 <
                                                           (ulonglong)(param_4[1] - *param_4 >> 3));
                                                }
                                                puVar11 = local_318;
                                              }
                                            }
                                            else {
                                              FUN_14000c2b0(local_d8);
                                              cVar3 = FUN_14014aad0(local_d8,param_3,param_2,0x3a);
                                              if ((cVar3 != '\0') &&
                                                 (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0))
                                              {
                                                do {
                                                  lVar18 = *param_4;
                                                  uVar7 = FUN_1402ecec0(local_d8);
                                                  *(undefined4 *)
                                                   (*(longlong *)(lVar18 + uVar13) + 0x280) = uVar7;
                                                  uVar20 = (int)uVar16 + 1;
                                                  uVar16 = (ulonglong)uVar20;
                                                  uVar13 = uVar13 + 8;
                                                } while ((ulonglong)(longlong)(int)uVar20 <
                                                         (ulonglong)(param_4[1] - *param_4 >> 3));
                                              }
                                              puVar11 = local_d8;
                                            }
                                          }
                                          else {
                                            FUN_14000c2b0(local_338);
                                            cVar3 = FUN_14014aad0(local_338,param_3,param_2,0x3a);
                                            if ((cVar3 != '\0') &&
                                               (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                              do {
                                                lVar18 = *param_4;
                                                uVar7 = FUN_1402ece60(local_338);
                                                *(undefined4 *)
                                                 (*(longlong *)(lVar18 + uVar13) + 0x268) = uVar7;
                                                uVar20 = (int)uVar16 + 1;
                                                uVar16 = (ulonglong)uVar20;
                                                uVar13 = uVar13 + 8;
                                              } while ((ulonglong)(longlong)(int)uVar20 <
                                                       (ulonglong)(param_4[1] - *param_4 >> 3));
                                            }
                                            puVar11 = local_338;
                                          }
                                        }
                                        else {
                                          FUN_14000c2b0(local_358);
                                          cVar3 = FUN_14014aad0(local_358,param_3,param_2,0x3a);
                                          if ((cVar3 != '\0') &&
                                             (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                            do {
                                              lVar18 = *param_4;
                                              uVar7 = FUN_1402ece60(local_358);
                                              *(undefined4 *)
                                               (*(longlong *)(lVar18 + uVar13) + 0x250) = uVar7;
                                              uVar20 = (int)uVar16 + 1;
                                              uVar16 = (ulonglong)uVar20;
                                              uVar13 = uVar13 + 8;
                                            } while ((ulonglong)(longlong)(int)uVar20 <
                                                     (ulonglong)(param_4[1] - *param_4 >> 3));
                                          }
                                          puVar11 = local_358;
                                        }
                                      }
                                      else {
                                        FUN_14000c2b0(local_b8);
                                        cVar3 = FUN_14014aad0(local_b8,param_3,param_2,0x3a);
                                        if ((cVar3 != '\0') &&
                                           (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                          do {
                                            lVar18 = *param_4;
                                            uVar7 = FUN_1402ecec0(local_b8);
                                            *(undefined4 *)(*(longlong *)(lVar18 + uVar13) + 0x278)
                                                 = uVar7;
                                            uVar20 = (int)uVar16 + 1;
                                            uVar16 = (ulonglong)uVar20;
                                            uVar13 = uVar13 + 8;
                                          } while ((ulonglong)(longlong)(int)uVar20 <
                                                   (ulonglong)(param_4[1] - *param_4 >> 3));
                                        }
                                        puVar11 = local_b8;
                                      }
                                    }
                                    else {
                                      FUN_14000c2b0(local_378);
                                      cVar3 = FUN_14014aad0(local_378,param_3,param_2,0x3a);
                                      if ((cVar3 != '\0') &&
                                         (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                        do {
                                          lVar18 = *param_4;
                                          uVar7 = FUN_1402ece60(local_378);
                                          *(undefined4 *)(*(longlong *)(lVar18 + uVar13) + 0x260) =
                                               uVar7;
                                          uVar20 = (int)uVar16 + 1;
                                          uVar16 = (ulonglong)uVar20;
                                          uVar13 = uVar13 + 8;
                                        } while ((ulonglong)(longlong)(int)uVar20 <
                                                 (ulonglong)(param_4[1] - *param_4 >> 3));
                                      }
                                      puVar11 = local_378;
                                    }
                                  }
                                  else {
                                    FUN_14000c2b0(local_398);
                                    cVar3 = FUN_14014aad0(local_398,param_3,param_2,0x3a);
                                    if ((cVar3 != '\0') &&
                                       (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                      do {
                                        lVar18 = *param_4;
                                        uVar7 = FUN_1402ece60(local_398);
                                        *(undefined4 *)(*(longlong *)(lVar18 + uVar13) + 0x248) =
                                             uVar7;
                                        uVar20 = (int)uVar16 + 1;
                                        uVar16 = (ulonglong)uVar20;
                                        uVar13 = uVar13 + 8;
                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                               (ulonglong)(param_4[1] - *param_4 >> 3));
                                    }
                                    puVar11 = local_398;
                                  }
                                }
                                else {
                                  FUN_14000c2b0(local_4d8);
                                  cVar3 = FUN_14014aad0(local_4d8,param_3,param_2,0x3a);
                                  if ((cVar3 != '\0') &&
                                     (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                                    do {
                                      cVar3 = FUN_14000d730(local_4d8,&DAT_140e8cc54);
                                      if (cVar3 == '\0') {
                                        lVar18 = *param_4;
                                        uVar7 = FUN_14014a5a0(local_4d8);
                                        *(undefined4 *)(*(longlong *)(lVar18 + uVar13) + 0x238) =
                                             uVar7;
                                      }
                                      else {
                                        *(undefined4 *)(*(longlong *)(*param_4 + uVar13) + 0x238) =
                                             0xfbbc7818;
                                      }
                                      uVar20 = (int)uVar16 + 1;
                                      uVar16 = (ulonglong)uVar20;
                                      uVar13 = uVar13 + 8;
                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                             (ulonglong)(param_4[1] - *param_4 >> 3));
                                  }
                                  puVar11 = local_4d8;
                                }
                              }
                              else {
                                FUN_14000c2b0(local_838);
                                FUN_14000c2b0(local_878);
                                cVar3 = FUN_14014aad0(local_838,param_3,param_2,0x3a);
                                if ((cVar3 != '\0') &&
                                   (cVar3 = FUN_14014aad0(local_878,param_3,param_2,0x3a),
                                   cVar3 != '\0')) {
                                  FUN_1400025a0(&local_8c0);
                                  FUN_1402cdde0(local_838,&local_8c0);
                                  if (param_4[1] - *param_4 >> 3 != 0) {
                                    uVar14 = local_8b8 - local_8c0 >> 1;
                                    lVar18 = local_8c0;
                                    uVar13 = uVar16;
                                    uVar22 = uVar16;
                                    do {
                                      uVar17 = uVar16;
                                      uVar21 = uVar16;
                                      if (uVar14 != 0) {
                                        do {
                                          FUN_14000c230(*(longlong *)(*param_4 + uVar22) +
                                                        (longlong)*(short *)(lVar18 + uVar17) * 0x20
                                                        + 0x178,local_878);
                                          uVar20 = (int)uVar21 + 1;
                                          uVar14 = local_8b8 - local_8c0 >> 1;
                                          uVar17 = uVar17 + 2;
                                          lVar18 = local_8c0;
                                          uVar21 = (ulonglong)uVar20;
                                        } while ((ulonglong)(longlong)(int)uVar20 < uVar14);
                                      }
                                      uVar20 = (int)uVar13 + 1;
                                      uVar13 = (ulonglong)uVar20;
                                      uVar22 = uVar22 + 8;
                                    } while ((ulonglong)(longlong)(int)uVar20 <
                                             (ulonglong)(param_4[1] - *param_4 >> 3));
                                  }
                                  FUN_140002620(&local_8c0);
                                }
                                FUN_14000c260(local_878);
                                puVar11 = local_838;
                              }
                            }
                            else {
                              FUN_14000c2b0(local_878);
                              FUN_14000c2b0(puVar11);
                              cVar3 = FUN_14014aad0(local_878,param_3,param_2,0x3a);
                              if ((cVar3 != '\0') &&
                                 (cVar3 = FUN_14014aad0(puVar11,param_3,param_2,0x3a), cVar3 != '\0'
                                 )) {
                                FUN_1400025a0(&local_908);
                                FUN_1402cdde0(local_878,&local_908);
                                if (local_900 - local_908 >> 1 != 0) {
                                  lVar18 = *param_4;
                                  lVar15 = local_908;
                                  lVar19 = local_900;
                                  uVar13 = uVar16;
                                  uVar22 = uVar16;
                                  do {
                                    uVar14 = uVar16;
                                    uVar17 = uVar16;
                                    if (param_4[1] - lVar18 >> 3 != 0) {
                                      do {
                                        FUN_14000c230(*(longlong *)(uVar14 + *param_4) +
                                                      (longlong)*(short *)(uVar22 + lVar15) * 0x20 +
                                                      0xb8,puVar11);
                                        FUN_14000c230(*(longlong *)(uVar14 + *param_4) +
                                                      (longlong)*(short *)(uVar22 + local_908) *
                                                      0x20 + 0x178,puVar11);
                                        uVar20 = (int)uVar17 + 1;
                                        lVar18 = *param_4;
                                        lVar15 = local_908;
                                        uVar14 = uVar14 + 8;
                                        lVar19 = local_900;
                                        uVar17 = (ulonglong)uVar20;
                                      } while ((ulonglong)(longlong)(int)uVar20 <
                                               (ulonglong)(param_4[1] - lVar18 >> 3));
                                    }
                                    uVar20 = (int)uVar13 + 1;
                                    uVar13 = (ulonglong)uVar20;
                                    uVar22 = uVar22 + 2;
                                  } while ((ulonglong)(longlong)(int)uVar20 <
                                           (ulonglong)(lVar19 - lVar15 >> 1));
                                }
                                FUN_140002620(&local_908);
                              }
                              FUN_14000c260(puVar11);
                              puVar11 = local_878;
                            }
                          }
                          else {
                            FUN_14000c2b0(local_838);
                            FUN_14000c2b0(local_878);
                            cVar3 = FUN_14014aad0(local_838,param_3,param_2,0x3a);
                            if ((cVar3 != '\0') &&
                               (cVar3 = FUN_14014aad0(local_878,param_3,param_2,0x3a), cVar3 != '\0'
                               )) {
                              FUN_1400025a0(&local_8d8);
                              FUN_1402cdde0(local_838,&local_8d8);
                              if (param_4[1] - *param_4 >> 3 != 0) {
                                uVar14 = local_8d0 - local_8d8 >> 1;
                                lVar18 = local_8d8;
                                uVar13 = uVar16;
                                uVar22 = uVar16;
                                do {
                                  uVar17 = uVar16;
                                  uVar21 = uVar16;
                                  if (uVar14 != 0) {
                                    do {
                                      FUN_14000c230(*(longlong *)(uVar22 + *param_4) +
                                                    (longlong)*(short *)(uVar17 + lVar18) * 0x20 +
                                                    0xb8,local_878);
                                      uVar20 = (int)uVar21 + 1;
                                      uVar14 = local_8d0 - local_8d8 >> 1;
                                      uVar17 = uVar17 + 2;
                                      lVar18 = local_8d8;
                                      uVar21 = (ulonglong)uVar20;
                                    } while ((ulonglong)(longlong)(int)uVar20 < uVar14);
                                  }
                                  uVar20 = (int)uVar13 + 1;
                                  uVar13 = (ulonglong)uVar20;
                                  uVar22 = uVar22 + 8;
                                } while ((ulonglong)(longlong)(int)uVar20 <
                                         (ulonglong)(param_4[1] - *param_4 >> 3));
                              }
                              FUN_140002620(&local_8d8);
                            }
                            FUN_14000c260(local_878);
                            puVar11 = local_838;
                          }
                        }
                        else {
                          FUN_14000c2b0(local_838);
                          FUN_14000c2b0(local_878);
                          cVar3 = FUN_14014aad0(local_838,param_3,param_2,0x3a);
                          if ((cVar3 != '\0') &&
                             (cVar3 = FUN_14014aad0(local_878,param_3,param_2,0x3a), cVar3 != '\0'))
                          {
                            FUN_1400025a0(&local_8f0);
                            FUN_1402cdde0(local_838,&local_8f0);
                            uVar13 = local_8e8 - local_8f0 >> 1;
                            if ((uVar13 != 0) &&
                               (lVar18 = local_8f0, uVar22 = uVar16, uVar14 = uVar16,
                               param_4[1] - *param_4 >> 3 != 0)) {
                              do {
                                uVar17 = uVar16;
                                uVar21 = uVar16;
                                if (uVar13 != 0) {
                                  do {
                                    FUN_14000c230(*(longlong *)(uVar14 + *param_4) +
                                                  (longlong)*(short *)(uVar17 + lVar18) * 0x20 +
                                                  0x5e8,local_878);
                                    uVar20 = (int)uVar21 + 1;
                                    uVar13 = local_8e8 - local_8f0 >> 1;
                                    uVar17 = uVar17 + 2;
                                    lVar18 = local_8f0;
                                    uVar21 = (ulonglong)uVar20;
                                  } while ((ulonglong)(longlong)(int)uVar20 < uVar13);
                                }
                                uVar20 = (int)uVar22 + 1;
                                uVar22 = (ulonglong)uVar20;
                                uVar14 = uVar14 + 8;
                              } while ((ulonglong)(longlong)(int)uVar20 <
                                       (ulonglong)(param_4[1] - *param_4 >> 3));
                            }
                            FUN_140002620(&local_8f0);
                          }
                          FUN_14000c260(local_878);
                          puVar11 = local_838;
                        }
                      }
                      else {
                        FUN_14000c2b0(local_3b8);
                        FUN_14000c2b0(local_3d8);
                        cVar3 = FUN_14014aad0(local_3b8,param_3,param_2,0x3a);
                        if (((cVar3 != '\0') &&
                            (cVar3 = FUN_14014aad0(local_3d8,param_3,param_2,0x3a), cVar3 != '\0'))
                           && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                          do {
                            lVar18 = *param_4;
                            uVar5 = FUN_14014a5a0(local_3b8);
                            *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4ba) = uVar5;
                            lVar18 = *param_4;
                            uVar5 = FUN_14014a5a0(local_3d8);
                            *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4bc) = uVar5;
                            uVar20 = (int)uVar16 + 1;
                            uVar16 = (ulonglong)uVar20;
                            uVar13 = uVar13 + 8;
                          } while ((ulonglong)(longlong)(int)uVar20 <
                                   (ulonglong)(param_4[1] - *param_4 >> 3));
                        }
                        FUN_14000c260(local_3d8);
                        puVar11 = local_3b8;
                      }
                    }
                    else {
                      FUN_14000c2b0(local_3f8);
                      FUN_14000c2b0(local_418);
                      FUN_14000c2b0(local_438);
                      cVar3 = FUN_14014aad0(local_3f8,param_3,param_2,0x3a);
                      if (((cVar3 != '\0') &&
                          (cVar3 = FUN_14014aad0(local_418,param_3,param_2,0x3a), cVar3 != '\0')) &&
                         ((cVar3 = FUN_14014aad0(local_438,param_3,param_2,0x3a), cVar3 != '\0' &&
                          (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)))) {
                        do {
                          lVar18 = *param_4;
                          uVar5 = FUN_14014a5a0(local_3f8);
                          *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4c4) = uVar5;
                          lVar18 = *param_4;
                          uVar5 = FUN_14014a5a0(local_418);
                          *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4c6) = uVar5;
                          lVar18 = *param_4;
                          uVar5 = FUN_14014a5a0(local_438);
                          *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4c8) = uVar5;
                          uVar20 = (int)uVar16 + 1;
                          uVar16 = (ulonglong)uVar20;
                          uVar13 = uVar13 + 8;
                        } while ((ulonglong)(longlong)(int)uVar20 <
                                 (ulonglong)(param_4[1] - *param_4 >> 3));
                      }
                      FUN_14000c260(local_438);
                      FUN_14000c260(local_418);
                      puVar11 = local_3f8;
                    }
                  }
                  else {
                    FUN_14000c2b0(local_1b8);
                    FUN_14000c2b0(local_1d8);
                    FUN_14000c2b0(local_2b8);
                    cVar3 = FUN_14014aad0(local_1b8,param_3,param_2,0x3a);
                    if (((cVar3 != '\0') &&
                        (cVar3 = FUN_14014aad0(local_1d8,param_3,param_2,0x3a), cVar3 != '\0')) &&
                       ((cVar3 = FUN_14014aad0(local_2b8,param_3,param_2,0x3a), cVar3 != '\0' &&
                        (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)))) {
                      do {
                        lVar18 = *param_4;
                        uVar5 = FUN_14014a5a0(local_1b8);
                        *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4be) = uVar5;
                        lVar18 = *param_4;
                        uVar5 = FUN_14014a5a0(local_1d8);
                        *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4c0) = uVar5;
                        lVar18 = *param_4;
                        uVar5 = FUN_14014a5a0(local_2b8);
                        *(undefined2 *)(*(longlong *)(lVar18 + uVar13) + 0x4c2) = uVar5;
                        uVar20 = (int)uVar16 + 1;
                        uVar16 = (ulonglong)uVar20;
                        uVar13 = uVar13 + 8;
                      } while ((ulonglong)(longlong)(int)uVar20 <
                               (ulonglong)(param_4[1] - *param_4 >> 3));
                    }
                    FUN_14000c260(local_2b8);
                    FUN_14000c260(local_1d8);
                    puVar11 = local_1b8;
                  }
                }
                FUN_14000c260(puVar11);
                return 1;
              }
              cVar3 = FUN_14014aad0(param_1,param_3,param_2,0x3a);
              if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
                do {
                  pcVar12 = param_1;
                  pcVar8 = (char *)FUN_1400bd570(param_1,0);
                  if (*pcVar8 == '\'') {
                    if (1 < *(ulonglong *)(param_1 + 0x10)) {
                      puVar11 = (undefined1 *)FUN_1400bd570();
                      uVar4 = *puVar11;
                      goto LAB_1408b5f93;
                    }
                  }
                  else {
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar12 = *(char **)param_1;
                    }
                    iVar6 = atoi(pcVar12);
                    uVar4 = (undefined1)iVar6;
LAB_1408b5f93:
                    *(undefined1 *)(*(longlong *)(*param_4 + uVar13) + 0x4ca) = uVar4;
                  }
                  uVar20 = (int)uVar16 + 1;
                  uVar16 = (ulonglong)uVar20;
                  uVar13 = uVar13 + 8;
                  if ((ulonglong)(param_4[1] - *param_4 >> 3) <= (ulonglong)(longlong)(int)uVar20) {
                    return 1;
                  }
                } while( true );
              }
            }
            return 1;
          }
          local_720 = 0xf;
          local_728 = 0;
          local_738 = 0;
          cVar3 = FUN_14014aad0(&local_738,param_3,param_2,0x3a);
          if ((cVar3 != '\0') && (uVar13 = uVar16, param_4[1] - *param_4 >> 3 != 0)) {
            do {
              puVar11 = (undefined1 *)(*(longlong *)(*param_4 + uVar13) + 0x5c8);
              if (puVar11 != &local_738) {
                FUN_14000c8b0(puVar11,&local_738,0,0xffffffffffffffff);
              }
              uVar20 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar20;
              uVar13 = uVar13 + 8;
            } while ((ulonglong)(longlong)(int)uVar20 < (ulonglong)(param_4[1] - *param_4 >> 3));
          }
          if (0xf < local_720) {
            FUN_140002020(CONCAT71(uStack_737,local_738),local_720 + 1,1);
          }
        }
      }
    }
  }
  return 1;
}

