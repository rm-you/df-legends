// FUN_140c21b60 @ 140c21b60
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000e720 FUN_14000e720


void FUN_140c21b60(longlong param_1,undefined8 param_2,int param_3)

{
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_14000e720(param_1 + 0xc,param_2);
  FUN_1405bba90(param_2,param_1 + 0x34,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  FUN_1405bba90(param_2,param_1 + 0x54,4);
  FUN_1405bba90(param_2,param_1 + 0x58,4);
  if (0x5b6 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x5c,4);
  }
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  if (0x689 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x48,4);
    FUN_1405bba90(param_2,param_1 + 0x4c,4);
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return;
}

