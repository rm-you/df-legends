// FUN_1406f55f0 @ 1406f55f0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140071f40 FUN_140071f40


void FUN_1406f55f0(undefined4 *param_1,undefined8 param_2)

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
  switch(param_1[1]) {
  case 0:
    FUN_140071f40(param_1 + 5,param_2);
    break;
  case 1:
  case 3:
    local_res8[0] = param_1[5];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[6];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[7];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[8];
    goto LAB_1406f56fb;
  case 2:
  case 4:
    local_res8[0] = param_1[5];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[6];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[7];
LAB_1406f56fb:
    FUN_1405bb7c0(param_2,local_res8,4);
    break;
  case 5:
    FUN_140071f40(param_1 + 5,param_2);
  }
  local_res8[0] = param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

