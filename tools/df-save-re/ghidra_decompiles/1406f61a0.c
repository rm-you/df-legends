// FUN_1406f61a0 @ 1406f61a0
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400020a0 FUN_1400020a0
//   -> 140013100 FUN_140013100
//   -> 1400021b0 FUN_1400021b0
//   -> 140071df0 FUN_140071df0
//   -> 1406f5f50 FUN_1406f5f50


void FUN_1406f61a0(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = (uint)(param_1[0x1f] - param_1[0x1e] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar8 = 0;
  puVar3 = (undefined8 *)param_1[0x1e];
  uVar7 = (ulonglong)(param_1[0x1f] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x1f] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      puVar1 = (undefined2 *)*puVar3;
      local_res8[0]._0_2_ = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,2);
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,puVar1[1]);
      FUN_1405bb7c0(param_2,local_res8,2);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  FUN_1400020a0(param_2,param_1 + 0x21);
  local_res8[0] = (uint)(param_1[1] - *param_1 >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)*param_1;
  uVar7 = (param_1[1] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[1] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint *)*puVar3;
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_res8[0] = (uint)(param_1[4] - param_1[3] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)param_1[3];
  uVar7 = (param_1[4] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[4] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      puVar1 = (undefined2 *)*puVar3;
      local_res8[0]._0_2_ = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,2);
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,puVar1[1]);
      FUN_1405bb7c0(param_2,local_res8,2);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_res8[0] = (uint)(param_1[7] - param_1[6] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)param_1[6];
  uVar7 = (param_1[7] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[7] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      FUN_140013100(*puVar3,param_2);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_res8[0] = (uint)(param_1[10] - param_1[9] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)param_1[9];
  uVar7 = (param_1[10] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[10] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint *)*puVar3;
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar2 + 4);
      local_res8[0] = puVar2[10];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_res8[0] = (uint)(param_1[0xe] - param_1[0xd] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)param_1[0xd];
  uVar7 = (param_1[0xe] - (longlong)puVar3) + 7U >> 3;
  if ((undefined8 *)param_1[0xe] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      FUN_140071df0(*puVar3,param_2);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  local_res8[0] = (uint)(param_1[0x28] - param_1[0x27] >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar3 = (undefined8 *)param_1[0x27];
  uVar7 = (ulonglong)(param_1[0x28] + (7 - (longlong)puVar3)) >> 3;
  if ((undefined8 *)param_1[0x28] < puVar3) {
    uVar7 = uVar8;
  }
  uVar6 = uVar8;
  if (uVar7 != 0) {
    do {
      puVar2 = (uint *)*puVar3;
      local_res8[0] = *puVar2;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[2];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar2[3];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 < uVar7);
  }
  plVar4 = param_1 + 0x10;
  lVar5 = 0x32;
  do {
    local_res8[0] = CONCAT22(local_res8[0]._2_2_,(short)*plVar4);
    FUN_1405bb7c0(param_2,local_res8,2);
    plVar4 = (longlong *)((longlong)plVar4 + 2);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_res8[0] = *(uint *)((longlong)param_1 + 0xe4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1d);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0xc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x24);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 300);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x26);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x134);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x124);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x25);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2a);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x30);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x184);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (param_1[0x2b] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar5 = param_1[0x2b];
    do {
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(lVar5 + uVar8 * 2));
      FUN_1405bb7c0(param_2,local_res8,2);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 0x32);
  }
  local_res8[0] = *(uint *)(param_1 + 0x2c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x164);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (param_1[0x2d] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f5f50(param_1[0x2d],param_2);
  }
  local_res8[0] = *(uint *)(param_1 + 0x2e);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x174);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2f);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x17c);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

