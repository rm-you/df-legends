// FUN_140315ac0 @ 140315ac0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140315ac0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405bba90(param_2,param_1 + 0x72,1);
  if (*(char *)(param_1 + 0x72) != '\0') {
    FUN_1405bb6d0(param_2,param_1);
    FUN_1405bb6d0(param_2,param_1 + 0x20);
    lVar2 = 7;
    lVar1 = param_1 + 0x40;
    lVar3 = 7;
    do {
      FUN_1405bba90(param_2,lVar1,4);
      lVar1 = lVar1 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    lVar1 = param_1 + 0x5c;
    do {
      FUN_1405bba90(param_2,lVar1,2);
      lVar1 = lVar1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_1405bba90(param_2,param_1 + 0x6c,4);
    FUN_1405bba90(param_2,param_1 + 0x70,2);
  }
  return;
}

