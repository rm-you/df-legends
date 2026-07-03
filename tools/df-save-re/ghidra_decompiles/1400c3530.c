// FUN_1400c3530 @ 1400c3530
// callees:
//   -> 140169450 FUN_140169450


undefined8 * FUN_1400c3530(undefined8 *param_1)

{
  FUN_140169450();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = building_boxst::vftable;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x33] = 0xffffffffffffffff;
  return param_1;
}

