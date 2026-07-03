// FUN_1407ea130 @ 1407ea130
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_1407ea130(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1400021b0(param_2,param_1 + 4);
  return;
}

