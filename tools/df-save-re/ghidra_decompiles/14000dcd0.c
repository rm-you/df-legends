// FUN_14000dcd0 @ 14000dcd0
// callees:


short FUN_14000dcd0(longlong param_1,int param_2)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x80 + (longlong)param_2 * 2);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    sVar1 = sVar1 + *(short *)(*(longlong *)(param_1 + 0x158) + (longlong)param_2 * 2);
    if (sVar1 < 0) {
      return 0;
    }
    if (100 < sVar1) {
      sVar1 = 100;
    }
  }
  return sVar1;
}

