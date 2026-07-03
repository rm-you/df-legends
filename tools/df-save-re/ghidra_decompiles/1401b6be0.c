// FUN_1401b6be0 @ 1401b6be0
// callees:
//   -> 140050410 FUN_140050410


undefined4 * FUN_1401b6be0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *local_res8;
  
  *param_1 = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[5] = 0xffffffff;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  param_1[7] = 0xffffffff;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  local_res8 = param_1;
  if ((&local_res8 < DAT_141c536b8) && (DAT_141c536b0 <= &local_res8)) {
    lVar1 = (longlong)&local_res8 - (longlong)DAT_141c536b0;
    if (DAT_141c536b8 == DAT_141c536c0) {
      FUN_140050410(&DAT_141c536b0);
    }
    if (DAT_141c536b8 != (undefined4 **)0x0) {
      *DAT_141c536b8 = DAT_141c536b0[lVar1 >> 3];
    }
  }
  else {
    if (DAT_141c536b8 == DAT_141c536c0) {
      FUN_140050410(&DAT_141c536b0);
    }
    if (DAT_141c536b8 != (undefined4 **)0x0) {
      *DAT_141c536b8 = param_1;
    }
  }
  DAT_141c536b8 = DAT_141c536b8 + 1;
  return param_1;
}

