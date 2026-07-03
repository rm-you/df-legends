// FUN_140c0b820 @ 140c0b820
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c0b820(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = (int)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  local_res8[0] = iVar1;
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = iVar1 + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      local_res8[0] = **(int **)(*(longlong *)(param_1 + 2) + lVar2 * 8);
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  FUN_1400021b0(param_2,param_1 + 10);
  return;
}

