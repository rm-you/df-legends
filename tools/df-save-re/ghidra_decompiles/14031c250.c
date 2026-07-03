// FUN_14031c250 @ 14031c250
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 14031c0c0 FUN_14031c0c0
//   -> 14031bee0 FUN_14031bee0


void FUN_14031c250(undefined2 *param_1,undefined8 param_2)

{
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0]._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[2]);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 4);
  FUN_1400021b0(param_2,param_1 + 0x10);
  local_res8[0] = *(uint *)(param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1e);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x20);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x22);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x24) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_14031c0c0(*(undefined8 *)(param_1 + 0x24),param_2);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
    return;
  }
  local_res18[0] = 1;
  FUN_1405bb7c0(param_2,local_res18,1);
  FUN_14031bee0(*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}

