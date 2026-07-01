// FUN_1406f8520 @ 1406f8520
// callees:
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406f8300 FUN_1406f8300


void FUN_1406f8520(longlong param_1,undefined8 param_2)

{
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  FUN_1400020a0(param_2,param_1);
  FUN_1400021b0(param_2,param_1 + 0x18);
  FUN_1400020a0(param_2,param_1 + 0x30);
  FUN_1400021b0(param_2,param_1 + 0x48);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x60));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x68);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
    return;
  }
  local_res18[0] = 1;
  FUN_1405bb7c0(param_2,local_res18,1);
  FUN_1406f8300(*(undefined8 *)(param_1 + 0x70),param_2);
  return;
}

