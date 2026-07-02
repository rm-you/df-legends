// FUN_1406fa940 @ 1406fa940
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1406fa940(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  if (0x689 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x38,4);
    FUN_1405bba90(param_2,param_1 + 0x3c,4);
    FUN_1405bba90(param_2,param_1 + 0x40,4);
    FUN_1405bba90(param_2,param_1 + 0x44,4);
    FUN_1405bba90(param_2,param_1 + 0x48,4);
  }
  return;
}

