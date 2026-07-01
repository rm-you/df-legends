// FUN_140080880 @ 140080880
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002380 FUN_140002380
//   -> 140002250 FUN_140002250


void FUN_140080880(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_140002380(param_1 + 0x10,param_2);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x28,4);
  if (0x642 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x2c,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_140002250(param_2,param_1 + 0x40);
  return;
}

