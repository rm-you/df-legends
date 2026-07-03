// FUN_1405b71a0 @ 1405b71a0
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_1405b71a0(undefined8 *param_1,char param_2)

{
  undefined1 *puVar1;
  
  *param_1 = feature_initst::vftable;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 == '\0') {
    *(undefined2 *)(param_1 + 6) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x32) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x36) = 0xffff;
    *(undefined2 *)(param_1 + 7) = 0xffff;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0xffff;
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    puVar1 = operator_new(1);
    param_1[1] = puVar1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return param_1;
}

