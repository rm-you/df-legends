// FUN_1400b7de0 @ 1400b7de0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250


void FUN_1400b7de0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_140002250(param_2,param_1 + 0x20);
  FUN_140002250(param_2,param_1 + 0x38);
  FUN_140002250(param_2,param_1 + 0x50);
  FUN_1405bba90(param_2,param_1 + 0x770,4);
  FUN_1405bba90(param_2,param_1 + 0x774,4);
  FUN_1405bba90(param_2,param_1 + 0x778,4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x778)) {
    do {
      lVar2 = (longlong)iVar1;
      FUN_1405bba90(param_2,param_1 + 0x68 + lVar2,1);
      FUN_1405bba90(param_2,param_1 + 0x130 + lVar2 * 2,2);
      FUN_1405bba90(param_2,param_1 + 0x2c0 + lVar2 * 2,2);
      FUN_1405bba90(param_2,param_1 + 0x450 + lVar2 * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x778));
  }
  FUN_1405bba90(param_2,param_1 + 0x77c,4);
  FUN_1405bba90(param_2,param_1 + 0x780,4);
  FUN_1405bba90(param_2,param_1 + 0x784,4);
  FUN_1405bba90(param_2,param_1 + 0x788,4);
  FUN_1405bba90(param_2,param_1 + 0x78c,4);
  FUN_1405bba90(param_2,param_1 + 0x790,4);
  return;
}

