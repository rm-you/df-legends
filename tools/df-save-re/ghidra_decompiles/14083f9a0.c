// FUN_14083f9a0 @ 14083f9a0
// callees:
//   -> 14083c020 FUN_14083c020
//   -> 140dfb6d8 operator_new
//   -> 140dfb5b4 free
//   -> 14083fb60 FUN_14083fb60


undefined8 * FUN_14083f9a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  
  FUN_14083c020();
  *param_1 = itemdef_pantsst::vftable;
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
  puVar1 = param_1 + 0x18;
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  if (0xf < (ulonglong)param_1[0x1b]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 0x1c;
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  if (0xf < (ulonglong)param_1[0x1f]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0;
  puVar2 = operator_new(2);
  param_1[0x24] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x25) = 2;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xa000a;
  *(undefined2 *)(param_1 + 0x27) = 100;
  if ((void *)param_1[0x21] != (void *)0x0) {
    free((void *)param_1[0x21]);
  }
  puVar3 = operator_new(1);
  param_1[0x21] = puVar3;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x22) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  FUN_14083fb60(param_1);
  return param_1;
}

