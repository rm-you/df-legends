// FUN_140525c40 @ 140525c40
// callees:
//   -> 1405bb630 FUN_1405bb630
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400022f0 FUN_1400022f0
//   -> 1400021b0 FUN_1400021b0
//   -> 14007bd20 FUN_14007bd20
//   -> 1400020a0 FUN_1400020a0


void FUN_140525c40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  FUN_1405bb630(param_2,param_1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x20);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400022f0(param_1 + 0x28,param_2);
  FUN_1400021b0(param_2,param_1 + 0x38);
  FUN_14007bd20(param_1 + 0x50,param_2);
  FUN_1400021b0(param_2,param_1 + 0x68);
  FUN_14007bd20(param_1 + 0x80,param_2);
  lVar1 = param_1 + 0x98;
  lVar3 = 0xf;
  do {
    FUN_1405bb630(param_2,lVar1);
    lVar1 = lVar1 + 0x20;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x278);
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 0x280);
  FUN_1400021b0(param_2,param_1 + 0x298);
  FUN_1400020a0(param_2,param_1 + 0x2b0);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x2c8);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x2ca);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x2cc));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2d0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x2d4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x2d8));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 0x2e0);
  FUN_1400021b0(param_2,param_1 + 0x2f8);
  FUN_1400021b0(param_2,param_1 + 0x310);
  lVar1 = 0;
  do {
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)(param_1 + 0x328 + lVar1));
    FUN_1405bb7c0(param_2,local_res8,1);
    lVar1 = lVar1 + 1;
  } while (lVar1 < 0x2a);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x352);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x354);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x356));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x358);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x35c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x360);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x364);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined4 *)(param_1 + 0x368);
  lVar1 = 4;
  do {
    local_res8[0] = *puVar2;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  local_res8[0] = *(undefined4 *)(param_1 + 0x378);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(undefined4 *)(param_1 + 0x37c);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

