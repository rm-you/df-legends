// FUN_140bae8f0 @ 140bae8f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002140 FUN_140002140


void FUN_140bae8f0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1 + 4,2);
  FUN_140002140(param_2,param_1 + 8);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 2,2);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  if (0x66b < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x34,4);
  }
  if (0x686 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x38,4);
    FUN_1405bba90(param_2,param_1 + 0x3c,4);
  }
  return;
}

