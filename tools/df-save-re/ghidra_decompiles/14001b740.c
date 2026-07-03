// FUN_14001b740 @ 14001b740
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_14001b740(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  int local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)param_1[1]);
  FUN_1405bb7c0(param_2,local_res18,2);
  local_res18[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar4 = (int)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2) >> 3);
  local_res18[0] = iVar4;
  FUN_1405bb7c0(param_2,local_res18,4);
  lVar3 = 0;
  if (0 < (longlong)iVar4) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(*(longlong *)(param_1 + 2) + lVar3 * 8))();
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,uVar2);
      FUN_1405bb7c0(param_2,local_res18,2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 2) + lVar3 * 8);
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar4);
  }
  local_res18[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

