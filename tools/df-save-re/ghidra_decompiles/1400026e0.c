// FUN_1400026e0 @ 1400026e0
// callees:
//   -> 140002660 FUN_140002660


undefined8 * FUN_1400026e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar1 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = param_1 + 4;
  param_1[7] = 0xf;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_140002660();
  return param_1;
}

