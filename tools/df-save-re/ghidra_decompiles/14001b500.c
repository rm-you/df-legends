// FUN_14001b500 @ 14001b500
// callees:
//   -> 140050640 FUN_140050640
//   -> 14004ffe0 FUN_14004ffe0


void FUN_14001b500(longlong *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *local_res20;
  undefined1 local_18 [16];
  
  piVar5 = param_4;
  local_res20 = param_4;
  if (param_2 <= param_3) {
    lVar4 = *param_1;
    iVar3 = *param_4;
    do {
      iVar2 = param_2 + param_3 >> 1;
      piVar5 = *(int **)(lVar4 + (longlong)iVar2 * 8);
      iVar1 = *piVar5;
      if (iVar1 == iVar3) {
        return;
      }
      if (param_2 == param_3) {
        if (iVar1 < iVar3) goto LAB_14001b586;
        goto LAB_14001b59c;
      }
      if (iVar3 < iVar1) {
        param_3 = iVar2 + -1;
      }
      else {
        param_2 = iVar2 + 1;
      }
    } while (param_2 <= param_3);
  }
  if (param_3 < 0) {
    lVar4 = *param_1;
    if (*param_4 <= **(int **)((longlong)param_2 * 8 + lVar4)) {
      lVar4 = (longlong)param_2 * 8 + lVar4;
      goto LAB_14001b5a0;
    }
LAB_14001b586:
    param_2 = param_2 + 1;
    if ((int)(param_1[1] - lVar4 >> 3) <= param_2) goto LAB_14001b602;
  }
  else {
    lVar4 = *param_1;
    iVar3 = (int)(param_1[1] - lVar4 >> 3);
    if (iVar3 <= param_3) {
LAB_14001b602:
      FUN_14004ffe0(param_1,&local_res20);
      return;
    }
    piVar5 = (int *)((longlong)param_3 * 8);
    if (*param_4 <= **(int **)((longlong)piVar5 + lVar4)) {
      lVar4 = (longlong)piVar5 + lVar4;
      goto LAB_14001b5a0;
    }
    param_2 = param_3 + 1;
    if (iVar3 <= param_2) goto LAB_14001b602;
  }
LAB_14001b59c:
  lVar4 = lVar4 + (longlong)param_2 * 8;
LAB_14001b5a0:
  FUN_140050640(param_1,local_18,lVar4,piVar5,&local_res20);
  return;
}

