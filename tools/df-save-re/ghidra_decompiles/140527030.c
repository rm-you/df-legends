// FUN_140527030 @ 140527030
// callees:


longlong FUN_140527030(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  
  if (param_4 != '\0') {
    if (param_2 == '\0') {
      if (*(longlong *)(param_1 + 0x1a8) != 0) {
        return param_1 + 0x198;
      }
    }
    else if ((param_2 == '\x01') && (*(longlong *)(param_1 + 0x1e8) != 0)) {
      return param_1 + 0x1d8;
    }
    return param_1 + 0x158;
  }
  if (param_2 == '\0') {
    lVar1 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = param_1 + 0xd8;
    }
    return lVar1;
  }
  if ((param_2 == '\x01') && (*(longlong *)(param_1 + 0x128) != 0)) {
    return param_1 + 0x118;
  }
  return param_1 + 0x98;
}

