// FUN_140a5c9c0 @ 140a5c9c0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140002250 FUN_140002250
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14013c210 FUN_14013c210
//   -> 14000bd10 FUN_14000bd10
//   -> 14013c3d0 FUN_14013c3d0
//   -> 14000bed0 FUN_14000bed0
//   -> 14013c4b0 FUN_14013c4b0


void FUN_140a5c9c0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  int local_res18 [2];
  undefined8 *local_res20;
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,param_1,4);
  FUN_140002250(param_2,param_1 + 8);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x20,(longlong)local_res8[0]);
  uVar7 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar5 = *(undefined8 **)(param_1 + 0x20); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    local_res20 = operator_new(0x20);
    *local_res20 = 0;
    *(undefined4 *)(local_res20 + 1) = 0xffff8ad0;
    *(undefined8 *)((longlong)local_res20 + 0x14) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x1c) = 0;
    *puVar5 = local_res20;
    FUN_14013c210(local_res20,param_2);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0xb0,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0xb8);
  for (uVar4 = *(ulonglong *)(param_1 + 0xb0); uVar4 < uVar6; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 200,(longlong)local_res8[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  for (puVar5 = *(undefined8 **)(param_1 + 200); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    local_res20 = operator_new(0x18);
    *local_res20 = 0;
    *(undefined4 *)(local_res20 + 1) = 0xffff8ad0;
    *(undefined4 *)((longlong)local_res20 + 0x14) = 0;
    *puVar5 = local_res20;
    FUN_14013c3d0(local_res20,param_2);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0x38,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  for (uVar4 = *(ulonglong *)(param_1 + 0x38); uVar4 < uVar6; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0x50,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0x58);
  for (uVar4 = *(ulonglong *)(param_1 + 0x50); uVar4 < uVar6; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0x68,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0x70);
  for (uVar4 = *(ulonglong *)(param_1 + 0x68); uVar4 < uVar6; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bd10(param_1 + 0x80,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0x88);
  for (uVar4 = *(ulonglong *)(param_1 + 0x80); uVar4 < uVar6; uVar4 = uVar4 + 4) {
    FUN_1405bba90(param_2,uVar4,4);
  }
  FUN_1405bba90(param_2,&local_res20,4);
  FUN_14000bed0(param_1 + 0x98,(longlong)(int)local_res20);
  uVar6 = *(ulonglong *)(param_1 + 0xa0);
  for (uVar4 = *(ulonglong *)(param_1 + 0x98); uVar4 < uVar6; uVar4 = uVar4 + 2) {
    FUN_1405bba90(param_2,uVar4,2);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0xe0,(longlong)local_res8[0]);
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  for (puVar5 = *(undefined8 **)(param_1 + 0xe0); puVar5 < puVar1; puVar5 = puVar5 + 1) {
    puVar2 = operator_new(0x10);
    *(undefined4 *)puVar2 = 0xffff8ad0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar5 = puVar2;
    local_res20 = puVar2;
    FUN_1405bba90(param_2,puVar2,4);
    FUN_1405bba90(param_2,(longlong)puVar2 + 4,4);
    FUN_1405bba90(param_2,puVar2 + 1,4);
    FUN_1405bba90(param_2,(longlong)puVar2 + 0xc,4);
    param_3 = local_res18[0];
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0xf8,(longlong)local_res8[0]);
  puVar5 = *(undefined8 **)(param_1 + 0xf8);
  uVar6 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x100) + (7 - (longlong)puVar5)) >> 3;
  if (*(undefined8 **)(param_1 + 0x100) < puVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      plVar3 = (longlong *)FUN_14013c4b0(param_2);
      *puVar5 = plVar3;
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2,param_3);
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar7 < uVar6);
  }
  FUN_1405bba90(param_2,param_1 + 0x114,4);
  FUN_1405bba90(param_2,param_1 + 0x118,4);
  if (0x5ba < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x120,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x128);
    for (uVar6 = *(ulonglong *)(param_1 + 0x120); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x138,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x140);
    for (uVar6 = *(ulonglong *)(param_1 + 0x138); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x150,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x158);
    for (uVar6 = *(ulonglong *)(param_1 + 0x150); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x168,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x170);
    for (uVar6 = *(ulonglong *)(param_1 + 0x168); uVar6 < uVar7; uVar6 = uVar6 + 4) {
      FUN_1405bba90(param_2,uVar6,4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x180,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x188);
    for (uVar6 = *(ulonglong *)(param_1 + 0x180); uVar6 < uVar7; uVar6 = uVar6 + 4) {
      FUN_1405bba90(param_2,uVar6,4);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x198,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x1a0);
    for (uVar6 = *(ulonglong *)(param_1 + 0x198); uVar6 < uVar7; uVar6 = uVar6 + 4) {
      FUN_1405bba90(param_2,uVar6,4);
    }
  }
  if (0x606 < param_3) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x1b0,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x1b8);
    for (uVar6 = *(ulonglong *)(param_1 + 0x1b0); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x1c8,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x1d0);
    for (uVar6 = *(ulonglong *)(param_1 + 0x1c8); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bed0(param_1 + 0x1e0,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x1e8);
    for (uVar6 = *(ulonglong *)(param_1 + 0x1e0); uVar6 < uVar7; uVar6 = uVar6 + 2) {
      FUN_1405bba90(param_2,uVar6,2);
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000bd10(param_1 + 0x1f8,(longlong)local_res18[0]);
    uVar7 = *(ulonglong *)(param_1 + 0x200);
    for (uVar6 = *(ulonglong *)(param_1 + 0x1f8); uVar6 < uVar7; uVar6 = uVar6 + 4) {
      FUN_1405bba90(param_2,uVar6,4);
    }
  }
  return;
}

