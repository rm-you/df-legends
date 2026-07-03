// FUN_14000eaf0 @ 14000eaf0
// callees:


ulonglong FUN_14000eaf0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0xd60) != 0) {
    uVar2 = 0;
    switch(param_2) {
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x47:
    case 0x4f:
    case 0x50:
    case 0x59:
    case 0x6b:
    case 0x9e:
    case 0x9f:
    case 0xa0:
      goto switchD_14000eb2a_caseD_d;
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x45:
      goto switchD_14000eb2a_caseD_39;
    }
  }
  if ((*(uint *)(param_1 + 0x118) & 0x1000) != 0) {
    uVar2 = 0;
    switch(param_2) {
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x4f:
    case 0x50:
    case 0x59:
    case 0x9e:
    case 0x9f:
    case 0xa0:
switchD_14000eb2a_caseD_d:
      return CONCAT71((int7)(uVar2 >> 8),1);
    case 0x45:
      goto switchD_14000eb2a_caseD_39;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  switch(param_2 + -3) {
  case 0:
    uVar3 = 0x80000;
    break;
  case 8:
    uVar3 = 2;
    break;
  case 10:
    uVar3 = 0x10000;
    break;
  case 0xb:
    uVar3 = 0x20000;
    break;
  case 0xc:
    uVar3 = 0x40000;
    break;
  case 0x24:
    uVar3 = 0x200;
    break;
  case 0x25:
    uVar3 = 0x400;
    break;
  case 0x27:
    uVar3 = 0x20000000;
    break;
  case 0x28:
    uVar3 = 0x40000000;
    break;
  case 0x36:
    uVar3 = 0x1000000;
    break;
  case 0x37:
    uVar3 = 0x2000000;
    break;
  case 0x38:
    uVar3 = 0x4000000;
    break;
  case 0x3c:
    uVar3 = 8;
    break;
  case 0x3d:
    uVar3 = 0x10;
    break;
  case 0x3e:
    uVar3 = 1;
    break;
  case 0x3f:
    uVar3 = 0x20;
    break;
  case 0x40:
    uVar3 = 0x80;
    break;
  case 0x41:
    uVar3 = 0x100;
    break;
  case 0x42:
    uVar3 = 0x40;
    break;
  case 0x43:
    uVar3 = 0x800;
    break;
  case 0x44:
    uVar3 = 0x1000;
    break;
  case 0x4c:
    uVar3 = 0x4000;
    break;
  case 0x4d:
    uVar3 = 0x8000;
    break;
  case 0x56:
    uVar3 = 0x800000;
    break;
  case 0x68:
    uVar3 = 0x400000;
    break;
  case 0x9b:
    uVar3 = 4;
    break;
  case 0x9c:
    uVar3 = 0x100000;
    break;
  case 0x9d:
    uVar3 = 0x200000;
    break;
  case 0x9e:
    uVar3 = 0x8000000;
    break;
  case 0x9f:
    uVar3 = 0x10000000;
    break;
  case 0xae:
    uVar3 = 0x2000;
  }
  if (-1 < param_2) {
    uVar1 = param_2 >> 3;
    uVar2 = (ulonglong)uVar1;
    if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x1260))) &&
       (uVar2 = *(ulonglong *)(param_1 + 0x1258),
       (*(byte *)((longlong)(int)uVar1 + uVar2) & (byte)(1 << ((byte)param_2 & 7))) != 0)) {
      return CONCAT71((int7)(uVar2 >> 8),(*(uint *)(param_1 + 0x810) & uVar3) == 0);
    }
  }
  if (((*(uint *)(param_1 + 0x810) & uVar3) != 0) || ((*(uint *)(param_1 + 0x80c) & uVar3) == 0)) {
switchD_14000eb2a_caseD_39:
    return uVar2 & 0xffffffffffffff00;
  }
  goto switchD_14000eb2a_caseD_d;
}

