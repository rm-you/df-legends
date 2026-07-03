// FUN_1400be510 @ 1400be510
// callees:
//   -> 14000be20 FUN_14000be20


void FUN_1400be510(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  
  psVar1 = (short *)param_2[1];
  psVar4 = (short *)*param_2;
  do {
    if (psVar1 <= psVar4) {
      return;
    }
    psVar3 = (short *)*param_1;
    psVar2 = (short *)param_1[1];
    if (psVar3 < psVar2) {
      do {
        if (*psVar4 == *psVar3) {
          if (psVar3 < psVar2) goto LAB_1400be560;
          break;
        }
        psVar3 = psVar3 + 1;
      } while (psVar3 < psVar2);
    }
    FUN_14000be20(param_1,psVar4);
LAB_1400be560:
    psVar4 = psVar4 + 1;
  } while( true );
}

