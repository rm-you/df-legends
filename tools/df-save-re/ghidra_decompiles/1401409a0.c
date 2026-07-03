// FUN_1401409a0 @ 1401409a0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140010bc0 FUN_140010bc0


void FUN_1401409a0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140010bc0(param_1 + 6,param_2);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140010bc0(param_1 + 0x12,param_2);
  local_res8[0] = param_1[0x1c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x1d];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

