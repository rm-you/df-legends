// FUN_140003cd0 @ 140003cd0
// callees:
//   -> 140003800 FUN_140003800
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140003cd0(undefined8 *param_1)

{
  FUN_140003800();
  *param_1 = abstract_building_underworld_spirest::vftable;
  FUN_1400026e0(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}

