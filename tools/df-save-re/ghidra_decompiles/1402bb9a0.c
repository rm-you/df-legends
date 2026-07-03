// FUN_1402bb9a0 @ 1402bb9a0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_1402bb9a0(undefined2 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*param_1);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1405bb630(param_2,param_1 + 4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1405bb630(param_2,param_1 + 0x18);
  FUN_1405bb630(param_2,param_1 + 0x28);
  FUN_1405bb630(param_2,param_1 + 0x38);
  FUN_1405bb630(param_2,param_1 + 0x48);
  local_res8[0]._0_2_ = param_1[0x68];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[0x69];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[0x6a]);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x6c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x6e);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

