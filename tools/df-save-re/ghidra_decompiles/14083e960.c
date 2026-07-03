// FUN_14083e960 @ 14083e960
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083e960(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6e0f0) && (DAT_141d6e0e8 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6e0e8;
    if (DAT_141d6e0f0 == DAT_141d6e0f8) {
      FUN_140050410(&DAT_141d6e0e8);
    }
    if (DAT_141d6e0f0 != (longlong *)0x0) {
      *DAT_141d6e0f0 = DAT_141d6e0e8[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6e0f0 == DAT_141d6e0f8) {
      FUN_140050410(&DAT_141d6e0e8);
    }
    if (DAT_141d6e0f0 != (longlong *)0x0) {
      *DAT_141d6e0f0 = param_1;
    }
  }
  DAT_141d6e0f0 = DAT_141d6e0f0 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6e0f0 - (longlong)DAT_141d6e0e8 >> 3) + -1;
  return;
}

