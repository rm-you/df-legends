// FUN_1404bd210 @ 1404bd210
// callees:
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_1404bd210(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140051e20(param_1 + 10);
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xc] - lVar1 >> 3,8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  FUN_140051e20(param_1 + 7);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[9] - lVar1 >> 3,8);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  FUN_140051e20(param_1 + 4);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[6] - lVar1 >> 3,8);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    FUN_140002020(*param_1,param_1[3] + 1,1);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  if (0xf < (ulonglong)param_1[3]) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  *(undefined1 *)param_1 = 0;
  return;
}

