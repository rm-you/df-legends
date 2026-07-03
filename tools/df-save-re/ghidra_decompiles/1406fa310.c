// FUN_1406fa310 @ 1406fa310
// callees:
//   -> 1406fa260 FUN_1406fa260
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1406fa310(longlong *param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = (void *)param_1[0x12];
  if (_Memory != (void *)0x0) {
    FUN_1406fa260(_Memory);
    free(_Memory);
    param_1[0x12] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

