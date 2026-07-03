// FUN_140c24b50 @ 140c24b50
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'


undefined2 * FUN_140c24b50(undefined2 *param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x10,0x18,4,FUN_1400025a0,FUN_1400025c0);
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return param_1;
}

