// FUN_140161f40 @ 140161f40
// callees:
//   -> 1407eff80 FUN_1407eff80
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_140161f40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1407eff80();
  *(undefined4 *)(param_1 + 0x13) = 0x2742;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *param_1 = item_critterst::vftable;
  FUN_1400026e0(param_1 + 0x18);
  param_1[0x16] = uVar1;
  *(int *)(param_1 + 0x17) = (int)uVar1;
  return param_1;
}

