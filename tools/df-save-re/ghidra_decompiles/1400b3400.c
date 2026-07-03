// FUN_1400b3400 @ 1400b3400
// callees:


longlong FUN_1400b3400(int param_1,undefined8 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  while( true ) {
    if ((int *)param_2[1] <= piVar1) {
      return 0xffffffff;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  return (longlong)piVar1 - (longlong)*param_2 >> 2;
}

