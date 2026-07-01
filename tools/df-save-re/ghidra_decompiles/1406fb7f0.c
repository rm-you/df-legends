// FUN_1406fb7f0 @ 1406fb7f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406fb7f0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xc));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

