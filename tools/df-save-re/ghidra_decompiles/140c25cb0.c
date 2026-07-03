// FUN_140c25cb0 @ 140c25cb0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140c25cb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x50;
  lVar1 = 10;
  do {
    FUN_1405bba90(param_2,param_1 + -0x50,4);
    FUN_1405bba90(param_2,param_1 + -0x28,4);
    FUN_1405bba90(param_2,param_1,4);
    FUN_1405bba90(param_2,param_1 + 0x28,4);
    FUN_1405bba90(param_2,param_1 + 0x50,4);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

