// FUN_1406fd260 @ 1406fd260
// callees:
//   -> 140018fa0 FUN_140018fa0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400022f0 FUN_1400022f0


void FUN_1406fd260(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140018fa0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x28);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x30);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400022f0(param_1 + 0x38,param_2);
  return;
}

