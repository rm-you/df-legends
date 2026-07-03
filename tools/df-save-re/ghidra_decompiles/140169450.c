// FUN_140169450 @ 140169450
// callees:
//   -> 1401b3070 FUN_1401b3070


undefined8 * FUN_140169450(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = buildingst::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar1 = param_1 + 0x20;
  param_1[0x23] = 0xf;
  param_1[0x22] = 0;
  if (0xf < (ulonglong)param_1[0x23]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 5) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0xffff;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  if (param_2 == '\0') {
    *(int *)(param_1 + 10) = DAT_1416992ac;
    DAT_1416992ac = DAT_1416992ac + 1;
    FUN_1401b3070(param_1,&DAT_141c6fda0,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

