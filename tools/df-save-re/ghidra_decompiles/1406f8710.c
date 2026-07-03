// FUN_1406f8710 @ 1406f8710
// callees:
//   -> 1406f8220 FUN_1406f8220
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_1406f8710(longlong *param_1)

{
  void *_Memory;
  longlong lVar1;
  
  _Memory = (void *)param_1[0xe];
  if (_Memory != (void *)0x0) {
    FUN_1406f8220(_Memory);
    free(_Memory);
    param_1[0xe] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xb] - lVar1 >> 2,4);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1 >> 1,2);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 2,4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 1,2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

