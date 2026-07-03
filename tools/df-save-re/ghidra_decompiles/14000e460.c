// FUN_14000e460 @ 14000e460
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 14000e2b0 FUN_14000e2b0


void FUN_14000e460(undefined4 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  switch(param_1[9]) {
  case 0:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 1:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 2:
  case 5:
  case 0xd:
  case 0xe:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
  case 0x1f:
  case 0x20:
    local_res8[0] = *param_1;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[1];
    goto LAB_14000e5ed;
  case 3:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 4:
  case 6:
  case 8:
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x1d:
    local_res8[0] = *param_1;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[1];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = param_1[2];
    goto LAB_14000e5ed;
  case 7:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 9:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 10:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0xb:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0xc:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x10:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x12:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x13:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x14:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x15:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x16:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x17:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x18:
    FUN_14000e2b0(param_1,param_2);
    break;
  case 0x21:
    local_res8[0] = *param_1;
LAB_14000e5ed:
    FUN_1405bb7c0(param_2,local_res8,4);
  }
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[8];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

