// FUN_140367260 @ 140367260
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140367040 FUN_140367040


undefined4 * FUN_140367260(undefined4 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  _eh_vector_constructor_iterator_(param_1 + 8,0x18,4,FUN_1400025a0,FUN_1400025c0);
  FUN_140367040(param_1 + 0x20);
  *param_1 = 0xffffffff;
  puVar1 = param_1 + 0x61;
  lVar2 = 3;
  do {
    puVar1[-3] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 100) = 0xffffffffffffffff;
  return param_1;
}

