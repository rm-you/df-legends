// FUN_140086a20 @ 140086a20
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new


longlong FUN_140086a20(longlong param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
  }
  puVar1 = operator_new(4);
  *(undefined4 **)(param_1 + 0x10) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0xffffffffffffffff;
  return param_1;
}

