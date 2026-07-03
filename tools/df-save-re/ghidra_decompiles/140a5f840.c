// FUN_140a5f840 @ 140a5f840
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_140a5f840(undefined1 *param_1,undefined8 param_2)

{
  undefined2 local_res8 [4];
  
  local_res8[0] = CONCAT11(local_res8[0]._1_1_,*param_1);
  FUN_1405bb7c0(param_2,local_res8,1);
  local_res8[0] = *(undefined2 *)(param_1 + 2);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 4);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1405bb630(param_2,param_1 + 8);
  local_res8[0] = *(undefined2 *)(param_1 + 0x28);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0x2a);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0x2e);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0x30);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0x32);
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

