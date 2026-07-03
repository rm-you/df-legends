// FUN_1406fb6a0 @ 1406fb6a0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


longlong * FUN_1406fb6a0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 1,2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  free(param_1);
  return param_1;
}

