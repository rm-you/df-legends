// FUN_14048e580 @ 14048e580
// callees:
//   -> 14048e310 FUN_14048e310
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


undefined8 * FUN_14048e580(undefined8 *param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_14048e310(_Memory);
    free(_Memory);
  }
  *param_1 = 0;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[3] - lVar1 >> 2,4);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  free(param_1);
  return param_1;
}

