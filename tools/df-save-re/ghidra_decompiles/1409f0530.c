// FUN_1409f0530 @ 1409f0530
// callees:
//   -> 140858a80 FUN_140858a80


undefined8 * FUN_1409f0530(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  *param_1 = projst::vftable;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  uVar1 = FUN_140858a80(&DAT_141c6fd80,param_1);
  param_1[1] = uVar1;
  if (param_2 == '\0') {
    *(int *)(param_1 + 2) = DAT_14167ec48;
    DAT_14167ec48 = DAT_14167ec48 + 1;
  }
  return param_1;
}

