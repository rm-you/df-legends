// FUN_1400b93a0 @ 1400b93a0
// callees:
//   -> 1400026e0 FUN_1400026e0


undefined8 * FUN_1400b93a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1400026e0();
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0xffff;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  param_1[0x19] = 0;
  return param_1;
}

