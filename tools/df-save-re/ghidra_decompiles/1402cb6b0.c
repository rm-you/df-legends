// FUN_1402cb6b0 @ 1402cb6b0
// callees:


longlong FUN_1402cb6b0(short param_1,short param_2,undefined8 *param_3,longlong *param_4)

{
  short *psVar1;
  short *psVar2;
  
  psVar1 = (short *)*param_3;
  if (psVar1 < (short *)param_3[1]) {
    psVar2 = psVar1;
    do {
      if ((*psVar2 == param_1) &&
         (*(short *)((*param_4 - (longlong)psVar1) + (longlong)psVar2) == param_2)) {
        return (longlong)psVar2 - (longlong)psVar1 >> 1;
      }
      psVar2 = psVar2 + 1;
    } while (psVar2 < (short *)param_3[1]);
  }
  return 0xffffffff;
}

