// FUN_140bae7a0 @ 140bae7a0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0


void FUN_140bae7a0(undefined2 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[2]);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400020a0(param_2,param_1 + 4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x12);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x14);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[1]);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x16);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1a);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1e);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

