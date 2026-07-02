// FUN_1407699e0 @ 1407699e0
// callees:
//   -> 140083d80 FUN_140083d80
//   -> 140315ac0 FUN_140315ac0
//   -> 140002250 FUN_140002250
//   -> 1406fc080 FUN_1406fc080


void FUN_1407699e0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_140083d80();
  FUN_140315ac0(param_1 + 0x60,param_2);
  FUN_140002250(param_2,param_1 + 0xd8);
  FUN_140002250(param_2,param_1 + 0xf0);
  if (0x670 < param_3) {
    FUN_140002250(param_2,param_1 + 0x108);
  }
  FUN_1406fc080(param_1 + 0x120,param_2);
  return;
}

