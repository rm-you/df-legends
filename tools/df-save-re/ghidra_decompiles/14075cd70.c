// FUN_14075cd70 @ 14075cd70
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 14075ccb0 FUN_14075ccb0


void FUN_14075cd70(longlong param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 8,2);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bb6d0(param_2,param_1 + 0x18);
  FUN_14075ccb0(param_1 + 0x40,param_2);
  return;
}

