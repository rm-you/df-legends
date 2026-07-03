// FUN_1406f5e90 @ 1406f5e90
// callees:
//   -> 1400b4b80 FUN_1400b4b80
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406f5e90(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_1400b4b80();
  local_res8[0] = *(undefined4 *)(param_1 + 0x24);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x38);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

