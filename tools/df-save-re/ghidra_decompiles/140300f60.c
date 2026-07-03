// FUN_140300f60 @ 140300f60
// callees:
//   -> 14007bd20 FUN_14007bd20
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0


void FUN_140300f60(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_14007bd20();
  FUN_14007bd20(param_1 + 0x18,param_2);
  FUN_1405bb630(param_2,param_1 + 0x30);
  FUN_1405bb630(param_2,param_1 + 0x50);
  FUN_1405bb630(param_2,param_1 + 0x70);
  FUN_1405bb630(param_2,param_1 + 0x90);
  FUN_1405bb630(param_2,param_1 + 0xb0);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0xd0));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1405bb630(param_2,param_1 + 0xd8);
  FUN_1405bb630(param_2,param_1 + 0xf8);
  FUN_1405bb630(param_2,param_1 + 0x118);
  FUN_1405bb630(param_2,param_1 + 0x138);
  FUN_1405bb630(param_2,param_1 + 0x158);
  FUN_1405bb630(param_2,param_1 + 0x178);
  FUN_1405bb630(param_2,param_1 + 0x198);
  FUN_1405bb630(param_2,param_1 + 0x1b8);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1d8);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x1e0);
  FUN_1400021b0(param_2,param_1 + 0x1f8);
  local_res8[0] = *(undefined4 *)(param_1 + 0x210);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_14007bd20(param_1 + 0x218,param_2);
  FUN_1400021b0(param_2,param_1 + 0x230);
  FUN_1400021b0(param_2,param_1 + 0x248);
  FUN_14007bd20(param_1 + 0x260,param_2);
  FUN_1400021b0(param_2,param_1 + 0x278);
  FUN_1400021b0(param_2,param_1 + 0x290);
  FUN_14007bd20(param_1 + 0x2a8,param_2);
  FUN_1405bb630(param_2,param_1 + 0x2c0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2e0);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

