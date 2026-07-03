// FUN_14060a830 @ 14060a830
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 1406d53a0 FUN_1406d53a0
//   -> 140002020 FUN_140002020
//   -> 14097dd20 FUN_14097dd20
//   -> 14032d6f0 FUN_14032d6f0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140327d90 FUN_140327d90
//   -> 140360950 FUN_140360950
//   -> 140607ad0 FUN_140607ad0
//   -> 140051cf0 FUN_140051cf0
//   -> 140051b70 FUN_140051b70
//   -> 140326f70 FUN_140326f70
//   -> 140dfb5b4 free
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14060a830(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *_Memory;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 *local_58;
  longlong *local_50;
  longlong lStack_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_60 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  uVar16 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = viewscreen_titlest::vftable;
  puVar1 = param_1 + 0x46;
  *puVar1 = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  puVar7 = param_1 + 0x5b;
  param_1[0x5e] = 0xf;
  param_1[0x5d] = 0;
  if (0xf < (ulonglong)param_1[0x5e]) {
    puVar7 = (undefined8 *)*puVar7;
  }
  *(undefined1 *)puVar7 = 0;
  puVar7 = param_1 + 0x5f;
  param_1[0x62] = 0xf;
  param_1[0x61] = 0;
  puVar8 = puVar7;
  if (0xf < (ulonglong)param_1[0x62]) {
    puVar8 = (undefined8 *)*puVar7;
  }
  *(undefined1 *)puVar8 = 0;
  puVar8 = param_1 + 99;
  param_1[0x66] = 0xf;
  param_1[0x65] = 0;
  puVar9 = puVar8;
  if (0xf < (ulonglong)param_1[0x66]) {
    puVar9 = (undefined8 *)*puVar8;
  }
  *(undefined1 *)puVar9 = 0;
  puVar9 = param_1 + 0x67;
  param_1[0x6a] = 0xf;
  param_1[0x69] = 0;
  puVar10 = puVar9;
  if (0xf < (ulonglong)param_1[0x6a]) {
    puVar10 = (undefined8 *)*puVar9;
  }
  *(undefined1 *)puVar10 = 0;
  puVar10 = param_1 + 0x6b;
  param_1[0x6e] = 0xf;
  param_1[0x6d] = 0;
  if (0xf < (ulonglong)param_1[0x6e]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined1 *)puVar10 = 0;
  puVar10 = param_1 + 0x6f;
  param_1[0x72] = 0xf;
  param_1[0x71] = 0;
  if (0xf < (ulonglong)param_1[0x72]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined1 *)puVar10 = 0;
  puVar10 = param_1 + 0x73;
  param_1[0x76] = 0xf;
  param_1[0x75] = 0;
  if (0xf < (ulonglong)param_1[0x76]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined1 *)puVar10 = 0;
  puVar10 = param_1 + 0x77;
  param_1[0x7a] = 0xf;
  param_1[0x79] = 0;
  if (0xf < (ulonglong)param_1[0x7a]) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined1 *)puVar10 = 0;
  puVar10 = param_1 + 0x7b;
  param_1[0x7e] = 0xf;
  param_1[0x7d] = 0;
  puVar11 = puVar10;
  if (0xf < (ulonglong)param_1[0x7e]) {
    puVar11 = (undefined8 *)*puVar10;
  }
  *(undefined1 *)puVar11 = 0;
  puVar11 = param_1 + 0x7f;
  param_1[0x82] = 0xf;
  param_1[0x81] = 0;
  if (0xf < (ulonglong)param_1[0x82]) {
    puVar11 = (undefined8 *)*puVar11;
  }
  *(undefined1 *)puVar11 = 0;
  local_38 = 0xf;
  local_40 = 0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_58 = param_1;
  uVar19 = FUN_14000c780(&local_50,"data/save/current",0x11);
  FUN_1406d53a0(uVar19,&local_50);
  if (0xf < local_38) {
    FUN_140002020(local_50,local_38 + 1,1);
  }
  FUN_14097dd20(&DAT_141c34700);
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x424) = 0;
  *(undefined1 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
  FUN_14032d6f0(param_1 + 0x5b,0x28);
  FUN_14032d6f0(puVar7,0x29);
  FUN_14032d6f0(puVar9,0x12);
  FUN_14032d6f0(puVar8,0x2b);
  FUN_14032d6f0(param_1 + 0x6b,0x13);
  FUN_14032d6f0(param_1 + 0x6f,0x14);
  FUN_14032d6f0(param_1 + 0x73,0x15);
  FUN_14032d6f0(param_1 + 0x77,0x16);
  FUN_14032d6f0(puVar10,0x17);
  param_1[4] = s_Histories_of_140ee5418._0_8_;
  *(undefined4 *)(param_1 + 5) = s_Histories_of_140ee5418._8_4_;
  *(undefined2 *)((longlong)param_1 + 0x2c) = s_Histories_of_140ee5418._12_2_;
  uVar6 = FUN_1409fc0c0();
  uVar6 = (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x1999999a;
  if (uVar6 == 0) {
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined4 *)pcVar12 = s_Greed_140ee5428._0_4_;
    *(undefined2 *)(pcVar13 + 5) = s_Greed_140ee5428._4_2_;
  }
  else if (uVar6 == 1) {
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar12 = *(char (*) [8])pcVar12 + 1;
    } while (*pcVar12 != '\0');
    *(char (*) [8])pcVar12 = s_Avarice_140ee5400;
  }
  else if (uVar6 == 2) {
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Jealousy_140ee5408._0_8_;
    pcVar13[9] = s_Jealousy_140ee5408[8];
  }
  else if (uVar6 == 3) {
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Cupidity_140ee54e8._0_8_;
    pcVar13[9] = s_Cupidity_140ee54e8[8];
  }
  else if (uVar6 == 4) {
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Gluttony_140ee54f8._0_8_;
    pcVar13[9] = s_Gluttony_140ee54f8[8];
  }
  pcVar12 = (char *)((longlong)param_1 + 0x1f);
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  *(undefined4 *)pcVar12 = DAT_140e5a238;
  *(undefined2 *)(pcVar13 + 5) = DAT_140e5a23c;
  uVar6 = FUN_1409fc0c0();
  uVar4 = s_Resourcefulness_140ee54a8._8_8_;
  switch((uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff) /
         0xaaaaaab) {
  case 0:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Industry_140ee54c8._0_8_;
    pcVar13[9] = s_Industry_140ee54c8[8];
    break;
  case 1:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Enterprise_140ee54d8._0_8_;
    *(undefined2 *)(pcVar13 + 9) = s_Enterprise_140ee54d8._8_2_;
    pcVar13[0xb] = s_Enterprise_140ee54d8[10];
    break;
  case 2:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Resourcefulness_140ee54a8._0_8_;
    *(undefined8 *)(pcVar13 + 9) = uVar4;
    break;
  case 3:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Determination_140ee54b8._0_8_;
    *(undefined4 *)(pcVar13 + 9) = s_Determination_140ee54b8._8_4_;
    *(undefined2 *)(pcVar13 + 0xd) = s_Determination_140ee54b8._12_2_;
    break;
  case 4:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined4 *)pcVar12 = s_Mettle_140ee548c._0_4_;
    *(undefined2 *)(pcVar13 + 5) = s_Mettle_140ee548c._4_2_;
    pcVar13[7] = s_Mettle_140ee548c[6];
    break;
  case 5:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Dynamism_140ee5498._0_8_;
    pcVar13[9] = s_Dynamism_140ee5498[8];
    break;
  case 6:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined4 *)pcVar12 = s_Labor_140ee5584._0_4_;
    *(undefined2 *)(pcVar13 + 5) = s_Labor_140ee5584._4_2_;
    break;
  case 7:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined4 *)pcVar12 = DAT_140ee558c;
    pcVar13[5] = DAT_140ee5590;
    break;
  case 8:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Diligence_140ee5568._0_8_;
    *(undefined2 *)(pcVar13 + 9) = s_Diligence_140ee5568._8_2_;
    break;
  case 9:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Exertion_140ee5578._0_8_;
    pcVar13[9] = s_Exertion_140ee5578[8];
    break;
  case 10:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Tenacity_140ee5538._0_8_;
    pcVar13[9] = s_Tenacity_140ee5538[8];
    break;
  case 0xb:
    pcVar12 = (char *)((longlong)param_1 + 0x1f);
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    *(undefined8 *)pcVar12 = s_Perseverance_140e59ac0._0_8_;
    *(undefined4 *)(pcVar13 + 9) = s_Perseverance_140e59ac0._8_4_;
    pcVar13[0xd] = s_Perseverance_140e59ac0[0xc];
  }
  local_50 = (longlong *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  FUN_140327d90(&local_50);
  plVar5 = local_50;
  uVar18 = lStack_48 - (longlong)local_50 >> 3;
  if (uVar18 != 0) {
    local_68[0] = 0;
    puVar2 = (undefined4 *)param_1[0x47];
    if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] =
             *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
      }
    }
    else {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] = 0;
      }
    }
    param_1[0x47] = param_1[0x47] + 4;
  }
  FUN_140607ad0(param_1);
  if ((longlong)(param_1[0x50] - param_1[0x4f]) >> 3 != 0) {
    local_68[0] = 1;
    puVar2 = (undefined4 *)param_1[0x47];
    if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] =
             *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
      }
    }
    else {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] = 1;
      }
    }
    param_1[0x47] = param_1[0x47] + 4;
  }
  local_68[0] = 2;
  puVar2 = (undefined4 *)param_1[0x47];
  if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] =
           *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] = 2;
    }
  }
  param_1[0x47] = param_1[0x47] + 4;
  local_68[0] = 3;
  puVar2 = (undefined4 *)param_1[0x47];
  if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] =
           *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] = 3;
    }
  }
  param_1[0x47] = param_1[0x47] + 4;
  if ((2 < DAT_141c34170) && ((*(byte *)(DAT_141c34168 + 2) & 1) != 0)) {
    local_68[0] = 4;
    puVar2 = (undefined4 *)param_1[0x47];
    if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] =
             *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
      }
    }
    else {
      if (puVar2 == (undefined4 *)param_1[0x48]) {
        FUN_140360950(puVar1);
      }
      if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[0x47] = 4;
      }
    }
    param_1[0x47] = param_1[0x47] + 4;
  }
  local_68[0] = 5;
  puVar2 = (undefined4 *)param_1[0x47];
  if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] =
           *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] = 5;
    }
  }
  param_1[0x47] = param_1[0x47] + 4;
  local_68[0] = 6;
  puVar2 = (undefined4 *)param_1[0x47];
  if ((local_68 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= local_68)) {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] =
           *(undefined4 *)(*puVar1 + ((longlong)local_68 - (longlong)puVar3 >> 2) * 4);
    }
  }
  else {
    if (puVar2 == (undefined4 *)param_1[0x48]) {
      FUN_140360950(puVar1);
    }
    if ((undefined4 *)param_1[0x47] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x47] = 6;
    }
  }
  param_1[0x47] = param_1[0x47] + 4;
  FUN_140051cf0(param_1 + 0x52,&PTR_140e5c558);
  plVar14 = plVar5;
  uVar15 = uVar16;
  if (uVar18 != 0) {
    do {
      FUN_140051b70(param_1 + 0x52,*plVar14 + 0xf0);
      uVar6 = (int)uVar15 + 1;
      plVar14 = plVar14 + 1;
      uVar15 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 < uVar18);
  }
  uVar15 = uVar16;
  uVar17 = uVar16;
  if ((longlong)(param_1[0x50] - param_1[0x4f]) >> 3 != 0) {
    do {
      FUN_140051b70(param_1 + 0x52,*(longlong *)(uVar15 + param_1[0x4f]) + 0x140);
      uVar6 = (int)uVar17 + 1;
      uVar15 = uVar15 + 8;
      uVar17 = (ulonglong)uVar6;
    } while ((ulonglong)(longlong)(int)uVar6 <
             (ulonglong)((longlong)(param_1[0x50] - param_1[0x4f]) >> 3));
  }
  plVar14 = plVar5;
  if (uVar18 != 0) {
    do {
      _Memory = (void *)*plVar14;
      if (_Memory != (void *)0x0) {
        FUN_140326f70(_Memory);
        free(_Memory);
      }
      uVar6 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar6;
      plVar14 = plVar14 + 1;
    } while ((ulonglong)(longlong)(int)uVar6 < uVar18);
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_140002020(plVar5,local_40 - (longlong)plVar5 >> 3,8);
  }
  return param_1;
}

