// FUN_140284a90 @ 140284a90
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free


void FUN_140284a90(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[0xc] - lVar1 >> 2,4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
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

