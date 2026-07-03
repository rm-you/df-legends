// FUN_1402b4780 @ 1402b4780
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> 140051b70 FUN_140051b70
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14007b6d0 FUN_14007b6d0
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 1402ec0a0 FUN_1402ec0a0
//   -> 1402ebd80 FUN_1402ebd80
//   -> 14000be20 FUN_14000be20
//   -> 1402ebf00 FUN_1402ebf00
//   -> EXTERNAL:00000115 atoi
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014a5a0 FUN_14014a5a0
//   -> 14000bc60 FUN_14000bc60
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 1400bd570 FUN_1400bd570
//   -> 14000c230 FUN_14000c230
//   -> 1401b7a00 FUN_1401b7a00
//   -> 140051cf0 FUN_140051cf0
//   -> 1401b2ee0 FUN_1401b2ee0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1402b4780(longlong param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  uint local_174;
  int local_170 [2];
  undefined8 local_168;
  undefined1 local_158;
  undefined7 uStack_157;
  undefined8 local_148;
  ulonglong local_140;
  char local_138;
  undefined7 uStack_137;
  undefined8 local_128;
  ulonglong local_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_168 = 0xfffffffffffffffe;
  local_58 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  iVar7 = FUN_14000c110(param_2,"ADD_MATERIAL");
  if (iVar7 == 0) {
    local_e0 = 0xf;
    local_e8 = 0;
    local_f8 = 0;
    local_140 = 0xf;
    local_148 = 0;
    local_158 = 0;
    cVar3 = FUN_14014aad0(&local_f8,param_4,param_3,0x3a);
    if ((cVar3 == '\0') || (cVar3 = FUN_14014aad0(&local_158,param_4,param_3,0x3a), cVar3 == '\0'))
    {
      uVar8 = FUN_14007b5f0(&local_118,param_1,&DAT_140e6ef38);
      FUN_14007b6d0(&local_138,uVar8,param_2);
      if (0xf < local_100) {
        FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
      }
      local_100 = 0xf;
      local_108 = 0;
      local_118 = 0;
      FUN_14000c9f0(&local_138," needs 2 tokens: ",0x11);
      FUN_14000cb40(&local_138,&local_f8,0,0xffffffffffffffff);
      FUN_14000c9f0(&local_138,&DAT_140e7aaf8,1);
      FUN_14000cb40(&local_138,&local_158,0,0xffffffffffffffff);
      FUN_14014a240(&local_138);
      if (0xf < local_120) {
        FUN_140002020(CONCAT71(uStack_137,local_138),local_120 + 1,1);
      }
    }
    else {
      FUN_140051b70(param_1 + 0x20,&local_f8);
      FUN_140051b70(param_1 + 0x38,&local_158);
    }
    if (0xf < local_140) {
      FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
    }
    if (0xf < local_e0) {
      FUN_140002020(CONCAT71(uStack_f7,local_f8),local_e0 + 1,1);
    }
  }
  else {
    iVar7 = FUN_14000c110(param_2,"ADD_TISSUE");
    if (iVar7 == 0) {
      local_140 = 0xf;
      local_148 = 0;
      local_158 = 0;
      local_120 = 0xf;
      local_128 = 0;
      local_138 = '\0';
      cVar3 = FUN_14014aad0(&local_158,param_4,param_3,0x3a);
      if ((cVar3 == '\0') || (cVar3 = FUN_14014aad0(&local_138,param_4,param_3,0x3a), cVar3 == '\0')
         ) {
        uVar8 = FUN_14007b5f0(&local_118,param_1,&DAT_140e6ef38);
        FUN_14007b6d0(&local_f8,uVar8,param_2);
        if (0xf < local_100) {
          FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
        }
        local_100 = 0xf;
        local_108 = 0;
        local_118 = 0;
        FUN_14000c9f0(&local_f8," needs 2 tokens: ",0x11);
        FUN_14000cb40(&local_f8,&local_158,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_f8,&DAT_140e7aaf8,1);
        FUN_14000cb40(&local_f8,&local_138,0,0xffffffffffffffff);
        FUN_14014a240(&local_f8);
        if (0xf < local_e0) {
          FUN_140002020(CONCAT71(uStack_f7,local_f8),local_e0 + 1,1);
        }
      }
      else {
        FUN_140051b70(param_1 + 0x50,&local_158);
        FUN_140051b70(param_1 + 0x68,&local_138);
      }
      if (0xf < local_120) {
        FUN_140002020(CONCAT71(uStack_137,local_138),local_120 + 1,1);
      }
      if (0xf < local_140) {
        FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
      }
    }
    else {
      iVar7 = FUN_14000c110(param_2,"BP_POSITION");
      if (iVar7 == 0) {
        local_c0 = 0xf;
        local_c8 = 0;
        local_d8 = 0;
        local_140 = 0xf;
        local_148 = 0;
        local_158 = 0;
        local_e0 = 0xf;
        local_e8 = 0;
        local_f8 = 0;
        cVar3 = FUN_14014aad0(&local_d8,param_4,param_3,0x3a);
        if (((cVar3 == '\0') ||
            (cVar3 = FUN_14014aad0(&local_158,param_4,param_3,0x3a), cVar3 == '\0')) ||
           (cVar3 = FUN_14014aad0(&local_f8,param_4,param_3,0x3a), cVar3 == '\0')) {
          uVar8 = FUN_14007b5f0(&local_118,param_1,&DAT_140e6ef38);
          FUN_14007b6d0(&local_138,uVar8,param_2);
          if (0xf < local_100) {
            FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
          }
          local_100 = 0xf;
          local_108 = 0;
          local_118 = 0;
          FUN_14000c9f0(&local_138," needs 3 tokens: ",0x11);
          FUN_14000cb40(&local_138,&local_d8,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_138,&DAT_140e7aaf8,1);
          FUN_14000cb40(&local_138,&local_158,0,0xffffffffffffffff);
          FUN_14000c9f0(&local_138,&DAT_140e7aaf8,1);
          FUN_14000cb40(&local_138,&local_f8,0,0xffffffffffffffff);
          FUN_14014a240(&local_138);
          if (0xf < local_120) {
            FUN_140002020(CONCAT71(uStack_137,local_138),local_120 + 1,1);
          }
        }
        else {
          sVar4 = FUN_1402ec0a0(&local_d8,1);
          local_170[0] = CONCAT22(local_170[0]._2_2_,sVar4);
          sVar5 = FUN_1402ebd80(&local_f8,1);
          local_174 = CONCAT22(local_174._2_2_,sVar5);
          if ((sVar4 != -1) && (sVar5 != -1)) {
            FUN_14000be20(param_1 + 0x1a0,local_170);
            FUN_140051b70(param_1 + 0x1b8,&local_158);
            FUN_14000be20(param_1 + 0x1d0,&local_174);
          }
        }
        if (0xf < local_e0) {
          FUN_140002020(CONCAT71(uStack_f7,local_f8),local_e0 + 1,1);
        }
        if (0xf < local_140) {
          FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
        }
        if (0xf < local_c0) {
          FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1,1);
        }
      }
      else {
        iVar7 = FUN_14000c110(param_2,"BP_RELATION");
        if (iVar7 == 0) {
          local_100 = 0xf;
          local_108 = 0;
          local_118 = 0;
          local_a0 = 0xf;
          local_a8 = 0;
          local_b8 = 0;
          local_60 = 0xf;
          local_68 = 0;
          local_78 = 0;
          local_e0 = 0xf;
          local_e8 = 0;
          local_f8 = 0;
          local_c0 = 0xf;
          local_c8 = 0;
          local_d8 = 0;
          local_120 = 0xf;
          local_128 = 0;
          local_138 = '\0';
          cVar3 = FUN_14014aad0(&local_118,param_4,param_3,0x3a);
          if ((((cVar3 == '\0') ||
               (cVar3 = FUN_14014aad0(&local_b8,param_4,param_3,0x3a), cVar3 == '\0')) ||
              (cVar3 = FUN_14014aad0(&local_78,param_4,param_3,0x3a), cVar3 == '\0')) ||
             (((cVar3 = FUN_14014aad0(&local_f8,param_4,param_3,0x3a), cVar3 == '\0' ||
               (cVar3 = FUN_14014aad0(&local_d8,param_4,param_3,0x3a), cVar3 == '\0')) ||
              (cVar3 = FUN_14014aad0(&local_138,param_4,param_3,0x3a), cVar3 == '\0')))) {
            uVar8 = FUN_14007b5f0(&local_98,param_1,&DAT_140e6ef38);
            FUN_14007b6d0(&local_158,uVar8,param_2);
            if (0xf < local_80) {
              FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
            }
            local_80 = 0xf;
            local_88 = 0;
            local_98 = 0;
            FUN_14000c9f0(&local_158," needs 6 tokens: ",0x11);
            FUN_14000cb40(&local_158,&local_118,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_158,&DAT_140e7aaf8,1);
            FUN_14000cb40(&local_158,&local_b8,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_158,&DAT_140e7aaf8,1);
            FUN_14000cb40(&local_158,&local_78,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_158,&DAT_140e7aaf8,1);
            FUN_14000cb40(&local_158,&local_f8,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_158,&DAT_140e7aaf8,1);
            FUN_14000cb40(&local_158,&local_d8,0,0xffffffffffffffff);
            FUN_14000c9f0(&local_158,&DAT_140e7aaf8,1);
            FUN_14000cb40(&local_158,&local_138,0,0xffffffffffffffff);
            FUN_14014a240(&local_158);
            if (0xf < local_140) {
              FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
            }
          }
          else {
            sVar4 = FUN_1402ec0a0(&local_118,1);
            local_170[0] = CONCAT22(local_170[0]._2_2_,sVar4);
            sVar5 = FUN_1402ec0a0(&local_f8,1);
            local_178 = CONCAT22(local_178._2_2_,sVar5);
            sVar6 = FUN_1402ebf00(&local_78,1);
            local_174 = CONCAT22(local_174._2_2_,sVar6);
            if (((sVar4 != -1) && (sVar5 != -1)) && (sVar6 != -1)) {
              FUN_14000be20(param_1 + 0x1e8,local_170);
              FUN_140051b70(param_1 + 0x200,&local_b8);
              FUN_14000be20(param_1 + 0x218,&local_174);
              FUN_14000be20(param_1 + 0x230,&local_178);
              FUN_140051b70(param_1 + 0x248,&local_d8);
              pcVar9 = &local_138;
              if (0xf < local_120) {
                pcVar9 = (char *)CONCAT71(uStack_137,local_138);
              }
              iVar7 = atoi(pcVar9);
              local_178 = CONCAT22(local_178._2_2_,(short)iVar7);
              FUN_14000be20(param_1 + 0x260,&local_178);
            }
          }
          if (0xf < local_120) {
            FUN_140002020(CONCAT71(uStack_137,local_138),local_120 + 1,1);
          }
          local_120 = 0xf;
          local_128 = 0;
          local_138 = '\0';
          if (0xf < local_c0) {
            FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1,1);
          }
          if (0xf < local_e0) {
            FUN_140002020(CONCAT71(uStack_f7,local_f8),local_e0 + 1,1);
          }
          if (0xf < local_60) {
            FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
          }
          if (0xf < local_a0) {
            FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
          }
          if (0xf < local_100) {
            FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
          }
        }
        else {
          iVar7 = FUN_14000c110(param_2,"BP_RELSIZE");
          if (iVar7 == 0) {
            local_60 = 0xf;
            local_68 = 0;
            local_78 = 0;
            local_a0 = 0xf;
            local_a8 = 0;
            local_b8 = 0;
            cVar3 = FUN_14014aad0(&local_78,param_4,param_3,0x3a);
            if ((cVar3 == '\0') ||
               (cVar3 = FUN_14014aad0(&local_b8,param_4,param_3,0x3a), cVar3 == '\0')) {
              uVar8 = FUN_14007b5f0(&local_98,param_1,&DAT_140e6ef38);
              FUN_14007b6d0(&local_118,uVar8,param_2);
              if (0xf < local_80) {
                FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
              }
              local_80 = 0xf;
              local_88 = 0;
              local_98 = 0;
              FUN_14000c9f0(&local_118," needs 2 tokens: ",0x11);
              FUN_14000cb40(&local_118,&local_78,0,0xffffffffffffffff);
              FUN_14000c9f0(&local_118,&DAT_140e7aaf8,1);
              FUN_14000cb40(&local_118,&local_b8,0,0xffffffffffffffff);
              FUN_14014a240(&local_118);
              if (0xf < local_100) {
                FUN_140002020(CONCAT71(uStack_117,local_118),local_100 + 1,1);
              }
            }
            else {
              sVar4 = FUN_1402ec0a0(&local_78,1);
              local_178 = CONCAT22(local_178._2_2_,sVar4);
              if (sVar4 != -1) {
                FUN_14000c2b0(&local_d8);
                cVar3 = FUN_14014aad0(&local_d8,param_4,param_3,0x3a);
                if (cVar3 != '\0') {
                  local_170[0] = FUN_14014a5a0(&local_d8);
                  if (local_170[0] < 1) {
                    local_170[0] = 1;
                  }
                  else if (100000000 < local_170[0]) {
                    local_170[0] = 100000000;
                  }
                  FUN_14000be20(param_1 + 0x158,&local_178);
                  FUN_140051b70(param_1 + 0x170,&local_b8);
                  FUN_14000bc60(param_1 + 0x188,local_170);
                }
                FUN_14000c260(&local_d8);
              }
            }
            FUN_14000c260(&local_b8);
            puVar10 = &local_78;
          }
          else {
            cVar3 = FUN_14000d730(param_2,"BP_LAYERS");
            if (((cVar3 == '\0') &&
                (cVar3 = FUN_14000d730(param_2,"BP_LAYERS_UNDER"), cVar3 == '\0')) &&
               (cVar3 = FUN_14000d730(param_2,"BP_LAYERS_OVER"), cVar3 == '\0')) {
              return 0;
            }
            FUN_14000c2b0(&local_b8);
            FUN_14000c2b0(&local_98);
            cVar3 = FUN_14014aad0(&local_b8,param_4,param_3,0x3a);
            if ((cVar3 == '\0') ||
               (cVar3 = FUN_14014aad0(&local_98,param_4,param_3,0x3a), cVar3 == '\0')) {
              uVar8 = FUN_14007b5f0(&local_78,param_1,&DAT_140e6ef38);
              FUN_14007b6d0(&local_118,uVar8,param_2);
              FUN_14000c260(&local_78);
              FUN_14000c1f0(&local_118," needs 2 tokens: ");
              FUN_140050380(&local_118,&local_b8);
              FUN_14000c1f0(&local_118,&DAT_140e7aaf8);
              FUN_140050380(&local_118,&local_98);
              FUN_14014a240(&local_118);
              puVar10 = &local_118;
LAB_1402b57a4:
              FUN_14000c260(puVar10);
            }
            else {
              sVar4 = FUN_1402ec0a0(&local_b8,1);
              local_170[0] = CONCAT22(local_170[0]._2_2_,sVar4);
              if (sVar4 != -1) {
                uVar11 = 1000;
                local_174 = 1000;
                do {
                  if (((ulonglong)(longlong)*param_3 < *(ulonglong *)(param_4 + 0x10)) &&
                     (pcVar9 = (char *)FUN_1400bd570(param_4), *pcVar9 == ']')) break;
                  FUN_14000c2b0(&local_158);
                  FUN_14000c2b0(&local_138);
                  cVar3 = FUN_14014aad0(&local_158,param_4,param_3,0x3a);
                  if (cVar3 == '\0') {
LAB_1402b571d:
                    FUN_14000c260(&local_138);
                    puVar10 = &local_158;
                    goto LAB_1402b57a4;
                  }
                  sVar4 = FUN_1402ebd80(&local_158,0);
                  if (sVar4 == -1) {
                    cVar3 = FUN_14014aad0(&local_138,param_4,param_3,0x3a);
                    if (cVar3 == '\0') goto LAB_1402b571d;
                    sVar4 = FUN_1402ebf00(&local_158,0);
                    local_178 = CONCAT22(local_178._2_2_,sVar4);
                    if (sVar4 == -1) {
                      cVar3 = FUN_1401b7a00(&local_158,&DAT_140ea9da4);
                      if ((((cVar3 != '\0') &&
                           (cVar3 = FUN_1401b7a00(&local_158,&DAT_140ea9dac), cVar3 != '\0')) &&
                          (cVar3 = FUN_1401b7a00(&local_158,&DAT_140ea9db4), cVar3 != '\0')) &&
                         (cVar3 = FUN_1401b7a00(&local_158,&DAT_140ea9dbc), cVar3 != '\0')) {
                        FUN_1401b7a00(&local_158,&DAT_140ea9d5c);
                      }
                      FUN_14000be20(param_1 + 0x80,local_170);
                      FUN_140051b70(param_1 + 0x98,&local_98);
                      FUN_140051b70(param_1 + 0xb0,&local_158);
                      local_178 = FUN_14014a5a0(&local_138);
                      FUN_14000bc60(param_1 + 200,&local_178);
                      local_178._0_2_ = 0xffff;
                      FUN_14000be20(param_1 + 0xe0,&local_178);
                      local_178._0_2_ = 0xffff;
                      FUN_14000be20(param_1 + 0xf8,&local_178);
                      FUN_140051cf0(param_1 + 0x110,&PTR_140e5c558);
                      local_178 = CONCAT22(local_178._2_2_,0xffff);
                      FUN_14000be20(param_1 + 0x128,&local_178);
                      cVar3 = FUN_14000d730(param_2,"BP_LAYERS_UNDER");
                      uVar2 = local_174 >> 8;
                      local_174 = local_174 & 0xffffff00;
                      if (cVar3 == '\0') {
                        local_174 = CONCAT31((int3)uVar2,1);
                      }
                      FUN_1401b2ee0(param_1 + 0x140,&local_174);
                      uVar11 = uVar11 - 1;
                      local_174 = uVar11;
                    }
                    else {
                      sVar4 = FUN_1402ec0a0(&local_138,0);
                      if ((sVar4 != -1) &&
                         (*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 1 != 0))
                      {
                        FUN_14000c2b0(&local_118);
                        cVar3 = FUN_14014aad0(&local_118,param_4,param_3,0x3a);
                        if (cVar3 == '\0') {
                          FUN_14000c260(&local_118);
                          goto LAB_1402b571d;
                        }
                        lVar12 = (longlong)
                                 ((int)(*(longlong *)(param_1 + 0x88) -
                                        *(longlong *)(param_1 + 0x80) >> 1) + -1);
                        lVar1 = lVar12 * 2;
                        *(short *)(lVar1 + *(longlong *)(param_1 + 0xf8)) = sVar4;
                        FUN_14000c230(*(undefined8 *)(*(longlong *)(param_1 + 0x110) + lVar12 * 8),
                                      &local_118);
                        *(undefined2 *)(lVar1 + *(longlong *)(param_1 + 0x128)) =
                             (undefined2)local_178;
                        FUN_14000c260(&local_118);
                        uVar11 = local_174;
                      }
                    }
                  }
                  else {
                    *(short *)(*(longlong *)(param_1 + 0xe0) +
                              (longlong)
                              ((int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80)
                                    >> 1) + -1) * 2) = sVar4;
                  }
                  FUN_14000c260(&local_138);
                  FUN_14000c260(&local_158);
                } while (0 < (int)uVar11);
              }
            }
            FUN_14000c260(&local_98);
            puVar10 = &local_b8;
          }
          FUN_14000c260(puVar10);
        }
      }
    }
  }
  return 1;
}

