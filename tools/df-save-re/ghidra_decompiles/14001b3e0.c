// FUN_14001b3e0 @ 14001b3e0
// callees:
//   -> 140050410 FUN_140050410
//   -> 14001b500 FUN_14001b500


void FUN_14001b3e0(ulonglong *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  longlong lVar3;
  int iVar4;
  int *local_res10 [3];
  
  if (param_2 == (int *)0x0) {
    return;
  }
  ppiVar1 = (int **)param_1[1];
  ppiVar2 = (int **)*param_1;
  iVar4 = (int)((longlong)ppiVar1 - (longlong)ppiVar2 >> 3);
  local_res10[0] = param_2;
  if (iVar4 == 0) {
    if ((ppiVar1 <= local_res10) || (local_res10 < ppiVar2)) {
      ppiVar2 = (int **)param_1[2];
joined_r0x00014001b4cf:
      if (ppiVar1 == ppiVar2) {
        FUN_140050410(param_1);
      }
      if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_2;
      }
      goto LAB_14001b478;
    }
    lVar3 = (longlong)local_res10 - (longlong)ppiVar2;
    ppiVar2 = (int **)param_1[2];
  }
  else {
    iVar4 = iVar4 + -1;
    if (*param_2 <= *ppiVar2[iVar4]) {
      FUN_14001b500(param_1,0,iVar4,param_2);
      return;
    }
    if ((ppiVar1 <= local_res10) || (local_res10 < ppiVar2)) {
      ppiVar2 = (int **)param_1[2];
      goto joined_r0x00014001b4cf;
    }
    lVar3 = (longlong)local_res10 - (longlong)ppiVar2;
    ppiVar2 = (int **)param_1[2];
  }
  if (ppiVar1 == ppiVar2) {
    FUN_140050410(param_1);
  }
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[1] = *(undefined8 *)(*param_1 + (lVar3 >> 3) * 8);
    param_1[1] = param_1[1] + 8;
    return;
  }
LAB_14001b478:
  param_1[1] = param_1[1] + 8;
  return;
}

