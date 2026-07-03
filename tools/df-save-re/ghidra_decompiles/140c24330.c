// FUN_140c24330 @ 140c24330
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c24330(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400020a0(param_2,param_1 + 4);
  FUN_1400020a0(param_2,param_1 + 10);
  FUN_1400021b0(param_2,param_1 + 0x10);
  FUN_1400021b0(param_2,param_1 + 0x16);
  FUN_1400021b0(param_2,param_1 + 0x1c);
  local_res8[0] = param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x24];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

