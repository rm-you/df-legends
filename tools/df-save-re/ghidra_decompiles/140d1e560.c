// FUN_140d1e560 @ 140d1e560
// callees:
//   -> 1400c05e0 FUN_1400c05e0


undefined8 FUN_140d1e560(uint param_1)

{
  char cVar1;
  
  param_1 = param_1 & 0xffff;
  cVar1 = FUN_1400c05e0();
  if (cVar1 != '\0') {
    return 0;
  }
  param_1 = param_1 & 0xffff;
  if (param_1 < 0x164) {
    if (param_1 < 0x14c) {
      if (0x2f < param_1) {
        switch(param_1) {
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
        case 0x59:
        case 0x5a:
        case 0xe3:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xed:
        case 0xee:
        case 0xef:
        case 0xf0:
        case 0xf1:
        case 0xfe:
        case 0xff:
        case 0x100:
        case 0x101:
        case 0x102:
          goto switchD_140d1e5c2_caseD_2;
        default:
switchD_140d1e5c2_caseD_4:
          return 0;
        }
      }
      if (param_1 < 0x2b) {
        switch(param_1) {
        case 2:
        case 3:
        case 0x13:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
          break;
        default:
          goto switchD_140d1e5c2_caseD_4;
        }
      }
    }
  }
  else if (param_1 < 0x1be) {
    if (param_1 < 0x1b5) {
      switch(param_1) {
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x179:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
        break;
      default:
        goto switchD_140d1e5c2_caseD_4;
      }
    }
  }
  else if (((7 < param_1 - 0x1d1) && (param_1 != 0x1e9)) && (0xb7 < param_1 - 0x1ff)) {
    return 0;
  }
switchD_140d1e5c2_caseD_2:
  return 1;
}

