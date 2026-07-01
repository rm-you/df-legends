// FUN_1400de500 @ 1400de500
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380


void FUN_1400de500(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002380(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  if (0x6a3 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x2c,4);
  }
  return;
}

