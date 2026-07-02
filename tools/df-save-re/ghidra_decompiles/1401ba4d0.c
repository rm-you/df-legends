// FUN_1401ba4d0 @ 1401ba4d0
// callees:
//   -> 140083cb0 FUN_140083cb0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_1401ba4d0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140083cb0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 100);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x68);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

