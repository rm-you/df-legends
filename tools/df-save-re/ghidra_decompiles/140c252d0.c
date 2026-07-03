// FUN_140c252d0 @ 140c252d0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140c252d0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 2));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x2e);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xba));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x2f];
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x2e)) {
    puVar1 = param_1 + 0x1a;
    do {
      local_res8[0] = puVar1[-0x14];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)(param_1 + 0x2e));
  }
  local_res8[0] = param_1[0x30];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

