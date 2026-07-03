// FUN_140c15430 @ 140c15430
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1405bb630 FUN_1405bb630
//   -> 140c17cd0 FUN_140c17cd0
//   -> 140c15c30 FUN_140c15c30
//   -> 1400021b0 FUN_1400021b0
//   -> 140c19ce0 FUN_140c19ce0


void FUN_140c15430(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1403159b0(param_1 + 2,param_2);
  FUN_1405bb630(param_2,param_1 + 0x20);
  FUN_140c17cd0(param_1 + 0x34,param_2);
  local_res18[0] = param_1[0x3a];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar3 = (int)(*(longlong *)(param_1 + 0x2a) - *(longlong *)(param_1 + 0x28) >> 3);
  local_res18[0] = iVar3;
  FUN_1405bb7c0(param_2,local_res18,4);
  lVar5 = 0;
  lVar4 = lVar5;
  if (0 < (longlong)iVar3) {
    do {
      FUN_140c15c30(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar4 * 8),param_2);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x2e) >> 3);
  local_res18[0] = iVar3;
  FUN_1405bb7c0(param_2,local_res18,4);
  lVar4 = lVar5;
  if (0 < (longlong)iVar3) {
    do {
      local_res18[0] =
           (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x2e) + lVar4 * 8) + 0x18))();
      FUN_1405bb7c0(param_2,local_res18,4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2e) + lVar4 * 8);
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x3e) - *(longlong *)(param_1 + 0x3c) >> 3);
  local_res18[0] = iVar3;
  FUN_1405bb7c0(param_2,local_res18,4);
  if (0 < iVar3) {
    do {
      piVar2 = *(int **)(*(longlong *)(param_1 + 0x3c) + lVar5 * 8);
      local_res18[0] = *piVar2;
      FUN_1405bb7c0(param_2,local_res18,4);
      local_res18[0] = piVar2[1];
      FUN_1405bb7c0(param_2,local_res18,4);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  FUN_1400021b0(param_2,param_1 + 0x42);
  FUN_1400021b0(param_2,param_1 + 0x48);
  local_res18[0] = param_1[0x4e];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x4f];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140c19ce0(param_1 + 0x50,param_2);
  local_res18[0]._0_2_ = (short)param_1[0x6e];
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x1ba));
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[0x6f];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x70];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x71];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x72];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

