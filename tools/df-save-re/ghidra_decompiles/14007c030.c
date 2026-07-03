// FUN_14007c030 @ 14007c030
// callees:
//   -> 140002020 FUN_140002020


void FUN_14007c030(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1,1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

