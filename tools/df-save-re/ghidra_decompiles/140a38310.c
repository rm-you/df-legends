// FUN_140a38310 @ 140a38310
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 140050410 FUN_140050410


undefined8 * FUN_140a38310(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 *local_res10;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 4;
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar1 = param_1 + 0x28;
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  if (0xf < (ulonglong)param_1[0x2b]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  puVar2 = operator_new(1);
  param_1[8] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 5;
  *(undefined4 *)(param_1 + 0x30) = 10;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x1e;
  local_res10 = param_1;
  if ((&local_res10 < DAT_141d77948) && (DAT_141d77940 <= &local_res10)) {
    lVar3 = (longlong)&local_res10 - (longlong)DAT_141d77940;
    if (DAT_141d77948 == DAT_141d77950) {
      FUN_140050410(&DAT_141d77940);
    }
    if (DAT_141d77948 != (undefined8 **)0x0) {
      *DAT_141d77948 = DAT_141d77940[lVar3 >> 3];
    }
  }
  else {
    if (DAT_141d77948 == DAT_141d77950) {
      FUN_140050410(&DAT_141d77940);
    }
    if (DAT_141d77948 != (undefined8 **)0x0) {
      *DAT_141d77948 = param_1;
    }
  }
  DAT_141d77948 = DAT_141d77948 + 1;
  return param_1;
}

