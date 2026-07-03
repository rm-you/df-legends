// FUN_140498a40 @ 140498a40
// callees:
//   -> 140002020 FUN_140002020


void FUN_140498a40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[9] - lVar1 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1 >> 1,2);
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

