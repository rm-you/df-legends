// FUN_14083c890 @ 14083c890
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083c890(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6ddf0) && (DAT_141d6dde8 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6dde8;
    if (DAT_141d6ddf0 == DAT_141d6ddf8) {
      FUN_140050410(&DAT_141d6dde8);
    }
    if (DAT_141d6ddf0 != (longlong *)0x0) {
      *DAT_141d6ddf0 = DAT_141d6dde8[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6ddf0 == DAT_141d6ddf8) {
      FUN_140050410(&DAT_141d6dde8);
    }
    if (DAT_141d6ddf0 != (longlong *)0x0) {
      *DAT_141d6ddf0 = param_1;
    }
  }
  DAT_141d6ddf0 = DAT_141d6ddf0 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6ddf0 - (longlong)DAT_141d6dde8 >> 3) + -1;
  return;
}

