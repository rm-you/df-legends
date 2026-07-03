// FUN_140491ee0 @ 140491ee0
// callees:
//   -> 1400020a0 FUN_1400020a0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140491ee0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_1400020a0(param_2,param_1);
  FUN_1400020a0(param_2,param_1 + 0x18);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x34);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x38);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x50);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x52));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

