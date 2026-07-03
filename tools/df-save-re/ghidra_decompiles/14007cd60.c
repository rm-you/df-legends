// FUN_14007cd60 @ 14007cd60
// callees:
//   -> 1407eff80 FUN_1407eff80


undefined8 * FUN_14007cd60(undefined8 *param_1)

{
  FUN_1407eff80();
  *(undefined4 *)(param_1 + 0x13) = 0x2742;
  *param_1 = item_craftedst::vftable;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x17) = 0xffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((longlong)param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  return param_1;
}

