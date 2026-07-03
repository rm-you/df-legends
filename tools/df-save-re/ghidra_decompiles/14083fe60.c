// FUN_14083fe60 @ 14083fe60
// callees:
//   -> 140050410 FUN_140050410


void FUN_14083fe60(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141d6e180) && (DAT_141d6e178 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141d6e178;
    if (DAT_141d6e180 == DAT_141d6e188) {
      FUN_140050410(&DAT_141d6e178);
    }
    if (DAT_141d6e180 != (longlong *)0x0) {
      *DAT_141d6e180 = DAT_141d6e178[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141d6e180 == DAT_141d6e188) {
      FUN_140050410(&DAT_141d6e178);
    }
    if (DAT_141d6e180 != (longlong *)0x0) {
      *DAT_141d6e180 = param_1;
    }
  }
  DAT_141d6e180 = DAT_141d6e180 + 1;
  *(short *)(param_1 + 0x28) = (short)((longlong)DAT_141d6e180 - (longlong)DAT_141d6e178 >> 3) + -1;
  return;
}

