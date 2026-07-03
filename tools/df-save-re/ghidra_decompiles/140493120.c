// FUN_140493120 @ 140493120
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 140002250 FUN_140002250


void FUN_140493120(longlong param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bb6d0(param_2,param_1 + 8);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1 + 0x2c,2);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_140002250(param_2,param_1 + 0x48);
  FUN_140002250(param_2,param_1 + 0x60);
  FUN_140002250(param_2,param_1 + 0x78);
  return;
}

