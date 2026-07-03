// FUN_140baf0a0 @ 140baf0a0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140baf0a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1405bba90(param_2,param_1 + 0xf0,4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      lVar1 = param_1 + (longlong)iVar2 * 0xc;
      FUN_1405bba90(param_2,lVar1,4);
      FUN_1405bba90(param_2,lVar1 + 4,4);
      FUN_1405bba90(param_2,lVar1 + 8,4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xf0));
  }
  return;
}

