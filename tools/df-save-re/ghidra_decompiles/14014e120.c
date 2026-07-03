// FUN_14014e120 @ 14014e120
// callees:


undefined8 FUN_14014e120(ushort param_1)

{
  if (param_1 < 0x103) {
    if (param_1 != 0x102) {
      switch(param_1) {
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x2f:
      case 0x53:
      case 0xf1:
      case 0xfe:
      case 0xff:
      case 0x100:
        break;
      default:
        goto switchD_14014e154_caseD_1c;
      }
    }
  }
  else if ((((0xe < param_1 - 0x23f) && (4 < param_1 - 0x164)) && (0x12 < param_1 - 0x1be)) &&
          (0xe < param_1 - 0x299)) {
switchD_14014e154_caseD_1c:
    return 0;
  }
  return 1;
}

