// FUN_140002740 @ 140002740
// callees:
//   -> 140002020 FUN_140002020


void FUN_140002740(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 4;
  if (0xf < (ulonglong)param_1[7]) {
    FUN_140002020(*puVar1,param_1[7] + 1,1);
  }
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
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

