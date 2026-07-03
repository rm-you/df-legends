// FUN_140c62f80 @ 140c62f80
// callees:


void FUN_140c62f80(int *param_1,longlong *param_2,longlong *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 == (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      return;
    }
    iVar2 = 0;
  }
  else {
    sVar1 = (**(code **)(*param_2 + 0x518))(param_2);
    iVar2 = (int)sVar1;
  }
  if (param_3 != (longlong *)0x0) {
    sVar1 = (**(code **)(*param_3 + 0x518))(param_3);
    iVar3 = (int)sVar1;
  }
  iVar3 = iVar3 + iVar2;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 2) & 0x8000000) != 0)) {
    iVar3 = iVar3 + 5;
  }
  if ((param_3 != (longlong *)0x0) && ((*(uint *)(param_3 + 2) & 0x8000000) != 0)) {
    iVar3 = iVar3 + 5;
  }
  switch(iVar3) {
  case 1:
    iVar3 = *param_1 * 3;
    goto LAB_140c630a6;
  case 2:
    iVar3 = *param_1 * 7;
    break;
  case 3:
    iVar3 = *param_1 << 3;
    break;
  case 4:
    iVar3 = *param_1 * 9;
    break;
  case 5:
    *param_1 = *param_1 * 2;
    return;
  case 6:
    iVar3 = *param_1 * 0xb;
    break;
  case 7:
    iVar3 = *param_1 * 0xc;
    break;
  case 8:
    iVar3 = *param_1 * 0xd;
    break;
  case 9:
    iVar3 = *param_1 * 0xe;
    break;
  case 10:
    *param_1 = *param_1 * 3;
    return;
  case 0xb:
    iVar3 = *param_1 << 4;
    break;
  case 0xc:
    iVar3 = *param_1 * 0x11;
    break;
  case 0xd:
    iVar3 = *param_1 * 9;
LAB_140c630a6:
    iVar3 = iVar3 * 2;
    break;
  case 0xe:
    iVar3 = *param_1 * 0x13;
    break;
  case 0xf:
    *param_1 = *param_1 << 2;
    return;
  case 0x10:
    iVar3 = *param_1 * 0x15;
    break;
  case 0x11:
    iVar3 = *param_1 * 0x16;
    break;
  case 0x12:
    iVar3 = *param_1 * 0x17;
    break;
  case 0x13:
    iVar3 = *param_1 * 0x18;
    break;
  case 0x14:
    *param_1 = *param_1 * 5;
  default:
    goto switchD_140c6301c_default;
  }
  *param_1 = iVar3 / 5;
switchD_140c6301c_default:
  return;
}

