// FUN_1404905c0 @ 1404905c0
// callees:
//   -> 140083cb0 FUN_140083cb0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630


void FUN_1404905c0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140083cb0();
  local_res8[0] = *(undefined4 *)(param_1 + 0x60);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1405bb630(param_2,param_1 + 0x68);
  local_res8[0] = *(undefined4 *)(param_1 + 0x88);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

