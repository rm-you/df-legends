// FUN_14020fc80 @ 14020fc80
// callees:
//   -> 14000c390 FUN_14000c390


void FUN_14020fc80(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)param_2[1];
  piVar5 = (int *)*param_2;
  do {
    if (piVar1 <= piVar5) {
      return;
    }
    piVar2 = (int *)*param_1;
    piVar3 = (int *)param_1[1];
    if (piVar2 < piVar3) {
      piVar4 = piVar2;
      do {
        if (*piVar5 == *piVar4) {
          if (piVar4 < piVar3) goto LAB_14020fd34;
          break;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 < piVar3);
    }
    if ((piVar5 < piVar3) && (piVar2 <= piVar5)) {
      if (piVar3 == (int *)param_1[2]) {
        FUN_14000c390(param_1,1);
      }
      if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[1] =
             *(undefined4 *)(*param_1 + ((longlong)piVar5 - (longlong)piVar2 >> 2) * 4);
      }
    }
    else {
      if (piVar3 == (int *)param_1[2]) {
        FUN_14000c390(param_1,1);
      }
      if ((int *)param_1[1] != (int *)0x0) {
        *(int *)param_1[1] = *piVar5;
      }
    }
    param_1[1] = param_1[1] + 4;
LAB_14020fd34:
    piVar5 = piVar5 + 1;
  } while( true );
}

