// FUN_1405dd950 @ 1405dd950
// callees:
//   -> 140d89d60 FUN_140d89d60


undefined8 *
FUN_1405dd950(undefined2 param_1,short param_2,short param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  longlong lVar2;
  
  switch(param_1) {
  case 0xc:
  case 0x74:
    return &DAT_141c70418;
  default:
    return (undefined8 *)0x0;
  case 0x16:
  case 0x52:
  case 0x81:
    goto switchD_1405dd995_caseD_16;
  case 0x1f:
    return &DAT_141c703d0;
  case 0x20:
  case 0x6a:
  case 0x98:
    return &DAT_141c703e8;
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
  case 0x62:
  case 0x78:
  case 0xc3:
  case 200:
  case 0xc9:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xd4:
    if (param_3 == 0) {
      lVar2 = FUN_140d89d60(&DAT_141c53470,0,param_4);
      if (((lVar2 == 0) || (*(int *)(lVar2 + 0x298) < 6)) ||
         ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) == 0)) {
        return &DAT_141c703b8;
      }
      goto switchD_1405dd995_caseD_68;
    }
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x290) + 6);
joined_r0x0001405ddb93:
      if ((bVar1 & 2) != 0) {
switchD_1405dd995_caseD_16:
        return &DAT_141c70358;
      }
    }
    break;
  case 0x53:
  case 0x7b:
  case 0x7d:
  case 0x83:
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
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) goto switchD_1405dd995_caseD_16;
    goto LAB_1405ddbe8;
  case 0x54:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x8e:
  case 0xc2:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (5 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) != 0)) goto switchD_1405dd995_caseD_68;
    if ((param_3 == 0) || ((param_5 & 0xe60) != 0)) goto switchD_1405dd995_caseD_5c;
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if ((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) {
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x290) + 6);
      goto joined_r0x0001405ddb93;
    }
    break;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
    return &DAT_141c70400;
  case 0x5a:
  case 0x5b:
    return &DAT_141c70310;
  case 0x5c:
  case 0x82:
  case 0x84:
  case 0xd5:
    goto switchD_1405dd995_caseD_5c;
  case 0x61:
    if (param_3 != 0) {
      lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
      if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
         ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) goto switchD_1405dd995_caseD_16;
      if ((param_5 & 0xe62) != 0) {
        if ((param_2 != -1) &&
           (*(longlong *)(*(longlong *)(DAT_141d6ddd0 + (longlong)param_2 * 8) + 0xe0) != 0)) {
          return &DAT_141c705b0;
        }
        if ((param_5 & 2) == 0) goto switchD_1405dd995_caseD_5c;
        goto LAB_1405ddccd;
      }
      if ((param_5 & 0x10) != 0) goto LAB_1405ddba9;
      if ((199 < (ushort)(param_3 - 0x1a3U)) && ((param_5 & 0x100d) == 0))
      goto switchD_1405dd995_caseD_5c;
      goto LAB_1405ddbc0;
    }
    param_3 = 0;
LAB_1405ddbe8:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 0x298) < 6)) ||
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) == 0)) {
switchD_1405dd995_caseD_5c:
      return &DAT_141c70538;
    }
switchD_1405dd995_caseD_68:
    return &DAT_141c705e0;
  case 99:
  case 100:
  case 0x88:
    return &DAT_141c70568;
  case 0x68:
    goto switchD_1405dd995_caseD_68;
  case 0x69:
  case 0x99:
    return &DAT_141c703a0;
  case 0x6b:
    return &DAT_141c70460;
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x71:
  case 0x72:
  case 0xd6:
  case 0xd7:
    return &DAT_141c704f0;
  case 0x73:
    return &DAT_141c704c0;
  case 0x8d:
  case 0xcf:
    return &DAT_141c70550;
  case 0x97:
    return &DAT_141c704d8;
  case 0xba:
  case 0xbb:
    return &DAT_141c702f8;
  case 0xbc:
  case 0xbd:
  case 0xbf:
    return &DAT_141c70508;
  case 0xc0:
  case 0xc1:
    return &DAT_141c70448;
  case 0xd3:
    return &DAT_141c6fda0;
  case 0xda:
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (6 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 6) & 2) != 0)) goto switchD_1405dd995_caseD_16;
    lVar2 = FUN_140d89d60(&DAT_141c53470,param_3,param_4);
    if (((lVar2 != 0) && (5 < *(int *)(lVar2 + 0x298))) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0x290) + 5) & 0x80) != 0)) goto switchD_1405dd995_caseD_68;
    if ((param_5 & 0x10) == 0) {
      if ((((param_5 & 2) != 0) &&
          (lVar2 = *(longlong *)(DAT_141d6de18 + (longlong)param_2 * 8), 1 < *(int *)(lVar2 + 0xa8))
          ) && ((*(byte *)(*(longlong *)(lVar2 + 0xa0) + 1) & 1) != 0)) {
        return &DAT_141c70520;
      }
      goto switchD_1405dd995_caseD_5c;
    }
    goto LAB_1405ddba9;
  case 0xdb:
    return &DAT_141c70340;
  }
  if ((param_5 & 2) != 0) {
LAB_1405ddccd:
    return &DAT_141c70520;
  }
  if ((param_5 & 0x10) == 0) {
LAB_1405ddbc0:
    return &DAT_141c70580;
  }
LAB_1405ddba9:
  return &DAT_141c70598;
}

