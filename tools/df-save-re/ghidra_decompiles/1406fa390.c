// FUN_1406fa390 @ 1406fa390
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140071f40 FUN_140071f40


void FUN_1406fa390(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 2);
  FUN_1400021b0(param_2,param_1 + 8);
  FUN_1400021b0(param_2,param_1 + 0xe);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x14));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x1a];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1d];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1e];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1f];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x21];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x25];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x26];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x27];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140071f40(param_1 + 0x15,param_2);
  return;
}

