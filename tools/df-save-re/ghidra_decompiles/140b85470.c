// FUN_140b85470 @ 140b85470
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_140b85470(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res18 [2];
  
  local_res18[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res18,4);
  FUN_1405bb630(param_2,param_1 + 2);
  local_res18[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res18,4);
  local_res18[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res18,4);
  iVar2 = 0;
  if (0 < (int)param_1[0x11]) {
    puVar1 = param_1 + 10;
    do {
      local_res18[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res18,4);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < (int)param_1[0x11]);
  }
  return;
}

