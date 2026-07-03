// FUN_140c0c080 @ 140c0c080
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140c0bdb0 FUN_140c0bdb0


void FUN_140c0c080(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_140c0bdb0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x30,4);
  FUN_1405bba90(param_2,param_1 + 0x34,2);
  FUN_1405bba90(param_2,param_1 + 0x36,2);
  FUN_1405bba90(param_2,param_1 + 0x38,2);
  FUN_1405bba90(param_2,param_1 + 0x3a,2);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,param_1 + 0xe8,2);
  FUN_1405bba90(param_2,param_1 + 0xea,2);
  FUN_1405bba90(param_2,param_1 + 0xec,4);
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0xe8)) {
    do {
      FUN_1405bba90(param_2,param_1 + 0x48 + (longlong)iVar1 * 4,4);
      FUN_1405bba90(param_2,param_1 + 0x98 + (longlong)iVar1 * 4,4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0xe8));
  }
  FUN_1405bba90(param_2,param_1 + 0xf0,4);
  FUN_1405bba90(param_2,param_1,4);
  return;
}

