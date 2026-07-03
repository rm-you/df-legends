// FUN_140002460 @ 140002460
// callees:


undefined8 FUN_140002460(ushort param_1)

{
  if (param_1 < 0xea) {
    if (param_1 != 0xe9) {
      switch(param_1) {
      case 0x2b:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x41:
      case 0x4f:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xd7:
        break;
      default:
        goto switchD_140002494_caseD_2c;
      }
    }
  }
  else if (((3 < param_1 - 0x191) &&
           (((0x20 < param_1 - 0x12f ||
             ((0x1e007ffffU >> ((longlong)(int)(param_1 - 0x12f) & 0x3fU) & 1) == 0)) &&
            (param_1 != 0x18e)))) && ((0xe < param_1 - 0x203 && (0xe < param_1 - 0x25d)))) {
switchD_140002494_caseD_2c:
    return 0;
  }
  return 1;
}

