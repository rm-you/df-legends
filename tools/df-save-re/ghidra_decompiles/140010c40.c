// FUN_140010c40 @ 140010c40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_140010c40(longlong param_1,undefined8 param_2,int param_3)

{
  if (0x628 < param_3) {
    FUN_1405bba90(param_2,param_1,4);
    FUN_1405bba90(param_2,param_1 + 4,4);
    FUN_1405bba90(param_2,param_1 + 8,4);
    FUN_140002250(param_2,param_1 + 0x10);
    return;
  }
  FUN_1405bba90(param_2,param_1,4);
  return;
}

