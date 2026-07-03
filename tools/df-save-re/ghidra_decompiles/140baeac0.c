// FUN_140baeac0 @ 140baeac0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140baeac0(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  if (param_3 < 0x64a) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x10,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  return;
}

