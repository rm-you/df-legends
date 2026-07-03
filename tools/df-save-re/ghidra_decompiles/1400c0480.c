// FUN_1400c0480 @ 1400c0480
// callees:


ulonglong FUN_1400c0480(ushort param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  if (param_1 < 0xed) {
    if (param_1 != 0xec) {
      uVar1 = param_1 - 0x2e;
      uVar2 = (ulonglong)uVar1;
      if ((0x24 < uVar1) ||
         (uVar2 = (ulonglong)(int)uVar1, (0x1000007001U >> (uVar2 & 0x3f) & 1) == 0))
      goto switchD_1400c04d0_caseD_21;
    }
switchD_1400c04d0_caseD_0:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  uVar2 = 0;
  switch(param_1 - 0x19d) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
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
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
  case 0x99:
  case 0x9a:
  case 0x9b:
  case 0x9c:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
    goto switchD_1400c04d0_caseD_0;
  default:
switchD_1400c04d0_caseD_21:
    return uVar2 & 0xffffffffffffff00;
  }
}

