// FUN_140492fe0 @ 140492fe0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630
//   -> 1400021b0 FUN_1400021b0


void FUN_140492fe0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1405bb630(param_2,param_1 + 2);
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xb));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x12);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400021b0(param_2,param_1 + 0x1e);
  return;
}

