// FUN_14014cac0 @ 14014cac0
// callees:
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0


undefined8 *
FUN_14014cac0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    if (0xf < (ulonglong)param_1[3]) {
      FUN_140002020(*param_1,param_1[3] + 1,1,param_4,0xfffffffffffffffe);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    *(undefined1 *)puVar1 = 0;
    FUN_14007b2f0(param_1,param_2);
  }
  return param_1;
}

