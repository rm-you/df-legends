// FUN_1408deb00 @ 1408deb00
// callees:
//   -> 1408dea60 FUN_1408dea60
//   -> 14013b610 FUN_14013b610


undefined8 FUN_1408deb00(ushort param_1)

{
  char cVar1;
  uint uVar2;
  
  if (((((param_1 != 0x53) && (uVar2 = (uint)param_1, 3 < param_1 - 0x4f)) && (param_1 != 0x1eb)) &&
      (((param_1 != 0xd7 && (param_1 != 0x147)) &&
       ((param_1 != 0x14b && ((param_1 != 0x168 && (param_1 != 0x1b4)))))))) &&
     (((6 < param_1 - 0x144 || ((0x77U >> (param_1 - 0x144 & 0x1f) & 1) == 0)) &&
      ((((2 < param_1 - 0xac && (2 < param_1 - 0x1b1)) && (2 < param_1 - 0x165)) &&
       ((cVar1 = FUN_1408dea60(param_1), cVar1 == '\0' && (cVar1 = FUN_14013b610(), cVar1 == '\0')))
       ))))) {
    switch(uVar2) {
    case 0x4a:
    case 0x5c:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x84:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa5:
    case 0xa6:
    case 0x105:
      break;
    default:
      return 0;
    }
  }
  return 1;
}

