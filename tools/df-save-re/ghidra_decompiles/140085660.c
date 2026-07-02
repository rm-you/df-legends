// FUN_140085660 @ 140085660
// callees:
//   -> 140083cb0 FUN_140083cb0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140085660(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140083cb0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x68);
  FUN_1400021b0(param_2,param_1 + 0x80);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x98));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x9c);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

