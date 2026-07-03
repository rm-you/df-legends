// FUN_140b856f0 @ 140b856f0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140b856f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 0x6ac,4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x6ac)) {
    do {
      lVar1 = (longlong)iVar2 * 0x20;
      FUN_1405bb6d0(param_2,param_1 + 8 + lVar1);
      FUN_1405bb6d0(param_2,param_1 + 0x328 + lVar1);
      FUN_1405bba90(param_2,param_1 + 0x648 + (longlong)iVar2 * 4,4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x6ac));
  }
  return;
}

