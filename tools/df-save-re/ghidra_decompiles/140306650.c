// FUN_140306650 @ 140306650
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 140002140 FUN_140002140
//   -> 1401610a0 FUN_1401610a0


void FUN_140306650(longlong param_1,undefined8 param_2)

{
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002140(param_2,param_1 + 0x20);
  FUN_1401610a0(param_2,param_1 + 0x38);
  FUN_1401610a0(param_2,param_1 + 0x50);
  FUN_1405bba90(param_2,param_1 + 0x68,2);
  FUN_1405bba90(param_2,param_1 + 0x6a,2);
  return;
}

