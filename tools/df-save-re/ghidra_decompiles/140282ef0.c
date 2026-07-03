// FUN_140282ef0 @ 140282ef0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 14000c8b0 FUN_14000c8b0


void FUN_140282ef0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  memmove(param_1 + 2,param_2 + 2,0x1c);
  memmove(param_1 + 0x10,param_2 + 0x10,0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  if (param_1 + 0x2c != param_2 + 0x2c) {
    FUN_14000c8b0(param_1 + 0x2c,param_2 + 0x2c,0,0xffffffffffffffff);
  }
  param_1[0x3c] = param_2[0x3c];
  return;
}

