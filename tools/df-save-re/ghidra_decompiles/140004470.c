// FUN_140004470 @ 140004470
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140004470(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_dungeonst::vftable;
  FUN_1400026e0();
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  return param_1;
}

