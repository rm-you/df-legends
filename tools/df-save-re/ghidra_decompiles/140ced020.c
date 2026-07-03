// FUN_140ced020 @ 140ced020
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 140050410 FUN_140050410


undefined8 * FUN_140ced020(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *local_res10;
  
  lVar2 = 100;
  _eh_vector_constructor_iterator_(param_1 + 1,0x20,100,FUN_1400025a0,FUN_1400030c0);
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 4;
    *puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res10 = param_1;
  if ((&local_res10 < DAT_141c67068) && (DAT_141c67060 <= &local_res10)) {
    lVar2 = (longlong)&local_res10 - (longlong)DAT_141c67060;
    if (DAT_141c67068 == DAT_141c67070) {
      FUN_140050410(&DAT_141c67060);
    }
    if (DAT_141c67068 != (undefined8 **)0x0) {
      *DAT_141c67068 = DAT_141c67060[lVar2 >> 3];
    }
  }
  else {
    if (DAT_141c67068 == DAT_141c67070) {
      FUN_140050410(&DAT_141c67060);
    }
    if (DAT_141c67068 != (undefined8 **)0x0) {
      *DAT_141c67068 = param_1;
    }
  }
  DAT_141c67068 = DAT_141c67068 + 1;
  return param_1;
}

