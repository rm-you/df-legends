// FUN_140335d50 @ 140335d50
// callees:
//   -> 14007da60 FUN_14007da60
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


longlong * FUN_140335d50(longlong *param_1)

{
  longlong lVar1;
  
  FUN_14007da60();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  free(param_1);
  return param_1;
}

