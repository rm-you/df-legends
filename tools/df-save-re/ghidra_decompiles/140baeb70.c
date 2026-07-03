// FUN_140baeb70 @ 140baeb70
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140baeb70(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  param_1 = param_1 + 0x703;
  lVar1 = 0x10;
  do {
    lVar2 = 0x10;
    do {
      local_res8[0] = param_1[-0x100];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *param_1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[0x100];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[0x200];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[0x300];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[0x400];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x700];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x600];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x500];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x400];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x300];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[-0x200];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = param_1[0x600];
      FUN_1405bb7c0(param_2,local_res8,4);
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

