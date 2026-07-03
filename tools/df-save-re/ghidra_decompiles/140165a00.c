// FUN_140165a00 @ 140165a00
// callees:
//   -> 140169450 FUN_140169450
//   -> 140dfc99c memset


undefined8 * FUN_140165a00(undefined8 *param_1)

{
  FUN_140169450();
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2e] = 0;
  *param_1 = building_trapst::vftable;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 3000;
  param_1[0x47] = 5;
  memset(param_1 + 0x48,0,0x5e);
  *(undefined4 *)(param_1 + 0x54) = 5000;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 200000;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 1;
  *(undefined4 *)(param_1 + 0x56) = 2000;
  *(undefined4 *)(param_1 + 0x55) = 0x7010701;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x10;
  param_1[0x57] = 50000;
  param_1[0x58] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return param_1;
}

