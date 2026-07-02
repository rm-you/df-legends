// FUN_1400028e0 @ 1400028e0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1400028e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  param_1 = param_1 + 0x18;
  lVar1 = 8;
  do {
    FUN_1405bba90(param_2,param_1,4);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

