// FUN_140316500 @ 140316500
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1400020a0 FUN_1400020a0
//   -> 14007bd20 FUN_14007bd20


void FUN_140316500(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  
  FUN_1405bb630(param_2,param_1);
  FUN_1405bb630(param_2,param_1 + 0x20);
  FUN_1405bb630(param_2,param_1 + 0x40);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x60));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 0x68);
  FUN_1400020a0(param_2,param_1 + 0x80);
  FUN_1400021b0(param_2,param_1 + 0x98);
  FUN_1400020a0(param_2,param_1 + 0xb0);
  FUN_14007bd20(param_1 + 200,param_2);
  FUN_14007bd20(param_1 + 0xe0,param_2);
  FUN_14007bd20(param_1 + 0xf8,param_2);
  FUN_1400021b0(param_2,param_1 + 0x110);
  FUN_1400021b0(param_2,param_1 + 0x128);
  local_res8[0] = *(undefined4 *)(param_1 + 0x140);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x144);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400020a0(param_2,param_1 + 0x150);
  FUN_1400020a0(param_2,param_1 + 0x168);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x180));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_14007bd20(param_1 + 0x188,param_2);
  FUN_1400021b0(param_2,param_1 + 0x1a0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1b8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x1bc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x148);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x14a));
  FUN_1405bb7c0(param_2,local_res8,2);
  return;
}

