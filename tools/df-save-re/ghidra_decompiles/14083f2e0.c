// FUN_14083f2e0 @ 14083f2e0
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 14083f3e0 FUN_14083f3e0


undefined8 * FUN_14083f2e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_14083c020();
  *param_1 = itemdef_shieldst::vftable;
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
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 10;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined2 *)((longlong)param_1 + 0xca) = 0;
  FUN_14083f3e0(param_1);
  return param_1;
}

