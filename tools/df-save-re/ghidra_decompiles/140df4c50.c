// FUN_140df4c50 @ 140df4c50
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630
//   -> 140315440 FUN_140315440
//   -> 1400021b0 FUN_1400021b0


void FUN_140df4c50(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1405bb630(param_2,param_1 + 2);
  local_res18[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0xb];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_140315440(param_2,param_1 + 0xc);
  FUN_1400021b0(param_2,param_1 + 0x12);
  local_res18[0] = param_1[0x18];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x19];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1a];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x1b];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0x1c);
  FUN_1400021b0(param_2,param_1 + 0x22);
  local_res18[0] = param_1[0x28];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x29];
  FUN_1405bb7c0(param_2,local_res18,4);
  return;
}

