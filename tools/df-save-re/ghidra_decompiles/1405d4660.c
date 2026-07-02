// FUN_1405d4660 @ 1405d4660
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1403159b0 FUN_1403159b0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 1405cca20 FUN_1405cca20


void FUN_1405d4660(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = *(uint *)(param_1 + 0xe0);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1403159b0(param_1,param_2);
  FUN_1400020a0(param_2,param_1 + 0x78);
  FUN_1400021b0(param_2,param_1 + 0x90);
  FUN_1400021b0(param_2,param_1 + 0xa8);
  local_res8[0] = *(uint *)(param_1 + 0xd8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xdc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xe8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xe4);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar2 = (uint)(*(longlong *)(param_1 + 200) - *(longlong *)(param_1 + 0xc0) >> 3);
  local_res8[0] = uVar2;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar1 = 0;
  if (0 < (longlong)(int)uVar2) {
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar1 * 8) == 0) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        FUN_1405bb7c0(param_2,local_res8,1);
      }
      else {
        local_res18[0] = 1;
        FUN_1405bb7c0(param_2,local_res18,1);
        FUN_1405cca20(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar1 * 8),param_2);
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)uVar2);
  }
  return;
}

