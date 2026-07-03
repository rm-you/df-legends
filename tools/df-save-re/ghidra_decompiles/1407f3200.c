// FUN_1407f3200 @ 1407f3200
// callees:
//   -> 1406aeef0 FUN_1406aeef0
//   -> 140d89d60 FUN_140d89d60


ulonglong FUN_1407f3200(undefined2 param_1,short param_2,ushort param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  uVar4 = (uint)param_3;
  iVar1 = 1;
  sVar6 = (short)param_4;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 0x36:
  case 0x59:
switchD_1407f323b_caseD_0:
    iVar5 = 5;
    break;
  case 3:
  case 4:
  case 5:
    iVar5 = 3;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x3a:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x46:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x56:
  case 0x58:
switchD_1407f323b_caseD_6:
    iVar5 = 10;
    break;
  case 0xd:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e0a8 - DAT_141d6e0a0 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e0a0 + (longlong)param_2 * 8) + 0xb8);
    break;
  case 0xf:
  case 0x16:
    iVar5 = 0x19;
    break;
  default:
    return 0;
  case 0x18:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6ddd8 - DAT_141d6ddd0 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6ddd0 + (longlong)param_2 * 8) + 0xc4);
    break;
  case 0x19:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e0c0 - DAT_141d6e0b8 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e0b8 + (longlong)param_2 * 8) + 0x100);
    break;
  case 0x1a:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e120 - DAT_141d6e118 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_0;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e118 + (longlong)param_2 * 8) + 0xc0);
    break;
  case 0x1b:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e138 - DAT_141d6e130 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e130 + (longlong)param_2 * 8) + 0xc0);
    break;
  case 0x1c:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e150 - DAT_141d6e148 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e148 + (longlong)param_2 * 8) + 0xc0);
    break;
  case 0x1d:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e108 - DAT_141d6e100 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_0;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e100 + (longlong)param_2 * 8) + 0xc0);
    break;
  case 0x26:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e0d8 - DAT_141d6e0d0 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_34;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e0d0 + (longlong)param_2 * 8) + 0xf4);
    break;
  case 0x2f:
  case 0x35:
  case 0x37:
    iVar5 = 2;
    break;
  case 0x30:
  case 0x31:
  case 0x57:
    iVar5 = 2;
    if ((((short)param_3 < 0) ||
        ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)(short)param_3)) ||
       (sVar6 < 0)) {
LAB_1407f35c2:
      uVar4 = 0;
    }
    else {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)(short)param_3 * 8);
      if ((ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3) <=
          (ulonglong)(longlong)sVar6) goto LAB_1407f35c2;
      uVar4 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8) + 0x4dc);
    }
    if (((-1 < (short)param_3) &&
        ((ulonglong)(longlong)(short)param_3 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
       (-1 < sVar6)) {
      lVar3 = *(longlong *)(DAT_141d6dd50 + (longlong)(short)param_3 * 8);
      if ((ulonglong)(longlong)sVar6 <
          (ulonglong)(*(longlong *)(lVar3 + 0x180) - *(longlong *)(lVar3 + 0x178) >> 3)) {
        param_4 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x178) + (longlong)sVar6 * 8) +
                           0x4e0);
        break;
      }
    }
    param_4 = 0;
    break;
  case 0x32:
    iVar1 = FUN_1406aeef0(uVar4,param_4 & 0xffff);
    uVar4 = iVar1 >> 1;
    if ((int)uVar4 < 1) {
      return 1;
    }
    goto LAB_1407f363c;
  case 0x33:
    uVar2 = FUN_1406aeef0(uVar4,param_4 & 0xffff);
    return uVar2;
  case 0x34:
  case 0x44:
  case 0x45:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x54:
  case 0x5a:
switchD_1407f323b_caseD_34:
    iVar5 = 1;
    break;
  case 0x38:
    iVar5 = 6;
    break;
  case 0x39:
    iVar5 = 7;
    break;
  case 0x3b:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6e168 - DAT_141d6e160 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6e160 + (longlong)param_2 * 8) + 0x100);
    break;
  case 0x3e:
  case 0x3f:
  case 0x42:
    iVar5 = 0x1e;
    break;
  case 0x40:
  case 0x53:
    iVar5 = 0x14;
    break;
  case 0x43:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6ddf0 - DAT_141d6dde8 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6dde8 + (longlong)param_2 * 8) + 0xc4);
    break;
  case 0x47:
    return 10;
  case 0x55:
    if ((param_2 < 0) ||
       ((ulonglong)(DAT_141d6de20 - DAT_141d6de18 >> 3) <= (ulonglong)(longlong)param_2))
    goto switchD_1407f323b_caseD_6;
    iVar5 = *(int *)(*(longlong *)(DAT_141d6de18 + (longlong)param_2 * 8) + 0xb0);
  }
  lVar3 = FUN_140d89d60(&DAT_141c53470,uVar4 & 0xffff,param_4);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x288);
  }
  uVar4 = iVar5 * iVar1;
LAB_1407f363c:
  return (ulonglong)uVar4;
}

