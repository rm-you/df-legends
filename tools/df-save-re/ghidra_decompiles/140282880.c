// FUN_140282880 @ 140282880
// callees:


undefined2 * FUN_140282880(undefined2 *param_1)

{
  *param_1 = 0xffff;
  param_1[10] = 0xffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  return param_1;
}

