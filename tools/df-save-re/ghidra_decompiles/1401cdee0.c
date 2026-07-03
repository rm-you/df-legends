// FUN_1401cdee0 @ 1401cdee0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_1401cdee0(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (undefined4)(*(longlong *)(param_1 + 6) - *(longlong *)(param_1 + 4) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = *(undefined8 **)(param_1 + 4);
  uVar5 = 0;
  uVar4 = (*(longlong *)(param_1 + 6) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 6) < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      puVar2 = (undefined4 *)*puVar3;
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[3];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  iVar1 = param_1[1];
  if (iVar1 == 9) {
    puVar2 = *(undefined4 **)(param_1 + 10);
    local_res8[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[1];
  }
  else {
    if (iVar1 == 0xe) {
      FUN_1400021b0(param_2,*(undefined8 *)(param_1 + 10));
      goto LAB_1401ce0b7;
    }
    if (iVar1 != 0xf) goto LAB_1401ce0b7;
    puVar2 = *(undefined4 **)(param_1 + 10);
    local_res8[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[1];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar2[2];
  }
  FUN_1405bb7c0(param_2,local_res8,4);
LAB_1401ce0b7:
  local_res8[0] = param_1[0x11];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x12];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x13];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x14];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xc];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xe];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x10];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

