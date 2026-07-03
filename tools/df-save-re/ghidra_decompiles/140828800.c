// FUN_140828800 @ 140828800
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140828800(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  uVar1 = 1;
  if (*param_1 == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar1 = 4;
    local_res8[0] = *(uint *)(*param_1 + 0x1c);
  }
  FUN_1405bb7c0(param_2,local_res8,uVar1);
  local_res8[0]._0_2_ = (short)param_1[1];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 10));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)((longlong)param_1 + 0xc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 2);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

