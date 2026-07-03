// FUN_140baff50 @ 140baff50
// callees:
//   -> 140315ac0 FUN_140315ac0
//   -> 1405bba90 FUN_1405bba90
//   -> 140c01860 FUN_140c01860
//   -> 140002380 FUN_140002380
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140004a90 FUN_140004a90
//   -> 140dfb5c4 operator_new
//   -> 140bae6e0 FUN_140bae6e0
//   -> 140bae4a0 FUN_140bae4a0
//   -> 140c06830 FUN_140c06830
//   -> 140bae8f0 FUN_140bae8f0
//   -> 140002250 FUN_140002250
//   -> 140002fc0 FUN_140002fc0
//   -> 140baf150 FUN_140baf150
//   -> 140baeac0 FUN_140baeac0
//   -> 140367670 FUN_140367670
//   -> 140baed80 FUN_140baed80
//   -> 14014a480 FUN_14014a480
//   -> 140baef30 FUN_140baef30
//   -> 140002140 FUN_140002140


void FUN_140baff50(void *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  short *psVar3;
  bool bVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  void *pvVar15;
  void *local_res8;
  undefined8 *local_res20;
  int local_48 [2];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_res8 = param_1;
  FUN_140315ac0();
  FUN_1405bba90(param_2,(longlong)param_1 + 0x78,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x7c,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x80,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x82,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x84,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x88,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1e8,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1ec,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1ee,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1f0,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1f2,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 500,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1f6,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1f8,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1fc,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x200,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x204,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x208,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x20c,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x210,4);
  if (param_3 < 0x631) {
    *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffffffffffff;
  }
  else {
    FUN_1405bba90(param_2,(longlong)param_1 + 0x214,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x218,4);
  }
  FUN_1405bba90(param_2,(longlong)param_1 + 0x228,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x22c,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x348,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x34c,4);
  if (0x66e < param_3) {
    FUN_1405bba90(param_2,(longlong)param_1 + 0x350,4);
  }
  FUN_140c01860((longlong)param_1 + 0x90,param_2,param_3);
  FUN_140002380((longlong)param_1 + 0x2a0,param_2);
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)param_1 + 0x2b0);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  uVar8 = 0;
  uVar12 = uVar8;
  if (*(longlong *)((longlong)param_1 + 0x2b8) - *plVar1 >> 3 != 0) {
    do {
      lVar9 = *plVar1;
      uVar5 = FUN_140004a90(param_2);
      *(undefined8 *)(lVar9 + uVar12) = uVar5;
      (**(code **)(**(longlong **)(uVar12 + *plVar1) + 0x28))
                (*(longlong **)(uVar12 + *plVar1),param_2,param_3);
      *(undefined4 *)(*(longlong *)(uVar12 + *plVar1) + 0x98) =
           *(undefined4 *)((longlong)param_1 + 0x88);
      *(undefined2 *)(*(longlong *)(uVar12 + *plVar1) + 0x9c) =
           *(undefined2 *)((longlong)param_1 + 0x82);
      *(undefined2 *)(*(longlong *)(uVar12 + *plVar1) + 0x9e) =
           *(undefined2 *)((longlong)param_1 + 0x84);
      uVar13 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar13;
      uVar12 = uVar12 + 8;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)(*(longlong *)((longlong)param_1 + 0x2b8) - *plVar1 >> 3));
  }
  iVar14 = 0;
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2c8,4);
  if (0x666 < param_3) {
    FUN_1405bba90(param_2,local_48,4);
    FUN_14000b9d0((longlong)param_1 + 0x2d0,(longlong)local_48[0]);
    puVar2 = *(undefined8 **)((longlong)param_1 + 0x2d8);
    for (puVar7 = *(undefined8 **)((longlong)param_1 + 0x2d0); puVar7 < puVar2; puVar7 = puVar7 + 1)
    {
      local_res20 = operator_new(0x1c);
      *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 0xc) = 0xffffffff;
      *(undefined4 *)(local_res20 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 0x14) = 0xffffffff;
      *(undefined4 *)(local_res20 + 3) = 0xffffffff;
      *puVar7 = local_res20;
      FUN_140bae6e0(local_res20,param_2,param_3);
      param_1 = local_res8;
    }
    FUN_1405bba90(param_2,(longlong)param_1 + 0x2e8,4);
  }
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2ec,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2f0,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2f4,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2f8,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2fc,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x2fe,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x300,2);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x230,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x234,4);
  lVar9 = (longlong)param_1 + 0x238;
  lVar10 = 8;
  do {
    FUN_1405bba90(param_2,lVar9,4);
    lVar9 = lVar9 + 4;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    *(undefined8 *)((longlong)param_1 + 0x308) = 0;
  }
  else {
    local_res20 = operator_new(0x41758);
    uVar5 = FUN_140bae4a0(local_res20);
    *(undefined8 *)((longlong)param_1 + 0x308) = uVar5;
    FUN_140c06830(uVar5,param_2,param_3);
  }
  FUN_1405bba90(param_2,&local_res20,1);
  if ((char)local_res20 == '\0') {
    *(undefined8 *)((longlong)param_1 + 0x310) = 0;
  }
  else {
    local_res20 = operator_new(0x40);
    local_res20[1] = 0;
    local_res20[2] = 0;
    local_res20[3] = 0;
    *(undefined2 *)local_res20 = 0xffff;
    *(undefined2 *)((longlong)local_res20 + 2) = 0xffff;
    *(undefined2 *)((longlong)local_res20 + 4) = 0xffff;
    *(undefined4 *)(local_res20 + 4) = 0xfff0bdc0;
    *(undefined4 *)((longlong)local_res20 + 0x24) = 0xfff0bdc0;
    *(undefined4 *)(local_res20 + 5) = 0xfff0bdc0;
    *(undefined4 *)((longlong)local_res20 + 0x2c) = 0xffffffff;
    local_res20[6] = 0;
    *(undefined4 *)(local_res20 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x3c) = 0xffffffff;
    *(undefined8 **)((longlong)param_1 + 0x310) = local_res20;
    FUN_140bae8f0(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)param_1 + 600);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  if (*(longlong *)((longlong)param_1 + 0x260) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      local_res20 = operator_new(0x48);
      local_res20[2] = 0;
      local_res20[3] = 0;
      local_res20[4] = 0;
      local_res20[5] = 0;
      local_res20[6] = 0;
      local_res20[7] = 0;
      *local_res20 = 0;
      local_res20[1] = 0;
      *(undefined4 *)(local_res20 + 8) = 0;
      *(undefined8 **)(lVar9 + *plVar1) = local_res20;
      lVar10 = *(longlong *)(lVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar10,4);
      FUN_1405bba90(param_2,lVar10 + 4,4);
      FUN_1405bba90(param_2,lVar10 + 8,4);
      FUN_1405bba90(param_2,lVar10 + 0xc,4);
      FUN_140002250(param_2,lVar10 + 0x10);
      FUN_140002250(param_2,lVar10 + 0x28);
      FUN_1405bba90(param_2,lVar10 + 0x40,4);
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)((longlong)param_1 + 0x260) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)param_1 + 0x270);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  iVar14 = 0;
  if (*(longlong *)((longlong)param_1 + 0x278) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      local_res20 = operator_new(0x48);
      local_res20[2] = 0;
      local_res20[3] = 0;
      local_res20[4] = 0;
      local_res20[5] = 0;
      local_res20[6] = 0;
      local_res20[7] = 0;
      *local_res20 = 0;
      local_res20[1] = 0;
      *(undefined4 *)(local_res20 + 8) = 0;
      *(undefined8 **)(lVar9 + *plVar1) = local_res20;
      lVar10 = *(longlong *)(lVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar10,4);
      FUN_1405bba90(param_2,lVar10 + 4,4);
      FUN_1405bba90(param_2,lVar10 + 8,4);
      FUN_1405bba90(param_2,lVar10 + 0xc,4);
      FUN_140002250(param_2,lVar10 + 0x10);
      FUN_140002250(param_2,lVar10 + 0x28);
      FUN_1405bba90(param_2,lVar10 + 0x40,4);
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)((longlong)param_1 + 0x278) - *plVar1 >> 3));
  }
  iVar14 = 0;
  FUN_140002fc0((longlong)param_1 + 0x318,param_2);
  if (0x660 < param_3) {
    FUN_140baf150((longlong)param_1 + 0x288,param_2);
  }
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)param_1 + 0x358);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  uVar8 = 0;
  uVar12 = uVar8;
  pvVar6 = param_1;
  if (*(longlong *)((longlong)param_1 + 0x360) - *plVar1 >> 3 != 0) {
    do {
      local_res20 = operator_new(0x18);
      *(undefined4 *)(local_res20 + 1) = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 0xc) = 0xffffffff;
      local_res20[2] = 0;
      *(undefined8 **)(uVar12 + *plVar1) = local_res20;
      FUN_140baeac0(*(undefined8 *)(uVar12 + *plVar1),param_2,param_3);
      iVar14 = iVar14 + 1;
      uVar12 = uVar12 + 8;
      pvVar6 = local_res8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)((longlong)param_1 + 0x360) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)pvVar6 + 0x370);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  if (*(longlong *)((longlong)pvVar6 + 0x378) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      local_res20 = operator_new(8);
      *(undefined4 *)local_res20 = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
      *(undefined8 **)(lVar9 + *plVar1) = local_res20;
      lVar10 = *(longlong *)(lVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar10,4);
      FUN_1405bba90(param_2,lVar10 + 4,4);
      uVar13 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar13;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)(*(longlong *)((longlong)pvVar6 + 0x378) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)pvVar6 + 0x388);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  iVar14 = 0;
  pvVar15 = pvVar6;
  if (*(longlong *)((longlong)pvVar6 + 0x390) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      local_res20 = operator_new(0x28);
      local_res20[1] = 0;
      local_res20[2] = 0;
      local_res20[3] = 0;
      *(undefined4 *)local_res20 = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
      local_res20[4] = 0;
      *(undefined8 **)(lVar9 + *plVar1) = local_res20;
      lVar10 = *(longlong *)(lVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar10,4);
      FUN_1405bba90(param_2,lVar10 + 4,4);
      FUN_140002250(param_2,lVar10 + 8);
      FUN_1405bba90(param_2,lVar10 + 0x20,4);
      FUN_1405bba90(param_2,lVar10 + 0x24,4);
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + 8;
      pvVar15 = local_res8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)((longlong)pvVar6 + 0x390) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,(longlong)pvVar15 + 0x3b8,4);
  FUN_1405bba90(param_2,local_48,4);
  plVar1 = (longlong *)((longlong)pvVar15 + 0x3a0);
  FUN_14000b9d0(plVar1,(longlong)local_48[0]);
  iVar14 = 0;
  if (*(longlong *)((longlong)pvVar15 + 0x3a8) - *plVar1 >> 3 != 0) {
    lVar9 = 0;
    do {
      pvVar6 = operator_new(0x40);
      *(undefined8 *)((longlong)pvVar6 + 8) = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x10) = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x18) = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x20) = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x28) = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x30) = 0;
      *(void **)(lVar9 + *plVar1) = pvVar6;
      lVar10 = *(longlong *)(lVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar10,4);
      FUN_140002fc0(lVar10 + 8,param_2);
      FUN_1405bba90(param_2,lVar10 + 0x38,4);
      iVar14 = iVar14 + 1;
      lVar9 = lVar9 + 8;
    } while ((ulonglong)(longlong)iVar14 <
             (ulonglong)(*(longlong *)((longlong)pvVar15 + 0x3a8) - *plVar1 >> 3));
  }
  if (0x607 < param_3) {
    FUN_1405bba90(param_2,local_48,4);
    plVar1 = (longlong *)((longlong)pvVar15 + 0x3c0);
    FUN_14000b9d0(plVar1,(longlong)local_48[0]);
    iVar14 = 0;
    if (*(longlong *)((longlong)pvVar15 + 0x3c8) - *plVar1 >> 3 != 0) {
      lVar9 = 0;
      do {
        local_res8 = operator_new(0x380c);
        uVar5 = FUN_140367670(local_res8);
        *(undefined8 *)(lVar9 + *plVar1) = uVar5;
        FUN_140baed80(*(undefined8 *)(lVar9 + *plVar1),param_2);
        iVar14 = iVar14 + 1;
        lVar9 = lVar9 + 8;
      } while ((ulonglong)(longlong)iVar14 <
               (ulonglong)(*(longlong *)((longlong)pvVar15 + 0x3c8) - *plVar1 >> 3));
    }
  }
  if (0x609 < param_3) {
    FUN_1405bba90(param_2,(longlong)pvVar15 + 0x3d8,4);
    FUN_1405bba90(param_2,(longlong)pvVar15 + 0x3dc,4);
  }
  uVar12 = 0;
  if (param_3 < 0x5aa) {
    bVar4 = false;
    puVar7 = *(undefined8 **)((longlong)pvVar15 + 0xc0);
    uVar8 = (ulonglong)
            ((longlong)*(undefined8 **)((longlong)pvVar15 + 200) + (7 - (longlong)puVar7)) >> 3;
    if (*(undefined8 **)((longlong)pvVar15 + 200) < puVar7) {
      uVar8 = uVar12;
    }
    uVar11 = uVar12;
    if (uVar8 != 0) {
      do {
        psVar3 = (short *)*puVar7;
        if (((999 < *(uint *)(psVar3 + 2)) && (*(int *)(psVar3 + 4) == 0x989681)) && (*psVar3 == 0))
        {
          psVar3[2] = 10;
          psVar3[3] = 0;
          bVar4 = true;
        }
        puVar7 = puVar7 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar8);
      if (bVar4) {
        FUN_14014a480("old save: correcting possibly erroneous site animal pop");
      }
    }
    bVar4 = false;
    puVar7 = *(undefined8 **)((longlong)pvVar15 + 0xd8);
    uVar8 = (ulonglong)
            ((longlong)*(undefined8 **)((longlong)pvVar15 + 0xe0) + (7 - (longlong)puVar7)) >> 3;
    if (*(undefined8 **)((longlong)pvVar15 + 0xe0) < puVar7) {
      uVar8 = uVar12;
    }
    if (uVar8 != 0) {
      do {
        if (*(int *)((longlong)pvVar15 + 0x230) < *(int *)*puVar7) {
          *(int *)*puVar7 = *(int *)((longlong)pvVar15 + 0x230);
          bVar4 = true;
        }
        puVar7 = puVar7 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar8);
      if (bVar4) {
        FUN_14014a480("old save: correcting possibly erroneous site pop");
      }
    }
  }
  if (0x61d < param_3) {
    FUN_1405bba90(param_2,&local_res8,1);
    if ((char)local_res8 == '\0') {
      *(undefined8 *)((longlong)pvVar15 + 0x3e0) = 0;
    }
    else {
      puVar7 = operator_new(0x18);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined8 **)((longlong)pvVar15 + 0x3e0) = puVar7;
      FUN_140baef30(puVar7,param_2,param_3);
    }
  }
  if (0x630 < param_3) {
    FUN_1405bba90(param_2,&local_res8,1);
    if ((char)local_res8 == '\0') {
      *(undefined8 *)((longlong)pvVar15 + 0x220) = 0;
    }
    else {
      puVar7 = operator_new(0x90);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0x11] = 0;
      *(undefined8 **)((longlong)pvVar15 + 0x220) = puVar7;
      FUN_140002140(param_2,puVar7);
      FUN_140002140(param_2,puVar7 + 3);
      FUN_140002140(param_2,puVar7 + 6);
      FUN_140002250(param_2,puVar7 + 9);
      FUN_140002250(param_2,puVar7 + 0xc);
      FUN_140002250(param_2,puVar7 + 0xf);
    }
  }
  if (0x648 < param_3) {
    FUN_1405bba90(param_2,(longlong)pvVar15 + 1000,4);
  }
  return;
}

