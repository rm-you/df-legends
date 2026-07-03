// FUN_1405cca20 @ 1405cca20
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1405cca20(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar4 = 0;
  lVar3 = lVar4;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*param_1 + lVar3 * 8);
      local_res8[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = (int)(param_1[4] - param_1[3] >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar3 = lVar4;
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[3] + lVar3 * 8);
      local_res8[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = (int)(param_1[7] - param_1[6] >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(param_1[6] + lVar4 * 8);
      local_res8[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}

