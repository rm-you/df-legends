// FUN_140566780 @ 140566780
// callees:


longlong FUN_140566780(short param_1,short param_2,short param_3,int param_4,undefined8 *param_5,
                      undefined8 *param_6,longlong *param_7,undefined8 *param_8)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  int *piVar5;
  
  psVar3 = (short *)*param_6;
  psVar1 = (short *)*param_5;
  piVar5 = (int *)*param_8;
  if (psVar1 < (short *)param_5[1]) {
    lVar4 = *param_7 - (longlong)psVar3;
    psVar2 = psVar1;
    do {
      if ((((*psVar2 == param_1) && (*psVar3 == param_2)) &&
          (*(short *)((longlong)psVar3 + lVar4) == param_3)) && (*piVar5 == param_4)) {
        return (longlong)psVar2 - (longlong)psVar1 >> 1;
      }
      psVar2 = psVar2 + 1;
      psVar3 = psVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (psVar2 < (short *)param_5[1]);
  }
  return 0xffffffff;
}

