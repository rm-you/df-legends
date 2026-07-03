// FUN_140c0be70 @ 140c0be70
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c0bca0 FUN_140c0bca0


void FUN_140c0be70(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140c0bca0(param_1 + 2,param_2);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xd);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x36);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0xe);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0x3a));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x3a);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xea));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x3b];
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x3a)) {
    puVar1 = param_1 + 0x26;
    do {
      local_res8[0] = puVar1[-0x14];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x3a));
  }
  local_res8[0] = param_1[0x3c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

