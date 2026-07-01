// FUN_1405d1470 @ 1405d1470
// callees:
//   -> 140019100 FUN_140019100
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1405d1470(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140019100();
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x38);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x3a);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x3c);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x3e));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

