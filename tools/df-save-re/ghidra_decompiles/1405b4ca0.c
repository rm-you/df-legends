// FUN_1405b4ca0 @ 1405b4ca0
// callees:
//   -> 14004ffe0 FUN_14004ffe0
//   -> 1405b4d80 FUN_1405b4d80


void FUN_1405b4ca0(longlong param_1,short *param_2)

{
  short *psVar1;
  int iVar2;
  short *local_res10 [3];
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x128) - *(longlong *)(param_1 + 0x120) >> 3);
  local_res10[0] = param_2;
  if (iVar2 == 0) {
    FUN_14004ffe0(param_1 + 0x120,local_res10);
    return;
  }
  iVar2 = iVar2 + -1;
  psVar1 = *(short **)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 8);
  if ((*param_2 <= *psVar1) &&
     ((*param_2 != *psVar1 ||
      ((param_2[1] <= psVar1[1] && ((param_2[1] != psVar1[1] || (param_2[2] <= psVar1[2])))))))) {
    FUN_1405b4d80(param_1,param_2,0,iVar2);
    return;
  }
  FUN_14004ffe0(param_1 + 0x120,local_res10);
  return;
}

