// FUN_1406fad80 @ 1406fad80
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406f55f0 FUN_1406f55f0


void FUN_1406fad80(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[2];
      goto LAB_1406fae47;
    }
    if (iVar1 == 2) {
      lVar3 = *(longlong *)(param_1 + 4);
      FUN_1406f55f0(lVar3,param_2);
      local_res8[0] = *(undefined4 *)(lVar3 + 0x2c);
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *(undefined4 *)(lVar3 + 0x30);
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *(undefined4 *)(lVar3 + 0x34);
      goto LAB_1406fae47;
    }
    if (iVar1 != 3) {
      return;
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_res8[0] = *puVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = puVar2[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = puVar2[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = puVar2[3];
LAB_1406fae47:
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

