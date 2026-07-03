// FUN_140315cd0 @ 140315cd0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140314d40 FUN_140314d40
//   -> 140315500 FUN_140315500


void FUN_140315cd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1405bba90(param_2,param_1 + 8,2);
  FUN_1405bba90(param_2,param_1 + 10,2);
  FUN_1405bba90(param_2,param_1 + 0xc,2);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xcfffffff;
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_140314d40(param_2,param_1 + 0x20);
  FUN_140315500(param_2,param_1 + 0x38,param_3);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  FUN_1405bba90(param_2,param_1 + 0x54,4);
  return;
}

