// FUN_14089b750 @ 14089b750
// callees:
//   -> 140050410 FUN_140050410


undefined8 * FUN_14089b750(undefined8 *param_1)

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
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d6e1e0) && (DAT_141d6e1d8 <= &local_res10)) {
    lVar2 = (longlong)&local_res10 - (longlong)DAT_141d6e1d8;
    if (DAT_141d6e1e0 == DAT_141d6e1e8) {
      FUN_140050410(&DAT_141d6e1d8);
    }
    if (DAT_141d6e1e0 != (undefined8 **)0x0) {
      *DAT_141d6e1e0 = DAT_141d6e1d8[lVar2 >> 3];
    }
  }
  else {
    if (DAT_141d6e1e0 == DAT_141d6e1e8) {
      FUN_140050410(&DAT_141d6e1d8);
    }
    if (DAT_141d6e1e0 != (undefined8 **)0x0) {
      *DAT_141d6e1e0 = param_1;
    }
  }
  DAT_141d6e1e0 = DAT_141d6e1e0 + 1;
  return param_1;
}

