// FUN_1407abe00 @ 1407abe00
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 1405bb630 FUN_1405bb630
//   -> 1400021b0 FUN_1400021b0


void FUN_1407abe00(ulonglong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  undefined4 local_res18 [4];
  
  local_res8[0] = (uint)((longlong)(param_1[1] - *param_1) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  plVar1 = (longlong *)*param_1;
  uVar6 = 0;
  plVar2 = (longlong *)param_1[3];
  uVar3 = (param_1[1] - (longlong)plVar1) + 7 >> 3;
  if ((longlong *)param_1[1] < plVar1) {
    uVar3 = uVar6;
  }
  uVar5 = uVar6;
  if (uVar3 != 0) {
    do {
      local_res8[0] = *(uint *)(*plVar1 + 0x20);
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res18[0] = *(undefined4 *)(*plVar2 + 8);
      FUN_1405bb7c0(param_2,local_res18,4);
      uVar5 = uVar5 + 1;
      plVar2 = plVar2 + 1;
      plVar1 = plVar1 + 1;
    } while (uVar5 < uVar3);
  }
  local_res8[0] = (uint)((longlong)(param_1[7] - param_1[6]) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  plVar2 = (longlong *)param_1[6];
  uVar3 = (param_1[7] - (longlong)plVar2) + 7 >> 3;
  if ((longlong *)param_1[7] < plVar2) {
    uVar3 = uVar6;
  }
  if (uVar3 != 0) {
    do {
      local_res8[0] = *(uint *)(*plVar2 + 0x20);
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar6 = uVar6 + 1;
      plVar2 = plVar2 + 1;
    } while (uVar6 < uVar3);
  }
  local_res8[0] = (uint)param_1[9];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x4c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)param_1[10];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x54);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT31(local_res8[0]._1_3_,(char)param_1[0xb]);
  FUN_1405bb7c0(param_2,local_res8,1);
  FUN_1405bb630(param_2,param_1 + 0xc);
  FUN_1405bb630(param_2,param_1 + 0x10);
  FUN_1405bb630(param_2,param_1 + 0x14);
  local_res8[0] = (uint)param_1[0x18];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)((longlong)param_1 + 0xc4));
  FUN_1405bb7c0(param_2,local_res8,2);
  FUN_1400021b0(param_2,param_1 + 0x19);
  FUN_1400021b0(param_2,param_1 + 0x1c);
  FUN_1400021b0(param_2,param_1 + 0x1f);
  local_res8[0] = (uint)param_1[0x22];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x114);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)param_1[0x23];
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x11c);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_1405bb630(param_2,param_1 + 0x24);
  local_res8[0] = (uint)param_1[0x28];
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar4 = 1;
  if (param_1[0x29] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
  }
  else {
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar3 = param_1[0x29];
    FUN_1400021b0(param_2,uVar3);
    FUN_1400021b0(param_2,uVar3 + 0x18);
    FUN_1400021b0(param_2,uVar3 + 0x30);
    FUN_1400021b0(param_2,uVar3 + 0x48);
    FUN_1400021b0(param_2,uVar3 + 0x60);
    local_res8[0] = *(uint *)(uVar3 + 0x78);
    uVar4 = 4;
  }
  FUN_1405bb7c0(param_2,local_res8,uVar4);
  if (param_1[0x2a] == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
    FUN_1405bb7c0(param_2,local_res18,1);
    uVar3 = param_1[0x2a];
    FUN_1400021b0(param_2,uVar3);
    FUN_1400021b0(param_2,uVar3 + 0x18);
  }
  return;
}

