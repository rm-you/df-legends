// FUN_1407b4c50 @ 1407b4c50
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1406fa390 FUN_1406fa390
//   -> 1400021b0 FUN_1400021b0
//   -> 140071f40 FUN_140071f40
//   -> 1407b4290 FUN_1407b4290


void FUN_1407b4c50(ulonglong *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  local_res8[0] = (uint)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)*param_1;
  uVar3 = 0;
  uVar5 = (param_1[1] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar5 = uVar3;
  }
  uVar4 = uVar3;
  if (uVar5 != 0) {
    do {
      FUN_1406fa390(*puVar2,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  local_res8[0] = (uint)((longlong)(param_1[4] - param_1[3]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[3];
  uVar5 = (param_1[4] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar2) {
    uVar5 = uVar3;
  }
  uVar4 = uVar3;
  if (uVar5 != 0) {
    do {
      puVar1 = (uint *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar1 + 2);
      FUN_1400021b0(param_2,puVar1 + 8);
      FUN_1400021b0(param_2,puVar1 + 0xe);
      FUN_140071f40(puVar1 + 0x14,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  local_res8[0] = (uint)((longlong)(param_1[7] - param_1[6]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[6];
  uVar5 = (param_1[7] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[7] < puVar2) {
    uVar5 = uVar3;
  }
  uVar4 = uVar3;
  if (uVar5 != 0) {
    do {
      puVar1 = (uint *)*puVar2;
      local_res8[0] = *puVar1;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar1 + 2);
      FUN_1400021b0(param_2,puVar1 + 8);
      FUN_140071f40(puVar1 + 0xe,param_2);
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_1400021b0(param_2,param_1 + 9);
  local_res8[0] = (uint)((longlong)(param_1[0xd] - param_1[0xc]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined8 *)param_1[0xc];
  uVar5 = (param_1[0xd] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[0xd] < puVar2) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      FUN_140071f40(*puVar2,param_2);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar5);
  }
  local_res8[0] = (uint)param_1[0xf];
  FUN_1405bb7c0(param_2,local_res8,4);
  if (param_1[0x10] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_1407b4290(param_1[0x10],param_2);
  }
  return;
}

