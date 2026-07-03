// FUN_140a5d150 @ 140a5d150
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140002f20 FUN_140002f20
//   -> 1400021b0 FUN_1400021b0


void FUN_140a5d150(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140002f20(param_1 + 2,param_2);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x14);
  return;
}

