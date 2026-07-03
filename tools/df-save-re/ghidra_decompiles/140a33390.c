// FUN_140a33390 @ 140a33390
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


undefined8 * FUN_140a33390(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  *param_1 = reaction_productst::vftable;
  puVar1 = param_1 + 1;
  param_1[4] = 0xf;
  param_1[3] = 0;
  if (0xf < (ulonglong)param_1[4]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 5;
  param_1[8] = 0xf;
  param_1[7] = 0;
  if (0xf < (ulonglong)param_1[8]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *param_1 = reaction_product_itemst::vftable;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = 0;
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
  puVar1 = param_1 + 0x26;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  if (0xf < (ulonglong)param_1[0x29]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x4a) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x4c) = 0xffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x10064;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
  }
  puVar2 = operator_new(2);
  param_1[0xc] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0xd) = 2;
  return param_1;
}

