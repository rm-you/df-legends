// FUN_14048eb00 @ 14048eb00
// callees:
//   -> 140018fa0 FUN_140018fa0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400020a0 FUN_1400020a0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_14048eb00(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140018fa0();
  FUN_1400021b0(param_2,param_1 + 0x28);
  FUN_1400020a0(param_2,param_1 + 0x40);
  local_res8[0] = *(undefined4 *)(param_1 + 0x58);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x5c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x66));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

