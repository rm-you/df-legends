// FUN_14048e600 @ 14048e600
// callees:
//   -> 14048e680 FUN_14048e680
//   -> 140002020 FUN_140002020


void FUN_14048e600(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_14048e680();
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[1] = *param_1;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

