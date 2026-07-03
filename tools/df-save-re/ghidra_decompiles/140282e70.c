// FUN_140282e70 @ 140282e70
// callees:
//   -> 14000c8b0 FUN_14000c8b0


void FUN_140282e70(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14000c8b0(param_1,param_2,0,0xffffffffffffffff);
  }
  if (param_1 + 0x20 != param_2 + 0x20) {
    FUN_14000c8b0(param_1 + 0x20,param_2 + 0x20,0,0xffffffffffffffff);
  }
  if (param_1 + 0x40 != param_2 + 0x40) {
    FUN_14000c8b0(param_1 + 0x40,param_2 + 0x40,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  return;
}

