// FUN_14083ce30 @ 14083ce30
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14083d050 FUN_14083d050


undefined8 * FUN_14083ce30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  FUN_14083c020();
  *param_1 = itemdef_toolst::vftable;
  puVar1 = param_1 + 0xc;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  if (0xf < (ulonglong)param_1[0xf]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x10;
  param_1[0x13] = 0xf;
  param_1[0x12] = 0;
  if (0xf < (ulonglong)param_1[0x13]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  if (0xf < (ulonglong)param_1[0x1d]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x1f;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  if (0xf < (ulonglong)param_1[0x22]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar1 = param_1 + 0x30;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  if (0xf < (ulonglong)param_1[0x33]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  if ((void *)param_1[0x14] != (void *)0x0) {
    free((void *)param_1[0x14]);
  }
  puVar2 = operator_new(3);
  param_1[0x14] = puVar2;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)(param_1 + 0x15) = 3;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 10;
  *(undefined2 *)((longlong)param_1 + 0xf4) = 0x29;
  *(undefined2 *)((longlong)param_1 + 0xf6) = 0xffff;
  *(undefined4 *)(param_1 + 0x23) = 5000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 4000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  FUN_14083d050(param_1);
  return param_1;
}

