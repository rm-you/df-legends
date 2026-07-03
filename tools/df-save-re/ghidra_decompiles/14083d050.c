// FUN_14083d050 @ 14083d050
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083d050(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6de20) && (DAT_141d6de18 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6de18;
    if (DAT_141d6de20 == DAT_141d6de28) {
      FUN_140050410(&DAT_141d6de18);
    }
    if (DAT_141d6de20 != (longlong *)0x0) {
      *DAT_141d6de20 = DAT_141d6de18[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6de20 == DAT_141d6de28) {
      FUN_140050410(&DAT_141d6de18);
    }
    if (DAT_141d6de20 != (longlong *)0x0) {
      *DAT_141d6de20 = param_1;
    }
  }
  DAT_141d6de20 = DAT_141d6de20 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6de20 - (longlong)DAT_141d6de18 >> 3) + -1;
  return;
}

