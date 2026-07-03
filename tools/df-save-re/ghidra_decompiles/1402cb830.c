// FUN_1402cb830 @ 1402cb830
// callees:


longlong FUN_1402cb830(short param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_4;
  psVar1 = (short *)*param_3;
  while( true ) {
    if ((short *)param_3[1] <= psVar1) {
      return 0xffffffff;
    }
    if ((*psVar1 == param_1) && (*piVar2 == param_2)) break;
    psVar1 = psVar1 + 1;
    piVar2 = piVar2 + 1;
  }
  return (longlong)psVar1 - (longlong)*param_3 >> 1;
}

