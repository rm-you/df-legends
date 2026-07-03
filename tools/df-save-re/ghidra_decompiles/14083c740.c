// FUN_14083c740 @ 14083c740
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14083c890 FUN_14083c890


undefined8 * FUN_14083c740(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  FUN_14083c020();
  *param_1 = itemdef_trapcompst::vftable;
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
  puVar1 = param_1 + 0x14;
  param_1[0x17] = 0xf;
  param_1[0x16] = 0;
  if (0xf < (ulonglong)param_1[0x17]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((void *)param_1[0x1a] != (void *)0x0) {
    free((void *)param_1[0x1a]);
  }
  puVar2 = operator_new(1);
  param_1[0x1a] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined4 *)(param_1 + 0x18) = 10;
  *(undefined4 *)(param_1 + 0x19) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  FUN_14083c890(param_1);
  return param_1;
}

