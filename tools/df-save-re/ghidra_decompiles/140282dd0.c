// FUN_140282dd0 @ 140282dd0
// callees:


undefined4 * FUN_140282dd0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 10) = 0xf;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *param_1 = 1;
  param_1[1] = 100;
  param_1[2] = 10000;
  param_1[3] = 0xffffffff;
  return param_1;
}

