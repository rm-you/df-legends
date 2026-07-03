// FUN_1402f78a0 @ 1402f78a0
// callees:
//   -> 14000bc60 FUN_14000bc60
//   -> 1401b2ee0 FUN_1401b2ee0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1401b2e10 FUN_1401b2e10
//   -> 14000c780 FUN_14000c780
//   -> 1402e48d0 FUN_1402e48d0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140002020 FUN_140002020
//   -> 14000bd10 FUN_14000bd10
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402f78a0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [4];
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined8 local_178;
  ulonglong local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_158;
  ulonglong local_150;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 local_138;
  ulonglong local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_1d0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_1f8;
  switch(param_4) {
  case 0:
    local_1d4 = 0x28;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 0x24;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 7;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 4;
    FUN_14000bc60(param_1,&local_1d4);
    uVar3 = FUN_1409fc0c0();
    uVar3 = uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff;
    if (uVar3 >> 0x1e == 0) goto LAB_1402f7ef5;
    if (uVar3 >> 0x1e == 1) {
      local_1d4 = 4;
      goto LAB_1402f7efd;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
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
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
    local_1d4 = 0x28;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 0x24;
    FUN_14000bc60(param_1,&local_1d4);
LAB_1402f7ef5:
    local_1d4 = 0x25;
LAB_1402f7efd:
    FUN_14000bc60(param_2,&local_1d4);
    break;
  case 9:
    local_1d4 = 0x28;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 9;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 3;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 0x10;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    uVar3 = FUN_1409fc0c0();
    uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a;
    if (uVar3 == 0) {
      local_1d4 = 10;
LAB_1402f7b85:
      FUN_14000bc60(param_1,&local_1d4);
    }
    else {
      if (uVar3 == 1) {
        local_1d4 = 0x16;
        goto LAB_1402f7b85;
      }
      if (uVar3 == 2) {
        local_1d4 = 0x1c;
        goto LAB_1402f7b85;
      }
      if (uVar3 == 3) {
        local_1d4 = 0x2b;
        goto LAB_1402f7b85;
      }
      if (uVar3 == 4) {
        local_1d4 = 0x2f;
        goto LAB_1402f7b85;
      }
    }
    uVar3 = FUN_1409fc0c0();
    switch((ulonglong)
           (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x9d89d8a) {
    case 0:
switchD_1402f7e7e_caseD_0:
      local_1d4 = 0;
      break;
    case 1:
      local_1d4 = 0xe;
      break;
    case 2:
switchD_1402f7e7e_caseD_1:
      local_1d4 = 0xf;
      break;
    case 3:
      local_1d4 = 0x12;
      break;
    case 4:
switchD_1402f7e7e_caseD_2:
      local_1d4 = 0x13;
      break;
    case 5:
switchD_1402f7e7e_caseD_3:
      local_1d4 = 0x14;
      break;
    case 6:
switchD_1402f7e7e_caseD_4:
      local_1d4 = 0x15;
      break;
    case 7:
switchD_1402f7e7e_caseD_5:
      local_1d4 = 0x16;
      break;
    case 8:
switchD_1402f7e7e_caseD_6:
      local_1d4 = 0x17;
      break;
    case 9:
switchD_1402f7e7e_caseD_9:
      local_1d4 = 0x1f;
      break;
    case 10:
      local_1d4 = 0x20;
      break;
    case 0xb:
switchD_1402f7e7e_caseD_a:
      local_1d4 = 0x29;
      break;
    case 0xc:
      local_1d4 = 0x2b;
      break;
    default:
      goto switchD_1402f7e7e_default;
    }
LAB_1402f7c4b:
    FUN_14000bc60(param_2,&local_1d4);
switchD_1402f7e7e_default:
    local_1d8[0] = 2;
    goto LAB_1402f7f0f;
  case 0x15:
    local_1d4 = 0x28;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 0x10;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 2;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 8;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 0x2d;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 0;
    FUN_1401b2ee0(param_3,local_1d8);
    local_1d4 = 9;
    FUN_14000bc60(param_1,&local_1d4);
    local_1d4 = 0xffffffff;
    FUN_14000bc60(param_2,&local_1d4);
    local_1d8[0] = 1;
    FUN_1401b2ee0(param_3,local_1d8);
    uVar3 = FUN_1409fc0c0();
    uVar3 = uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d;
    if (uVar3 == 0) {
      local_1d4 = 10;
LAB_1402f7e2d:
      FUN_14000bc60(param_1,&local_1d4);
    }
    else {
      if (uVar3 == 1) {
        local_1d4 = 0x1c;
        goto LAB_1402f7e2d;
      }
      if (uVar3 == 2) {
        local_1d4 = 0x25;
        goto LAB_1402f7e2d;
      }
      if (uVar3 == 3) {
        local_1d4 = 0x2f;
        goto LAB_1402f7e2d;
      }
    }
    uVar3 = FUN_1409fc0c0();
    switch((ulonglong)
           (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0xba2e8bb) {
    case 0:
      goto switchD_1402f7e7e_caseD_0;
    case 1:
      goto switchD_1402f7e7e_caseD_1;
    case 2:
      goto switchD_1402f7e7e_caseD_2;
    case 3:
      goto switchD_1402f7e7e_caseD_3;
    case 4:
      goto switchD_1402f7e7e_caseD_4;
    case 5:
      goto switchD_1402f7e7e_caseD_5;
    case 6:
      goto switchD_1402f7e7e_caseD_6;
    case 7:
      local_1d4 = 0x18;
      break;
    case 8:
      local_1d4 = 0x1b;
      break;
    case 9:
      goto switchD_1402f7e7e_caseD_9;
    case 10:
      goto switchD_1402f7e7e_caseD_a;
    default:
      goto switchD_1402f7e7e_default;
    }
    goto LAB_1402f7c4b;
  default:
    goto switchD_1402f790f_default;
  }
  local_1d8[0] = 3;
LAB_1402f7f0f:
  FUN_1401b2ee0(param_3,local_1d8);
switchD_1402f790f_default:
  lVar1 = param_2[1];
  lVar2 = *param_2;
  iVar4 = (int)param_3[1] - (int)*param_3;
  iVar6 = (int)(param_1[1] - *param_1 >> 2);
  if (iVar6 < iVar4) {
    FUN_1401b2e10(param_3,(longlong)iVar6);
    local_1b0 = 0xf;
    local_1b8 = 0;
    local_1c8 = 0;
    FUN_14000c780(&local_1c8,"ill-sized art actions (1): ",0x1b);
    local_110 = 0xf;
    local_118 = 0;
    local_128 = 0;
    FUN_1402e48d0(param_4,&local_128);
    FUN_14000cb40(&local_1c8,&local_128,0,0xffffffffffffffff);
    FUN_14014a240(&local_1c8);
    if (0xf < local_110) {
      FUN_140002020(CONCAT71(uStack_127,local_128),local_110 + 1,1);
    }
    local_110 = 0xf;
    local_118 = 0;
    local_128 = 0;
    if (0xf < local_1b0) {
      FUN_140002020(CONCAT71(uStack_1c7,local_1c8),local_1b0 + 1,1);
    }
    local_1b0 = 0xf;
    local_1b8 = 0;
    local_1c8 = 0;
  }
  iVar5 = (int)(lVar1 - lVar2 >> 2);
  if (iVar5 < iVar4) {
    FUN_1401b2e10(param_3,(longlong)iVar5);
    local_190 = 0xf;
    local_198 = 0;
    local_1a8 = 0;
    FUN_14000c780(&local_1a8,"ill-sized art actions (2): ",0x1b);
    local_f0 = 0xf;
    local_f8 = 0;
    local_108 = 0;
    FUN_1402e48d0(param_4,&local_108);
    FUN_14000cb40(&local_1a8,&local_108,0,0xffffffffffffffff);
    FUN_14014a240(&local_1a8);
    if (0xf < local_f0) {
      FUN_140002020(CONCAT71(uStack_107,local_108),local_f0 + 1,1);
    }
    local_f0 = 0xf;
    local_f8 = 0;
    local_108 = 0;
    if (0xf < local_190) {
      FUN_140002020(CONCAT71(uStack_1a7,local_1a8),local_190 + 1,1);
    }
    local_190 = 0xf;
    local_198 = 0;
    local_1a8 = 0;
  }
  if (iVar6 < iVar5) {
    FUN_14000bd10(param_2,(longlong)iVar6);
    local_170 = 0xf;
    local_178 = 0;
    local_188 = 0;
    FUN_14000c780(&local_188,"ill-sized art actions (3): ",0x1b);
    local_d0 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    FUN_1402e48d0(param_4,&local_e8);
    FUN_14000cb40(&local_188,&local_e8,0,0xffffffffffffffff);
    FUN_14014a240(&local_188);
    if (0xf < local_d0) {
      FUN_140002020(CONCAT71(uStack_e7,local_e8),local_d0 + 1,1);
    }
    local_d0 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    if (0xf < local_170) {
      FUN_140002020(CONCAT71(uStack_187,local_188),local_170 + 1,1);
    }
    local_170 = 0xf;
    local_178 = 0;
    local_188 = 0;
  }
  if (iVar4 < iVar5) {
    FUN_14000bd10(param_2,(longlong)iVar4);
    local_150 = 0xf;
    local_158 = 0;
    local_168 = 0;
    FUN_14000c780(&local_168,"ill-sized art actions (4): ",0x1b);
    local_b0 = 0xf;
    local_b8 = 0;
    local_c8 = 0;
    FUN_1402e48d0(param_4,&local_c8);
    FUN_14000cb40(&local_168,&local_c8,0,0xffffffffffffffff);
    FUN_14014a240(&local_168);
    if (0xf < local_b0) {
      FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
    }
    local_b0 = 0xf;
    local_b8 = 0;
    local_c8 = 0;
    if (0xf < local_150) {
      FUN_140002020(CONCAT71(uStack_167,local_168),local_150 + 1,1);
    }
    local_150 = 0xf;
    local_158 = 0;
    local_168 = 0;
  }
  if (iVar5 < iVar6) {
    FUN_14000bd10(param_1,(longlong)iVar5);
    local_130 = 0xf;
    local_138 = 0;
    local_148 = 0;
    FUN_14000c780(&local_148,"ill-sized art actions (5): ",0x1b);
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    FUN_1402e48d0(param_4,&local_a8);
    FUN_14000cb40(&local_148,&local_a8,0,0xffffffffffffffff);
    FUN_14014a240(&local_148);
    if (0xf < local_90) {
      FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
    }
    local_90 = 0xf;
    local_98 = 0;
    local_a8 = 0;
    if (0xf < local_130) {
      FUN_140002020(CONCAT71(uStack_147,local_148),local_130 + 1,1);
    }
    local_130 = 0xf;
    local_138 = 0;
    local_148 = 0;
  }
  if (iVar4 < iVar6) {
    FUN_14000bd10(param_1,(longlong)iVar4);
    local_50 = 0xf;
    local_58 = 0;
    local_68 = 0;
    FUN_14000c780(&local_68,"ill-sized art actions (6): ",0x1b);
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    FUN_1402e48d0(param_4,&local_88);
    FUN_14000cb40(&local_68,&local_88,0,0xffffffffffffffff);
    FUN_14014a240(&local_68);
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    if (0xf < local_50) {
      FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
    }
  }
  return;
}

