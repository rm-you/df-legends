// FUN_140083d80 @ 140083d80
// callees:
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_140083d80(longlong param_1,undefined8 param_2)

{
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_140002380(param_1 + 0x48,param_2);
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  return;
}

