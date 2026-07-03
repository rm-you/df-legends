// FUN_140003ec0 @ 140003ec0
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140003ec0(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_libraryst::vftable;
  FUN_1400026e0(param_1 + 0x17);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 100;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0xffff;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  return param_1;
}

