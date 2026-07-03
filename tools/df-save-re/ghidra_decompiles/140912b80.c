// FUN_140912b80 @ 140912b80
// callees:


undefined8 FUN_140912b80(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x80 + (longlong)param_2 * 2);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    sVar1 = sVar1 + *(short *)(*(longlong *)(param_1 + 0x158) + (longlong)param_2 * 2);
    if (sVar1 < 0) {
      return 8;
    }
    if (100 < sVar1) {
      return 0;
    }
  }
  if (99 < sVar1) {
    return 0;
  }
  if (0x5a < sVar1) {
    return 1;
  }
  if (0x4b < sVar1) {
    return 2;
  }
  if (0x3c < sVar1) {
    return 3;
  }
  if (0x27 < sVar1) {
    return 4;
  }
  if (sVar1 < 0x19) {
    if (9 < sVar1) {
      return 6;
    }
    if (sVar1 < 1) {
      return 8;
    }
    return 7;
  }
  return 5;
}

