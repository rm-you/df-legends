// FUN_14083c020 @ 14083c020
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140050410 FUN_140050410


undefined8 * FUN_14083c020(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *local_res10;
  
  *param_1 = itemdefst::vftable;
  puVar1 = param_1 + 1;
  param_1[4] = 0xf;
  param_1[3] = 0;
  if (0xf < (ulonglong)param_1[4]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    free((void *)param_1[6]);
  }
  puVar2 = operator_new(1);
  param_1[6] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[8] = 0xffffffffffffffff;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d6ddc0) && (DAT_141d6ddb8 <= &local_res10)) {
    lVar3 = (longlong)&local_res10 - (longlong)DAT_141d6ddb8;
    if (DAT_141d6ddc0 == DAT_141d6ddc8) {
      FUN_140050410(&DAT_141d6ddb8);
    }
    if (DAT_141d6ddc0 != (undefined8 **)0x0) {
      *DAT_141d6ddc0 = DAT_141d6ddb8[lVar3 >> 3];
    }
  }
  else {
    if (DAT_141d6ddc0 == DAT_141d6ddc8) {
      FUN_140050410(&DAT_141d6ddb8);
    }
    if (DAT_141d6ddc0 != (undefined8 **)0x0) {
      *DAT_141d6ddc0 = param_1;
    }
  }
  DAT_141d6ddc0 = DAT_141d6ddc0 + 1;
  return param_1;
}

