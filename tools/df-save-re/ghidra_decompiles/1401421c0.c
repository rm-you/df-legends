// FUN_1401421c0 @ 1401421c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1401421c0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  FUN_140002250(param_2,param_1 + 0x28);
  FUN_140002250(param_2,param_1 + 0x40);
  if (0x591 < param_4) {
    FUN_1405bba90(param_2,param_1 + 0x58,4);
  }
  return;
}

