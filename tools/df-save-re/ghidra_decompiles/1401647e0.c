// FUN_1401647e0 @ 1401647e0
// callees:
//   -> 140002020 FUN_140002020


void FUN_1401647e0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[8] - lVar1,1);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[5] - lVar1,1);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

