// FUN_140498db0 @ 140498db0
// callees:
//   -> 140002020 FUN_140002020


void FUN_140498db0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[9] - lVar1 >> 2,4);
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[6] - lVar1 >> 1,2);
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

