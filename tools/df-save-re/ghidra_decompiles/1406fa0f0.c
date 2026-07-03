// FUN_1406fa0f0 @ 1406fa0f0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


longlong * FUN_1406fa0f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 2,4);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 2,4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  free(param_1);
  return param_1;
}

