// FUN_140908410 @ 140908410
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400022f0 FUN_1400022f0


void FUN_140908410(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = *(uint *)(param_1 + 4);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar1 = 4;
    local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x130);
  }
  FUN_1405bb7c0(param_2,local_res8,uVar1);
  local_res8[0] = *(uint *)(param_1 + 0x20);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar1 = 4;
    local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xe0);
  }
  FUN_1405bb7c0(param_2,local_res8,uVar1);
  FUN_1400021b0(param_2,param_1 + 0x28);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x40));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400022f0(param_1 + 0x58,param_2);
  local_res8[0] = *(uint *)(param_1 + 8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xc));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x44);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x48);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x4c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x50);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

