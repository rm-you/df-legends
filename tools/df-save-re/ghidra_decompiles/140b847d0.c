// FUN_140b847d0 @ 140b847d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140b847d0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  int local_res18 [4];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  if (*param_1 != 0) {
    local_res8[0] = 1;
    FUN_1405bb7c0(param_2,local_res8,1);
    local_res18[0] = (int)param_1[1];
    FUN_1405bb7c0(param_2,local_res18,4);
    iVar1 = 0;
    if (0 < (int)param_1[1]) {
      lVar2 = 0;
      do {
        local_res18[0] = *(int *)(lVar2 + *param_1);
        FUN_1405bb7c0(param_2,local_res18,4);
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 4;
      } while (iVar1 < (int)param_1[1]);
    }
    return;
  }
  local_res18[0] = (uint)local_res18[0]._1_3_ << 8;
  FUN_1405bb7c0(param_2,local_res18,1);
  return;
}

