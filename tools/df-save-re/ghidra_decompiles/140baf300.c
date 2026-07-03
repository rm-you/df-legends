// FUN_140baf300 @ 140baf300
// callees:
//   -> 1403159b0 FUN_1403159b0
//   -> 1405bb7c0 FUN_1405bb7c0
//   -> 140c01650 FUN_140c01650
//   -> 1400022f0 FUN_1400022f0
//   -> 1400031f0 FUN_1400031f0
//   -> 140c06370 FUN_140c06370
//   -> 140bae7a0 FUN_140bae7a0
//   -> 140baea00 FUN_140baea00
//   -> 140002f20 FUN_140002f20
//   -> 140baefe0 FUN_140baefe0
//   -> 140071df0 FUN_140071df0
//   -> 1400021b0 FUN_1400021b0
//   -> 140baeb70 FUN_140baeb70
//   -> 1406f55f0 FUN_1406f55f0
//   -> 1400020a0 FUN_1400020a0


void FUN_140baf300(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  undefined1 local_res18 [8];
  
  FUN_1403159b0();
  local_res8[0] = *(uint *)(param_1 + 0x78);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x7c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x80);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x82);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x84));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x88);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1e8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x1ec);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x1ee);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x1f0);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x1f2);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 500);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x1f6));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x1f8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x1fc);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x200);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x204);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x208);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x20c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x210);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x214);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x218);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x228);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x22c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x348);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x34c);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x350);
  FUN_1405bb7c0(param_2,local_res8,4);
  FUN_140c01650(param_1 + 0x90,param_2);
  FUN_1400022f0(param_1 + 0x2a0,param_2);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar10 = 0;
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3 != 0) {
    do {
      uVar3 = (**(code **)**(undefined8 **)(uVar5 + *(longlong *)(param_1 + 0x2b0)))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar3);
      FUN_1405bb7c0(param_2,local_res8,2);
      plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x2b0));
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3));
  }
  local_res8[0] = *(uint *)(param_1 + 0x2c8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x2d8) - *(longlong *)(param_1 + 0x2d0) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar6 = *(undefined8 **)(param_1 + 0x2d0);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x2d8) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x2d8) < puVar6) {
    uVar5 = uVar10;
  }
  uVar8 = uVar10;
  if (uVar5 != 0) {
    do {
      FUN_1400031f0(*puVar6,param_2);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < uVar5);
  }
  local_res8[0] = *(uint *)(param_1 + 0x2e8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2ec);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2f0);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2f4);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x2f8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x2fc);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0]._0_2_ = *(undefined2 *)(param_1 + 0x2fe);
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = CONCAT22(local_res8[0]._2_2_,*(undefined2 *)(param_1 + 0x300));
  FUN_1405bb7c0(param_2,local_res8,2);
  local_res8[0] = *(uint *)(param_1 + 0x230);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x234);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar4 = (uint *)(param_1 + 0x238);
  lVar9 = 8;
  do {
    local_res8[0] = *puVar4;
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar4 = puVar4 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (*(longlong *)(param_1 + 0x308) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_140c06370(*(undefined8 *)(param_1 + 0x308),param_2);
  }
  if (*(longlong *)(param_1 + 0x310) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    FUN_140bae7a0(*(undefined8 *)(param_1 + 0x310),param_2);
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3 != 0) {
    do {
      FUN_140baea00(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 600)),param_2);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3 != 0) {
    do {
      FUN_140baea00(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x270)),param_2);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x278) - *(longlong *)(param_1 + 0x270) >> 3));
  }
  FUN_140002f20(param_1 + 0x318,param_2);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x290) - *(longlong *)(param_1 + 0x288) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  puVar6 = *(undefined8 **)(param_1 + 0x288);
  uVar5 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x290) + (7 - (longlong)puVar6)) >> 3;
  if (*(undefined8 **)(param_1 + 0x290) < puVar6) {
    uVar5 = uVar10;
  }
  uVar8 = uVar10;
  if (uVar5 != 0) {
    do {
      FUN_140baefe0(*puVar6,param_2);
      uVar8 = uVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar8 < uVar5);
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 3 != 0) {
    do {
      FUN_140071df0(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x358)),param_2);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x360) - *(longlong *)(param_1 + 0x358) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370) >> 3 != 0) {
    do {
      puVar4 = *(uint **)(uVar5 + *(longlong *)(param_1 + 0x370));
      local_res8[0] = *puVar4;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar4[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x378) - *(longlong *)(param_1 + 0x370) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 3 != 0) {
    do {
      puVar4 = *(uint **)(uVar5 + *(longlong *)(param_1 + 0x388));
      local_res8[0] = *puVar4;
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar4[1];
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_1400021b0(param_2,puVar4 + 2);
      local_res8[0] = puVar4[8];
      FUN_1405bb7c0(param_2,local_res8,4);
      local_res8[0] = puVar4[9];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x390) - *(longlong *)(param_1 + 0x388) >> 3));
  }
  local_res8[0] = *(uint *)(param_1 + 0x3b8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x3a8) - *(longlong *)(param_1 + 0x3a0) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x3a8) - *(longlong *)(param_1 + 0x3a0) >> 3 != 0) {
    do {
      puVar4 = *(uint **)(uVar5 + *(longlong *)(param_1 + 0x3a0));
      local_res8[0] = *puVar4;
      FUN_1405bb7c0(param_2,local_res8,4);
      FUN_140002f20(puVar4 + 2,param_2);
      local_res8[0] = puVar4[0xe];
      FUN_1405bb7c0(param_2,local_res8,4);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x3a8) - *(longlong *)(param_1 + 0x3a0) >> 3));
  }
  local_res8[0] = (uint)(*(longlong *)(param_1 + 0x3c8) - *(longlong *)(param_1 + 0x3c0) >> 3);
  FUN_1405bb7c0(param_2,local_res8,4);
  uVar5 = uVar10;
  uVar8 = uVar10;
  if (*(longlong *)(param_1 + 0x3c8) - *(longlong *)(param_1 + 0x3c0) >> 3 != 0) {
    do {
      FUN_140baeb70(*(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x3c0)),param_2);
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x3c8) - *(longlong *)(param_1 + 0x3c0) >> 3));
  }
  local_res8[0] = *(uint *)(param_1 + 0x3d8);
  FUN_1405bb7c0(param_2,local_res8,4);
  local_res8[0] = *(uint *)(param_1 + 0x3dc);
  FUN_1405bb7c0(param_2,local_res8,4);
  if (*(longlong *)(param_1 + 0x3e0) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    puVar2 = *(ulonglong **)(param_1 + 0x3e0);
    local_res8[0] = (uint)((longlong)(puVar2[1] - *puVar2) >> 3);
    FUN_1405bb7c0(param_2,local_res8,4);
    puVar6 = (undefined8 *)*puVar2;
    uVar5 = (ulonglong)((longlong)puVar2[1] + (7 - (longlong)puVar6)) >> 3;
    if ((undefined8 *)puVar2[1] < puVar6) {
      uVar5 = uVar10;
    }
    if (uVar5 != 0) {
      do {
        FUN_1406f55f0(*puVar6,param_2);
        uVar10 = uVar10 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar10 < uVar5);
    }
  }
  if (*(longlong *)(param_1 + 0x220) == 0) {
    local_res8[0] = local_res8[0] & 0xffffff00;
    FUN_1405bb7c0(param_2,local_res8,1);
  }
  else {
    local_res18[0] = 1;
    FUN_1405bb7c0(param_2,local_res18,1);
    lVar9 = *(longlong *)(param_1 + 0x220);
    FUN_1400020a0(param_2,lVar9);
    FUN_1400020a0(param_2,lVar9 + 0x18);
    FUN_1400020a0(param_2,lVar9 + 0x30);
    FUN_1400021b0(param_2,lVar9 + 0x48);
    FUN_1400021b0(param_2,lVar9 + 0x60);
    FUN_1400021b0(param_2,lVar9 + 0x78);
  }
  local_res8[0] = *(uint *)(param_1 + 1000);
  FUN_1405bb7c0(param_2,local_res8,4);
  return;
}

