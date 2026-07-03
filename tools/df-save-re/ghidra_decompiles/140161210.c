// FUN_140161210 @ 140161210
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> EXTERNAL:000000e1 memmove


void FUN_140161210(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14000c8b0(param_1,param_2,0,0xffffffffffffffff);
  }
  if (param_1 + 0x20 != param_2 + 0x20) {
    FUN_14000c8b0(param_1 + 0x20,param_2 + 0x20,0,0xffffffffffffffff);
  }
  memmove((void *)(param_1 + 0x40),(void *)(param_2 + 0x40),0x1c);
  memmove((void *)(param_1 + 0x5c),(void *)(param_2 + 0x5c),0xe);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x72) = *(undefined1 *)(param_2 + 0x72);
  return;
}

