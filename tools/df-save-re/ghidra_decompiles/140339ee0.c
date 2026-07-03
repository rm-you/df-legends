// FUN_140339ee0 @ 140339ee0
// callees:
//   -> 140002380 FUN_140002380
//   -> 1405bba90 FUN_1405bba90


void FUN_140339ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140002380(param_1 + 0x20);
  lVar1 = param_1 + 0x30;
  lVar2 = 0x18;
  do {
    FUN_1405bba90(param_2,lVar1,2);
    lVar1 = lVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1405bba90(param_2,param_1 + 0x60,4);
  FUN_1405bba90(param_2,param_1 + 100,4);
  FUN_1405bba90(param_2,param_1 + 0x68,2);
  return;
}

