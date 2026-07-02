// FUN_1406f5550 @ 1406f5550
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1406f5550(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  if (0x62a < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x10,4);
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}

