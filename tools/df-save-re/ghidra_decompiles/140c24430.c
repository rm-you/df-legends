// FUN_140c24430 @ 140c24430
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002140 FUN_140002140
//   -> 140002250 FUN_140002250


void FUN_140c24430(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_140002140(param_2,param_1 + 0x10);
  FUN_140002140(param_2,param_1 + 0x28);
  FUN_140002250(param_2,param_1 + 0x40);
  FUN_140002250(param_2,param_1 + 0x58);
  FUN_140002250(param_2,param_1 + 0x70);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  if (0x67b < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x8c,4);
    FUN_1405bba90(param_2,param_1 + 0x90,4);
  }
  return;
}

