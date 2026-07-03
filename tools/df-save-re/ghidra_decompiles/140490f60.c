// FUN_140490f60 @ 140490f60
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_140490f60(undefined8 *param_1)

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
  param_1[0x13] = 0;
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
  _eh_vector_constructor_iterator_(param_1 + 0x1f,0x20,0xf,FUN_14000c2b0,FUN_14000c260);
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  puVar1 = param_1 + 0x67;
  param_1[0x6a] = 0xf;
  param_1[0x69] = 0;
  if (0xf < (ulonglong)param_1[0x6a]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  puVar2 = operator_new(4);
  param_1[5] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 6) = 4;
  *(undefined4 *)(param_1 + 0x65) = 0x10000;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x32e) = 0xffff;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0x50000;
  *(undefined4 *)(param_1 + 0x66) = 0x7531;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  return param_1;
}

