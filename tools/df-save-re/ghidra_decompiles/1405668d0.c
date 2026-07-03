// FUN_1405668d0 @ 1405668d0
// callees:
//   -> 14000c390 FUN_14000c390


void FUN_1405668d0(int param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_res8 [2];
  
  piVar1 = (int *)param_2[1];
  piVar2 = (int *)*param_2;
  for (piVar3 = piVar2; piVar3 < piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 == param_1) {
      return;
    }
  }
  local_res8[0] = param_1;
  if ((local_res8 < piVar1) && (piVar2 <= local_res8)) {
    if (piVar1 == (int *)param_2[2]) {
      FUN_14000c390(param_2,1);
    }
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[1] =
           *(undefined4 *)(*param_2 + ((longlong)local_res8 - (longlong)piVar2 >> 2) * 4);
      param_2[1] = param_2[1] + 4;
      return;
    }
  }
  else {
    if (piVar1 == (int *)param_2[2]) {
      FUN_14000c390(param_2,1);
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = param_1;
    }
  }
  param_2[1] = param_2[1] + 4;
  return;
}

