// FUN_1406fbb40 @ 1406fbb40
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406fbb40(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = *(undefined4 *)(param_1 + 8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0xc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

