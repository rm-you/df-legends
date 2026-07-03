// FUN_140c21e40 @ 140c21e40
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c21cc0 FUN_140c21cc0


void FUN_140c21e40(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140c21cc0(param_1 + 1,param_2);
  local_res8[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 8);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x22));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xb];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xe));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

