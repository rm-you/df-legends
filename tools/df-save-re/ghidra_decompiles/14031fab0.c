// FUN_14031fab0 @ 14031fab0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400022f0 FUN_1400022f0
//   -> 1400021b0 FUN_1400021b0


void FUN_14031fab0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  uVar1 = 1;
  if (*(longlong *)(param_1 + 0x90) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar1 = 4;
    local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x90) + 0x1c);
  }
  FUN_1405bb7c0(param_2,local_res8,uVar1);
  FUN_1403159b0(param_1 + 8,param_2);
  FUN_1400022f0(param_1 + 0x80,param_2);
  local_res8[0] = *(uint *)(param_1 + 0x98);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x9c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xa0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xa4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xa8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xac);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xb0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xb4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xb8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xbc);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0xc0);
  FUN_1400021b0(param_2,param_1 + 0xd8);
  FUN_1400021b0(param_2,param_1 + 0xf0);
  local_res8[0] = *(uint *)(param_1 + 0x108);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x10c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x110);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x114);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x118);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x11c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x120);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

