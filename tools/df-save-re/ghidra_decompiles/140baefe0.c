// FUN_140baefe0 @ 140baefe0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140baefe0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xf0);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      local_res8[0] = puVar1[-2];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[-1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 3;
    } while (iVar2 < *(int *)(param_1 + 0xf0));
  }
  return;
}

