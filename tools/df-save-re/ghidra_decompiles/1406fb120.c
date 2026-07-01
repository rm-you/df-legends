// FUN_1406fb120 @ 1406fb120
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_1406fb120(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      FUN_1405bba90(param_2,param_1 + (longlong)iVar1 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x18 + (longlong)iVar1 * 2,2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return;
}

