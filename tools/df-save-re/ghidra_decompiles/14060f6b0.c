// FUN_14060f6b0 @ 14060f6b0
// callees:
//   -> 140c5cc40 FUN_140c5cc40
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140da8550 FUN_140da8550
//   -> 14000cb40 FUN_14000cb40
//   -> 140050540 FUN_140050540
//   -> 140da82d0 FUN_140da82d0
//   -> 140002020 FUN_140002020
//   -> 140da80f0 FUN_140da80f0
//   -> 14000d840 FUN_14000d840
//   -> 14000de70 FUN_14000de70
//   -> 140db6ec0 FUN_140db6ec0
//   -> 140d89d60 FUN_140d89d60
//   -> 1402cd6a0 FUN_1402cd6a0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050380 FUN_140050380
//   -> 14000c1f0 FUN_14000c1f0
//   -> 14000c260 FUN_14000c260
//   -> 140050370 FUN_140050370
//   -> 140d3cf30 FUN_140d3cf30
//   -> 1402cd750 FUN_1402cd750
//   -> 1402cd900 FUN_1402cd900
//   -> 1402cd8a0 FUN_1402cd8a0
//   -> 14000c2b0 FUN_14000c2b0
//   -> 140669610 FUN_140669610
//   -> 1400b9c40 FUN_1400b9c40
//   -> 1405c9d60 FUN_1405c9d60
//   -> 1405c9da0 FUN_1405c9da0
//   -> 1400b9b30 FUN_1400b9b30
//   -> 1400b9d20 FUN_1400b9d20
//   -> 1402b5bf0 FUN_1402b5bf0
//   -> 1402cd700 FUN_1402cd700
//   -> 1402cd840 FUN_1402cd840
//   -> 1402cd960 FUN_1402cd960
//   -> 1402cda20 FUN_1402cda20
//   -> 1402cd9c0 FUN_1402cd9c0
//   -> 1402cda80 FUN_1402cda80
//   -> 1402cdae0 FUN_1402cdae0
//   -> 14014a5c0 FUN_14014a5c0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14060f6b0(undefined8 *param_1,ushort param_2,short param_3,short param_4,uint param_5,
                  uint param_6,uint param_7,char param_8,longlong param_9,undefined2 param_10,
                  int param_11,char param_12,uint param_13,byte param_14)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  short sVar20;
  short sVar21;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  uint local_2a0;
  undefined4 local_298;
  char local_288;
  char local_287;
  int local_284;
  char local_280;
  char local_27f;
  char local_27e;
  char local_27d;
  char local_27c;
  char local_27b;
  char local_27a;
  short local_278;
  ushort local_276;
  short local_274;
  uint local_26c;
  undefined8 *local_260;
  undefined8 local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined8 local_238;
  undefined1 local_230 [16];
  longlong local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined7 uStack_20f;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a0;
  ulonglong local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined8 local_180;
  ulonglong local_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 local_120;
  ulonglong local_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_100;
  ulonglong local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  ulonglong local_50;
  
  local_258 = 0xfffffffffffffffe;
  local_50 = DAT_1410b5008 ^ (ulonglong)auStack_2c8;
  local_26c = param_5;
  local_284 = param_11;
  local_218 = 0xf;
  lVar8 = 0;
  local_220 = 0;
  local_230[0] = 0;
  uVar6 = 0xffffffff;
  local_276 = param_2;
  local_274 = param_4;
  local_260 = param_1;
  if (((param_12 == '\0') && (param_2 < 0x3c)) &&
     ((0x800000036000000U >> ((longlong)(short)param_2 & 0x3fU) & 1) != 0)) {
    iVar5 = FUN_140c5cc40(param_2,param_3,param_10);
    if (iVar5 == 1) {
      pcVar13 = "small";
    }
    else {
      if (iVar5 != 2) goto LAB_14060f7e8;
      pcVar13 = "large";
    }
    FUN_14000c780(local_230,pcVar13,5);
    lVar8 = local_220;
  }
LAB_14060f7e8:
  if (param_8 == '\0') {
    param_1[2] = 0;
    puVar7 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar7 = (undefined8 *)*param_1;
    }
    *(undefined1 *)puVar7 = 0;
    lVar8 = local_220;
  }
  if ((param_14 & 4) != 0) {
    FUN_14000c9f0(param_1,"grown ",6);
    lVar8 = local_220;
  }
  local_238 = 0xf;
  lVar17 = 0;
  local_240 = 0;
  local_250[0] = 0;
  switch(param_2) {
  case 0:
    if (param_4 != 0) {
      if (param_4 == 7) {
        if (param_5 == 1) {
          uVar18 = 8;
          pcVar13 = "charcoal";
        }
        else if (param_5 == 0) {
          uVar18 = 4;
          pcVar13 = "coke";
        }
        else {
          uVar18 = 0xc;
          pcVar13 = "refined coal";
        }
      }
      else {
        if (param_4 != -1) {
          local_158 = 0xf;
          local_160 = 0;
          local_170 = 0;
          local_298 = (uint)local_298._2_2_ << 0x10;
          local_2a0 = (uint)local_2a0._1_3_ << 8;
          local_2a8 = param_13;
          FUN_140da8550(&DAT_141c53470,&local_170,param_4,param_5);
          FUN_14000cb40(param_1,&local_170,0,0xffffffffffffffff);
          if (0xf < local_158) {
            FUN_140002020(CONCAT71(uStack_16f,local_170),local_158 + 1,1);
          }
          local_158 = 0xf;
          local_160 = 0;
          local_170 = 0;
          break;
        }
        uVar18 = 4;
        pcVar13 = "bars";
      }
      goto LAB_14060f980;
    }
    if (param_5 == 0xffffffff) {
      FUN_14000c9f0(param_1,"metal",5);
    }
    else {
      local_138 = 0xf;
      local_140 = 0;
      local_150 = 0;
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = (uint)local_2a0._1_3_ << 8;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,&local_150,0,param_5);
      FUN_14000cb40(param_1,&local_150,0,0xffffffffffffffff);
      if (0xf < local_138) {
        FUN_140002020(CONCAT71(uStack_14f,local_150),local_138 + 1,1);
      }
      local_138 = 0xf;
      local_140 = 0;
      local_150 = 0;
      if (((-1 < (int)param_5) &&
          ((ulonglong)(longlong)(int)param_5 < (ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3))) &&
         (cVar2 = FUN_14000d840(*(longlong *)(DAT_141d6dbe0 + (longlong)(int)param_5 * 8) + 0x38,
                                0x19), cVar2 != '\0')) {
        uVar18 = 7;
        pcVar13 = " wafers";
        goto LAB_14060f980;
      }
    }
    FUN_14000c9f0(param_1," bars",5);
    break;
  case 1:
    local_2a8 = 0xffffffff;
    if ((local_284 != -1) &&
       (plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368,local_284), local_2a8 = 0xffffffff,
       plVar10 != (longlong *)0x0)) {
      local_2a8 = (**(code **)(*plVar10 + 0x750))(plVar10);
    }
    local_f8 = 0xf;
    local_100 = 0;
    local_110 = 0;
    local_298 = param_13;
    local_2a0 = 0xffffffff;
    cVar2 = FUN_140db6ec0(param_13,&local_110,param_4,param_5);
    if (cVar2 != '\0') {
      FUN_14000cb40(param_1,&local_110,0,0xffffffffffffffff);
      goto LAB_14060fff4;
    }
    if (param_4 == -1) {
      uVar18 = 8;
      pcVar13 = "cut gems";
LAB_14060ffe9:
      FUN_14000c9f0(param_1,pcVar13,uVar18);
    }
    else {
      if (param_4 == 3) {
        uVar18 = 0x14;
        pcVar13 = "cut green glass gems";
        goto LAB_14060ffe9;
      }
      if (param_4 == 4) {
        uVar18 = 0x14;
        pcVar13 = "cut clear glass gems";
        goto LAB_14060ffe9;
      }
      if (param_4 == 5) {
        uVar18 = 0x16;
        pcVar13 = "cut crystal glass gems";
        goto LAB_14060ffe9;
      }
      if (param_5 == 0xffffffff) {
        if (param_4 == 0) {
          uVar18 = 4;
          pcVar13 = "gems";
          goto LAB_14060ffe9;
        }
      }
      else {
        local_118 = 0xf;
        local_120 = 0;
        local_130 = 0;
        local_2a8 = CONCAT31(local_2a8._1_3_,1);
        FUN_140da82d0(&DAT_141c53470,&local_130,param_4,param_5);
        FUN_14000cb40(param_1,&local_130,0,0xffffffffffffffff);
        if (0xf < local_118) {
          FUN_140002020(CONCAT71(uStack_12f,local_130),local_118 + 1,1);
        }
        local_118 = 0xf;
        local_120 = 0;
        local_130 = 0;
      }
    }
LAB_14060fff4:
    if (0xf < local_f8) {
      FUN_140002020(CONCAT71(uStack_10f,local_110),local_f8 + 1,1);
    }
    local_f8 = 0xf;
    local_100 = 0;
    local_110 = 0;
    break;
  case 2:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (lVar8 != 0) {
      puVar14 = (undefined1 *)(lVar8 + 0x328);
      if (*(longlong *)(lVar8 + 0x338) != 0) goto LAB_140611c2e;
      uVar18 = 6;
      pcVar13 = "blocks";
      goto LAB_14060f980;
    }
    FUN_14000c9f0(param_1,"blocks",6);
    break;
  case 3:
    if (param_4 == -1) {
LAB_14060f9de:
      uVar18 = 10;
      pcVar13 = "rough gems";
    }
    else if (param_4 == 3) {
      uVar18 = 0xf;
      pcVar13 = "raw green glass";
    }
    else if (param_4 == 4) {
      uVar18 = 0xf;
      pcVar13 = "raw clear glass";
    }
    else {
      if (param_4 != 5) {
        if (param_5 == 0xffffffff) {
          if (param_4 == 0) goto LAB_14060f9de;
        }
        else {
          local_1d8 = 0xf;
          local_1e0 = 0;
          local_1f0 = 0;
          FUN_14000c9f0(param_1,"rough ",6);
          local_2a8 = CONCAT31(local_2a8._1_3_,1);
          FUN_140da82d0(&DAT_141c53470,&local_1f0,param_4,param_5);
          FUN_14000cb40(param_1,&local_1f0,0,0xffffffffffffffff);
          if (0xf < local_1d8) {
            FUN_140002020(CONCAT71(uStack_1ef,local_1f0),local_1d8 + 1,1);
          }
          local_1d8 = 0xf;
          local_1e0 = 0;
          local_1f0 = 0;
        }
        break;
      }
      uVar18 = 0x11;
      pcVar13 = "raw crystal glass";
    }
    goto LAB_14060f980;
  case 4:
    if (param_4 != 0) {
      if ((param_4 != -1) || (param_13 != 0)) goto LAB_14060fbd7;
      uVar18 = 6;
      pcVar13 = "stones";
      goto LAB_14060f980;
    }
    if (param_5 == 0xffffffff) {
LAB_14060fbd7:
      local_178 = 0xf;
      local_180 = 0;
      local_190 = 0;
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = (uint)local_2a0._1_3_ << 8;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,&local_190,param_4,param_5);
      FUN_14000cb40(param_1,&local_190,0,0xffffffffffffffff);
      if (0xf < local_178) {
        FUN_140002020(CONCAT71(uStack_18f,local_190),local_178 + 1,1);
      }
      local_178 = 0xf;
      local_180 = 0;
      local_190 = 0;
    }
    else {
      local_198 = 0xf;
      local_1a0 = 0;
      local_1b0 = 0;
      FUN_140da80f0(&DAT_141c53470,&local_1b0,0,param_5);
      FUN_14000cb40(param_1,&local_1b0,0,0xffffffffffffffff);
      if (0xf < local_198) {
        FUN_140002020(CONCAT71(uStack_1af,local_1b0),local_198 + 1,1);
      }
      local_198 = 0xf;
      local_1a0 = 0;
      local_1b0 = 0;
    }
    break;
  case 5:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = (uint)local_2a0._1_3_ << 8;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      if ((param_7 & 0x20) != 0) break;
      FUN_140050540(param_1,1,0x20);
    }
    if ((param_7 & 0x20) == 0) {
      FUN_14000c9f0(param_1,&DAT_140ee6604,4);
    }
    break;
  case 6:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) == 0)) {
      uVar19 = 4;
      pcVar13 = "door";
    }
    else {
      uVar19 = 6;
      pcVar13 = "portal";
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 7:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"floodgate",9);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 8:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "bed";
    goto LAB_1406140a6;
  case 9:
    if ((param_4 == -1) && (param_13 == 0)) {
LAB_14061191c:
      uVar19 = 6;
      pcVar13 = "throne";
    }
    else {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
      if (199 < (ushort)(param_4 - 0x1a3U)) goto LAB_14061191c;
      uVar19 = 5;
      pcVar13 = "chair";
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 10:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if ((((((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 4)) ||
          ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 1) == 0)) &&
         (((((param_13 & 4) == 0 &&
            (((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
              (*(int *)(lVar8 + 0x298) < 4)) ||
             ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x20) == 0)))) &&
           ((param_13 & 0x10) == 0)) &&
          (((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
            (*(int *)(lVar8 + 0x298) < 4)) ||
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) == 0)))))) &&
        (((param_13 & 8) == 0 &&
         (((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
           (*(int *)(lVar8 + 0x298) < 8)) ||
          ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x40) == 0)))))) &&
       ((param_13 >> 0xc & 1) == 0)) {
      uVar19 = 5;
      pcVar13 = "chain";
    }
    else {
      uVar19 = 4;
      pcVar13 = "rope";
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0xb:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if ((((((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 4)) ||
          ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 1) == 0)) &&
         ((((param_13 & 4) == 0 &&
           ((((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
              (*(int *)(lVar8 + 0x298) < 4)) ||
             ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x20) == 0)) &&
            ((param_13 & 0x10) == 0)))) &&
          (((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
            (*(int *)(lVar8 + 0x298) < 4)) ||
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) == 0)))))) && ((param_13 & 8) == 0)
        ) && ((((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 == 0 ||
                (*(int *)(lVar8 + 0x298) < 8)) ||
               ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x40) == 0)) &&
              ((param_13 >> 0xc & 1) == 0)))) {
      lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
      if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 7)) ||
         ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) == 0)) {
        uVar19 = 5;
        pcVar13 = "flask";
      }
      else {
        uVar19 = 4;
        pcVar13 = "vial";
      }
    }
    else {
      uVar19 = 9;
      pcVar13 = "waterskin";
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0xc:
    if ((param_4 == -1) && (param_13 == 0)) {
LAB_14061156b:
      uVar19 = 6;
      pcVar13 = "goblet";
    }
    else {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
      if ((ushort)(param_4 - 0x1a3U) < 200) {
        uVar19 = 3;
        pcVar13 = "cup";
      }
      else {
        if ((param_4 != 0) ||
           (((lVar8 = FUN_140d89d60(&DAT_141c53470,0,param_5), lVar8 != 0 &&
             (5 < *(int *)(lVar8 + 0x298))) &&
            ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 5) & 0x80) != 0)))) goto LAB_14061156b;
        uVar19 = 3;
        pcVar13 = "mug";
      }
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0xd:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_1402cd6a0(&DAT_141d6ddb8,param_3);
    if (lVar8 == 0) {
      FUN_14000c9f0(param_1,"musical instrument",0x12);
      if (param_6 != 1) {
        FUN_140050540(param_1,1,0x73);
      }
    }
    else {
      if (param_6 == 1) {
        FUN_14000cb40(param_1,lVar8 + 0x60,0,0xffffffffffffffff);
        goto LAB_1406140eb;
      }
      puVar14 = (undefined1 *)(lVar8 + 0x80);
LAB_140611c2e:
      FUN_14000cb40(param_1,puVar14,0,0xffffffffffffffff);
    }
    break;
  case 0xe:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    iVar5 = (int)(DAT_141d6de08 - DAT_141d6de00 >> 3) + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        if (*(short *)(*(longlong *)(DAT_141d6de00 + lVar8 * 8) + 0x28) == param_3) {
          lVar8 = *(longlong *)(DAT_141d6de00 + (longlong)iVar5 * 8);
          if (lVar8 != 0) {
            if (param_6 != 1) {
              puVar14 = (undefined1 *)(lVar8 + 0x80);
              goto LAB_140611c2e;
            }
            FUN_14000cb40(param_1,lVar8 + 0x60,0,0xffffffffffffffff);
            goto LAB_1406140eb;
          }
          break;
        }
        iVar5 = iVar5 + -1;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    FUN_14000c9f0(param_1,&DAT_140ee690c,3);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0xf:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"window",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x10:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) == 0)) {
      uVar19 = 4;
      pcVar13 = "cage";
    }
    else {
      uVar19 = 9;
      pcVar13 = "terrarium";
    }
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x11:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"barrel",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x12:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"bucket",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x13:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"animal trap",0xb);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x14:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"table",5);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x15:
    uVar18 = 1;
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
      if ((ushort)(param_4 - 0x1a3U) < 200) {
        FUN_14000c9f0(param_1,"casket",6);
        if (param_6 != 1) {
          FUN_140050540(param_1,1,0x73);
        }
        break;
      }
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar8 != 0) && (5 < *(int *)(lVar8 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 5) & 0x80) != 0)) {
      FUN_14000c9f0(param_1,"sarcophag",9);
      if (param_6 == 1) {
        FUN_14000c9f0(param_1,&DAT_140e724a0,2);
        goto LAB_1406140eb;
      }
      pcVar13 = "i";
      goto LAB_14060f980;
    }
    FUN_14000c9f0(param_1,"coffin",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x16:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "statue";
    goto LAB_1406140a6;
  case 0x17:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    pcVar13 = "corpse";
    goto LAB_1406140a6;
  case 0x18:
    lVar8 = FUN_1402cd700(&DAT_141d6ddb8,param_3);
    uVar4 = (undefined2)lVar17;
    if (lVar8 == 0) {
      if ((param_4 != -1) || (param_13 != 0)) {
        local_298 = CONCAT22(local_298._2_2_,uVar4);
        local_2a0 = CONCAT31(local_2a0._1_3_,1);
        local_2a8 = param_13;
        FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        FUN_140050380(param_1,local_250);
        FUN_140050370(param_1,0x20);
      }
      pcVar13 = "weapon";
      goto LAB_1406140a6;
    }
LAB_1406126cc:
    if (*(longlong *)(lVar8 + 0xb0) != 0) {
      FUN_140050380(param_1);
      FUN_14000c1f0(param_1,&DAT_140e59864);
      uVar4 = 0;
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
LAB_14061274a:
    if (param_6 == 1) {
      lVar8 = lVar8 + 0x60;
LAB_140612760:
      FUN_140050380(param_1,lVar8);
      goto LAB_1406140eb;
    }
    puVar14 = (undefined1 *)(lVar8 + 0x80);
LAB_140612500:
    FUN_140050380(param_1,puVar14);
    break;
  case 0x19:
    if (lVar8 != 0) {
      FUN_140050380(param_1,local_230);
      FUN_140050370(param_1,0x20);
    }
    uVar4 = 0;
    lVar8 = FUN_1402cd840(&DAT_141d6ddb8,param_3);
    if (lVar8 != 0) {
      if ((1 < (int)param_6) && (*(longlong *)(lVar8 + 0xb0) != 0)) {
        FUN_140050380(param_1);
        FUN_140050370(param_1,0x20);
      }
      if (*(longlong *)(lVar8 + 0xf0) != 0) {
        FUN_140050380(param_1);
        FUN_14000c1f0(param_1);
      }
      if ((param_4 == -1) && (param_13 == 0)) {
        puVar14 = (undefined1 *)(lVar8 + 0xc0);
        if (*(longlong *)(lVar8 + 0xd0) != 0) goto LAB_1406139de;
      }
      else {
        local_298 = local_298 & 0xffff0000;
        local_2a0 = CONCAT31(local_2a0._1_3_,1);
        local_2a8 = param_13;
        FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        puVar14 = local_250;
LAB_1406139de:
        FUN_140050380(param_1,puVar14);
        FUN_140050370(param_1,0x20);
      }
      cVar2 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_4,param_5);
      if (cVar2 != '\0') {
        lVar17 = lVar8 + 0x110;
        goto LAB_140613a17;
      }
      goto LAB_14061274a;
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    if (1 < (int)param_6) {
      FUN_14000c1f0(param_1,"suits of ");
    }
    FUN_14000c1f0(param_1,"armor");
    break;
  case 0x1a:
    if (lVar8 != 0) {
      FUN_140050380(param_1,local_230);
      FUN_140050370(param_1,0x20);
    }
    lVar8 = FUN_1402cd9c0(&DAT_141d6ddb8);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xb0) != 0)) {
      FUN_140050380(param_1);
      FUN_14000c1f0(param_1);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    if (lVar8 != 0) {
LAB_140613d99:
      cVar2 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_4,param_5);
      if (cVar2 == '\0') goto LAB_14061274a;
      lVar17 = lVar8 + 0xe0;
LAB_140613a17:
      cVar2 = FUN_14000d840(lVar17,7);
      if (cVar2 != '\0') {
        FUN_14000c1f0(param_1,"chain ");
      }
      goto LAB_14061274a;
    }
    FUN_14000c1f0(param_1,"footwear");
    break;
  case 0x1b:
    lVar8 = FUN_1402cda20(&DAT_141d6ddb8,param_3);
    uVar4 = (undefined2)lVar17;
    if (lVar8 != 0) goto LAB_1406126cc;
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"shield");
    if (param_6 != 1) {
      FUN_140050370(param_1,0x73);
    }
    pcVar13 = "/buckler";
    goto LAB_1406140a6;
  case 0x1c:
    if (lVar8 != 0) {
      FUN_140050380(param_1,local_230);
      FUN_140050370(param_1,0x20);
    }
    lVar8 = FUN_1402cda80(&DAT_141d6ddb8);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xb0) != 0)) {
      FUN_140050380(param_1);
      FUN_14000c1f0(param_1);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    if (lVar8 != 0) goto LAB_140613d99;
    FUN_14000c1f0(param_1,"headwear");
    break;
  case 0x1d:
    if (lVar8 != 0) {
      FUN_140050380(param_1,local_230);
      FUN_140050370(param_1,0x20);
    }
    lVar9 = FUN_1402cd960(&DAT_141d6ddb8);
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xb0) != 0)) {
      FUN_140050380(param_1);
      FUN_14000c1f0(param_1);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    if (((local_284 != -1) &&
        (plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368,local_284), plVar10 != (longlong *)0x0))
       && (lVar8 = (**(code **)(*plVar10 + 0x208))(plVar10), lVar8 != 0)) {
      cVar2 = FUN_14000d840(lVar8,0);
      if (cVar2 != '\0') {
        FUN_14000c1f0(param_1,"right ");
      }
      cVar2 = FUN_14000d840(lVar8,1);
      if (cVar2 != '\0') {
        FUN_14000c1f0(param_1,"left ");
      }
    }
    if (lVar9 != 0) {
      cVar2 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_4,param_5);
      if (cVar2 != '\0') {
        lVar8 = lVar9 + 0xe0;
LAB_140613bfa:
        cVar2 = FUN_14000d840(lVar8,7);
        if (cVar2 != '\0') {
          FUN_14000c1f0(param_1,"chain ");
        }
      }
LAB_140613c17:
      if (param_6 == 1) {
        FUN_140050380(param_1,lVar9 + 0x60);
        goto LAB_1406140eb;
      }
      puVar14 = (undefined1 *)(lVar9 + 0x80);
      goto LAB_140612500;
    }
    FUN_14000c1f0(param_1,"handwear");
    break;
  case 0x1e:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 6) & 2) == 0)) {
      if ((param_4 == 0) &&
         (((lVar8 = FUN_140d89d60(&DAT_141c53470,0,param_5), lVar8 == 0 ||
           (*(int *)(lVar8 + 0x298) < 6)) ||
          ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 5) & 0x80) == 0)))) {
        uVar19 = 6;
        pcVar13 = "coffer";
LAB_14061083a:
        FUN_14000c9f0(param_1,pcVar13,uVar19);
        if (param_6 == 1) break;
      }
      else {
        lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
        if ((((((lVar8 != 0) && (3 < *(int *)(lVar8 + 0x298))) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 1) != 0)) ||
             (((param_13 & 4) != 0 ||
              ((((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 != 0 &&
                 (3 < *(int *)(lVar8 + 0x298))) &&
                ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x20) != 0)) ||
               ((param_13 & 0x10) != 0)))))) ||
            (((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 != 0 &&
              (3 < *(int *)(lVar8 + 0x298))) &&
             ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) != 0)))) ||
           (((param_13 & 8) != 0 ||
            ((((lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 != 0 &&
               (7 < *(int *)(lVar8 + 0x298))) &&
              ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x40) != 0)) ||
             ((param_13 >> 0xc & 1) != 0)))))) {
          uVar19 = 3;
          pcVar13 = "bag";
          goto LAB_14061083a;
        }
        if (param_4 != -1) {
          uVar19 = 5;
          pcVar13 = "chest";
          goto LAB_14061083a;
        }
        FUN_14000c9f0(param_1,"boxes and bag",0xd);
        if (param_6 == 1) goto LAB_1406140eb;
      }
      FUN_140050540(param_1,1,0x73);
    }
    else {
      FUN_14000c9f0(param_1,&DAT_140ee62e8,3);
      if (param_6 != 1) {
        uVar19 = 1;
        pcVar13 = "e";
        goto LAB_14061083a;
      }
    }
    break;
  case 0x1f:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,&DAT_140ee62e4,3);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x20:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"armor stand",0xb);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x21:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"weapon rack",0xb);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x22:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"cabinet",7);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x23:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"figurine",8);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x24:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "amulet";
    goto LAB_1406140a6;
  case 0x25:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "scepter";
    goto LAB_1406140a6;
  case 0x26:
    lVar8 = FUN_1402cd8a0(&DAT_141d6ddb8,param_3);
    uVar4 = (undefined2)lVar17;
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0xb0) != 0)) {
      FUN_140050380(param_1);
      FUN_140050370(param_1,0x20);
      uVar4 = 0;
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    if (lVar8 != 0) goto LAB_14061274a;
    FUN_14000c1f0(param_1,"ammunition");
    break;
  case 0x27:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "crown";
    goto LAB_1406140a6;
  case 0x28:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "ring";
    goto LAB_1406140a6;
  case 0x29:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "earring";
    goto LAB_1406140a6;
  case 0x2a:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "bracelet";
    goto LAB_1406140a6;
  case 0x2b:
    pcVar13 = "perfect ";
    if (param_9 == 0) {
      pcVar13 = "large ";
    }
    FUN_14000c1f0(param_1,pcVar13);
    if ((local_284 != -1) &&
       (plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368,local_284), plVar10 != (longlong *)0x0))
    {
      uVar6 = (**(code **)(*plVar10 + 0x750))(plVar10);
    }
    FUN_14000c2b0(local_70);
    local_298 = param_13;
    local_2a0 = param_6;
    local_2a8 = uVar6;
    cVar2 = FUN_140db6ec0();
    if (cVar2 == '\0') {
      if (param_4 == 3) {
        FUN_14000c1f0(param_1,"green glass ");
      }
      else if (param_4 == 4) {
        FUN_14000c1f0(param_1,"clear glass ");
      }
      else {
        if (param_4 != 5) {
          if (param_4 == -1) {
            if (param_13 == 0) goto LAB_140612c6a;
LAB_140612ce8:
            FUN_14000c2b0(local_90);
            local_298 = local_298 & 0xffff0000;
            local_2a0 = CONCAT31(local_2a0._1_3_,1);
            local_2a8 = param_13;
            FUN_140da8550(&DAT_141c53470,local_90,param_4,param_5);
            FUN_140050380(param_1,local_90);
            FUN_14000c1f0(param_1,&DAT_140ee6b84);
            if (param_6 != 1) {
              FUN_140050370(param_1,0x73);
            }
            puVar14 = local_90;
          }
          else {
            if (param_4 != 0) goto LAB_140612ce8;
            FUN_14000c2b0(local_d0);
            if (param_6 == 1) {
              local_2a8 = (uint)local_2a8._1_3_ << 8;
            }
            else {
              local_2a8 = CONCAT31(local_2a8._1_3_,1);
            }
            FUN_140da82d0(&DAT_141c53470,local_d0,0,param_5);
            FUN_140050380(param_1,local_d0);
            puVar14 = local_d0;
          }
          FUN_14000c260(puVar14);
          goto LAB_140612d5b;
        }
        FUN_14000c1f0(param_1,"crystal glass ");
      }
LAB_140612c6a:
      FUN_14000c1f0(param_1,&DAT_140ee6b80);
      if (param_6 != 1) {
        FUN_140050370(param_1,0x73);
      }
    }
    else {
      FUN_140050380(param_1,local_70);
    }
LAB_140612d5b:
    FUN_14000c260(local_70);
    break;
  case 0x2c:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "anvil";
    goto LAB_1406140a6;
  case 0x2d:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    if ((param_13 & 0x200) == 0) {
      if ((param_13 & 0x20) == 0) {
        if ((param_13 & 0x40) == 0) {
          if ((param_13 & 1) == 0) {
            if ((param_13 & 8) == 0) {
              if ((param_13 & 0x10) == 0) {
                if ((char)param_13 < '\0') {
                  pcVar13 = "wooden body part";
                }
                else if ((param_13 >> 8 & 1) == 0) {
                  if ((param_13 >> 10 & 1) == 0) {
                    if ((param_13 >> 0xb & 1) == 0) {
                      if ((param_13 >> 0xc & 1) == 0) {
                        pcVar13 = "strand body part";
                        if ((param_13 >> 0xd & 1) == 0) {
                          pcVar13 = "body part";
                        }
                      }
                      else {
                        pcVar13 = "yarn body part";
                      }
                    }
                    else {
                      pcVar13 = "pearl";
                    }
                  }
                  else {
                    pcVar13 = "horn";
                  }
                }
                else {
                  pcVar13 = "soap body part";
                }
              }
              else {
                pcVar13 = "leather body part";
              }
            }
            else {
              pcVar13 = "silk body part";
            }
          }
          else {
            pcVar13 = "plant part";
          }
        }
        else {
          pcVar13 = "shell";
        }
      }
      else {
        pcVar13 = "bone";
      }
    }
    else if (param_6 == 1) {
      pcVar13 = "tooth";
    }
    else {
      pcVar13 = "teeth";
    }
    FUN_14000c1f0(param_1,pcVar13);
    if ((param_13 & 0x200) != 0) break;
    goto LAB_1406140ab;
  case 0x2e:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"Rotten ");
    }
    if (param_4 == -1) {
      FUN_14000c1f0(param_1,"remains");
    }
    else {
      FUN_140669610(param_4,local_250,0,0xffffffff);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
      FUN_14000c2b0(local_b0);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      if (param_6 == 1) {
        local_2a8 = 0xf;
      }
      else {
        local_2a8 = 0x10;
      }
      FUN_1400b9c40(&DAT_141d6dd30,local_b0,param_4,param_5 & 0xffff);
      FUN_140050380(param_1,local_b0);
      FUN_14000c260(local_b0);
    }
    break;
  case 0x2f:
    if ((param_7 >> 8 & 1) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    if ((param_7 & 4) != 0) {
      FUN_14000c1f0(param_1,"preserved ");
    }
    if (((param_4 == -1) || (param_5 == 0xffffffff)) ||
       (lVar17 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar17 == 0)) {
      FUN_14000c1f0(param_1,&DAT_140ee700c);
    }
    else {
      if (*(longlong *)(lVar17 + 0x2f8) != 0) {
        FUN_140050380(param_1);
        FUN_140050370(param_1,0x20);
      }
      uVar6 = FUN_1402b5bf0();
      if (uVar6 != 0xffffffff) {
        FUN_140669610(uVar6 & 0xffff,local_250,0,0xffffffff);
        FUN_140050380(param_1,local_250);
        FUN_140050370(param_1,0x20);
      }
      lVar8 = lVar17 + 0x2a8;
      if (*(longlong *)(lVar17 + 0x2b8) != 0) {
        if (param_6 != 1) {
          puVar14 = (undefined1 *)(lVar17 + 0x2c8);
          goto LAB_140612500;
        }
        goto LAB_140612760;
      }
      FUN_140050380(param_1,lVar17 + 0xb8);
      if ((int)param_6 < 2) {
        FUN_14000c1f0(param_1," chop");
      }
      else {
        FUN_14000c1f0(param_1," chops");
      }
    }
    break;
  case 0x30:
    if ((param_7 & 0x100) != 0) {
      pcVar13 = "rotten ";
      goto LAB_1406135af;
    }
    goto LAB_1406135b7;
  case 0x31:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    pcVar13 = "raw ";
LAB_1406135af:
    FUN_14000c1f0(param_1,pcVar13);
LAB_1406135b7:
    if (param_4 == -1) {
      FUN_14000c1f0(param_1,&DAT_140eb72d4);
      break;
    }
    FUN_140669610(param_4,local_250,0,param_5 & 0xffff);
    FUN_140050380(param_1,local_250);
    cVar2 = FUN_1400b9d20(&DAT_141d6dd30,param_4,param_5 & 0xffff);
    if (cVar2 == '\0') {
      FUN_14000c1f0(param_1,&DAT_140e5a200);
      uVar19 = 0xc;
    }
    else {
      if (cVar2 != '\x01') break;
      FUN_14000c1f0(param_1,&DAT_140e5a200);
      uVar19 = 0xb;
    }
    goto LAB_1406140b3;
  case 0x32:
    if (param_4 != -1) {
      FUN_14000c1f0(param_1,"live ");
      FUN_140669610(param_4,local_250,param_6 != 1,0xffffffff);
LAB_1406124f8:
      puVar14 = local_250;
      goto LAB_140612500;
    }
    pcVar13 = "small live animal";
    goto LAB_1406140a6;
  case 0x33:
    if (param_4 != -1) {
      FUN_14000c1f0(param_1,"tame ");
      FUN_140669610(param_4,local_250,param_6 != 1,0xffffffff);
      goto LAB_1406124f8;
    }
    pcVar13 = "small tame animal";
    goto LAB_1406140a6;
  case 0x34:
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      FUN_1405c9d60(&DAT_141d6dc10,local_250,param_5);
      goto LAB_1406124f8;
    }
    if ((param_4 == -1) && (param_13 == 0)) {
      FUN_14000c1f0(param_1,"seeds");
      break;
    }
LAB_140613457:
    local_298 = local_298 & 0xffff0000;
    local_2a0 = CONCAT31(local_2a0._1_3_,1);
    local_2a8 = param_13;
    FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
    FUN_140050380(param_1,local_250);
    uVar19 = 0x20;
    goto LAB_1406140b3;
  case 0x35:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"withered ");
    }
    if ((param_4 != -1) && (param_5 != 0xffffffff)) {
      local_2a8 = CONCAT31(local_2a8._1_3_,param_6 != 1);
      FUN_1400b9b30(&DAT_141d6dc10,param_5,local_250,0);
      goto LAB_1406124f8;
    }
    FUN_14000c1f0(param_1,"plants");
    break;
  case 0x36:
    if ((param_5 != 0xffffffff) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
LAB_140611c04:
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      puVar14 = local_250;
      goto LAB_140611c2e;
    }
    uVar19 = 0xb;
    pcVar13 = "tanned hide";
    goto LAB_140611c45;
  case 0x37:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"withered ");
    }
    if ((ushort)(param_4 - 0x1a3U) < 200) {
      local_2a8 = CONCAT31(local_2a8._1_3_,param_6 != 1);
      FUN_1405c9da0(&DAT_141d6dc10,local_250,param_5,(int)param_3);
      goto LAB_1406124f8;
    }
    if ((param_4 != -1) || (param_13 != 0)) goto LAB_140613457;
    if (param_6 != 1) {
      FUN_14000c1f0(param_1,"leaves");
      break;
    }
    puVar16 = &DAT_140ee6aac;
    goto LAB_1406140e5;
  case 0x38:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
    if (((((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 4)) ||
         ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 3) & 0x40) == 0)) && ((param_13 & 8) == 0)) ||
       ((param_7 & 0x200) == 0)) {
      lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
      if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 6)) ||
         ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 5) & 0x80) == 0)) {
        lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5);
        if (((lVar8 == 0) || (*(int *)(lVar8 + 0x298) < 8)) ||
           ((*(byte *)(*(longlong *)(lVar8 + 0x290) + 7) & 0x40) == 0)) {
          uVar18 = 6;
          pcVar13 = "thread";
        }
        else {
          uVar18 = 4;
          pcVar13 = "yarn";
        }
      }
      else {
        uVar18 = 7;
        pcVar13 = "strands";
      }
      goto LAB_14060f980;
    }
    FUN_14000c9f0(param_1,&DAT_140ee6928,3);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x39:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    uVar18 = 5;
    pcVar13 = "cloth";
    goto LAB_14060f980;
  case 0x3a:
    pcVar13 = "totem";
    goto LAB_140611c3f;
  case 0x3b:
    lVar9 = FUN_1402cdae0(&DAT_141d6ddb8,param_3);
    uVar4 = (undefined2)lVar17;
    if (lVar9 != 0) {
      if ((1 < (int)param_6) && (*(longlong *)(lVar9 + 0xb0) != 0)) {
        FUN_140050380(param_1);
        FUN_140050370(param_1,0x20);
        lVar8 = local_220;
      }
      if (lVar8 != 0) {
        FUN_140050380(param_1,local_230);
        FUN_140050370(param_1,0x20);
      }
      if (*(longlong *)(lVar9 + 0xf0) != 0) {
        FUN_140050380(param_1);
        FUN_14000c1f0(param_1);
      }
      if ((param_4 == -1) && (param_13 == 0)) {
        puVar14 = (undefined1 *)(lVar9 + 0xc0);
        if (*(longlong *)(lVar9 + 0xd0) != 0) goto LAB_140613f8e;
      }
      else {
        local_298 = local_298 & 0xffff0000;
        local_2a0 = CONCAT31(local_2a0._1_3_,1);
        local_2a8 = param_13;
        FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        puVar14 = local_250;
LAB_140613f8e:
        FUN_140050380(param_1,puVar14);
        FUN_140050370(param_1,0x20);
      }
      cVar2 = FUN_140d3cf30(&DAT_141c53470,0x2f,param_4,param_5);
      if (cVar2 != '\0') {
        lVar8 = lVar9 + 0x120;
        goto LAB_140613bfa;
      }
      goto LAB_140613c17;
    }
    if (lVar8 != 0) {
      FUN_140050380(param_1,local_230);
      FUN_140050370(param_1,0x20);
      uVar4 = 0;
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"legwear");
    break;
  case 0x3c:
    if (lVar8 != 0) {
      FUN_14000cb40(param_1,local_230,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"backpack",8);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x3d:
    if (lVar8 != 0) {
      FUN_14000cb40(param_1,local_230,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"quiver",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x3e:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"catapult parts");
    break;
  case 0x3f:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"ballista parts");
    break;
  case 0x40:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    lVar8 = FUN_1402cd900(&DAT_141d6ddb8,param_3);
    if (lVar8 != 0) {
      if (param_6 == 1) {
        FUN_140050380(param_1,lVar8 + 0x60);
        goto LAB_1406140eb;
      }
      puVar14 = (undefined1 *)(lVar8 + 0x80);
      goto LAB_140612500;
    }
    FUN_14000c1f0(param_1,"siege ammo");
    break;
  case 0x41:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "ballista arrow head";
    goto LAB_1406140a6;
  case 0x42:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"mechanisms");
    break;
  case 0x43:
    lVar8 = FUN_1402cd750(&DAT_141d6ddb8,param_3);
    uVar4 = (undefined2)lVar17;
    if (lVar8 != 0) goto LAB_1406126cc;
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,uVar4);
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "trap component";
    goto LAB_1406140a6;
  case 0x44:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c9f0(param_1,"rotten ",7);
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,1);
      local_2a0 = local_2a0 & 0xffffff00;
      goto LAB_140611c04;
    }
    pcVar13 = "drink";
LAB_140611c3f:
    uVar19 = 5;
LAB_140611c45:
    FUN_14000c9f0(param_1,pcVar13,uVar19);
    if (param_6 == 1) goto LAB_1406140eb;
    FUN_140050540(param_1,1,0x73);
    break;
  case 0x45:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = CONCAT22(local_298._2_2_,3);
LAB_1406124e0:
      local_2a0 = local_2a0 & 0xffffff00;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      goto LAB_1406124f8;
    }
    FUN_14000c1f0(param_1,"powder");
    break;
  case 0x46:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = local_298 & 0xffff0000;
      goto LAB_1406124e0;
    }
    FUN_14000c1f0(param_1,"cheese");
    break;
  case 0x47:
    pcVar13 = "prepared meal";
    goto LAB_1406140a6;
  case 0x48:
  case 0x4a:
    sVar21 = 0;
    local_278 = 0;
    if ((param_7 & 0x100) != 0) {
      FUN_14000c9f0(param_1,"rotten ",7);
    }
    sVar20 = 0;
    if (local_284 != -1) {
      bVar1 = false;
      local_280 = '\0';
      local_288 = '\0';
      local_27f = '\0';
      local_27e = '\0';
      local_287 = '\0';
      local_27d = '\0';
      local_27c = '\0';
      local_27b = '\0';
      local_27a = '\0';
      lVar8 = FUN_14000de70(&DAT_141c67368);
      uVar3 = local_276;
      sVar20 = sVar21;
      if (((lVar8 != 0) && (plVar10 = *(longlong **)(lVar8 + 0x90), plVar10 != (longlong *)0x0)) &&
         (plVar10[1] - *plVar10 >> 3 != 0)) {
        lVar8 = plVar10[1];
        lVar17 = *plVar10;
        puVar7 = (undefined8 *)*plVar10;
        iVar5 = 0;
        do {
          iVar12 = (int)*(short *)*puVar7;
          if (iVar12 == 0xd) {
switchD_140611ef7_caseD_2:
            local_288 = '\x01';
          }
          else if ((iVar12 == 0xf) || (iVar12 == 0x10)) {
switchD_140611ef7_caseD_7:
            bVar1 = true;
          }
          else if (iVar12 == 0x11) {
            local_280 = '\x01';
          }
          else if (iVar12 == 0x12) {
            if (uVar3 != 0x48) goto switchD_140611ef7_caseD_6;
            local_27e = '\x01';
          }
          else {
            lVar9 = FUN_140d89d60(&DAT_141c53470,iVar12,*(undefined4 *)((short *)*puVar7 + 2));
            if (lVar9 == 0) {
              uVar4 = 0xffff;
            }
            else {
              uVar4 = *(undefined2 *)(lVar9 + 0x4ce);
            }
            switch(uVar4) {
            case 0:
              local_27a = '\x01';
              break;
            case 1:
              local_27f = '\x01';
              break;
            case 2:
              goto switchD_140611ef7_caseD_2;
            case 3:
              local_27b = '\x01';
              break;
            case 4:
              local_27c = '\x01';
              break;
            case 5:
              local_27d = '\x01';
              break;
            case 6:
switchD_140611ef7_caseD_6:
              local_287 = '\x01';
              break;
            case 7:
              goto switchD_140611ef7_caseD_7;
            default:
              sVar20 = sVar20 + 1;
            }
          }
          param_1 = local_260;
          param_5 = local_26c;
          param_4 = local_274;
          iVar5 = iVar5 + 1;
          puVar7 = puVar7 + 1;
        } while ((ulonglong)(longlong)iVar5 < (ulonglong)(lVar8 - lVar17 >> 3));
        local_278 = sVar20;
        if (bVar1) {
          FUN_14000c9f0(local_260,"filthy ",7);
        }
        if (local_280 != '\0') {
          FUN_14000c9f0(param_1,"sticky ",7);
        }
        if (local_288 != '\0') {
          FUN_14000c9f0(param_1,"vomitous ",9);
        }
        if (local_27f != '\0') {
          FUN_14000c9f0(param_1,"slimy ",6);
        }
        if (local_27e != '\0') {
          FUN_14000c9f0(param_1,"stagnant ",9);
        }
        if (local_287 != '\0') {
          FUN_14000c9f0(param_1,"dirty ",6);
        }
        if (local_27d != '\0') {
          FUN_14000c9f0(param_1,"gooey ",6);
        }
        if (local_27c != '\0') {
          FUN_14000c9f0(param_1,"purulent ",9);
        }
        if (local_27b != '\0') {
          FUN_14000c9f0(param_1,"ichorous ",9);
        }
        if (local_27a != '\0') {
          FUN_14000c9f0(param_1,"bloody ",7);
        }
      }
    }
    if (local_276 == 0x48) {
      if ((param_4 == -1) && (param_13 == 0)) {
        FUN_14000c9f0(param_1,"liquid",6);
        sVar20 = local_278;
      }
      else {
        if ((local_284 == -1) ||
           (((lVar8 = FUN_14000de70(&DAT_141c67368,local_284), lVar8 == 0 ||
             ((*(byte *)(lVar8 + 0xc0) & 1) == 0)) || (199 < (ushort)(param_4 - 0x13U))))) {
          local_298 = CONCAT22(local_298._2_2_,1);
          local_2a0 = local_2a0 & 0xffffff00;
          local_2a8 = param_13;
          FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        }
        else {
          local_1f8 = 0xf;
          local_200 = 0;
          local_210 = 0;
          sVar21 = (short)param_5;
          if (((-1 < sVar21) &&
              ((ulonglong)(longlong)sVar21 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
             (puVar14 = (undefined1 *)(*(longlong *)(DAT_141d6dd50 + (longlong)sVar21 * 8) + 0x20),
             &local_210 != puVar14)) {
            FUN_14000c8b0(&local_210,puVar14,0,0xffffffffffffffff);
          }
          FUN_14000c8b0(local_250,&local_210,0,0xffffffffffffffff);
          FUN_14000c9f0(local_250," paste",6);
          if (0xf < local_1f8) {
            FUN_140002020(CONCAT71(uStack_20f,local_210),local_1f8 + 1,1);
          }
          local_1f8 = 0xf;
          local_200 = 0;
          local_210 = 0;
        }
        FUN_14000cb40(param_1,local_250,0);
        sVar20 = local_278;
      }
    }
    else if (local_276 == 0x4a) {
      if ((param_4 == -1) && (param_13 == 0)) {
        FUN_14000c9f0(param_1,&DAT_140ee6758,4);
      }
      else {
        lVar8 = FUN_14000de70(&DAT_141c67368,local_284);
        if (lVar8 == 0) {
          local_298 = (uint)local_298._2_2_ << 0x10;
LAB_1406122b7:
          local_2a0 = (uint)local_2a0._1_3_ << 8;
        }
        else {
          if ((*(uint *)(lVar8 + 0xbc) & 4) != 0) {
            local_298 = CONCAT22(local_298._2_2_,4);
            goto LAB_1406122b7;
          }
          if ((*(uint *)(lVar8 + 0xbc) & 2) == 0) {
            local_298 = (uint)local_298._2_2_ << 0x10;
            local_2a0 = (uint)local_2a0._1_3_ << 8;
          }
          else {
            local_298 = CONCAT22(local_298._2_2_,5);
            local_2a0 = (uint)local_2a0._1_3_ << 8;
          }
        }
        local_2a8 = param_13;
        FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        FUN_14000cb40(param_1,local_250,0);
      }
    }
    if (((0 < sVar20) && (lVar8 = FUN_14000de70(&DAT_141c67368), lVar8 != 0)) &&
       (plVar10 = *(longlong **)(lVar8 + 0x90), plVar10 != (longlong *)0x0)) {
      bVar1 = false;
      iVar5 = 0;
      if (plVar10[1] - *plVar10 >> 3 != 0) {
        lVar17 = 0;
        sVar21 = local_278;
        do {
          iVar12 = (int)**(short **)(lVar17 + **(longlong **)(lVar8 + 0x90));
          if ((iVar12 != 0xd) && (3 < iVar12 - 0xfU)) {
            lVar9 = **(longlong **)(lVar8 + 0x90);
            lVar9 = FUN_140d89d60(&DAT_141c53470,**(undefined2 **)(lVar17 + lVar9),
                                  *(undefined4 *)(*(longlong *)(lVar9 + lVar17) + 4));
            if (lVar9 == 0) {
              uVar3 = 0xffff;
            }
            else {
              uVar3 = *(ushort *)(lVar9 + 0x4ce);
            }
            if (7 < uVar3) {
              if (!bVar1) {
                FUN_14000c9f0(param_1," laced with ",0xc);
                bVar1 = true;
              }
              local_d8 = 0xf;
              local_e0 = 0;
              local_f0[0] = 0;
              local_298 = CONCAT22(local_298._2_2_,
                                   *(undefined2 *)
                                    (*(longlong *)(**(longlong **)(lVar8 + 0x90) + lVar17) + 8));
              local_2a0 = local_2a0 & 0xffffff00;
              local_2a8 = 0;
              FUN_140da8550(&DAT_141c53470,local_f0,
                            **(undefined2 **)(lVar17 + **(longlong **)(lVar8 + 0x90)));
              FUN_140050380(param_1,local_f0);
              if (sVar21 < 3) {
                if (sVar21 == 2) {
                  puVar15 = &DAT_140e5a238;
                  goto LAB_140612445;
                }
              }
              else {
                puVar15 = (undefined4 *)&DAT_140e5a200;
LAB_140612445:
                FUN_14000c1f0(param_1,puVar15);
              }
              sVar21 = sVar21 + -1;
              FUN_14000c260(local_f0);
            }
          }
          iVar5 = iVar5 + 1;
          lVar17 = lVar17 + 8;
        } while ((ulonglong)(longlong)iVar5 <
                 (ulonglong)((*(longlong **)(lVar8 + 0x90))[1] - **(longlong **)(lVar8 + 0x90) >> 3)
                );
      }
    }
    break;
  case 0x49:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "coin";
    goto LAB_1406140a6;
  case 0x4b:
    FUN_14000c9f0(param_1,"small ",6);
    if ((param_4 != -1) || (param_13 != 0)) {
      local_1b8 = 0xf;
      local_1c0 = 0;
      local_1d0 = 0;
      local_298 = local_298 & 0xffff0000;
      local_2a0 = local_2a0 & 0xffffff00;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,&local_1d0,param_4,param_5);
      FUN_14000cb40(param_1,&local_1d0,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
      if (0xf < local_1b8) {
        FUN_140002020(CONCAT71(uStack_1cf,local_1d0),local_1b8 + 1,1);
      }
      local_1b8 = 0xf;
      local_1c0 = 0;
      local_1d0 = 0;
    }
    FUN_14000c9f0(param_1,&DAT_140ee66cc,4);
    break;
  case 0x4c:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    cVar2 = FUN_140d3cf30(&DAT_141c53470,0x31,param_4,param_5);
    if (cVar2 == '\0') {
      FUN_14000c1f0(param_1,"pipe section");
    }
    else {
      FUN_14000c1f0(param_1,&DAT_140ee67d0);
    }
    break;
  case 0x4d:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"hatch cover",0xb);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x4e:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"grate",5);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x4f:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "quern";
    goto LAB_1406140a6;
  case 0x50:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "millstone";
    goto LAB_1406140a6;
  case 0x51:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    FUN_14000c9f0(param_1,"splint",6);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x52:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    pcVar13 = "crutch";
    goto LAB_14060f958;
  case 0x53:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    FUN_14000c1f0(param_1,"traction bench");
    if (param_6 == 1) goto LAB_1406140eb;
    FUN_14000c1f0(param_1,&DAT_140ee65f0);
    break;
  case 0x54:
    if (local_284 == -1) {
      if ((param_4 != -1) || (param_13 != 0)) {
        local_298 = (uint)local_298._2_2_ << 0x10;
        local_2a0 = CONCAT31(local_2a0._1_3_,1);
        local_2a8 = param_13;
        FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
        FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
        FUN_140050540(param_1,1,0x20);
      }
LAB_140610a00:
      FUN_14000c9f0(param_1,"limb/body ",10);
    }
    else {
      lVar8 = FUN_14000de70(&DAT_141c67368,local_284);
      if (lVar8 == 0) goto LAB_140610a00;
      FUN_14000cb40(param_1,lVar8 + 0x100,0,0xffffffffffffffff);
      if (*(longlong *)(lVar8 + 0x110) != 0) {
        FUN_140050540(param_1,1,0x20);
      }
      FUN_14000cb40(param_1,lVar8 + 0xe0,0,0xffffffffffffffff);
      if (*(longlong *)(lVar8 + 0xf0) != 0) {
        FUN_140050540(param_1,1,0x20);
      }
    }
    FUN_14000c9f0(param_1,&DAT_140ee6334,4);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x55:
    iVar5 = (int)(DAT_141d6de20 - DAT_141d6de18 >> 3) + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        if (*(short *)(*(longlong *)(DAT_141d6de18 + lVar8 * 8) + 0x28) == param_3) {
          lVar17 = *(longlong *)(DAT_141d6de18 + (longlong)iVar5 * 8);
          if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0xe0) != 0)) {
            FUN_14000cb40(param_1,lVar17 + 0xd0,0,0xffffffffffffffff);
            FUN_14000c9f0(param_1,&DAT_140e59864,1);
          }
          break;
        }
        iVar5 = iVar5 + -1;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    iVar5 = 0;
    if ((param_4 != -1) || (param_13 != 0)) {
      if (lVar17 != 0) {
        iVar12 = (int)(*(longlong *)(lVar17 + 0xc0) - *(longlong *)(lVar17 + 0xb8) >> 1);
        if ((iVar12 != 0) && (iVar12 = iVar12 + -1, -1 < iVar12)) {
          do {
            iVar11 = iVar12 + iVar5 >> 1;
            sVar21 = *(short *)(*(longlong *)(lVar17 + 0xb8) + (longlong)iVar11 * 2);
            if (sVar21 == 10) {
              if ((((iVar11 != -1) &&
                   (lVar8 = FUN_140d89d60(&DAT_141c53470,param_4,param_5), lVar8 != 0)) &&
                  (8 < *(int *)(lVar8 + 0x298))) &&
                 ((((*(byte *)(*(longlong *)(lVar8 + 0x290) + 8) & 2) != 0 &&
                   (plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368), plVar10 != (longlong *)0x0)
                   ) && (cVar2 = (**(code **)(*plVar10 + 0x730))(plVar10), cVar2 == '\0')))) {
                FUN_14000c9f0(param_1,"unglazed ",9);
              }
              break;
            }
            if (sVar21 < 0xb) {
              iVar5 = iVar11 + 1;
            }
            else {
              iVar12 = iVar11 + -1;
            }
          } while (iVar5 <= iVar12);
        }
      }
      local_298 = local_298 & 0xffff0000;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    if (((local_284 != -1) &&
        (plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368,local_284), plVar10 != (longlong *)0x0))
       && ((iVar5 = (**(code **)(*plVar10 + 0x750))(plVar10), iVar5 != -1 &&
           (lVar8 = *(longlong *)(DAT_141d778c8 + (longlong)iVar5 * 8),
           *(longlong *)(lVar8 + 0x98) - *(longlong *)(lVar8 + 0x90) >> 3 != 0)))) {
      FUN_14000cb40(param_1,**(undefined8 **)(lVar8 + 0x90),0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    if (lVar17 != 0) {
      if (param_6 == 1) {
        FUN_14000cb40(param_1,lVar17 + 0x60,0,0xffffffffffffffff);
        goto LAB_1406140eb;
      }
      puVar14 = (undefined1 *)(lVar17 + 0x80);
      goto LAB_140611c2e;
    }
    FUN_14000c9f0(param_1,&DAT_140ee6904,4);
    if (param_6 != 1) {
      FUN_140050540(param_1,1,0x73);
    }
    break;
  case 0x56:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    plVar10 = (longlong *)FUN_14000de70(&DAT_141c67368,local_284);
    if (plVar10 == (longlong *)0x0) {
switchD_1406130ee_caseD_6:
      pcVar13 = "slab";
    }
    else {
      uVar4 = (**(code **)(*plVar10 + 0x720))(plVar10);
      switch(uVar4) {
      case 0:
        pcVar13 = "memorial";
        break;
      case 1:
        pcVar13 = "craft shop sign";
        break;
      case 2:
      case 0x10:
        pcVar13 = "weaponsmith\'s shop sign";
        break;
      case 3:
      case 0x13:
        pcVar13 = "armorsmith\'s shop sign";
        break;
      case 4:
        pcVar13 = "general store sign";
        break;
      case 5:
        pcVar13 = "food shop sign";
        break;
      default:
        goto switchD_1406130ee_caseD_6;
      case 7:
        pcVar13 = "food imports sign";
        break;
      case 8:
        pcVar13 = "clothing imports sign";
        break;
      case 9:
        pcVar13 = "general imports sign";
        break;
      case 10:
        pcVar13 = "cloth shop sign";
        break;
      case 0xb:
        pcVar13 = "leather shop sign";
        break;
      case 0xc:
        pcVar13 = "woven clothing shop sign";
        break;
      case 0xd:
        pcVar13 = "leather clothing shop sign";
        break;
      case 0xe:
        pcVar13 = "bone carver\'s shop sign";
        break;
      case 0xf:
        pcVar13 = "gem cutter\'s shop sign";
        break;
      case 0x11:
        pcVar13 = "bowyer\'s shop sign";
        break;
      case 0x12:
        pcVar13 = "blacksmith\'s shop sign";
        break;
      case 0x14:
        pcVar13 = "metal craft shop sign";
        break;
      case 0x15:
        pcVar13 = "leather goods shop sign";
        break;
      case 0x16:
        pcVar13 = "carpenter\'s shop sign";
        break;
      case 0x17:
        pcVar13 = "stone furniture shop sign";
        break;
      case 0x18:
        pcVar13 = "metal furniture shop sign";
        break;
      case 0x1a:
        pcVar13 = "tavern sign";
      }
    }
    goto LAB_1406140a6;
  case 0x57:
    if ((param_7 & 0x100) != 0) {
      FUN_14000c1f0(param_1,"rotten ");
    }
    if (param_4 != -1) {
      FUN_140669610(param_4,local_250,0,param_5 & 0xffff);
      FUN_140050380(param_1,local_250);
      FUN_14000c1f0(param_1,&DAT_140e59864);
    }
    FUN_14000c1f0(param_1,&DAT_140ee6aa0);
    break;
  case 0x58:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_14000c9f0(param_1,"-bound ",7);
    }
    if (param_6 == 1) {
      FUN_14000c9f0(param_1,"codex",5);
      goto LAB_1406140eb;
    }
    uVar18 = 7;
    pcVar13 = "codices";
    goto LAB_14060f980;
  case 0x59:
    if ((param_4 != -1) || (param_13 != 0)) {
      lVar8 = FUN_14000de70(&DAT_141c67368);
      if (lVar8 == 0) {
        local_298 = (uint)local_298._2_2_ << 0x10;
      }
      else if ((*(uint *)(lVar8 + 0xe4) & 1) == 0) {
        if ((*(uint *)(lVar8 + 0xe4) & 2) == 0) {
          local_298 = (uint)local_298._2_2_ << 0x10;
        }
        else {
          local_298 = CONCAT22(local_298._2_2_,5);
        }
      }
      else {
        local_298 = CONCAT22(local_298._2_2_,4);
      }
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    uVar18 = 5;
    pcVar13 = "sheet";
    goto LAB_14060f980;
  case 0x5a:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = (uint)local_2a0._1_3_ << 8;
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_14000cb40(param_1,local_250,0,0xffffffffffffffff);
      FUN_140050540(param_1,1,0x20);
    }
    pcVar13 = "branch";
LAB_14060f958:
    FUN_14000c9f0(param_1,pcVar13,6);
    if (param_6 == 1) goto LAB_1406140eb;
    uVar18 = 2;
    pcVar13 = "es";
LAB_14060f980:
    FUN_14000c9f0(param_1,pcVar13,uVar18);
    break;
  default:
    if ((param_4 != -1) || (param_13 != 0)) {
      local_298 = (uint)local_298._2_2_ << 0x10;
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a8 = param_13;
      FUN_140da8550(&DAT_141c53470,local_250,param_4,param_5);
      FUN_140050380(param_1,local_250);
      FUN_140050370(param_1,0x20);
    }
    pcVar13 = "item";
LAB_1406140a6:
    FUN_14000c1f0(param_1,pcVar13);
LAB_1406140ab:
    if (param_6 == 1) goto LAB_1406140eb;
    uVar19 = 0x73;
LAB_1406140b3:
    FUN_140050370(param_1,uVar19);
  }
  if (1 < (int)param_6) {
    FUN_14000c1f0(param_1,&DAT_140ec8ab0);
    FUN_14014a5c0(param_6,param_1);
    puVar16 = &DAT_140e7aafc;
LAB_1406140e5:
    FUN_14000c1f0(param_1,puVar16);
  }
LAB_1406140eb:
  FUN_14000c260(local_250);
  FUN_14000c260(local_230);
  return;
}

