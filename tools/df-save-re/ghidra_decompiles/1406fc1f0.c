// FUN_1406fc1f0 @ 1406fc1f0
// callees:
//   -> 140018fa0 FUN_140018fa0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406fc1f0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140018fa0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x30));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x38);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x3c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x44);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

