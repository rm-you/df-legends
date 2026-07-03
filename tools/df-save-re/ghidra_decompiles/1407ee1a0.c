// FUN_1407ee1a0 @ 1407ee1a0
// callees:
//   -> 14007cd60 FUN_14007cd60


undefined8 * FUN_1407ee1a0(undefined8 *param_1)

{
  FUN_14007cd60();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = item_figurinest::vftable;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 0xffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  return param_1;
}

