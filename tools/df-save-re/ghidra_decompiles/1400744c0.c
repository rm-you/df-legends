// FUN_1400744c0 @ 1400744c0
// callees:
//   -> 140050410 FUN_140050410


undefined8 * FUN_1400744c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_res10;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d64e00) && (DAT_141d64df8 <= &local_res10)) {
    lVar2 = (longlong)&local_res10 - (longlong)DAT_141d64df8;
    if (DAT_141d64e00 == DAT_141d64e08) {
      FUN_140050410(&DAT_141d64df8);
    }
    if (DAT_141d64e00 != (undefined8 **)0x0) {
      *DAT_141d64e00 = DAT_141d64df8[lVar2 >> 3];
    }
  }
  else {
    if (DAT_141d64e00 == DAT_141d64e08) {
      FUN_140050410(&DAT_141d64df8);
    }
    if (DAT_141d64e00 != (undefined8 **)0x0) {
      *DAT_141d64e00 = param_1;
    }
  }
  DAT_141d64e00 = DAT_141d64e00 + 1;
  return param_1;
}

