// FUN_140c25460 @ 140c25460
// callees:
//   -> 1405bba90 FUN_1405bba90


void FUN_140c25460(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,2);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,2);
  FUN_1405bba90(param_2,param_1 + 0xba,2);
  FUN_1405bba90(param_2,param_1 + 0xbc,4);
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0xb8)) {
    do {
      FUN_1405bba90(param_2,param_1 + 0x18 + (longlong)iVar1 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x68 + (longlong)iVar1 * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0xb8));
  }
  FUN_1405bba90(param_2,param_1 + 0xc0,4);
  return;
}

