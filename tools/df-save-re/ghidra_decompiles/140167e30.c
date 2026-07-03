// FUN_140167e30 @ 140167e30
// callees:
//   -> 140169450 FUN_140169450
//   -> 140dfc99c memset


undefined8 * FUN_140167e30(undefined8 *param_1)

{
  FUN_140169450();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2e] = 0;
  *param_1 = building_workshopst::vftable;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 3000;
  param_1[0x40] = 5;
  memset(param_1 + 0x41,0,0x5e);
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  return param_1;
}

