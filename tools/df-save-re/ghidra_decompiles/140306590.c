// FUN_140306590 @ 140306590
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400020a0 FUN_1400020a0
//   -> 140161010 FUN_140161010


void FUN_140306590(undefined2 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*param_1);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 2);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 4);
  FUN_1400020a0(param_2,param_1 + 0x10);
  FUN_140161010(param_2,param_1 + 0x1c);
  FUN_140161010(param_2,param_1 + 0x28);
  local_res8[0]._0_2_ = param_1[0x34];
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,param_1[0x35]);
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

