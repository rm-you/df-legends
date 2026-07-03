// FUN_14007d9d0 @ 14007d9d0
// callees:
//   -> 14007da60 FUN_14007da60


undefined8 * FUN_14007d9d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14007da60();
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffffffffffff;
  return param_1;
}

