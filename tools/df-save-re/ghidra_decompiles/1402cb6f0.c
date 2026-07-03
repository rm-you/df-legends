// FUN_1402cb6f0 @ 1402cb6f0
// callees:
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390


void FUN_1402cb6f0(short param_1,int param_2,longlong *param_3,ulonglong *param_4)

{
  short *psVar1;
  short *psVar2;
  int *piVar3;
  short *psVar4;
  int *piVar5;
  short local_res8 [4];
  int local_res10 [2];
  
  psVar1 = (short *)param_3[1];
  psVar2 = (short *)*param_3;
  piVar5 = (int *)*param_4;
  psVar4 = psVar2;
  while( true ) {
    if (psVar1 <= psVar4) {
      local_res8[0] = param_1;
      local_res10[0] = param_2;
      if ((local_res8 < psVar1) && (psVar2 <= local_res8)) {
        if (psVar1 == (short *)param_3[2]) {
          FUN_14000c460(param_3,1);
        }
        if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
          *(undefined2 *)param_3[1] =
               *(undefined2 *)(*param_3 + ((longlong)local_res8 - (longlong)psVar2 >> 1) * 2);
        }
      }
      else {
        if (psVar1 == (short *)param_3[2]) {
          FUN_14000c460(param_3,1);
        }
        if ((short *)param_3[1] != (short *)0x0) {
          *(short *)param_3[1] = param_1;
        }
      }
      param_3[1] = param_3[1] + 2;
      piVar5 = (int *)param_4[1];
      if ((local_res10 < piVar5) && (piVar3 = (int *)*param_4, piVar3 <= local_res10)) {
        if (piVar5 == (int *)param_4[2]) {
          FUN_14000c390(param_4,1);
        }
        if ((undefined4 *)param_4[1] != (undefined4 *)0x0) {
          *(undefined4 *)param_4[1] =
               *(undefined4 *)(*param_4 + ((longlong)local_res10 - (longlong)piVar3 >> 2) * 4);
        }
      }
      else {
        if (piVar5 == (int *)param_4[2]) {
          FUN_14000c390(param_4,1);
        }
        if ((int *)param_4[1] != (int *)0x0) {
          *(int *)param_4[1] = param_2;
        }
      }
      param_4[1] = param_4[1] + 4;
      return;
    }
    if ((*psVar4 == param_1) && (*piVar5 == param_2)) break;
    psVar4 = psVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  return;
}

