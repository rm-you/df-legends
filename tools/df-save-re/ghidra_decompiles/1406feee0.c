// FUN_1406feee0 @ 1406feee0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406fe820 FUN_1406fe820


void FUN_1406feee0(uint *param_1,undefined8 param_2)

{
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 2) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406fe820(*(undefined8 *)(param_1 + 2),param_2);
  }
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[7];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

