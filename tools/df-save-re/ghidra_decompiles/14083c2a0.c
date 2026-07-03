// FUN_14083c2a0 @ 14083c2a0
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 14083c440 FUN_14083c440


undefined8 * FUN_14083c2a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  FUN_14083c020();
  *param_1 = itemdef_weaponst::vftable;
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
  puVar1 = param_1 + 0x1a;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  if (0xf < (ulonglong)param_1[0x1d]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((void *)param_1[0x20] != (void *)0x0) {
    free((void *)param_1[0x20]);
  }
  puVar2 = operator_new(1);
  param_1[0x20] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined4 *)(param_1 + 0x18) = 10;
  *(undefined2 *)(param_1 + 0x19) = 0x29;
  *(undefined2 *)((longlong)param_1 + 0xca) = 0xffff;
  *(undefined4 *)(param_1 + 0x1e) = 5000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 4000;
  param_1[0x25] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  FUN_14083c440(param_1);
  return param_1;
}

