// FUN_1407d5e30 @ 1407d5e30
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140010bc0 FUN_140010bc0
//   -> 1400021b0 FUN_1400021b0


void FUN_1407d5e30(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140010bc0(param_1 + 2,param_2);
  FUN_140010bc0(param_1 + 0xc,param_2);
  local_res8[0] = param_1[0x16];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x17];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x18];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x19];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x1a);
  local_res8[0] = param_1[0x20];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

