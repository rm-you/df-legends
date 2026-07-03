// FUN_140284f00 @ 140284f00
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000bfc0 FUN_14000bfc0


void FUN_140284f00(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[4] = param_2[4];
  if (param_1 + 8 != param_2 + 8) {
    FUN_14000c8b0(param_1 + 8,param_2 + 8,0,0xffffffffffffffff);
  }
  if (param_1 + 0x18 != param_2 + 0x18) {
    FUN_14000c8b0(param_1 + 0x18,param_2 + 0x18,0,0xffffffffffffffff);
  }
  if (param_1 + 0x28 != param_2 + 0x28) {
    FUN_14000c8b0(param_1 + 0x28,param_2 + 0x28,0,0xffffffffffffffff);
  }
  FUN_14000bfc0(param_1 + 0x38,param_2 + 0x38);
  FUN_14000bfc0(param_1 + 0x44,param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return;
}

