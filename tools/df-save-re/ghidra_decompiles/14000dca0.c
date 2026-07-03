// FUN_14000dca0 @ 14000dca0
// callees:


undefined8 * FUN_14000dca0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 100;
  return param_1;
}

