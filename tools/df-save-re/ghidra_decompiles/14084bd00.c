// FUN_14084bd00 @ 14084bd00
// callees:
//   -> 140d89d60 FUN_140d89d60
//   -> 140301e40 FUN_140301e40


ulonglong FUN_14084bd00(undefined2 param_1,int param_2,short param_3,undefined4 param_4,uint param_5
                       ,undefined8 param_6)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 0xd5:
  case 0xe3:
    return 3;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xca:
    return 0;
  case 9:
    return 1;
  case 10:
  case 0x97:
    return 0x17;
  default:
    return 0xffffffff;
  case 0xc:
  case 0x74:
    return 0xd;
  case 0x17:
  case 0x20:
    return 0x18;
  case 0x18:
  case 0x1a:
  case 0xde:
    return 0x39;
  case 0x1f:
  case 0x6c:
  case 0x7e:
    return 0xb;
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
  case 0x62:
  case 0x78:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0xc3:
  case 200:
  case 0xc9:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xd4:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
      return 0x23;
    }
    if (param_3 == 0) {
      lVar2 = FUN_140d89d60(&DAT_141c53470,0,param_4);
      if (((lVar2 != 0) && (5 < *(int *)(lVar2 + 0x298))) &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) != 0)) {
        return 0x1d;
      }
      return 4;
    }
    if ((param_5 & 0x10) != 0) {
      return 0x24;
    }
    if ((param_5 & 2) != 0) {
      return 2;
    }
    if ((ushort)(param_3 - 0x1a3U) < 200) {
      return 0x10;
    }
    if ((param_5 & 0x100d) != 0) {
      return 0x10;
    }
    return 2;
  case 0x53:
  case 0x54:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7d:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
      return 0x23;
    }
    if (param_3 != 0) {
      if ((param_5 & 0xe60) != 0) {
        return 0x25;
      }
      if ((param_5 & 0x10) != 0) {
        return 0x24;
      }
      if ((param_5 & 2) != 0) {
        return 0x20;
      }
LAB_14084c185:
      if ((199 < (ushort)(param_3 - 0x1a3U)) && ((param_5 & 0x100d) == 0)) {
        return 0x20;
      }
      return 0x10;
    }
    break;
  case 0x55:
  case 0x56:
    return 0x1e;
  case 0x57:
  case 0x58:
    return 0x1f;
  case 0x5a:
  case 0x5b:
    return 0x19;
  case 0x5c:
    return 0x1a;
  case 0x5d:
  case 0x5e:
  case 0xbe:
    return 0x16;
  case 0x5f:
  case 0x60:
  case 0x9a:
  case 0x9b:
  case 0xe2:
    return 5;
  case 0x61:
    bVar1 = false;
    if (param_2 != -1) {
      bVar1 = false;
      if (*(longlong *)(*(longlong *)(DAT_141d6ddd0 + (longlong)param_2 * 8) + 0xe0) != 0) {
        bVar1 = true;
      }
    }
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 0x298) < 7)) ||
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) == 0)) {
      if (param_3 == 0) {
        lVar2 = FUN_140d89d60(&DAT_141c53470,0,param_4);
        if (((lVar2 == 0) || (*(int *)(lVar2 + 0x298) < 6)) ||
           ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) == 0)) {
          uVar3 = 0x21;
        }
        else {
          uVar3 = 0x1b;
        }
      }
      else if (bVar1) {
        uVar3 = 0x31;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 0x23;
    }
    return uVar3;
  case 99:
  case 100:
  case 0x88:
    return 0x2f;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x85:
  case 0x86:
  case 0xc2:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (5 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) != 0)) {
      return 0x1c;
    }
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
      return 0x23;
    }
    if ((param_5 & 2) != 0) {
      return 2;
    }
    if ((param_5 & 0xe60) != 0) {
      return 0x25;
    }
    if ((param_5 & 0x10) != 0) {
      return 0x24;
    }
    return 0x10;
  case 0x68:
    goto switchD_14084bd3d_caseD_68;
  case 0x69:
  case 0xb9:
    return 10;
  case 0x6a:
    return 9;
  case 0x6b:
    return 0x11;
  case 0x6d:
    return 0x14;
  case 0x6e:
    return 0x13;
  case 0x6f:
  case 0x71:
  case 0x72:
    return 0x12;
  case 0x73:
    return 0x15;
  case 0x82:
  case 0x84:
    return 0x25;
  case 0x83:
    if (param_3 != 0) {
      lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
        return 0x23;
      }
      if ((param_5 & 0x20) == 0) {
        return 0x20;
      }
      return 0x25;
    }
    goto LAB_14084c424;
  case 0x87:
  case 0x8e:
    if (((ushort)(param_3 - 0x1a3U) < 200) || ((param_5 & 7) != 0)) {
      return 2;
    }
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
      return 0x23;
    }
    if (param_3 != 0) {
      return 0x4c;
    }
LAB_14084c424:
    lVar2 = FUN_140d89d60(&DAT_141c53470,0,param_4);
    if (lVar2 == 0) {
      return 0x21;
    }
    if (*(int *)(lVar2 + 0x298) < 6) {
      return 0x21;
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) == 0) {
      return 0x21;
    }
    return 0x1b;
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
    return 0x30;
  case 0x8d:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x94:
  case 0xcf:
    return 0x37;
  case 0x98:
    return 7;
  case 0x99:
    return 8;
  case 0xa7:
    return 0x3c;
  case 0xa8:
  case 0xad:
  case 0xae:
  case 0xd2:
    return 0x3e;
  case 0xa9:
    return 0x3b;
  case 0xab:
    return 0x3d;
  case 0xac:
    return 0x3f;
  case 0xba:
  case 0xbb:
    return 0x41;
  case 0xbc:
    return 0x42;
  case 0xbd:
  case 0xbf:
    return 0x44;
  case 0xc0:
  case 0xc1:
    return 0x45;
  case 0xc4:
    return 0x46;
  case 0xc5:
    return 0x4c;
  case 0xc6:
    return 0x4d;
  case 0xd3:
    lVar2 = FUN_140301e40(&DAT_141d77940,param_6);
    if (lVar2 == 0) {
      return 0xffffffff;
    }
    return (ulonglong)*(ushort *)(lVar2 + 0x80);
  case 0xd6:
    return 0x6d;
  case 0xd7:
    return 0x6e;
  case 0xda:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) {
      return 0x23;
    }
    if (param_3 != 0) {
      if ((param_5 & 0xe60) != 0) {
        return 0x25;
      }
      if ((param_5 & 0x10) != 0) {
        return 0x24;
      }
      if ((param_5 & 2) != 0) {
        lVar2 = *(longlong *)(DAT_141d6de18 + (longlong)param_2 * 8);
        if (*(int *)(lVar2 + 0xa8) < 2) {
          return 0x20;
        }
        if ((*(byte *)(*(longlong *)(lVar2 + 0xa0) + 1) & 1) != 0) {
          return 2;
        }
        return 0x20;
      }
      goto LAB_14084c185;
    }
    break;
  case 0xdc:
  case 0xdd:
    return 0x72;
  case 0xe7:
    return 0x75;
  }
  lVar2 = FUN_140d89d60(&DAT_141c53470,0,param_4);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x298) < 6)) ||
     ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) == 0)) {
    return 0x21;
  }
switchD_14084bd3d_caseD_68:
  return 0x22;
}

