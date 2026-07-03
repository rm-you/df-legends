// FUN_140b05a40 @ 140b05a40
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140b05a40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  
  iVar3 = (int)(param_1[1] - *param_1 >> 3);
  local_res8[0] = iVar3;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar4 = 0;
  if (0 < (longlong)iVar3) {
    do {
      uVar2 = (**(code **)**(undefined8 **)(*param_1 + lVar4 * 8))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar2);
      FUN_1405bb7c0(param_2,local_res8,2);
      plVar1 = *(longlong **)(*param_1 + lVar4 * 8);
      (**(code **)(*plVar1 + 8))(plVar1,param_2);
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}

