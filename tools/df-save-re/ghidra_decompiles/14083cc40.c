// FUN_14083cc40 @ 14083cc40
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083cc40(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6de08) && (DAT_141d6de00 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6de00;
    if (DAT_141d6de08 == DAT_141d6de10) {
      FUN_140050410(&DAT_141d6de00);
    }
    if (DAT_141d6de08 != (longlong *)0x0) {
      *DAT_141d6de08 = DAT_141d6de00[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6de08 == DAT_141d6de10) {
      FUN_140050410(&DAT_141d6de00);
    }
    if (DAT_141d6de08 != (longlong *)0x0) {
      *DAT_141d6de08 = param_1;
    }
  }
  DAT_141d6de08 = DAT_141d6de08 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6de08 - (longlong)DAT_141d6de00 >> 3) + -1;
  return;
}

