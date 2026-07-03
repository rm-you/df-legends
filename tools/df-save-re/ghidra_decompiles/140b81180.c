// FUN_140b81180 @ 140b81180
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 140161010 FUN_140161010


void FUN_140b81180(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = *param_1;
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[6];
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = param_1 + 7;
  lVar2 = 0x98;
  do {
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)puVar1);
    FUN_1405bb7c0(param_2,local_res8,2);
    puVar1 = (undefined4 *)((longlong)puVar1 + 2);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x53);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x14e);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x54);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x152);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x55);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x156);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x56));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x57];
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = param_1 + 0x58;
  lVar2 = 0x70;
  do {
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1400021b0(param_2,param_1 + 200);
  local_res8[0] = param_1[0xce];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xcf];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd0];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd1];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd2];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd3];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd4];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd5];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd6];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd7];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0xd8];
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar1 = param_1 + 0x1dd;
  lVar2 = 0x104;
  do {
    local_res8[0] = puVar1[-0x104];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar1[0x104];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar1[0x208];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar1[0x30c];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar1[0x410];
    FUN_1405bb7c0(param_2,local_res8,4);
    local_res8[0] = puVar1[0x514];
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = param_1[0x7f5];
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar2 = 5;
  puVar1 = param_1 + 0x7f6;
  lVar3 = 5;
  do {
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = param_1 + 0x7fb;
  lVar3 = 5;
  do {
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = param_1 + 0x800;
  lVar3 = 5;
  do {
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = param_1 + 0x805;
  do {
    local_res8[0] = *puVar1;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_res8[0] = param_1[0x80a];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x80b];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x80c];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x80d];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = param_1[0x80e];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140161010(param_2,param_1 + 0x810);
  FUN_140161010(param_2,param_1 + 0x816);
  FUN_140161010(param_2,param_1 + 0x81c);
  FUN_140161010(param_2,param_1 + 0x822);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x828);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x20a2);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x829);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)((longlong)param_1 + 0x20a6);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x82a));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = param_1[0x82b];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 0x82c);
  local_res8[0] = param_1[0x832];
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

