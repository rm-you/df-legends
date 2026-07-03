// FUN_140301b50 @ 140301b50
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400022f0 FUN_1400022f0
//   -> 1400021b0 FUN_1400021b0


void FUN_140301b50(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_1405bb630(param_2,param_1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x38);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x3c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x44);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x4a);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x4c));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400022f0(param_1 + 0x28,param_2);
  FUN_1400021b0(param_2,param_1 + 0x50);
  local_res8[0] = *(undefined4 *)(param_1 + 0x68);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x6c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x70);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x74);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x7c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x80);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

