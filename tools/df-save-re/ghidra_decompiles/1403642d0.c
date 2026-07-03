// FUN_1403642d0 @ 1403642d0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1403642d0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_140002250(param_2,param_1 + 0x10);
  FUN_140002250(param_2,param_1 + 0x28);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  if (0x64a < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x44,4);
  }
  return;
}

