// FUN_140284b30 @ 140284b30
// callees:


undefined4 * FUN_140284b30(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 1) = 900;
  return param_1;
}

