// FUN_140475580 @ 140475580
// callees:
//   -> 140050410 FUN_140050410


longlong FUN_140475580(longlong param_1)

{
  longlong lVar1;
  longlong local_res8;
  
  *(undefined8 *)(param_1 + 8) = 0;
  local_res8 = param_1;
  if ((&local_res8 < DAT_141c536a0) && (DAT_141c53698 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141c53698;
    if (DAT_141c536a0 == DAT_141c536a8) {
      FUN_140050410(&DAT_141c53698);
    }
    if (DAT_141c536a0 != (longlong *)0x0) {
      *DAT_141c536a0 = DAT_141c53698[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141c536a0 == DAT_141c536a8) {
      FUN_140050410(&DAT_141c53698);
    }
    if (DAT_141c536a0 != (longlong *)0x0) {
      *DAT_141c536a0 = param_1;
    }
  }
  DAT_141c536a0 = DAT_141c536a0 + 1;
  return param_1;
}

