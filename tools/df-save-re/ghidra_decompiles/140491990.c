// FUN_140491990 @ 140491990
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


longlong FUN_140491990(longlong param_1)

{
  undefined8 *puVar1;
  
  _eh_vector_constructor_iterator_((void *)(param_1 + 8),0x18,7,FUN_1400025a0,FUN_140002620);
  _eh_vector_constructor_iterator_((void *)(param_1 + 0xb0),0x18,7,FUN_1400025a0,FUN_140002620);
  _eh_vector_constructor_iterator_((void *)(param_1 + 0x158),0x18,7,FUN_1400025a0,FUN_1400030c0);
  puVar1 = (undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x218) = 0xf;
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x218)) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  return param_1;
}

