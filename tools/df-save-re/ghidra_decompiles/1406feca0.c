// FUN_1406feca0 @ 1406feca0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406feca0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x4800);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x4804);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4800)) {
    puVar2 = (undefined4 *)(param_1 + 0x2800);
    puVar3 = (undefined2 *)(param_1 + 0x1000);
    do {
      local_res8[0] = puVar2[-0xa00];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*puVar3);
      FUN_1405bb7c0(param_2,local_res8,2);
      local_res8[0] = puVar2[-0x400];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[0x400];
      FUN_1405bb7c0(param_2,local_res8,4);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4800));
  }
  return;
}

