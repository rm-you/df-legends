// FUN_1406fedd0 @ 1406fedd0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1406fedd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1405bba90(param_2,param_1 + 0x4800,4);
  FUN_1405bba90(param_2,param_1 + 0x4804,4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4800)) {
    do {
      lVar2 = (longlong)iVar1;
      FUN_1405bba90(param_2,param_1 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x1000 + lVar2 * 2,2);
      FUN_1405bba90(param_2,param_1 + 0x1800 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x2800 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x3800 + lVar2 * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4800));
  }
  return;
}

