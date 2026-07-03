// FUN_140c6ead0 @ 140c6ead0
// callees:
//   -> 140dfc99c memset
//   -> 140ca8390 FUN_140ca8390
//   -> 140c7cda0 FUN_140c7cda0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_140c6ead0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_2e8 [40];
  int local_2c0;
  int local_2bc;
  int local_2b8;
  uint local_288 [4];
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1ac;
  int local_1a4;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_124;
  int local_118;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  ulonglong local_38;
  
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_2e8;
  lVar20 = *(longlong *)(param_1 + 0xa78);
  if (lVar20 == 0) {
    return 0x66;
  }
  memset(local_288,0,0x24c);
  if (*(longlong *)(param_1 + 0x13a0) - *(longlong *)(param_1 + 0x1398) >> 3 != 0) {
    switch(*(undefined4 *)(**(longlong **)(param_1 + 0x1398) + 4)) {
    case 0:
      return 0x80;
    case 1:
      uVar9 = 0;
      iVar6 = -1;
      iVar8 = 0;
      if (*(longlong *)(lVar20 + 0x220) - *(longlong *)(lVar20 + 0x218) >> 3 != 0) {
        lVar2 = *(longlong *)(lVar20 + 0x218);
        lVar21 = 0;
        lVar20 = *(longlong *)(lVar20 + 0x220);
        do {
          iVar10 = (int)**(short **)(lVar2 + lVar21);
          if ((iVar10 == 0x5c) || (iVar10 - 0x76U < 7)) {
            uVar24 = *(uint *)(*(short **)(lVar2 + lVar21) + 2);
            local_288[**(short **)(lVar21 + lVar2)] = uVar24;
            if ((int)uVar9 < (int)uVar24) {
              uVar9 = uVar24;
              iVar6 = iVar10;
            }
          }
          iVar8 = iVar8 + 1;
          lVar21 = lVar21 + 8;
        } while ((ulonglong)(longlong)iVar8 < (ulonglong)(lVar20 - lVar2 >> 3));
        if (iVar6 == 0x5c) goto LAB_140c6ec2b;
      }
      if ((int)uVar9 / 2 < local_118) {
        return 0x70;
      }
LAB_140c6ec2b:
      if (((iVar6 != 0x76) && ((int)uVar9 / 2 < local_b0)) ||
         (((iVar6 == 0x5c || (iVar6 == 0x76)) &&
          ((((iVar8 = (int)uVar9 / 2, iVar8 < local_ac || (iVar8 < local_a4)) || (iVar8 < local_a0))
           || ((iVar8 < local_9c || (iVar8 < local_98)))))))) {
        return 0x70;
      }
      if (iVar6 == 0x5c) {
        return 0x71;
      }
      if (iVar6 == 0x76) {
        return 0x73;
      }
      if (iVar6 - 0x77U < 6) {
        return 0x72;
      }
      return 0x70;
    case 2:
      iVar6 = 0;
      if (*(longlong *)(lVar20 + 0x220) - *(longlong *)(lVar20 + 0x218) >> 3 != 0) {
        plVar16 = *(longlong **)(lVar20 + 0x218);
        lVar20 = *(longlong *)(lVar20 + 0x220) - (longlong)plVar16;
        do {
          psVar3 = (short *)*plVar16;
          iVar6 = iVar6 + 1;
          lVar2 = *plVar16;
          plVar16 = plVar16 + 1;
          local_288[*psVar3] = *(uint *)(lVar2 + 4);
        } while ((ulonglong)(longlong)iVar6 < (ulonglong)(lVar20 >> 3));
      }
      lVar20 = FUN_140ca8390(param_1);
      if (lVar20 == 0) {
        return 0x75;
      }
      if (*(longlong *)(lVar20 + 0x130) == 0) {
        return 0x75;
      }
      lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x130) + 0x40);
      if (lVar20 == 0) {
        return 0x75;
      }
      puVar1 = *(uint **)(lVar20 + 0x140);
      if (puVar1 == (uint *)0x0) {
        return 0x75;
      }
      iVar11 = 0;
      iVar14 = 0;
      iVar18 = 0;
      iVar10 = 0;
      iVar22 = 0;
      iVar8 = 0;
      iVar6 = 0;
      uVar9 = 1;
      lVar20 = 0x20;
      local_2c0 = 0;
      local_2bc = 0;
      do {
        if ((uVar9 & *puVar1) != 0) {
          iVar11 = iVar11 + 1;
        }
        if ((uVar9 & puVar1[1]) != 0) {
          iVar11 = iVar11 + 1;
        }
        if ((uVar9 & puVar1[2]) != 0) {
          iVar14 = iVar14 + 1;
        }
        if ((puVar1[3] & uVar9) != 0) {
          iVar14 = iVar14 + 1;
        }
        if ((puVar1[4] & uVar9) != 0) {
          iVar18 = iVar18 + 1;
        }
        if ((puVar1[5] & uVar9) != 0) {
          iVar10 = iVar10 + 1;
        }
        if ((puVar1[6] & uVar9) != 0) {
          iVar22 = iVar22 + 1;
        }
        if ((puVar1[7] & uVar9) != 0) {
          local_2c0 = local_2c0 + 1;
        }
        if ((puVar1[8] & uVar9) != 0) {
          local_2bc = local_2bc + 1;
        }
        if ((puVar1[9] & uVar9) != 0) {
          iVar8 = iVar8 + 1;
        }
        if ((puVar1[10] & uVar9) != 0) {
          iVar8 = iVar8 + 1;
        }
        if ((puVar1[0xb] & uVar9) != 0) {
          iVar8 = iVar8 + 1;
        }
        if ((puVar1[0xc] & uVar9) != 0) {
          iVar6 = iVar6 + 1;
        }
        if ((puVar1[0xd] & uVar9) != 0) {
          iVar6 = iVar6 + 1;
        }
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      uVar9 = 2;
      if (iVar11 < 10) {
LAB_140c6ee9d:
        if ((iVar11 < 5) || ((local_94 < 0xc && (local_90 < 0xc)))) {
          uVar24 = 0;
          if (0 < iVar11) {
            uVar24 = 1;
          }
        }
        else {
LAB_140c6eead:
          uVar24 = 2;
        }
      }
      else {
        if (7 < local_94) goto LAB_140c6eead;
        if (local_90 < 8) goto LAB_140c6ee9d;
        uVar24 = 2;
      }
      if (iVar14 < 10) {
LAB_140c6eed9:
        if ((iVar14 < 5) || ((local_8c < 0xc && (local_90 < 0xc)))) {
          uVar26 = 0;
          if (0 < iVar14) {
            uVar26 = 1;
          }
        }
        else {
LAB_140c6eeea:
          uVar26 = 2;
        }
      }
      else {
        if (7 < local_8c) goto LAB_140c6eeea;
        if (local_90 < 8) goto LAB_140c6eed9;
        uVar26 = 2;
      }
      if ((iVar18 < 10) || (local_94 < 8)) {
        if ((iVar18 < 5) || (local_94 < 0xc)) {
          uVar25 = 0;
          if (0 < iVar18) {
            uVar25 = 1;
          }
        }
        else {
          uVar25 = 2;
        }
      }
      else {
        uVar25 = 2;
      }
      if ((iVar10 < 10) || (local_88 < 8)) {
        if ((iVar10 < 5) || (local_88 < 0xc)) {
          uVar23 = 0;
          if (0 < iVar10) {
            uVar23 = 1;
          }
        }
        else {
          uVar23 = 2;
        }
      }
      else {
        uVar23 = 2;
      }
      if (iVar22 < 10) {
LAB_140c6ef70:
        if ((iVar22 < 5) || ((local_94 < 0xc && (local_124 < 0xc)))) {
          uVar19 = 0;
          if (0 < iVar22) {
            uVar19 = 1;
          }
        }
        else {
LAB_140c6ef80:
          uVar19 = 2;
        }
      }
      else {
        if (7 < local_94) goto LAB_140c6ef80;
        if (local_124 < 8) goto LAB_140c6ef70;
        uVar19 = 2;
      }
      if ((local_2c0 < 10) || (local_84 < 8)) {
        if ((local_2c0 < 5) || (local_84 < 0xc)) {
          uVar15 = 0;
          if (0 < local_2c0) {
            uVar15 = 1;
          }
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        uVar15 = 2;
      }
      if ((local_2bc < 10) || (local_80 < 8)) {
        if ((local_2bc < 5) || (local_80 < 0xc)) {
          uVar12 = 0;
          if (0 < local_2bc) {
            uVar12 = 1;
          }
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        uVar12 = 2;
      }
      if (iVar8 < 10) {
LAB_140c6f012:
        if ((iVar8 < 5) || (((local_198 < 0xc && (local_194 < 0xc)) && (local_190 < 0xc)))) {
          uVar7 = 0;
          if (0 < iVar8) {
            uVar7 = 1;
          }
          goto LAB_140c6f032;
        }
      }
      else if ((local_198 < 8) && (local_194 < 8)) {
        if (7 < local_190) {
          uVar7 = 2;
          goto LAB_140c6f032;
        }
        goto LAB_140c6f012;
      }
      uVar7 = 2;
LAB_140c6f032:
      if ((((iVar6 < 10) || (((local_1ac < 8 && (local_78 < 8)) && (local_7c < 8)))) &&
          ((iVar6 < 5 || (((local_1ac < 0xc && (local_78 < 0xc)) && (local_7c < 0xc)))))) &&
         (uVar9 = 0, 0 < iVar6)) {
        uVar9 = 1;
      }
      uVar5 = (uint)(1 < uVar24);
      if (1 < uVar26) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar25) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar23) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar19) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar15) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar12) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar7) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar9) {
        uVar5 = uVar5 + 1;
      }
      if (1 < uVar5) {
        return 0x74;
      }
      if ((1 < uVar24) && (uVar5 == 1)) {
        return 0x76;
      }
      if ((1 < uVar26) && (uVar5 == 1)) {
        return 0x77;
      }
      if ((1 < uVar25) && (uVar5 == 1)) {
        return 0x78;
      }
      if ((1 < uVar23) && (uVar5 == 1)) {
        return 0x79;
      }
      if ((1 < uVar19) && (uVar5 == 1)) {
        return 0x7a;
      }
      if ((1 < uVar15) && (uVar5 == 1)) {
        return 0x7b;
      }
      if ((1 < uVar12) && (uVar5 == 1)) {
        return 0x7c;
      }
      if ((1 < uVar7) && (uVar5 == 1)) {
        return 0x45;
      }
      if ((uVar9 < 2) || (uVar5 != 1)) {
        uVar5 = (uint)(uVar24 == 1);
        if (uVar26 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar25 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar23 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar19 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar15 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar12 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar7 == 1) {
          uVar5 = uVar5 + 1;
        }
        if (uVar9 == 1) {
          uVar5 = uVar5 + 1;
        }
        if ((uVar24 == 1) && (uVar5 == 1)) {
          return 0x76;
        }
        if ((uVar26 == 1) && (uVar5 == 1)) {
          return 0x77;
        }
        if ((uVar25 == 1) && (uVar5 == 1)) {
          return 0x78;
        }
        if ((uVar23 == 1) && (uVar5 == 1)) {
          return 0x79;
        }
        if ((uVar19 == 1) && (uVar5 == 1)) {
          return 0x7a;
        }
        if ((uVar15 == 1) && (uVar5 == 1)) {
          return 0x7b;
        }
        if ((uVar12 == 1) && (uVar5 == 1)) {
          return 0x7c;
        }
        if ((uVar7 == 1) && (uVar5 == 1)) {
          return 0x45;
        }
        if ((uVar9 != 1) || (uVar5 != 1)) {
          return 0x75;
        }
      }
      return 0x3b;
    case 3:
      return 0x6e;
    case 4:
      return 0x6a;
    case 5:
      return 0x7d;
    case 6:
      return 0x86;
    }
  }
  if ((*(longlong *)(param_1 + 0x1248) != 0) || ((*(uint *)(param_1 + 0x118) & 0x80000000) != 0)) {
    iVar6 = (int)*(short *)(param_1 + 0xa0);
    switch(iVar6) {
    case 0x3b:
    case 0x45:
    case 0x4a:
    case 0x65:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
      goto switchD_140c6f2a0_caseD_3b;
    }
  }
  uVar13 = 0xffffffff;
  uVar17 = 0;
  iVar6 = 0;
  if (*(longlong *)(lVar20 + 0x220) - *(longlong *)(lVar20 + 0x218) >> 3 == 0) {
switchD_140c6f34c_caseD_26:
    iVar6 = 0x66;
  }
  else {
    lVar2 = *(longlong *)(lVar20 + 0x218);
    lVar21 = 0;
    lVar20 = *(longlong *)(lVar20 + 0x220);
    do {
      psVar3 = *(short **)(lVar2 + lVar21);
      uVar9 = (uint)*psVar3;
      cVar4 = FUN_140c7cda0(uVar9);
      if (cVar4 != '\0') {
        uVar24 = *(uint *)(psVar3 + 2);
        local_288[**(short **)(lVar21 + lVar2)] = uVar24;
        if ((int)uVar17 < (int)uVar24) {
          uVar13 = (ulonglong)uVar9;
          uVar17 = (ulonglong)uVar24;
        }
      }
      iVar6 = iVar6 + 1;
      lVar21 = lVar21 + 8;
    } while ((ulonglong)(longlong)iVar6 < (ulonglong)(lVar20 - lVar2 >> 3));
    iVar8 = (int)uVar13;
    iVar10 = (int)uVar17;
    iVar6 = 0;
    switch(iVar8) {
    case 0:
      break;
    case 1:
    case 2:
    case 0x31:
      if ((((iVar8 == 2) || ((int)local_288[2] <= iVar10 / 2)) &&
          ((iVar8 == 0x31 || (local_1c4 <= iVar10 / 2)))) &&
         ((iVar8 == 1 || ((int)local_288[1] <= iVar10 / 2)))) {
        if (iVar8 == 1) {
          iVar6 = 4;
        }
        else if (iVar8 == 2) {
          iVar6 = 2;
        }
        else {
          if (iVar8 != 0x31) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 3;
        }
      }
      else {
        iVar6 = 1;
      }
      break;
    case 3:
    case 4:
      if (((iVar8 == 3) || ((int)local_288[3] <= iVar10 / 2)) &&
         ((iVar8 == 4 || (local_278 <= iVar10 / 2)))) {
        if (iVar8 == 3) {
          iVar6 = 6;
        }
        else {
          if (iVar8 != 4) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 7;
        }
      }
      else {
        iVar6 = 5;
      }
      break;
    case 5:
    case 6:
    case 8:
    case 0xb:
    case 0x39:
      if ((((((iVar8 == 6) || (local_270 <= iVar10 / 2)) &&
            ((iVar8 == 5 || (local_274 <= iVar10 / 2)))) &&
           ((iVar8 == 0x39 || (local_1a4 <= iVar10 / 2)))) &&
          ((iVar8 == 0xb || (local_25c <= iVar10 / 2)))) &&
         ((iVar8 == 8 || (local_268 <= iVar10 / 2)))) {
        if (iVar8 == 5) {
          iVar6 = 10;
        }
        else if (iVar8 == 6) {
          iVar6 = 9;
        }
        else if (iVar8 == 8) {
          iVar6 = 0xd;
        }
        else if (iVar8 == 0xb) {
          iVar6 = 0xc;
        }
        else {
          if (iVar8 != 0x39) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0xb;
        }
      }
      else {
        iVar6 = 8;
      }
      break;
    case 7:
    case 9:
    case 0x18:
      if ((((iVar8 == 0x18) || (local_228 <= iVar10 / 2)) &&
          ((iVar8 == 7 || (local_26c <= iVar10 / 2)))) &&
         ((iVar8 == 9 || (local_264 <= iVar10 / 2)))) {
        if (iVar8 == 7) {
          iVar6 = 0x25;
        }
        else if (iVar8 == 9) {
          iVar6 = 0x26;
        }
        else {
          if (iVar8 != 0x18) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0x24;
        }
      }
      else {
        iVar6 = 0x23;
      }
      break;
    case 10:
    case 0xc:
    case 0xe:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x6d:
    case 0x6e:
    case 0x71:
    case 0x72:
    case 0x75:
      if ((((((iVar8 == 0x13) || (local_23c <= iVar10 / 2)) &&
            ((iVar8 == 0x14 || (local_238 <= iVar10 / 2)))) &&
           ((iVar8 == 0x75 || (local_b4 <= iVar10 / 2)))) &&
          (((iVar8 == 0x6d || (local_d4 <= iVar10 / 2)) &&
           (((iVar8 == 0x6e || (local_d0 <= iVar10 / 2)) &&
            ((iVar8 == 0x15 || (local_234 <= iVar10 / 2)))))))) &&
         (((((iVar8 == 0x12 || (local_240 <= iVar10 / 2)) &&
            ((iVar8 == 0x11 || (local_244 <= iVar10 / 2)))) &&
           (((((iVar8 == 10 || (local_260 <= iVar10 / 2)) &&
              ((iVar8 == 0xc || (local_258 <= iVar10 / 2)))) &&
             (((iVar8 == 0x45 || (local_174 <= iVar10 / 2)) &&
              ((iVar8 == 0x16 || (local_230 <= iVar10 / 2)))))) &&
            ((((iVar8 == 0x17 || (local_22c <= iVar10 / 2)) &&
              ((iVar8 == 0xe || (local_250 <= iVar10 / 2)))) &&
             ((iVar8 == 0x43 || (local_17c <= iVar10 / 2)))))))) &&
          (((iVar8 == 0x44 || (local_178 <= iVar10 / 2)) &&
           ((((iVar8 == 0x42 || (local_180 <= iVar10 / 2)) &&
             ((iVar8 == 0x41 || (local_184 <= iVar10 / 2)))) &&
            (((iVar8 == 0x71 || (local_c4 <= iVar10 / 2)) &&
             ((iVar8 == 0x72 || (local_c0 <= iVar10 / 2)))))))))))) {
        switch(iVar8) {
        case 10:
          iVar6 = 0x2d;
          break;
        default:
switchD_140c6fa6a_caseD_e:
          iVar6 = local_2b8;
          break;
        case 0xc:
          iVar6 = 0x2e;
          break;
        case 0xe:
          iVar6 = 0x32;
          break;
        case 0x11:
          iVar6 = 0x2c;
          break;
        case 0x12:
          iVar6 = 0x2b;
          break;
        case 0x13:
          iVar6 = 0x28;
          break;
        case 0x14:
          iVar6 = 0x29;
          break;
        case 0x15:
          iVar6 = 0x2a;
          break;
        case 0x16:
          iVar6 = 0x30;
          break;
        case 0x17:
          iVar6 = 0x31;
          break;
        case 0x41:
          iVar6 = 0x36;
          break;
        case 0x42:
          iVar6 = 0x35;
          break;
        case 0x43:
          iVar6 = 0x33;
          break;
        case 0x44:
          iVar6 = 0x34;
          break;
        case 0x45:
          iVar6 = 0x2f;
          break;
        case 0x6d:
          iVar6 = 0x37;
          break;
        case 0x6e:
          iVar6 = 0x38;
          break;
        case 0x71:
          iVar6 = 0x39;
          break;
        case 0x72:
          iVar6 = 0x3a;
          break;
        case 0x75:
          iVar6 = 0x6f;
        }
      }
      else {
        iVar6 = 0x27;
      }
      break;
    case 0xd:
    case 0x10:
    case 0x1a:
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x6f:
    case 0x70:
    case 0x73:
    case 0x85:
    case 0x86:
      if (((((((iVar8 == 0x20) || (local_208 <= iVar10 / 2)) &&
             ((iVar8 == 0x85 || (local_74 <= iVar10 / 2)))) &&
            ((iVar8 == 0x86 || (local_70 <= iVar10 / 2)))) &&
           ((iVar8 == 0x21 || (local_204 <= iVar10 / 2)))) &&
          ((((iVar8 == 0x24 || (local_1f8 <= iVar10 / 2)) &&
            ((iVar8 == 0x25 || (local_1f4 <= iVar10 / 2)))) &&
           ((iVar8 == 0xd || (local_254 <= iVar10 / 2)))))) &&
         (((iVar8 == 0x10 || (local_248 <= iVar10 / 2)) &&
          ((((iVar8 == 0x23 || (local_1fc <= iVar10 / 2)) &&
            ((iVar8 == 0x1a || (local_220 <= iVar10 / 2)))) &&
           ((((iVar8 == 0x6f || (local_cc <= iVar10 / 2)) &&
             ((iVar8 == 0x73 || (local_bc <= iVar10 / 2)))) &&
            ((iVar8 == 0x70 || (local_c8 <= iVar10 / 2)))))))))) {
        switch(iVar8) {
        case 0xd:
          iVar6 = 0x1c;
          break;
        default:
          goto switchD_140c6fa6a_caseD_e;
        case 0x10:
          iVar6 = 0x1d;
          break;
        case 0x1a:
          iVar6 = 0x22;
          break;
        case 0x20:
          iVar6 = 0x18;
          break;
        case 0x21:
          iVar6 = 0x19;
          break;
        case 0x23:
          iVar6 = 0x1e;
          break;
        case 0x24:
          iVar6 = 0x1a;
          break;
        case 0x25:
          iVar6 = 0x1b;
          break;
        case 0x6f:
          iVar6 = 0x1f;
          break;
        case 0x70:
          iVar6 = 0x20;
          break;
        case 0x73:
          iVar6 = 0x21;
          break;
        case 0x85:
          iVar6 = 0x7e;
          break;
        case 0x86:
          iVar6 = 0x7f;
        }
      }
      else {
        iVar6 = 0x17;
      }
      break;
    case 0xf:
      iVar6 = 0x44;
      break;
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x22:
      if ((((iVar8 == 0x19) || (local_224 <= iVar10 / 2)) &&
          (((iVar8 == 0x1b || (local_21c <= iVar10 / 2)) &&
           (((iVar8 == 0x1c || (local_218 <= iVar10 / 2)) &&
            ((iVar8 == 0x1d || (local_214 <= iVar10 / 2)))))))) &&
         ((iVar8 == 0x22 || (local_200 <= iVar10 / 2)))) {
        if (iVar8 == 0x19) {
          iVar6 = 0xf;
        }
        else if (iVar8 == 0x1b) {
          iVar6 = 0x10;
        }
        else if (iVar8 == 0x1c) {
          iVar6 = 0x11;
        }
        else if (iVar8 == 0x1d) {
          iVar6 = 0x12;
        }
        else {
          if (iVar8 != 0x22) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0x13;
        }
      }
      else {
        iVar6 = 0xe;
      }
      break;
    case 0x1e:
    case 0x1f:
      if (((iVar8 == 0x1e) || (local_210 <= iVar10 / 2)) &&
         ((iVar8 == 0x1f || (local_20c <= iVar10 / 2)))) {
        if (iVar8 == 0x1e) {
          iVar6 = 0x15;
        }
        else {
          if (iVar8 != 0x1f) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0x16;
        }
      }
      else {
        iVar6 = 0x14;
      }
      break;
    default:
      goto switchD_140c6f34c_caseD_26;
    case 0x2f:
    case 0x30:
    case 0x37:
    case 0x46:
      if ((((iVar8 == 0x37) || (local_1ac <= iVar10 / 2)) &&
          ((iVar8 == 0x2f || (local_1cc <= iVar10 / 2)))) &&
         (((iVar8 == 0x30 || (local_1c8 <= iVar10 / 2)) &&
          ((iVar8 == 0x46 || (local_170 <= iVar10 / 2)))))) {
        if (iVar8 == 0x2f) {
          iVar6 = 0x3d;
        }
        else if (iVar8 == 0x30) {
          iVar6 = 0x3e;
        }
        else if (iVar8 == 0x37) {
          iVar6 = 0x3c;
        }
        else {
          if (iVar8 != 0x46) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0x3f;
        }
      }
      else {
        iVar6 = 0x3b;
      }
      break;
    case 0x3a:
      iVar6 = 0x43;
      break;
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
      if (((((iVar8 == 0x3c) || (local_198 <= iVar10 / 2)) &&
           ((iVar8 == 0x3d || (local_194 <= iVar10 / 2)))) &&
          ((iVar8 == 0x3e || (local_190 <= iVar10 / 2)))) &&
         ((iVar8 == 0x3f || (local_18c <= iVar10 / 2)))) {
        if (iVar8 == 0x3c) {
          iVar6 = 0x46;
        }
        else if (iVar8 == 0x3d) {
          iVar6 = 0x49;
        }
        else if (iVar8 == 0x3e) {
          iVar6 = 0x47;
        }
        else {
          if (iVar8 != 0x3f) goto switchD_140c6fa6a_caseD_e;
          iVar6 = 0x48;
        }
      }
      else {
        iVar6 = 0x45;
      }
      break;
    case 0x4b:
      iVar6 = 0x42;
      break;
    case 0x4c:
      iVar6 = 0x41;
      break;
    case 0x4d:
      iVar6 = 0x40;
    }
  }
switchD_140c6f2a0_caseD_3b:
  return iVar6;
}

