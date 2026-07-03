// FUN_140051f80 @ 140051f80
// callees:


ulonglong FUN_140051f80(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[9];
  if (param_2[9] == iVar1) {
    switch(iVar1) {
    case 0:
    case 1:
    case 3:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0x10:
      if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
         ((param_1[2] == param_2[2] && (param_1[3] == param_2[3])))) {
        return 1;
      }
      break;
    case 2:
    case 5:
    case 0xd:
    case 0xe:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1e:
    case 0x1f:
    case 0x20:
      if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
        return 1;
      }
      break;
    case 4:
    case 6:
    case 8:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1d:
      if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
        return 1;
      }
      break;
    case 0x21:
      return (ulonglong)(*param_1 == *param_2);
    default:
      goto switchD_140051fa7_default;
    }
    return 0;
  }
switchD_140051fa7_default:
  return (ulonglong)(uint7)(int7)(int3)((uint)iVar1 >> 8) << 8;
}

