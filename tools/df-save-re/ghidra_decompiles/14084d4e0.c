// FUN_14084d4e0 @ 14084d4e0
// callees:
//   -> 1405cc580 FUN_1405cc580
//   -> 1408317f0 FUN_1408317f0
//   -> 140d89d60 FUN_140d89d60
//   -> 14000d840 FUN_14000d840
//   -> 140301e40 FUN_140301e40


void FUN_14084d4e0(undefined8 param_1,ushort param_2,undefined2 param_3,short param_4,ushort param_5
                  ,uint param_6,undefined8 param_7,uint param_8,uint param_9,longlong *param_10)

{
  longlong *plVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  longlong lVar5;
  undefined2 *puVar6;
  short *psVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  switch(param_2) {
  case 0xc:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(undefined4 *)(puVar6 + 8) = 10;
    *(undefined4 *)(puVar6 + 0x38) = 10;
    puVar6[10] = 0x48;
    *puVar6 = 0x38;
    *(undefined4 *)(puVar6 + 6) = 0x20;
    break;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
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
  case 0x59:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x6d:
  case 0x70:
  case 0x7c:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa2:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xa8:
  case 0xa9:
  case 0xaa:
  case 0xab:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xb9:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 0xca:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd6:
  case 0xd8:
  case 0xd9:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
    break;
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
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x83:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x8d:
  case 0x8e:
  case 0xc3:
  case 200:
  case 0xc9:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xd4:
  case 0xda:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    if (((param_5 == 0) && (param_6 == 0xffffffff)) ||
       ((lVar5 = FUN_140d89d60(&DAT_141c53470,param_5,param_6), lVar5 != 0 &&
        ((7 < *(int *)(lVar5 + 0x298) && ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 7) & 0x10) != 0)
         ))))) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 4;
      puVar6[2] = param_5;
      *(uint *)(puVar6 + 4) = param_6;
      if (param_6 == 0xffffffff) {
        if (param_2 == 0x61) {
          *(undefined4 *)(puVar6 + 6) = 0x80;
        }
        else {
          *(undefined4 *)(puVar6 + 0xc) = 0x800;
        }
        *(undefined4 *)(puVar6 + 0xe) = 0x40;
      }
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
      if (param_2 == 0x61) {
        puVar6 = (undefined2 *)FUN_1405cc580(param_1);
        *puVar6 = 5;
        *(undefined4 *)(puVar6 + 0xc) = 0x4000;
        *(undefined4 *)(puVar6 + 8) = 1;
        uVar3 = FUN_1408317f0();
        puVar6[10] = uVar3;
      }
    }
    if ((param_8 & 2) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 5;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
    }
    if ((param_8 & 8) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0x39;
      puVar6[2] = param_5;
      *(uint *)(puVar6 + 4) = param_6;
      *(undefined4 *)(puVar6 + 8) = 10000;
      uVar3 = FUN_1408317f0();
      *(undefined4 *)(puVar6 + 0xc) = 0x8000;
      uVar9 = *(undefined4 *)(puVar6 + 0xc);
      puVar6[10] = uVar3;
      *(undefined4 *)(puVar6 + 0x38) = 10000;
      if (DAT_141697462 != '\0') {
        uVar9 = 0x8004;
      }
      *(undefined4 *)(puVar6 + 0xc) = uVar9;
    }
    if ((param_8 >> 0xc & 1) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0x39;
      puVar6[2] = param_5;
      *(uint *)(puVar6 + 4) = param_6;
      *(undefined4 *)(puVar6 + 8) = 10000;
      uVar3 = FUN_1408317f0();
      *(undefined4 *)(puVar6 + 0xc) = 0x80000000;
      uVar9 = *(undefined4 *)(puVar6 + 0xc);
      puVar6[10] = uVar3;
      *(undefined4 *)(puVar6 + 0x38) = 10000;
      if (DAT_141697462 != '\0') {
        uVar9 = 0x80000004;
      }
      *(undefined4 *)(puVar6 + 0xc) = uVar9;
    }
    if ((param_8 >> 8 & 1) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
      *(undefined4 *)(puVar6 + 0xc) = 0x1000000;
    }
    if ((param_8 & 4) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0x39;
      *(undefined4 *)(puVar6 + 8) = 10000;
      uVar3 = FUN_1408317f0();
      *(undefined4 *)(puVar6 + 0xc) = 0x4000;
      uVar9 = *(undefined4 *)(puVar6 + 0xc);
      puVar6[10] = uVar3;
      *(undefined4 *)(puVar6 + 0x38) = 10000;
      if (DAT_141697462 != '\0') {
        uVar9 = 0x4004;
      }
      *(undefined4 *)(puVar6 + 0xc) = uVar9;
    }
    if ((param_8 & 0x10) != 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0x36;
      *(uint *)(puVar6 + 4) = param_6;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
    }
    if ((param_8 & 0x40) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2040000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 9 & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x6000000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 10 & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2100000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 0xb & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2200000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 & 0x20) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2020000;
      if ((((ushort)(param_2 - 0x51) < 0x33) &&
          ((0x4003000210005U >> ((ulonglong)(param_2 - 0x51) & 0x3f) & 1) != 0)) ||
         ((ushort)(param_2 - 0xe8) < 8)) {
        *(undefined4 *)(lVar5 + 0x10) = 1;
      }
      else {
        *(undefined4 *)(lVar5 + 0x10) = 3;
      }
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    lVar5 = FUN_140d89d60(&DAT_141c53470,param_5,param_6);
    if (((lVar5 != 0) && (6 < *(int *)(lVar5 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 6) & 2) != 0)) {
      if (param_5 != 5) {
        lVar5 = FUN_1405cc580(param_1);
        *(undefined4 *)(lVar5 + 0xc) = 0x800000;
        *(undefined4 *)(lVar5 + 0x10) = 1;
        *(undefined2 *)(lVar5 + 0x14) = 0x51;
      }
      if (param_5 != 3) {
        puVar6 = (undefined2 *)FUN_1405cc580(param_1);
        *puVar6 = 0;
        puVar6[2] = 10;
        *(undefined4 *)(puVar6 + 8) = 1;
        uVar3 = FUN_1408317f0(10,0);
        puVar6[10] = uVar3;
      }
      if (param_5 == 5) {
        puVar6 = (undefined2 *)FUN_1405cc580(param_1);
        *puVar6 = 3;
        *(undefined4 *)(puVar6 + 0xc) = 0x10;
        *(undefined4 *)(puVar6 + 8) = 1;
        uVar3 = FUN_1408317f0(0x10,3);
        puVar6[10] = uVar3;
      }
      if ((param_10 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*param_10 + 0x260))(), cVar2 == '\0')) {
        puVar6 = (undefined2 *)FUN_1405cc580(param_1);
        *puVar6 = 0;
        puVar6[2] = 7;
        *(undefined4 *)(puVar6 + 8) = 1;
        uVar3 = FUN_1408317f0();
        puVar6[10] = uVar3;
      }
    }
    lVar5 = FUN_140d89d60(&DAT_141c53470,param_5,param_6);
    if (((lVar5 == 0) || (*(int *)(lVar5 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 5) & 0x80) == 0)) break;
    if ((((int)param_6 < 0) ||
        ((ulonglong)(DAT_141d6dbe8 - DAT_141d6dbe0 >> 3) <= (ulonglong)(longlong)(int)param_6)) ||
       (cVar2 = FUN_14000d840(*(longlong *)(DAT_141d6dbe0 + (longlong)(int)param_6 * 8) + 0x38,0x19)
       , cVar2 == '\0')) {
      psVar7 = (short *)FUN_1405cc580(param_1);
      *psVar7 = 0;
      psVar7[2] = param_5;
      *(uint *)(psVar7 + 4) = param_6;
      switch(param_2) {
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7d:
      case 0x7e:
      case 0x80:
      case 0x81:
      case 0x83:
      case 0x85:
      case 0x86:
      case 0x8d:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
        psVar7[8] = 1;
        psVar7[9] = 0;
        break;
      default:
        psVar7[8] = 3;
        psVar7[9] = 0;
        break;
      case 0x61:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6ddd0 + (longlong)param_4 * 8) + 0xf8);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x65:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e0b8 + (longlong)param_4 * 8) + 0x10c);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x66:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e148 + (longlong)param_4 * 8) + 0xd8);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x67:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e160 + (longlong)param_4 * 8) + 0x118);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x75:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e100 + (longlong)param_4 * 8) + 0xd8);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x76:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e118 + (longlong)param_4 * 8) + 0xd8);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x77:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6e130 + (longlong)param_4 * 8) + 0xcc);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0x8e:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6dde8 + (longlong)param_4 * 8) + 0xcc);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        break;
      case 0xda:
        iVar10 = *(int *)(*(longlong *)(DAT_141d6de18 + (longlong)param_4 * 8) + 0x120);
        *(int *)(psVar7 + 8) =
             iVar10 / 3 + (iVar10 >> 0x1f) +
             (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
      }
      if (*(int *)(psVar7 + 8) < 1) {
        psVar7[8] = 1;
        psVar7[9] = 0;
      }
      goto LAB_14084e2e8;
    }
    psVar7 = (short *)FUN_1405cc580(param_1);
    switch(param_2) {
    case 0x65:
      lVar5 = *(longlong *)(DAT_141d6e0b8 + (longlong)param_4 * 8);
      if (*(int *)(lVar5 + 0x118) < 1) goto switchD_14084dee0_caseD_68;
      pbVar8 = *(byte **)(lVar5 + 0x110);
      goto LAB_14084df62;
    case 0x66:
      lVar5 = *(longlong *)(DAT_141d6e148 + (longlong)param_4 * 8);
      break;
    case 0x67:
      lVar5 = *(longlong *)(DAT_141d6e160 + (longlong)param_4 * 8);
      if (0 < *(int *)(lVar5 + 0x128)) {
        pbVar8 = *(byte **)(lVar5 + 0x120);
        goto LAB_14084df62;
      }
    default:
      goto switchD_14084dee0_caseD_68;
    case 0x75:
      lVar5 = *(longlong *)(DAT_141d6e100 + (longlong)param_4 * 8);
      break;
    case 0x76:
      lVar5 = *(longlong *)(DAT_141d6e118 + (longlong)param_4 * 8);
      break;
    case 0x85:
    case 0x86:
      goto switchD_14084dee0_caseD_85;
    }
    if (*(int *)(lVar5 + 0xe8) < 1) {
switchD_14084dee0_caseD_68:
      *psVar7 = 0;
    }
    else {
      pbVar8 = *(byte **)(lVar5 + 0xe0);
LAB_14084df62:
      if ((*pbVar8 & 1) == 0) goto switchD_14084dee0_caseD_68;
switchD_14084dee0_caseD_85:
      *psVar7 = 0x39;
    }
    psVar7[2] = param_5;
    *(uint *)(psVar7 + 4) = param_6;
    switch(param_2) {
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
    case 0x62:
    case 0x7f:
    case 0xc3:
    case 200:
    case 0xc9:
    case 0xcb:
    case 0xcc:
    case 0xd4:
      psVar7[8] = 9;
      psVar7[9] = 0;
      break;
    case 0x51:
    case 0x79:
    case 0x87:
      psVar7[8] = 4;
      psVar7[9] = 0;
      break;
    default:
      psVar7[8] = 1;
      psVar7[9] = 0;
      break;
    case 0x61:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6ddd0 + (longlong)param_4 * 8) + 0xf8);
      break;
    case 0x65:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e0b8 + (longlong)param_4 * 8) + 0x10c);
      break;
    case 0x66:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e148 + (longlong)param_4 * 8) + 0xd8);
      break;
    case 0x67:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e160 + (longlong)param_4 * 8) + 0x118);
      break;
    case 0x75:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e100 + (longlong)param_4 * 8) + 0xd8);
      break;
    case 0x76:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e118 + (longlong)param_4 * 8) + 0xd8);
      break;
    case 0x77:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6e130 + (longlong)param_4 * 8) + 0xcc);
      break;
    case 0x78:
      psVar7[8] = 6;
      psVar7[9] = 0;
      break;
    case 0x7e:
    case 0x80:
    case 0x8d:
    case 0xce:
      psVar7[8] = 3;
      psVar7[9] = 0;
      break;
    case 0x85:
    case 0x86:
    case 0xcd:
      psVar7[8] = 2;
      psVar7[9] = 0;
      break;
    case 0x8e:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6dde8 + (longlong)param_4 * 8) + 0xcc);
      break;
    case 0xda:
      *(undefined4 *)(psVar7 + 8) =
           *(undefined4 *)(*(longlong *)(DAT_141d6de18 + (longlong)param_4 * 8) + 0x120);
    }
    if (*(int *)(psVar7 + 8) < 1) {
      psVar7[8] = 1;
      psVar7[9] = 0;
    }
    if (*psVar7 == 0x39) {
      psVar7[0x38] = 10000;
      psVar7[0x39] = 0;
      *(int *)(psVar7 + 8) = *(int *)(psVar7 + 8) * 10000;
    }
    if (*psVar7 == 0) {
LAB_14084e2e8:
      psVar7[0x38] = 0x96;
      psVar7[0x39] = 0;
      *(int *)(psVar7 + 8) = *(int *)(psVar7 + 8) * 0x96;
    }
    sVar4 = FUN_1408317f0();
    psVar7[10] = sVar4;
    if ((param_10 == (longlong *)0x0) || (cVar2 = (**(code **)(*param_10 + 0x260))(), cVar2 == '\0')
       ) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      *puVar6 = 0;
      puVar6[2] = 7;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
    }
    break;
  case 0x55:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    lVar5 = FUN_140d89d60(&DAT_141c53470,param_5,param_6);
    if (((lVar5 == 0) || (*(int *)(lVar5 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar5 + 0x290) + 6) & 1) == 0)) {
      *puVar6 = 4;
    }
    else {
      *puVar6 = 3;
    }
    *(uint *)(puVar6 + 4) = param_6;
    *(undefined4 *)(puVar6 + 8) = 1;
    puVar6[2] = param_5;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    break;
  case 0x56:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 3;
    puVar6[2] = param_5;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_5,3);
    puVar6[10] = uVar3;
    break;
  case 0x57:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    goto LAB_14084ea1b;
  case 0x58:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    param_6 = (uint)param_5;
    puVar6[2] = param_5;
LAB_14084ea1b:
    *puVar6 = 1;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_6,1);
    puVar6[10] = uVar3;
    lVar5 = FUN_1405cc580(param_1);
    uVar9 = 1;
    if ((param_9 >> 10 & 1) != 0) {
      uVar9 = 0x8000001;
    }
    *(undefined4 *)(lVar5 + 0xc) = uVar9;
    if ((param_9 & 4) != 0) {
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x60000000;
    }
    if ((param_9 & 0x40) != 0) {
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10000000;
    }
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 1;
    break;
  case 0x5a:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    *puVar6 = 4;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_6,4);
    puVar6[10] = uVar3;
    goto LAB_14084e795;
  case 0x5b:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0x18) = 0x1400;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x58;
LAB_14084e795:
    if ((param_10 == (longlong *)0x0) || (cVar2 = (**(code **)(*param_10 + 0x260))(), cVar2 == '\0')
       ) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
LAB_14084e7c4:
      *puVar6 = 0;
      puVar6[2] = 7;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
    }
    break;
  case 0x5c:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    *puVar6 = 4;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_6,4);
    puVar6[10] = uVar3;
    break;
  case 0x5d:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    uVar3 = 0x34;
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    goto LAB_14084e8b3;
  case 0x68:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_6,0);
    puVar6[10] = uVar3;
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 1;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 1;
    break;
  case 0x69:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x400012;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x19;
    break;
  case 0x6a:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    uVar3 = 0x31;
    *(undefined4 *)(puVar6 + 6) = 0x10;
    goto LAB_14084e8b3;
  case 0x6b:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x35;
    *(undefined4 *)(puVar6 + 6) = 0x14;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x1e;
    *(undefined4 *)(puVar6 + 6) = 0x1400;
    goto LAB_14084e8bb;
  case 0x6c:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = param_3;
    puVar6[1] = param_4;
    puVar6[2] = (undefined2)param_6;
    goto LAB_14084e8bb;
  case 0x6e:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x2000010;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x50;
    break;
  case 0x6f:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    uVar3 = 0x35;
    *(undefined4 *)(puVar6 + 6) = 0x810;
    goto LAB_14084e8b3;
  case 0x71:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *(undefined4 *)(puVar6 + 6) = 0x20010;
    goto LAB_14084d72b;
  case 0x72:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x35;
    *(undefined4 *)(puVar6 + 6) = 0x80010;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x11;
    *(undefined4 *)(puVar6 + 6) = 0x400;
    goto LAB_14084e8bb;
  case 0x73:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x102010;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x50;
    if (0 < (int)((int)(short)param_5 - 1U)) {
      uVar11 = (ulonglong)((int)(short)param_5 - 1U);
      do {
        lVar5 = FUN_1405cc580(param_1);
        *(undefined4 *)(lVar5 + 0xc) = 0x2010;
        *(undefined4 *)(lVar5 + 0x10) = 1;
        *(undefined2 *)(lVar5 + 0x14) = 0x50;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    break;
  case 0x74:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x38;
    puVar6[2] = param_5;
    *(undefined4 *)(puVar6 + 6) = 0x40;
    if ((param_8 >> 0xc & 1) == 0) {
      if ((param_8 & 1) == 0) {
        if ((param_8 & 8) != 0) {
          *(undefined4 *)(puVar6 + 0xc) = 0x8000;
        }
      }
      else {
        *(undefined4 *)(puVar6 + 0xc) = 0x4000;
      }
    }
    else {
      *(undefined4 *)(puVar6 + 0xc) = 0x80000000;
    }
    if (param_9 != 0) {
      *(uint *)(puVar6 + 0xc) = *(uint *)(puVar6 + 0xc) | 4;
    }
    *(undefined4 *)(puVar6 + 8) = 15000;
    *(undefined4 *)(puVar6 + 0x38) = 15000;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    break;
  case 0x82:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0x18) = 0x2080000;
    goto LAB_14084e37c;
  case 0x84:
    if ((param_8 & 0x20) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2020000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 & 0x40) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2040000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 9 & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x6000000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 10 & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2100000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    if ((param_8 >> 0xb & 1) != 0) {
      lVar5 = FUN_1405cc580(param_1);
      *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
      *(undefined4 *)(lVar5 + 0x18) = 0x2200000;
      *(undefined4 *)(lVar5 + 0x10) = 1;
      *(undefined2 *)(lVar5 + 0x14) = 0x15;
    }
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 1;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 1;
    break;
  case 0x88:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 5;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    if ((param_8 & 2) == 0) {
      puVar6 = (undefined2 *)FUN_1405cc580(param_1);
      puVar6[2] = param_5;
      *(uint *)(puVar6 + 4) = param_6;
      *puVar6 = 0x41;
      goto LAB_14084e8bb;
    }
    break;
  case 0x89:
  case 0x90:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 4;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    *(undefined4 *)(puVar6 + 0xc) = 0x800;
    *(undefined4 *)(puVar6 + 0xe) = 0x40;
    break;
  case 0x8f:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x10;
    *(undefined4 *)(puVar6 + 6) = 0x400;
    goto LAB_14084e8bb;
  case 0x97:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *(undefined4 *)(puVar6 + 6) = 0x4010;
LAB_14084d72b:
    *puVar6 = 0x35;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
LAB_14084d7ea:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0xb;
    *(undefined4 *)(puVar6 + 6) = 0x1000400;
    goto LAB_14084e8bb;
  case 0x98:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined2 *)(lVar5 + 0x14) = 0x18;
    *(undefined4 *)(lVar5 + 0xc) = 0x8010;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0xb;
    *(undefined4 *)(puVar6 + 6) = 0x1000400;
    goto LAB_14084e8bb;
  case 0x99:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x10010;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x18;
    goto LAB_14084d7ea;
  case 0x9a:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined2 *)(lVar5 + 0x14) = 0x18;
    *(undefined4 *)(lVar5 + 0xc) = 0x200000;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x10;
    *(undefined2 *)(lVar5 + 0x14) = 0x1f;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    break;
  case 0xba:
  case 0xbb:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 5;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    break;
  case 0xbc:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0;
    puVar6[2] = 9;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x12;
    *(undefined4 *)(puVar6 + 6) = 0x400;
    goto LAB_14084e8bb;
  case 0xbd:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x80000000;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x33;
    break;
  case 0xbe:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0;
    puVar6[2] = 8;
    goto LAB_14084e8bb;
  case 0xbf:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0;
    puVar6[2] = 9;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    break;
  case 0xc0:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x38;
    *(undefined4 *)(puVar6 + 6) = 0x40;
    *(undefined4 *)(puVar6 + 8) = 15000;
    *(undefined4 *)(puVar6 + 0x38) = 15000;
    goto LAB_14084e5b9;
  case 0xc1:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x39;
    *(undefined4 *)(puVar6 + 8) = 10000;
    *(undefined4 *)(puVar6 + 0x38) = 10000;
LAB_14084e5b9:
    *(undefined4 *)(puVar6 + 0xc) = 2;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0xc) = 0x10;
    *(undefined4 *)(lVar5 + 0x18) = 1;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x50;
    break;
  case 0xc2:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0x18) = 8;
    *(undefined4 *)(lVar5 + 0xc) = 0x400;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 1;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    if ((param_8 & 0x10) == 0) {
      puVar6[2] = param_5;
      *(uint *)(puVar6 + 4) = param_6;
      *puVar6 = 0x39;
      if ((param_8 & 4) != 0) {
        *(undefined4 *)(puVar6 + 0xc) = 0x4000;
      }
      if ((param_8 & 8) != 0) {
        *(undefined4 *)(puVar6 + 0xc) = 0x8000;
      }
      if ((param_8 >> 0xc & 1) != 0) {
        *(undefined4 *)(puVar6 + 0xc) = 0x80000000;
      }
      if (DAT_141697462 != '\0') {
        *(uint *)(puVar6 + 0xc) = *(uint *)(puVar6 + 0xc) | 4;
      }
      *(undefined4 *)(puVar6 + 8) = 10000;
      *(undefined4 *)(puVar6 + 0x38) = 10000;
      uVar3 = FUN_1408317f0(param_6,0x39);
      puVar6[10] = uVar3;
    }
    else {
      *puVar6 = 0x36;
      *(uint *)(puVar6 + 4) = param_6;
      *(undefined4 *)(puVar6 + 8) = 1;
      uVar3 = FUN_1408317f0();
      puVar6[10] = uVar3;
    }
    break;
  case 0xcf:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    puVar6[2] = param_5;
    *(uint *)(puVar6 + 4) = param_6;
    *puVar6 = 0x14;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0(param_6,0x14);
    puVar6[10] = uVar3;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 0x42;
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    *puVar6 = 10;
    goto LAB_14084e8bb;
  case 0xd3:
    lVar5 = FUN_140301e40(&DAT_141d77940,param_7);
    if (lVar5 == 0) break;
    iVar10 = 0;
    if (*(longlong *)(lVar5 + 0x58) - *(longlong *)(lVar5 + 0x50) >> 3 != 0) {
      lVar12 = 0;
      do {
        plVar1 = *(longlong **)(lVar12 + *(longlong *)(lVar5 + 0x50));
        if ((*(byte *)((longlong)plVar1 + 0x2c) & 2) == 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1,iVar10,*(undefined4 *)(lVar5 + 0x118));
        }
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 8;
      } while ((ulonglong)(longlong)iVar10 <
               (ulonglong)(*(longlong *)(lVar5 + 0x58) - *(longlong *)(lVar5 + 0x50) >> 3));
    }
    if ((((param_10 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*param_10 + 0x260))(), cVar2 != '\0')) ||
        (*(int *)(lVar5 + 0x48) < 1)) || ((**(byte **)(lVar5 + 0x40) & 1) == 0)) break;
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    goto LAB_14084e7c4;
  case 0xd5:
    puVar6 = (undefined2 *)FUN_1405cc580(param_1);
    uVar3 = 0x56;
    *(undefined4 *)(puVar6 + 0xc) = 0x20000000;
LAB_14084e8b3:
    *puVar6 = uVar3;
LAB_14084e8bb:
    *(undefined4 *)(puVar6 + 8) = 1;
    uVar3 = FUN_1408317f0();
    puVar6[10] = uVar3;
    break;
  case 0xd7:
    lVar5 = FUN_1405cc580(param_1);
    *(undefined4 *)(lVar5 + 0x18) = 0x42000000;
LAB_14084e37c:
    *(uint *)(lVar5 + 0xc) = *(uint *)(lVar5 + 0xc) | 0x10;
    *(undefined4 *)(lVar5 + 0x10) = 1;
    *(undefined2 *)(lVar5 + 0x14) = 0x15;
    break;
  default:
    goto switchD_14084d53b_default;
  }
switchD_14084d53b_default:
  return;
}

