// FUN_1400b46b0 @ 1400b46b0
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1400b46b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1405bba90(param_2,param_1 + 0x400,4);
  iVar1 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    do {
      lVar2 = (longlong)iVar3;
      FUN_1405bba90(param_2,param_1 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x100 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x200 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x300 + lVar2 * 4,4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x400));
  }
  FUN_1405bba90(param_2,param_1 + 0x704,4);
  if (0 < *(int *)(param_1 + 0x704)) {
    do {
      lVar2 = (longlong)iVar1;
      FUN_1405bba90(param_2,param_1 + 0x404 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x504 + lVar2 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x604 + lVar2 * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x704));
  }
  return;
}

