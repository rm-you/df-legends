// FUN_140083b10 @ 140083b10
// callees:
//   -> 140709240 FUN_140709240


undefined8 * FUN_140083b10(undefined8 *param_1)

{
  FUN_140709240();
  *param_1 = history_event_squad_vs_squadst::vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  return param_1;
}

