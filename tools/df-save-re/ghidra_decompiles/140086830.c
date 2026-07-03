// FUN_140086830 @ 140086830
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_140086830(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x13,0x20,0xf,FUN_14000c2b0,FUN_14000c260);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar2 = operator_new(4);
  param_1[5] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 6) = 4;
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x50000;
  *(undefined2 *)(param_1 + 0x5b) = 1;
  *(undefined4 *)(param_1 + 0x5a) = 0x7531;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x7531;
  return param_1;
}

