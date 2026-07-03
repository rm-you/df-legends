// FUN_1404908e0 @ 1404908e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_1404908e0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 2);
  FUN_1400021b0(param_2,param_1 + 8);
  FUN_1400021b0(param_2,param_1 + 0xe);
  FUN_1400021b0(param_2,param_1 + 0x14);
  FUN_1400021b0(param_2,param_1 + 0x1a);
  FUN_1400021b0(param_2,param_1 + 0x20);
  return;
}

