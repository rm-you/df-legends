// FUN_1406ff0e0 @ 1406ff0e0
// callees:


undefined2 * FUN_1406ff0e0(undefined2 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x14) = 0xf;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar2 = puVar1;
  if (0xf < *(ulonglong *)(param_1 + 0x14)) {
    puVar2 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar2 = 0;
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x14)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}

