// FUN_1400b9510 @ 1400b9510
// callees:
//   -> 1400b9420 FUN_1400b9420
//   -> 140002740 FUN_140002740
//   -> 140002020 FUN_140002020


void FUN_1400b9510(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1400b9420();
  FUN_140002740(param_1 + 7);
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
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

