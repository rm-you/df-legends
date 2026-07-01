// FUN_1406f68a0 @ 1406f68a0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14000bed0 FUN_14000bed0
//   -> 1406f5da0 FUN_1406f5da0
//   -> 140002250 FUN_140002250
//   -> 140dfc99c memset
//   -> 1406f6020 FUN_1406f6020


void FUN_1406f68a0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int local_res18 [2];
  int local_res20 [2];
  undefined4 *local_48 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0x1e,(longlong)local_res20[0]);
  iVar9 = 0;
  if (0 < local_res20[0]) {
    lVar10 = 0;
    do {
      local_48[0] = operator_new(4);
      *(undefined2 *)local_48[0] = 0xffff;
      *(undefined2 *)((longlong)local_48[0] + 2) = 0xffff;
      *(undefined4 **)(lVar10 + param_1[0x1e]) = local_48[0];
      lVar12 = *(longlong *)(lVar10 + param_1[0x1e]);
      FUN_1405bba90(param_2,lVar12,2);
      FUN_1405bba90(param_2,lVar12 + 2,2);
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
      param_3 = local_res18[0];
    } while (iVar9 < local_res20[0]);
  }
  FUN_1405bba90(param_2,local_48,4);
  FUN_14000bed0(param_1 + 0x21,(longlong)(int)local_48[0]);
  uVar11 = param_1[0x22];
  for (uVar6 = param_1[0x21]; uVar6 < uVar11; uVar6 = uVar6 + 2) {
    FUN_1405bba90(param_2,uVar6,2);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1,(longlong)local_res20[0]);
  puVar3 = (undefined8 *)param_1[1];
  for (puVar7 = (undefined8 *)*param_1; puVar7 < puVar3; puVar7 = puVar7 + 1) {
    local_48[0] = operator_new(8);
    local_48[0][1] = 0;
    puVar5 = local_48[0] + 1;
    *local_48[0] = 0xffffffff;
    *puVar7 = local_48[0];
    FUN_1405bba90(param_2,local_48[0],4);
    FUN_1405bba90(param_2,puVar5,4);
    param_3 = local_res18[0];
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 3,(longlong)local_res20[0]);
  puVar7 = (undefined8 *)param_1[3];
  uVar6 = 0;
  uVar11 = (param_1[4] - (longlong)puVar7) + 7U >> 3;
  if ((undefined8 *)param_1[4] < puVar7) {
    uVar11 = uVar6;
  }
  if (uVar11 != 0) {
    do {
      pvVar4 = operator_new(4);
      *puVar7 = pvVar4;
      FUN_1405bba90(param_2,pvVar4,2);
      FUN_1405bba90(param_2,(longlong)pvVar4 + 2,2);
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 < uVar11);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 6,(longlong)local_res20[0]);
  puVar3 = (undefined8 *)param_1[7];
  for (puVar7 = (undefined8 *)param_1[6]; puVar7 < puVar3; puVar7 = puVar7 + 1) {
    local_48[0] = operator_new(0x28);
    *local_48[0] = 0xffffffff;
    *(undefined8 *)(local_48[0] + 1) = 0;
    local_48[0][3] = 0xffffffff;
    local_48[0][4] = 0xffffffff;
    *(undefined8 *)(local_48[0] + 5) = 0;
    local_48[0][7] = 0;
    local_48[0][8] = 0xffffffff;
    local_48[0][9] = 0xffffffff;
    *puVar7 = local_48[0];
    FUN_1406f5da0(local_48[0],param_2,param_3);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 9,(longlong)local_res20[0]);
  puVar3 = (undefined8 *)param_1[10];
  for (puVar7 = (undefined8 *)param_1[9]; puVar7 < puVar3; puVar7 = puVar7 + 1) {
    puVar5 = operator_new(0x30);
    *(undefined8 *)(puVar5 + 4) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined8 *)(puVar5 + 8) = 0;
    puVar5[2] = 0xffffffff;
    puVar5[10] = 0;
    *puVar7 = puVar5;
    local_48[0] = puVar5;
    FUN_1405bba90(param_2,puVar5,4);
    FUN_1405bba90(param_2,puVar5 + 1,4);
    FUN_1405bba90(param_2,puVar5 + 2,4);
    FUN_140002250(param_2,puVar5 + 4);
    FUN_1405bba90(param_2,puVar5 + 10,4);
  }
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0xd,(longlong)local_res20[0]);
  puVar3 = (undefined8 *)param_1[0xe];
  for (puVar7 = (undefined8 *)param_1[0xd]; puVar7 < puVar3; puVar7 = puVar7 + 1) {
    puVar5 = operator_new(0x18);
    puVar5[1] = 0xffffffff;
    puVar5[2] = 0xffffffff;
    puVar5[3] = 0xffffffff;
    puVar5[4] = 0xffffffff;
    *puVar5 = 0xffffffff;
    local_48[0] = puVar5 + 5;
    *local_48[0] = 0;
    *puVar7 = puVar5;
    FUN_1405bba90(param_2,puVar5,4);
    FUN_1405bba90(param_2,puVar5 + 1,4);
    FUN_1405bba90(param_2,puVar5 + 2,4);
    FUN_1405bba90(param_2,puVar5 + 3,4);
    FUN_1405bba90(param_2,puVar5 + 4,4);
    FUN_1405bba90(param_2,local_48[0],4);
  }
  if (0x5ca < local_res18[0]) {
    FUN_1405bba90(param_2,local_res20,4);
    FUN_14000b9d0(param_1 + 0x27,(longlong)local_res20[0]);
    puVar3 = (undefined8 *)param_1[0x28];
    for (puVar7 = (undefined8 *)param_1[0x27]; puVar7 < puVar3; puVar7 = puVar7 + 1) {
      local_48[0] = operator_new(0x10);
      local_48[0][1] = 0xffffffff;
      local_48[0][2] = 0;
      puVar5 = local_48[0] + 1;
      local_48[0][3] = 1;
      puVar1 = local_48[0] + 2;
      *puVar7 = local_48[0];
      puVar2 = local_48[0] + 3;
      FUN_1405bba90(param_2,local_48[0],4);
      FUN_1405bba90(param_2,puVar5,4);
      FUN_1405bba90(param_2,puVar1,4);
      FUN_1405bba90(param_2,puVar2,4);
    }
  }
  iVar9 = local_res18[0];
  lVar12 = 0x32;
  puVar7 = param_1 + 0x10;
  lVar10 = 0x32;
  do {
    FUN_1405bba90(param_2,puVar7,2);
    puVar7 = (undefined8 *)((longlong)puVar7 + 2);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (iVar9 < 0x646) {
    *(short *)(param_1 + 0x18) = 100 - *(short *)(param_1 + 0x18);
  }
  FUN_1405bba90(param_2,(longlong)param_1 + 0xe4,4);
  FUN_1405bba90(param_2,param_1 + 0x1d,4);
  if (iVar9 < 0x5bd) {
    FUN_1405bba90(param_2,local_res18,4);
  }
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  if (0x5bc < iVar9) {
    FUN_1405bba90(param_2,param_1 + 0x24,4);
    if (iVar9 < 0x650) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) / 10;
    }
    FUN_1405bba90(param_2,(longlong)param_1 + 300,4);
    FUN_1405bba90(param_2,param_1 + 0x26,4);
    if (iVar9 < 0x6b4) {
      *(undefined4 *)((longlong)param_1 + 0x134) = 0;
    }
    else {
      FUN_1405bba90(param_2,(longlong)param_1 + 0x134,4);
    }
  }
  if (iVar9 < 0x5c0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x62700;
    *(undefined4 *)(param_1 + 0x25) = 0x62700;
  }
  else {
    FUN_1405bba90(param_2,(longlong)param_1 + 0x124,4);
    FUN_1405bba90(param_2,param_1 + 0x25,4);
  }
  if (0x5ca < iVar9) {
    FUN_1405bba90(param_2,param_1 + 0x2a,4);
    FUN_1405bba90(param_2,param_1 + 0x30,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x184,4);
  }
  if (0x5d8 < iVar9) {
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] == '\0') {
      param_1[0x2b] = 0;
    }
    else {
      pvVar4 = operator_new(100);
      memset(pvVar4,0,100);
      param_1[0x2b] = pvVar4;
      do {
        FUN_1405bba90(param_2,pvVar4,2);
        pvVar4 = (void *)((longlong)pvVar4 + 2);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  if (0x5e6 < iVar9) {
    FUN_1405bba90(param_2,param_1 + 0x2c,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x164,4);
  }
  if (0x64f < iVar9) {
    FUN_1405bba90(param_2,local_res18,1);
    if ((char)local_res18[0] == '\0') {
      param_1[0x2d] = 0;
    }
    else {
      pvVar4 = operator_new(600);
      lVar8 = 8;
      lVar12 = 8;
      lVar10 = (longlong)pvVar4 + 8;
      do {
        *(undefined4 *)(lVar10 + -8) = 0xffffffff;
        *(undefined8 *)(lVar10 + -4) = 0;
        *(undefined4 *)(lVar10 + 4) = 0xffffffff;
        *(undefined4 *)(lVar10 + 8) = 0xffffffff;
        *(undefined8 *)(lVar10 + 0xc) = 0;
        *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
        *(undefined4 *)(lVar10 + 0x18) = 0xffffffff;
        lVar10 = lVar10 + 0x24;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      puVar5 = (undefined4 *)((longlong)pvVar4 + 0x120);
      do {
        *puVar5 = 0xffffffff;
        *(undefined8 *)(puVar5 + 1) = 0;
        puVar5[3] = 0xffffffff;
        puVar5[4] = 0xffffffff;
        *(undefined8 *)(puVar5 + 5) = 0;
        puVar5[7] = 0xffffffff;
        puVar5[8] = 0xffffffff;
        puVar5 = puVar5 + 9;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      *(undefined8 *)((longlong)pvVar4 + 0x240) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x248) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x250) = 0;
      param_1[0x2d] = pvVar4;
      FUN_1406f6020(pvVar4,param_2,iVar9);
    }
  }
  if (0x65f < iVar9) {
    FUN_1405bba90(param_2,param_1 + 0x2e,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x174,4);
    FUN_1405bba90(param_2,param_1 + 0x2f,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x17c,4);
  }
  return;
}

