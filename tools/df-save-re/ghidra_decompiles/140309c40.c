// FUN_140309c40 @ 140309c40
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140309c40(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  if (param_3 < 0x5cc) {
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x28,4);
    FUN_1405bba90(param_2,param_1 + 0x2c,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  return;
}

