// FUN_140cc1010 @ 140cc1010
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140cc4f60 FUN_140cc4f60


void FUN_140cc1010(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 2);
  local_res8[0]._0_2_ = (short)param_1[8];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x22);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = (undefined2)param_1[9];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x26);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = (undefined2)param_1[10];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x2a));
  FUN_1405bb7c0(param_2,local_res8,2);
  iVar2 = (int)(*(longlong *)(param_1 + 0xe) - *(longlong *)(param_1 + 0xc) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar4 = 0;
  lVar3 = lVar4;
  if (0 < (longlong)iVar2) {
    do {
      FUN_140cc4f60(*(undefined8 *)(*(longlong *)(param_1 + 0xc) + lVar3 * 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x14) - *(longlong *)(param_1 + 0x12) >> 3);
  local_res8[0] = iVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < iVar2) {
    do {
      piVar1 = *(int **)(*(longlong *)(param_1 + 0x12) + lVar4 * 8);
      local_res8[0] = *piVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = piVar1[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}

