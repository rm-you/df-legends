// FUN_14083d860 @ 14083d860
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083d860(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6e0a8) && (DAT_141d6e0a0 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6e0a0;
    if (DAT_141d6e0a8 == DAT_141d6e0b0) {
      FUN_140050410(&DAT_141d6e0a0);
    }
    if (DAT_141d6e0a8 != (longlong *)0x0) {
      *DAT_141d6e0a8 = DAT_141d6e0a0[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6e0a8 == DAT_141d6e0b0) {
      FUN_140050410(&DAT_141d6e0a0);
    }
    if (DAT_141d6e0a8 != (longlong *)0x0) {
      *DAT_141d6e0a8 = param_1;
    }
  }
  DAT_141d6e0a8 = DAT_141d6e0a8 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6e0a8 - (longlong)DAT_141d6e0a0 >> 3) + -1;
  return;
}

