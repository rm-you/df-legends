// FUN_140b85550 @ 140b85550
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_140b85550(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bb6d0(param_2,param_1 + 8);
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x4c,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x44)) {
    do {
      FUN_1405bba90(param_2,param_1 + ((longlong)iVar1 + 10) * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x44));
  }
  return;
}

