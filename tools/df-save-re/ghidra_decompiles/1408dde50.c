// FUN_1408dde50 @ 1408dde50
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> EXTERNAL:000000e1 memmove


undefined8 * FUN_1408dde50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = 0;
  puVar1 = param_1 + 10;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  if (0xf < (ulonglong)param_1[0xd]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0xe;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  if (0xf < (ulonglong)param_1[0x11]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x12;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  if (0xf < (ulonglong)param_1[0x15]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x16;
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  if (0xf < (ulonglong)param_1[0x19]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  if (0xf < (ulonglong)param_1[0x1d]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x1e;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  if (0xf < (ulonglong)param_1[0x21]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x22;
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  if (0xf < (ulonglong)param_1[0x25]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x54,0x20,0x1b,FUN_14000c2b0,FUN_14000c260);
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  puVar1 = param_1 + 0xc4;
  param_1[199] = 0xf;
  param_1[0xc6] = 0;
  if (0xf < (ulonglong)param_1[199]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 200;
  param_1[0xcb] = 0xf;
  param_1[0xca] = 0;
  if (0xf < (ulonglong)param_1[0xcb]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0xcc;
  param_1[0xcf] = 0xf;
  param_1[0xce] = 0;
  if (0xf < (ulonglong)param_1[0xcf]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0xd0;
  param_1[0xd3] = 0xf;
  param_1[0xd2] = 0;
  if (0xf < (ulonglong)param_1[0xd3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0xd4;
  param_1[0xd7] = 0xf;
  param_1[0xd6] = 0;
  if (0xf < (ulonglong)param_1[0xd7]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0xd8;
  param_1[0xdb] = 0xf;
  param_1[0xda] = 0;
  if (0xf < (ulonglong)param_1[0xdb]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    free((void *)param_1[8]);
  }
  puVar1 = operator_new(0xb);
  param_1[8] = puVar1;
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 1) = 0;
  *(undefined1 *)((longlong)puVar1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0xb;
  if (9 < *(int *)(param_1 + 9)) {
    *(byte *)(param_1[8] + 9) = *(byte *)(param_1[8] + 9) | 0x10;
  }
  if (10 < *(int *)(param_1 + 9)) {
    *(byte *)(param_1[8] + 10) = *(byte *)(param_1[8] + 10) | 1;
  }
  param_1[0x26] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x39) = 300;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13a) = 0x2222a9e7;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x50032;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x20100;
  *(undefined4 *)(param_1 + 0x3b) = 0x600;
  *(undefined2 *)(param_1 + 0x46) = 0x704;
  *(undefined1 *)((longlong)param_1 + 0x232) = 4;
  *(undefined4 *)((longlong)param_1 + 0x13e) = 0xe7e7c618;
  *(undefined4 *)((longlong)param_1 + 0x1df) = 2;
  *(undefined4 *)((longlong)param_1 + 0x1e3) = 0x20100;
  *(undefined4 *)((longlong)param_1 + 0x1e7) = 0x1000000;
  param_1[0xc0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x142) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x146) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x14a) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x14e) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x152) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x156) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x15a) = 0x27602c2e;
  *(undefined4 *)((longlong)param_1 + 0x1eb) = 0x2020202;
  *(undefined8 *)((longlong)param_1 + 0x1ff) = 0;
  *(undefined8 *)((longlong)param_1 + 0x213) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0x2020202;
  *(undefined4 *)((longlong)param_1 + 499) = 0x6060606;
  *(undefined8 *)((longlong)param_1 + 0x207) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21b) = 0x1010101;
  *(undefined4 *)((longlong)param_1 + 0x1f7) = 0x6060606;
  *(undefined4 *)((longlong)param_1 + 0x1fb) = 0x6060202;
  *(undefined4 *)((longlong)param_1 + 0x20f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x223) = 0x10001;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 10;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 2;
  *(undefined4 *)(param_1 + 0xdd) = 10;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 5;
  *(undefined4 *)(param_1 + 0xde) = 1;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 2;
  *(undefined4 *)(param_1 + 0xdf) = 2;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 3;
  *(undefined4 *)(param_1 + 0xe0) = 200;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0x14;
  *(undefined4 *)(param_1 + 0xe1) = 3;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 5;
  *(undefined4 *)(param_1 + 0xe2) = 3;
  memmove((void *)((longlong)param_1 + 0x15e),&DAT_141c3401e,0x68);
  return param_1;
}

