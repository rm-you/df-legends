// FUN_140c23550 @ 140c23550
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140c23550(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 6;
  lVar1 = param_1;
  do {
    FUN_1405bba90(param_2,lVar1,4);
    FUN_1405bba90(param_2,lVar1 + 0x18,4);
    lVar1 = lVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1 = param_1 + 100;
  lVar1 = 0xd;
  do {
    FUN_1405bba90(param_2,param_1 + -0x34,4);
    FUN_1405bba90(param_2,param_1,4);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

