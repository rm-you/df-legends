// FUN_1402e9860 @ 1402e9860
// callees:


short FUN_1402e9860(short param_1,undefined8 param_2,short param_3,short param_4,short param_5)

{
  short sVar1;
  
  if (param_1 < 0x42) {
    return 100;
  }
  if (param_4 == -1) {
    return 100;
  }
  if (param_4 == 1) {
    sVar1 = param_1 - param_3;
  }
  else {
    if (param_4 != 2) goto LAB_1402e98d7;
    if ((int)param_3 < (int)param_1 / 2) {
      param_3 = param_3 * 2;
      goto LAB_1402e98d7;
    }
    param_3 = ((short)((int)param_1 / 2) - param_3) * 2 + param_1 + -1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    sVar1 = param_1;
    if (param_3 < param_1) goto LAB_1402e98d7;
  }
  param_3 = sVar1 + -1;
LAB_1402e98d7:
  if (param_1 == 0x11) {
    param_3 = param_3 << 4;
  }
  else if (param_1 == 0x21) {
    param_3 = param_3 << 3;
  }
  else if (param_1 == 0x41) {
    param_3 = param_3 << 2;
  }
  else if (param_1 == 0x81) {
    param_3 = param_3 * 2;
  }
  if ((ushort)(param_3 - 0xabU) < 0x32) {
    if (param_3 < 0xbf) {
      param_5 = (0xb8 - param_3) * 0x10 - param_5;
    }
    else {
      if (param_3 < 0xc9) {
        return 0;
      }
      param_5 = (param_3 + -0xcf) * 0x10 + param_5;
    }
    if (param_5 < 0) {
      return 0;
    }
    if (param_5 < 0x65) {
      return param_5;
    }
  }
  return 100;
}

