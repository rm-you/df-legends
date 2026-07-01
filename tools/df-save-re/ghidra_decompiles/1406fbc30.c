// FUN_1406fbc30 @ 1406fbc30
// callees:
//   -> 1406fbb40 FUN_1406fbb40
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1406fbc30(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_1406fbb40();
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

