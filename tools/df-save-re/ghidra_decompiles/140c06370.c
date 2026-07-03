// FUN_140c06370 @ 140c06370
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c07450 FUN_140c07450
//   -> 140badd90 FUN_140badd90
//   -> 140c0b820 FUN_140c0b820
//   -> 140bac650 FUN_140bac650
//   -> 140bacda0 FUN_140bacda0
//   -> 1400b4b80 FUN_1400b4b80
//   -> 140c0be70 FUN_140c0be70


void FUN_140c06370(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong *plVar10;
  uint local_res8 [2];
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_48;
  
  uVar4 = (uint)(param_1[1] - *param_1 >> 3);
  local_res8[0] = uVar4;
  FUN_1405bb7c0(param_2,local_res8,4);
  lVar6 = 0;
  lVar1 = lVar6;
  if (0 < (longlong)(int)uVar4) {
    do {
      local_res8[0] = **(uint **)(*param_1 + lVar1 * 8);
      FUN_1405bb7c0(param_2,local_res8,4);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)uVar4);
  }
  iVar5 = (int)(param_1[1] - *param_1 >> 3);
  if (0 < iVar5) {
    do {
      FUN_140c07450(*(undefined8 *)(*param_1 + lVar6 * 8),param_2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar5);
  }
  local_res8[0] = *(uint *)(param_1 + 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x1c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 4);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar2 = (undefined2 *)((longlong)param_1 + 0x266);
  local_res18 = 0x11;
  puVar7 = (undefined1 *)((longlong)param_1 + 0x145);
  plVar8 = param_1 + 0x14e7;
  plVar10 = param_1 + 0x2c9c;
  do {
    lVar1 = 0x11;
    do {
      local_res8[0]._0_1_ = puVar7[-0x121];
      FUN_1405bb7c0(param_2,local_res8,1);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*puVar7);
      FUN_1405bb7c0(param_2,local_res8,1);
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,*puVar2);
      FUN_1405bb7c0(param_2,local_res8,2);
      FUN_140badd90(plVar8,param_2);
      FUN_140c0b820(plVar10,param_2);
      plVar8 = plVar8 + 0x15;
      plVar10 = plVar10 + 8;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    local_res18 = local_res18 + -1;
  } while (local_res18 != 0);
  plVar8 = param_1 + 0xabe;
  local_48 = 0x33;
  plVar10 = param_1 + 0x35a4;
  puVar2 = (undefined2 *)((longlong)param_1 + 0x1dfee);
  plVar3 = param_1 + 0x3e88;
  local_res18 = 0;
  do {
    lVar1 = 0x33;
    do {
      if (plVar8[-0xa29] == 0) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        FUN_1405bb7c0(param_2,local_res8,1);
      }
      else {
        local_res18 = CONCAT71(local_res18._1_7_,1);
        FUN_1405bb7c0(param_2,&local_res18,1);
        FUN_140bac650(plVar8[-0xa29],param_2);
      }
      if (*plVar8 == 0) {
        local_res20[0] = 0;
        FUN_1405bb7c0(param_2,local_res20,1);
      }
      else {
        local_res18 = CONCAT71(local_res18._1_7_,1);
        FUN_1405bb7c0(param_2,&local_res18,1);
        FUN_140bacda0(*plVar8,param_2);
      }
      local_res18 = CONCAT44(local_res18._4_4_,(int)*plVar10);
      FUN_1405bb7c0(param_2,&local_res18,4);
      local_res18 = CONCAT71(local_res18._1_7_,*(undefined1 *)((longlong)plVar3 + -0x1e7c));
      FUN_1405bb7c0(param_2,&local_res18,1);
      local_res18 = CONCAT62(local_res18._2_6_,*puVar2);
      FUN_1405bb7c0(param_2,&local_res18,2);
      local_res18 = CONCAT71(local_res18._1_7_,(char)*plVar3);
      FUN_1405bb7c0(param_2,&local_res18,1);
      plVar8 = plVar8 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 4);
      puVar2 = puVar2 + 1;
      plVar3 = (longlong *)((longlong)plVar3 + 1);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  puVar9 = (uint *)((longlong)param_1 + 0x1fe6c);
  lVar1 = 0x34;
  do {
    lVar6 = 0x34;
    do {
      local_res8[0] = *puVar9;
      FUN_1405bb7c0(param_2,local_res8,4);
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  uVar4 = (uint)(param_1[0x4517] - param_1[0x4516] >> 3);
  local_res8[0] = uVar4;
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < (longlong)(int)uVar4) {
    lVar1 = 0;
    do {
      FUN_1400b4b80(*(undefined8 *)(param_1[0x4516] + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)uVar4);
  }
  local_res8[0] = *(uint *)(param_1 + 0x4519);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x40564);
  FUN_1405bb7c0(param_2,local_res8,4);
  iVar5 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x40564)) {
    do {
      FUN_140c0be70((longlong)iVar5 * 0xf4 + 0x228d4 + (longlong)param_1,param_2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)param_1 + 0x40564));
  }
  local_res8[0] = *(uint *)(param_1 + 0x80ad);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)((longlong)param_1 + 0x4056c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x81da);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (0 < (int)param_1[0x81da]) {
    puVar9 = (uint *)(param_1 + 0x8144);
    iVar5 = 0;
    do {
      local_res8[0] = puVar9[-300];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = *puVar9;
      FUN_1405bb7c0(param_2,local_res8,4);
      iVar5 = iVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar5 < (int)param_1[0x81da]);
  }
  return;
}

