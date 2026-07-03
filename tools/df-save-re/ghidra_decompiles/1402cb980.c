// FUN_1402cb980 @ 1402cb980
// callees:
//   -> 14000c460 FUN_14000c460


void FUN_1402cb980(short param_1,short param_2,longlong *param_3,ulonglong *param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short local_res8 [4];
  short local_res10 [4];
  
  psVar1 = (short *)param_3[1];
  psVar2 = (short *)*param_3;
  if (psVar2 < psVar1) {
    psVar3 = psVar2;
    do {
      if ((*psVar3 == param_1) &&
         (*(short *)((*param_4 - (longlong)psVar2) + (longlong)psVar3) == param_2)) {
        return;
      }
      psVar3 = psVar3 + 1;
    } while (psVar3 < psVar1);
  }
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
  psVar1 = (short *)param_4[1];
  if ((local_res10 < psVar1) && (psVar2 = (short *)*param_4, psVar2 <= local_res10)) {
    if (psVar1 == (short *)param_4[2]) {
      FUN_14000c460(param_4,1);
    }
    if ((undefined2 *)param_4[1] != (undefined2 *)0x0) {
      *(undefined2 *)param_4[1] =
           *(undefined2 *)(*param_4 + ((longlong)local_res10 - (longlong)psVar2 >> 1) * 2);
    }
  }
  else {
    if (psVar1 == (short *)param_4[2]) {
      FUN_14000c460(param_4,1);
    }
    if ((short *)param_4[1] != (short *)0x0) {
      *(short *)param_4[1] = param_2;
    }
  }
  param_4[1] = param_4[1] + 2;
  return;
}

