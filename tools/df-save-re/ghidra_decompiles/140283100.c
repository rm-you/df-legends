// FUN_140283100 @ 140283100
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000bfc0 FUN_14000bfc0
//   -> 140050150 FUN_140050150


void FUN_140283100(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14000c8b0(param_1,param_2,0,0xffffffffffffffff);
  }
  FUN_14000bfc0(param_1 + 0x50,param_2 + 0x50);
  FUN_14000bfc0(param_1 + 0x20,param_2 + 0x20);
  FUN_14000bfc0(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_140050150(param_1 + 0x68,param_2 + 0x68);
  if (param_1 + 0x88 != param_2 + 0x88) {
    FUN_14000c8b0(param_1 + 0x88,param_2 + 0x88,0,0xffffffffffffffff);
  }
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  return;
}

