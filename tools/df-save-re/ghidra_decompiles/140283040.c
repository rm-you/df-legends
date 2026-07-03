// FUN_140283040 @ 140283040
// callees:
//   -> 140050150 FUN_140050150
//   -> 14000bfc0 FUN_14000bfc0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1402803e0 FUN_1402803e0


void FUN_140283040(longlong param_1,longlong param_2)

{
  FUN_140050150();
  FUN_140050150(param_1 + 0x18,param_2 + 0x18);
  FUN_14000bfc0(param_1 + 0x30,param_2 + 0x30);
  FUN_14000bfc0(param_1 + 0x48,param_2 + 0x48);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  if (param_1 + 0x70 != param_2 + 0x70) {
    FUN_14000c8b0(param_1 + 0x70,param_2 + 0x70,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 0x90);
  FUN_1402803e0(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1402803e0(param_1 + 0xb8,param_2 + 0xb8);
  return;
}

