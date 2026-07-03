// FUN_140c19fa0 @ 140c19fa0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140c19fa0(undefined2 *param_1,undefined8 param_2)

{
  undefined4 local_res18;
  
  local_res18._2_2_ = (undefined2)((uint)local_res18 >> 0x10);
  local_res18._0_2_ = *param_1;
  FUN_1405bb7c0(param_2,&local_res18,2);
  local_res18._0_2_ = param_1[1];
  FUN_1405bb7c0(param_2,&local_res18,2);
  local_res18._0_2_ = param_1[2];
  FUN_1405bb7c0(param_2,&local_res18,2);
  local_res18 = CONCAT22(local_res18._2_2_,param_1[3]);
  FUN_1405bb7c0(param_2,&local_res18,2);
  local_res18 = *(undefined4 *)(param_1 + 4);
  FUN_1405bb7c0(param_2,&local_res18,4);
  local_res18 = *(undefined4 *)(param_1 + 6);
  FUN_1405bb7c0(param_2,&local_res18,4);
  local_res18 = *(undefined4 *)(param_1 + 8);
  FUN_1405bb7c0(param_2,&local_res18,4);
  FUN_1400021b0(param_2,param_1 + 0xc);
  return;
}

