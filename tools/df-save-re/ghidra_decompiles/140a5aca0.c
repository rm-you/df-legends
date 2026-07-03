// FUN_140a5aca0 @ 140a5aca0
// callees:
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020


void FUN_140a5aca0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(*param_1 + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[1] = *param_1;
  iVar1 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(param_1[3] + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[4] = param_1[3];
  iVar1 = (int)(param_1[7] - param_1[6] >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      free(*(void **)(param_1[6] + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  param_1[7] = param_1[6];
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[8] - lVar2 >> 3,8);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[5] - lVar2 >> 3,8);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 3,8);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

