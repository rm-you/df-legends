// FUN_14083d580 @ 14083d580
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14083d860 FUN_14083d860


undefined8 * FUN_14083d580(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  FUN_14083c020();
  *param_1 = itemdef_instrumentst::vftable;
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
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar1 = param_1 + 0x1b;
  param_1[0x1e] = 0xf;
  param_1[0x1d] = 0;
  if (0xf < (ulonglong)param_1[0x1e]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  puVar1 = param_1 + 0x4e;
  param_1[0x51] = 0xf;
  param_1[0x50] = 0;
  if (0xf < (ulonglong)param_1[0x51]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  if ((void *)param_1[0x14] != (void *)0x0) {
    free((void *)param_1[0x14]);
  }
  puVar2 = operator_new(2);
  param_1[0x14] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x15) = 2;
  FUN_14083d860(param_1);
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)(param_1 + 0x17) = 10;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 1000;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 3;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 9000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 9000;
  return param_1;
}

