// FUN_1407ab230 @ 1407ab230
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1400021b0 FUN_1400021b0
//   -> 1406f7a10 FUN_1406f7a10
//   -> 14000e460 FUN_14000e460
//   -> 1406f9530 FUN_1406f9530
//   -> 1400027e0 FUN_1400027e0


void FUN_1407ab230(ulonglong *param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  undefined1 local_res18 [16];
  
  local_res8[0] = (uint)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  plVar3 = (longlong *)*param_1;
  uVar7 = 0;
  uVar6 = (param_1[1] - (longlong)plVar3) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar3) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      local_res8[0] = *(uint *)(*plVar3 + 0x20);
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar5 < uVar6);
  }
  local_res8[0] = (uint)param_1[3];
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1400021b0(param_2,param_1 + 4);
  FUN_1400021b0(param_2,param_1 + 7);
  local_res8[0] = (uint)((longlong)(param_1[0xb] - param_1[10]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[10];
  uVar6 = (param_1[0xb] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[0xb] < puVar4) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      FUN_1406f7a10(*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar6);
  }
  local_res8[0] = (uint)((longlong)(param_1[0xe] - param_1[0xd]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[0xd];
  uVar6 = (param_1[0xe] - (longlong)puVar4) + 7 >> 3;
  if ((undefined8 *)param_1[0xe] < puVar4) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      FUN_14000e460(*puVar4,param_2);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar6);
  }
  FUN_1400021b0(param_2,param_1 + 0x10);
  FUN_1400021b0(param_2,param_1 + 0x13);
  FUN_1400021b0(param_2,param_1 + 0x16);
  FUN_1400021b0(param_2,param_1 + 0x19);
  local_res8[0] = (uint)((longlong)(param_1[0x1d] - param_1[0x1c]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (undefined8 *)param_1[0x1c];
  uVar6 = (ulonglong)((longlong)param_1[0x1d] + (7 - (longlong)puVar4)) >> 3;
  if ((undefined8 *)param_1[0x1d] < puVar4) {
    uVar6 = uVar7;
  }
  uVar5 = uVar7;
  if (uVar6 != 0) {
    do {
      puVar1 = (uint *)*puVar4;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar1[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar1 + 2);
      FUN_1400021b0(param_2,puVar1 + 8);
      FUN_1400021b0(param_2,puVar1 + 0xe);
      local_res8[0] = puVar1[0x14];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 < uVar6);
  }
  FUN_1400021b0(param_2,param_1 + 0x1f);
  FUN_1400021b0(param_2,param_1 + 0x22);
  FUN_1400021b0(param_2,param_1 + 0x25);
  if (param_1[0x28] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1406f9530(param_1[0x28],param_2);
  }
  if (param_1[0x29] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1400021b0(param_2,param_1[0x29]);
  }
  if (param_1[0x2a] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    puVar2 = (ulonglong *)param_1[0x2a];
    local_res8[0] = (uint)((longlong)(puVar2[1] - *puVar2) >> 3);
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar4 = (undefined8 *)*puVar2;
    uVar6 = (ulonglong)((longlong)puVar2[1] + (7 - (longlong)puVar4)) >> 3;
    if ((undefined8 *)puVar2[1] < puVar4) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      do {
        FUN_1400027e0(*puVar4,param_2);
        uVar7 = uVar7 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar7 < uVar6);
    }
  }
  FUN_1400021b0(param_2,param_1 + 0x2b);
  return;
}

