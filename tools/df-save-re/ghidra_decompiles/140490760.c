// FUN_140490760 @ 140490760
// callees:
//   -> 140083cb0 FUN_140083cb0
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140490760(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_140083cb0();
  FUN_1400021b0(param_2,param_1 + 0x60);
  local_res8[0] = *(undefined4 *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

