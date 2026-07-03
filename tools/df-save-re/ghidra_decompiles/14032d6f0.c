// FUN_14032d6f0 @ 14032d6f0
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14007b6d0 FUN_14007b6d0
//   -> 140002020 FUN_140002020
//   -> 140360f10 FUN_140360f10
//   -> 140050540 FUN_140050540
//   -> EXTERNAL:00000115 atoi
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140051e20 FUN_140051e20
//   -> EXTERNAL:00000070 MessageBoxA
//   -> EXTERNAL:000000ee exit
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14032d6f0(char *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  short sVar10;
  short sVar11;
  ulonglong uVar12;
  LPCSTR lpText;
  char *pcVar13;
  char *pcVar14;
  uint uVar15;
  ulonglong uVar16;
  CHAR *lpCaption;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  char local_1d8;
  undefined7 uStack_1d7;
  ulonglong local_1c8;
  ulonglong local_1c0;
  CHAR local_1b8;
  undefined7 uStack_1b7;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178;
  undefined7 uStack_177;
  ulonglong local_168;
  ulonglong local_160;
  char local_158;
  undefined7 uStack_157;
  undefined8 local_148;
  ulonglong local_140;
  char local_138 [256];
  ulonglong local_38;
  
  local_1e0 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_218;
  local_160 = 0xf;
  uVar12 = 0;
  local_168 = 0;
  local_178 = 0;
  FUN_14000c780(&local_178,&DAT_140ec0124,4);
  local_180 = 0xf;
  local_188 = 0;
  local_198 = 0;
  FUN_14000c780(&local_198,"hlaas",5);
  sVar11 = 0;
  uVar16 = uVar12;
  sVar10 = sVar11;
  if (local_168 != 0) {
    do {
      puVar8 = &local_178;
      if (0xf < local_160) {
        puVar8 = (undefined1 *)CONCAT71(uStack_177,local_178);
      }
      puVar8[uVar16] = puVar8[uVar16] + (-1 - (char)sVar10);
      sVar10 = sVar10 + 1;
      uVar16 = (longlong)sVar10;
    } while ((ulonglong)(longlong)sVar10 < local_168);
  }
  uVar16 = uVar12;
  if (local_188 != 0) {
    do {
      puVar8 = &local_198;
      if (0xf < local_180) {
        puVar8 = (undefined1 *)CONCAT71(uStack_197,local_198);
      }
      puVar8[uVar16] = puVar8[uVar16] + (char)sVar11 + '\x01';
      sVar11 = sVar11 + 1;
      uVar16 = (longlong)sVar11;
    } while ((ulonglong)(longlong)sVar11 < local_188);
  }
  uVar6 = FUN_14007b5f0(&local_1b8,&local_178,&DAT_140e5c854);
  FUN_14007b6d0(&local_158,uVar6,&local_198);
  if (0xf < local_1a0) {
    FUN_140002020(CONCAT71(uStack_1b7,local_1b8),local_1a0 + 1,1);
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  pcVar14 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar14 = *(char **)param_1;
  }
  *pcVar14 = '\0';
  local_1f8 = (undefined8 *)0x0;
  lStack_1f0 = 0;
  local_1e8 = 0;
  pcVar14 = &local_158;
  if (0xf < local_140) {
    pcVar14 = (char *)CONCAT71(uStack_157,local_158);
  }
  pcVar13 = local_138;
  do {
    cVar4 = *pcVar14;
    *pcVar13 = cVar4;
    pcVar14 = pcVar14 + 1;
    pcVar13 = pcVar13 + 1;
  } while (cVar4 != '\0');
  cVar4 = FUN_140360f10(&local_1f8,local_138,0,1);
  if (cVar4 != '\0') {
    uVar16 = 0xf;
    local_1c0 = 0xf;
    local_1c8 = 0;
    local_1d8 = '\0';
    uVar19 = lStack_1f0 - (longlong)local_1f8 >> 3;
    puVar9 = local_1f8;
    if (uVar19 != 0) {
LAB_14032d8c2:
      pcVar14 = (char *)*puVar9;
      if (*(longlong *)(pcVar14 + 0x10) == 0) goto LAB_14032d96a;
      local_1c8 = 0;
      pcVar13 = &local_1d8;
      if (0xf < uVar16) {
        pcVar13 = (char *)CONCAT71(uStack_1d7,local_1d8);
      }
      *pcVar13 = '\0';
      lVar2 = *(longlong *)(pcVar14 + 0x10);
      if (lVar2 != 0) {
        pcVar13 = pcVar14;
        if (0xf < *(ulonglong *)(pcVar14 + 0x18)) {
          pcVar13 = *(char **)pcVar14;
          pcVar14 = *(char **)pcVar14;
        }
        for (; ((pcVar13 < pcVar14 + lVar2 && (*pcVar13 != '~')) && (*pcVar13 != ']'));
            pcVar13 = pcVar13 + 1) {
          FUN_140050540(&local_1d8,1);
        }
      }
      pcVar14 = &local_1d8;
      if (0xf < local_1c0) {
        pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
      }
      iVar5 = atoi(pcVar14);
      uVar16 = local_1c0;
      if (iVar5 != param_2) goto LAB_14032d96a;
      iVar5 = (int)local_1c8 + 1;
      plVar1 = local_1f8 + (int)uVar12;
      puVar9 = (undefined8 *)*plVar1;
      local_1c8 = 0;
      pcVar14 = &local_1d8;
      if (0xf < local_1c0) {
        pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
      }
      *pcVar14 = '\0';
      uVar16 = puVar9[2];
      if ((uVar16 != 0) && ((ulonglong)(longlong)iVar5 <= uVar16)) {
        puVar3 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar3 = (undefined8 *)*puVar9;
          puVar9 = (undefined8 *)*puVar9;
        }
        for (pcVar14 = (char *)((longlong)iVar5 + (longlong)puVar3);
            ((pcVar14 < (char *)(uVar16 + (longlong)puVar9) && (*pcVar14 != '~')) &&
            (*pcVar14 != ']')); pcVar14 = pcVar14 + 1) {
          FUN_140050540(&local_1d8,1);
        }
      }
      uVar19 = 0;
      puVar9 = (undefined8 *)*plVar1;
      uVar12 = uVar19;
      if (puVar9[2] != 0) {
        uVar16 = uVar19;
        uVar17 = uVar19;
        do {
          puVar7 = puVar9;
          puVar3 = puVar9;
          if (0xf < (ulonglong)puVar9[3]) {
            puVar7 = (undefined8 *)*puVar9;
            puVar3 = (undefined8 *)*puVar9;
          }
          uVar12 = (ulonglong)
                   (uint)((int)uVar12 +
                         (int)*(char *)((longlong)puVar3 + uVar16) *
                         (int)*(char *)(uVar16 + (longlong)puVar7));
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          uVar16 = uVar16 + 1;
        } while ((ulonglong)(longlong)(int)uVar15 < (ulonglong)puVar9[2]);
      }
      pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
      uVar16 = local_1c0;
      uVar17 = uVar19;
      uVar18 = local_1c8;
      if (local_1c8 != 0) {
        do {
          pcVar13 = &local_1d8;
          if (0xf < uVar16) {
            pcVar13 = pcVar14;
          }
          if (pcVar13[uVar19] == '\\') {
            pcVar13 = &local_1d8;
            if (0xf < uVar16) {
              pcVar13 = pcVar14;
            }
            pcVar13[uVar19] = '/';
            pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
            uVar16 = local_1c0;
            uVar18 = local_1c8;
          }
          uVar15 = (int)uVar17 + 1;
          uVar19 = uVar19 + 1;
          uVar17 = (ulonglong)uVar15;
        } while ((ulonglong)(longlong)(int)uVar15 < uVar18);
      }
      iVar5 = (int)uVar12;
      switch(param_2) {
      case 1:
        if (iVar5 == 0x292da) goto switchD_14032daf3_default;
        break;
      case 2:
        if (iVar5 == 0x5dce2) goto switchD_14032daf3_default;
        break;
      case 3:
        if (iVar5 == 0x572de) goto switchD_14032daf3_default;
        break;
      case 4:
        if (iVar5 == 0x45280) goto switchD_14032daf3_default;
        break;
      case 5:
        if (iVar5 == 0x59de9) goto switchD_14032daf3_default;
        break;
      case 6:
        if (iVar5 == 0x4c115) goto switchD_14032daf3_default;
        break;
      case 7:
        if (iVar5 == 0x50f26) goto switchD_14032daf3_default;
        break;
      case 8:
        if (iVar5 == 0x5bedc) goto switchD_14032daf3_default;
        break;
      case 9:
        if (iVar5 == 0x59a79) goto switchD_14032daf3_default;
        break;
      case 10:
        if (iVar5 == 0x54906) goto switchD_14032daf3_default;
        break;
      case 0xb:
        if (iVar5 == 0x59b5b) goto switchD_14032daf3_default;
        break;
      case 0xc:
        if (iVar5 == 0x265b5) goto switchD_14032daf3_default;
        break;
      case 0xd:
        if (iVar5 == 0x1fbe8) goto switchD_14032daf3_default;
        break;
      case 0xe:
        if (iVar5 == 0x192c0) goto switchD_14032daf3_default;
        break;
      case 0xf:
        if (iVar5 == 0x17eea) goto switchD_14032daf3_default;
        break;
      case 0x10:
        if (iVar5 == 0x150ef) goto switchD_14032daf3_default;
        break;
      case 0x11:
        if (iVar5 == 0x197a9) goto switchD_14032daf3_default;
        break;
      case 0x12:
        if (iVar5 == 0xcdeb) goto switchD_14032daf3_default;
        break;
      case 0x13:
        if (iVar5 == 0x5416) goto switchD_14032daf3_default;
        break;
      case 0x14:
        if (iVar5 == 0x3c4d0) goto switchD_14032daf3_default;
        break;
      case 0x15:
        if (iVar5 == 0x474df) goto switchD_14032daf3_default;
        break;
      case 0x16:
        if (iVar5 == 0x27d43) goto switchD_14032daf3_default;
        break;
      case 0x17:
        if (iVar5 == 0x2fbf7) goto switchD_14032daf3_default;
        break;
      case 0x18:
      case 0x2a:
        if (iVar5 == 0x28c6a) goto switchD_14032daf3_default;
        break;
      case 0x19:
        if (iVar5 == 0x20f3d) goto switchD_14032daf3_default;
        break;
      case 0x1a:
        if (iVar5 == 0x3b1e0) goto switchD_14032daf3_default;
        break;
      case 0x1b:
        if (iVar5 == 0x3b2b2) goto switchD_14032daf3_default;
        break;
      case 0x1c:
        if (iVar5 == 0x3b388) goto switchD_14032daf3_default;
        break;
      case 0x1d:
        if (iVar5 == 0x30ed4) goto switchD_14032daf3_default;
        break;
      case 0x1e:
        if (iVar5 == 0x2adbb) goto switchD_14032daf3_default;
        break;
      case 0x1f:
        if (iVar5 == 0x16b3e) goto switchD_14032daf3_default;
        break;
      case 0x20:
        if (iVar5 == 0x2d6aa) goto switchD_14032daf3_default;
        break;
      case 0x21:
        if (iVar5 == 0x2bce7) goto switchD_14032daf3_default;
        break;
      case 0x22:
        if (iVar5 == 0x5814d) goto switchD_14032daf3_default;
        break;
      case 0x23:
        if (iVar5 == 0x583ef) goto switchD_14032daf3_default;
        break;
      case 0x24:
        if (iVar5 == 0x6973c) goto switchD_14032daf3_default;
        break;
      case 0x25:
        if (iVar5 == 0x4a1e3) goto switchD_14032daf3_default;
        break;
      case 0x26:
        if (iVar5 == 0x5b08e) goto switchD_14032daf3_default;
        break;
      case 0x27:
        if (iVar5 == 0x55f37) goto switchD_14032daf3_default;
        break;
      case 0x28:
        if (iVar5 == 0x4329e) goto switchD_14032daf3_default;
        break;
      case 0x29:
        if (iVar5 == 0x3eb84) goto switchD_14032daf3_default;
        break;
      case 0x2b:
        if (iVar5 == 0x429d4) goto switchD_14032daf3_default;
        break;
      case 0x2c:
        if (iVar5 == 0x5df91) goto switchD_14032daf3_default;
        break;
      case 0x2d:
        if (iVar5 == 0xb5dcc) goto switchD_14032daf3_default;
        break;
      case 0x2e:
        if (iVar5 == 0xb50de) goto switchD_14032daf3_default;
        break;
      case 0x2f:
        if (iVar5 == 0x94dd3) goto switchD_14032daf3_default;
        break;
      case 0x30:
        if (iVar5 == 0xa2e68) goto switchD_14032daf3_default;
        break;
      case 0x31:
        if (iVar5 == 0xb1029) goto switchD_14032daf3_default;
        break;
      case 0x32:
        if (iVar5 == 0x93dd4) goto switchD_14032daf3_default;
        break;
      case 0x33:
        if (iVar5 == 0x91578) goto switchD_14032daf3_default;
        break;
      case 0x34:
        if (iVar5 == 0x9929b) goto switchD_14032daf3_default;
        break;
      case 0x35:
        if (iVar5 == 0x3b30f) goto switchD_14032daf3_default;
        break;
      default:
switchD_14032daf3_default:
        if (param_1 != &local_1d8) {
          FUN_14000c8b0(param_1,&local_1d8,0,0xffffffffffffffff);
          pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
          uVar16 = local_1c0;
        }
        if (0xf < uVar16) {
          FUN_140002020(pcVar14,uVar16 + 1,1);
        }
        local_1c0 = 0xf;
        local_1c8 = 0;
        local_1d8 = '\0';
        FUN_140051e20(&local_1f8);
        if (local_1f8 != (undefined8 *)0x0) {
          FUN_140002020(local_1f8,local_1e8 - (longlong)local_1f8 >> 3,8);
        }
        if (0xf < local_140) {
          FUN_140002020(CONCAT71(uStack_157,local_158),local_140 + 1,1);
        }
        local_140 = 0xf;
        local_148 = 0;
        local_158 = '\0';
        if (0xf < local_180) {
          FUN_140002020(CONCAT71(uStack_197,local_198),local_180 + 1,1);
        }
        local_180 = 0xf;
        local_188 = 0;
        local_198 = 0;
        if (0xf < local_160) {
          FUN_140002020(CONCAT71(uStack_177,local_178),local_160 + 1,1);
        }
        return;
      }
      goto LAB_14032df45;
    }
LAB_14032df40:
    pcVar14 = (char *)CONCAT71(uStack_1d7,local_1d8);
LAB_14032df45:
    if (0xf < uVar16) {
      FUN_140002020(pcVar14,uVar16 + 1,1);
    }
  }
  local_1c0 = 0xf;
  local_1c8 = 0;
  local_1d8 = '\0';
  FUN_140050540(&local_1d8,1,DAT_1410b6782 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67be + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6746 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6745 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6780 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b674d + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b678b + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6754 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6714 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b674f + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b675c + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b673f + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b678f + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67a1 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6706 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6717 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67c5 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67ae + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b673c + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6725 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b672c + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67ad + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67a2 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6705 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b671c + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b678c + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b675e + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6753 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6704 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6752 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67b8 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b678e + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b672d + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6747 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b670b + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67b6 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b679b + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b677d + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6778 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b677a + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b677b + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b677c + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6792 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6707 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6713 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6726 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67b1 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b671e + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67bf + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67b4 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b674e + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6757 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b675a + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6728 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6724 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6796 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b674c + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6785 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67ab + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6715 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67b9 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b670f + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b678d + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6718 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67a5 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67a9 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67b5 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b670c + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67af + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67b3 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6784 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6721 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6783 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b670a + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6744 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b671a + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b675f + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b670e + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6756 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b671f + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67bd + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6787 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67a3 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b671d + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b679c + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6716 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b679f + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67bc + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67b0 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6751 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67a0 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67ba + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6712 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b672b + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6758 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6727 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b678a + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b677f + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b670d + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b672e + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6709 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6779 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6722 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b673e + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b675b + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6748 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67ac + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6729 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b671b + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6789 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67a4 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67b7 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67b2 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b679e + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6793 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b67aa + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67c0 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6795 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b677e + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67c3 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6786 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b673d + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6798 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67a7 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b672f + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6755 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67bb + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6788 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6720 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b6797 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6710 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b6708 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67c1 + -1);
  FUN_140050540(&local_1d8,1,DAT_1410b6799 + -2);
  FUN_140050540(&local_1d8,1,DAT_1410b67a6 + -3);
  FUN_140050540(&local_1d8,1,DAT_1410b67c4 + -1);
  local_1a0 = 0xf;
  local_1a8 = 0;
  local_1b8 = '\0';
  FUN_140050540(&local_1b8,1,DAT_1410b675d + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b6750 + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b67c2 + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b6749 + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b679a + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b674b + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b6794 + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b6723 + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b672a + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b679d + '\n');
  FUN_140050540(&local_1b8,1,DAT_1410b6781 + '\n');
  lpCaption = &local_1b8;
  if (0xf < local_1a0) {
    lpCaption = (LPCSTR)CONCAT71(uStack_1b7,local_1b8);
  }
  lpText = &local_1d8;
  if (0xf < local_1c0) {
    lpText = (LPCSTR)CONCAT71(uStack_1d7,local_1d8);
  }
  MessageBoxA((HWND)0x0,lpText,lpCaption,0x30);
                    /* WARNING: Subroutine does not return */
  exit(1);
LAB_14032d96a:
  uVar15 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar15;
  puVar9 = puVar9 + 1;
  if (uVar19 <= (ulonglong)(longlong)(int)uVar15) goto LAB_14032df40;
  goto LAB_14032d8c2;
}

