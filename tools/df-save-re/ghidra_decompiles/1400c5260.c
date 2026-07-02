// FUN_1400c5260 @ 1400c5260
// callees:
//   -> 140083d80 FUN_140083d80
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1400c5260(longlong param_1,undefined8 param_2)

{
  FUN_140083d80();
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  FUN_1405bba90(param_2,param_1 + 100,4);
  FUN_1405bba90(param_2,param_1 + 0x68,4);
  FUN_1405bba90(param_2,param_1 + 0x6c,4);
  FUN_1405bba90(param_2,param_1 + 0x70,2);
  FUN_1405bba90(param_2,param_1 + 0x72,2);
  FUN_1405bba90(param_2,param_1 + 0x74,4);
  FUN_140002250(param_2,param_1 + 0x78);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  return;
}

