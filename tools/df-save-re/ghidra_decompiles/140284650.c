// FUN_140284650 @ 140284650
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_140284650(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0xffff;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar2 = operator_new(1);
  param_1[5] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return param_1;
}

