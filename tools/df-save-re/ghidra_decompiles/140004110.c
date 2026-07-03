// FUN_140004110 @ 140004110
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140004110(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_inn_tavernst::vftable;
  FUN_1400026e0();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 100;
  *(undefined8 *)((longlong)param_1 + 0x144) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0xffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  return param_1;
}

