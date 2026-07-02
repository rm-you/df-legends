// FUN_1406fa880 @ 1406fa880
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1406fa880(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_140002250(param_2,param_1 + 0x38);
  if (0x689 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x50,4);
    FUN_1405bba90(param_2,param_1 + 0x54,4);
    FUN_1405bba90(param_2,param_1 + 0x58,4);
    FUN_1405bba90(param_2,param_1 + 0x5c,4);
    FUN_1405bba90(param_2,param_1 + 0x60,4);
  }
  return;
}

