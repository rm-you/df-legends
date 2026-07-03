// FUN_14007b2f0 @ 14007b2f0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_14007b2f0(undefined8 *param_1,undefined8 *param_2)

{
  if ((ulonglong)param_2[3] < 0x10) {
    if (param_2[2] + 1 != 0) {
      memmove(param_1,param_2,param_2[2] + 1);
    }
  }
  else {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_2;
    }
    *param_2 = 0;
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_2[3] = 0xf;
  param_2[2] = 0;
  if (0xf < (ulonglong)param_2[3]) {
    *(undefined1 *)*param_2 = 0;
    return;
  }
  *(undefined1 *)param_2 = 0;
  return;
}

