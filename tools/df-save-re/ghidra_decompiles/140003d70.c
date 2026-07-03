// FUN_140003d70 @ 140003d70
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140003d70(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_templest::vftable;
  FUN_1400026e0(param_1 + 0x18);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 100;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 2;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13c) = 0xffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  return param_1;
}

