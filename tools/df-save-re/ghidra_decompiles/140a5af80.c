// FUN_140a5af80 @ 140a5af80
// callees:
//   -> 1403159b0 FUN_1403159b0
//   -> 1400020a0 FUN_1400020a0
//   -> 1400021b0 FUN_1400021b0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400022f0 FUN_1400022f0


void FUN_140a5af80(longlong param_1,undefined8 param_2)

{
  undefined2 local_res8 [4];
  
  FUN_1403159b0();
  FUN_1400020a0(param_2,param_1 + 0x78);
  FUN_1400020a0(param_2,param_1 + 0x90);
  FUN_1400021b0(param_2,param_1 + 0xa8);
  local_res8[0] = *(undefined2 *)(param_1 + 0xf0);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined2 *)(param_1 + 0xf2);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400020a0(param_2,param_1 + 0xc0);
  FUN_1400020a0(param_2,param_1 + 0xd8);
  FUN_1400022f0(param_1 + 0xf8,param_2);
  return;
}

