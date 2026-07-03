// FUN_1405b1950 @ 1405b1950
// callees:
//   -> 140050410 FUN_140050410


undefined8 FUN_1405b1950(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  local_res8 = param_1;
  if ((&local_res8 < DAT_141c53508) && (DAT_141c53500 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141c53500;
    if (DAT_141c53508 == DAT_141c53510) {
      FUN_140050410(&DAT_141c53500);
    }
    if (DAT_141c53508 != (undefined8 *)0x0) {
      *DAT_141c53508 = DAT_141c53500[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141c53508 == DAT_141c53510) {
      FUN_140050410(&DAT_141c53500);
    }
    if (DAT_141c53508 != (undefined8 *)0x0) {
      *DAT_141c53508 = param_1;
    }
  }
  DAT_141c53508 = DAT_141c53508 + 1;
  return param_1;
}

