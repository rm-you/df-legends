// FUN_140081790 @ 140081790
// callees:
//   -> 140018fa0 FUN_140018fa0
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140081790(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140018fa0();
  FUN_1400021b0(param_2,param_1 + 0x28);
  local_res8[0] = *(undefined4 *)(param_1 + 0x40);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x44);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x48);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x4c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x50);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

