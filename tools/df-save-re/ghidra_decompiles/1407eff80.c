// FUN_1407eff80 @ 1407eff80
// callees:
//   -> 1400b3c20 FUN_1400b3c20


undefined8 * FUN_1407eff80(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = itemst::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 1) = 0x8ad08ad0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x8ad0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 0xffffffffffffffff;
  if (param_2 == '\0') {
    *(int *)((longlong)param_1 + 0x1c) = DAT_14167eca8;
    DAT_14167eca8 = DAT_14167eca8 + 1;
    FUN_1400b3c20(param_1,&DAT_141c67368,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

