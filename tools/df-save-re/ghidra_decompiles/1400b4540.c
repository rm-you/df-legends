// FUN_1400b4540 @ 1400b4540
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1400b4540(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x400);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x400)) {
    puVar2 = (undefined4 *)(param_1 + 0x200);
    do {
      local_res8[0] = puVar2[-0x80];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[-0x40];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[0x40];
      FUN_1405bb7c0(param_2,local_res8,4);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x400));
  }
  local_res8[0] = *(undefined4 *)(param_1 + 0x704);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < *(int *)(param_1 + 0x704)) {
    puVar2 = (undefined4 *)(param_1 + 0x504);
    do {
      local_res8[0] = puVar2[-0x40];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[0x40];
      FUN_1405bb7c0(param_2,local_res8,4);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x704));
  }
  return;
}

