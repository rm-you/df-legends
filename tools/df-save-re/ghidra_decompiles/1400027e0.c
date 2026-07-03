// FUN_1400027e0 @ 1400027e0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400027e0(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
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
  param_1 = param_1 + 6;
  lVar1 = 8;
  do {
    local_res8[0] = *param_1;
    FUN_1405bb7c0(param_2,local_res8,4);
    param_1 = param_1 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

