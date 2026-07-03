// FUN_1402831a0 @ 1402831a0
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_1402831a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[4] = 0;
  puVar1 = param_1 + 6;
  param_1[9] = 0xf;
  param_1[8] = 0;
  if (0xf < (ulonglong)param_1[9]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 10;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0xe,0x20,3,FUN_14000c2b0,FUN_14000c260);
  puVar1 = param_1 + 0x1f;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  if (0xf < (ulonglong)param_1[0x22]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x24;
  param_1[0x27] = 0xf;
  param_1[0x26] = 0;
  if (0xf < (ulonglong)param_1[0x27]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    free((void *)param_1[4]);
  }
  puVar2 = operator_new(3);
  param_1[4] = puVar2;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)(param_1 + 5) = 3;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  return param_1;
}

