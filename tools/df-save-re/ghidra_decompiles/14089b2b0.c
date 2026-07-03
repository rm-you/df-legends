// FUN_14089b2b0 @ 14089b2b0
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140050410 FUN_140050410


undefined8 * FUN_14089b2b0(undefined8 *param_1)

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
  _eh_vector_constructor_iterator_(param_1 + 4,0x20,9,FUN_14000c2b0,FUN_14000c260);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d6e1b0) && (DAT_141d6e1a8 <= &local_res10)) {
    lVar2 = (longlong)&local_res10 - (longlong)DAT_141d6e1a8;
    if (DAT_141d6e1b0 == DAT_141d6e1b8) {
      FUN_140050410(&DAT_141d6e1a8);
    }
    if (DAT_141d6e1b0 != (undefined8 **)0x0) {
      *DAT_141d6e1b0 = DAT_141d6e1a8[lVar2 >> 3];
    }
  }
  else {
    if (DAT_141d6e1b0 == DAT_141d6e1b8) {
      FUN_140050410(&DAT_141d6e1a8);
    }
    if (DAT_141d6e1b0 != (undefined8 **)0x0) {
      *DAT_141d6e1b0 = param_1;
    }
  }
  DAT_141d6e1b0 = DAT_141d6e1b0 + 1;
  return param_1;
}

