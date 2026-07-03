// FUN_140baed80 @ 140baed80
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140baed80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  param_1 = param_1 + 0x1c0c;
  lVar1 = 0x10;
  do {
    lVar2 = 0x10;
    do {
      FUN_1405bba90(param_2,param_1 + -0x400,4);
      FUN_1405bba90(param_2,param_1,4);
      FUN_1405bba90(param_2,param_1 + 0x400,4);
      FUN_1405bba90(param_2,param_1 + 0x800,4);
      FUN_1405bba90(param_2,param_1 + 0xc00,4);
      FUN_1405bba90(param_2,param_1 + 0x1000,4);
      FUN_1405bba90(param_2,param_1 + -0x1c00,4);
      FUN_1405bba90(param_2,param_1 + -0x1800,4);
      FUN_1405bba90(param_2,param_1 + -0x1400,4);
      FUN_1405bba90(param_2,param_1 + -0x1000,4);
      FUN_1405bba90(param_2,param_1 + -0xc00,4);
      FUN_1405bba90(param_2,param_1 + -0x800,4);
      FUN_1405bba90(param_2,param_1 + 0x1800,4);
      param_1 = param_1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

