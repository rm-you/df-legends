// FUN_1400039b0 @ 1400039b0
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_1400039b0(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_mead_hallst::vftable;
  FUN_1400026e0();
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x136) = 0xffff;
  *(undefined2 *)(param_1 + 0x27) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x146) = 0xffff;
  *(undefined2 *)(param_1 + 0x29) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  return param_1;
}

