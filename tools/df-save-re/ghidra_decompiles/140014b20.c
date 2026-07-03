// FUN_140014b20 @ 140014b20
// callees:
//   -> 14000e140 FUN_14000e140


undefined8 * FUN_140014b20(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = activity_event_conversationst::vftable;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x23] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14000e140(param_1 + 0x2e);
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  param_1[100] = uVar1;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  param_1[0x2d] = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return param_1;
}

