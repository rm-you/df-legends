// FUN_140051de0 @ 140051de0
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_140051de0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_140051e20();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

