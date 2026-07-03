// FUN_140142a30 @ 140142a30
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1401421c0 FUN_1401421c0
//   -> 140141fe0 FUN_140141fe0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfc99c memset
//   -> 14000bd10 FUN_14000bd10


void FUN_140142a30(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res18 [2];
  int local_res20 [2];
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x10,(longlong)local_res18[0]);
  uVar11 = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  for (puVar7 = *(undefined8 **)(param_1 + 0x10); puVar7 < puVar2; puVar7 = puVar7 + 1) {
    puVar3 = operator_new(0x60);
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *puVar3 = 0xffffffffffffffff;
    puVar3[1] = 0xffffffffffffffff;
    puVar3[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0xb) = 100;
    *puVar7 = puVar3;
    FUN_1401421c0(puVar3,param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x158);
  FUN_140141fe0(plVar1,param_2);
  if ((param_4 < 0x6b2) &&
     (iVar4 = (int)(*(longlong *)(param_1 + 0x160) - *plVar1 >> 3) + -1, -1 < iVar4)) {
    lVar8 = (longlong)iVar4 * 8;
    lVar10 = lVar8;
    do {
      if (0x21 < *(uint *)((longlong)*(void **)(lVar8 + *plVar1) + 0x24)) {
        free(*(void **)(lVar8 + *plVar1));
        pvVar5 = (void *)(*plVar1 + lVar10 + 8);
        memmove((void *)(*plVar1 + lVar10),pvVar5,*(longlong *)(param_1 + 0x160) - (longlong)pvVar5)
        ;
        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + -8;
      }
      lVar10 = lVar10 + -8;
      lVar8 = lVar8 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  lVar8 = param_1 + 0x28;
  lVar10 = 0x16;
  do {
    FUN_1405bba90(param_2,lVar8,2);
    lVar8 = lVar8 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  pvVar5 = (void *)(param_1 + 0x54);
  if (param_4 < 0x5cf) {
    memset(pvVar5,0,0x100);
    lVar8 = 0x20;
    do {
      FUN_1405bba90(param_2,pvVar5,4);
      pvVar5 = (void *)((longlong)pvVar5 + 4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    lVar8 = 0x40;
    do {
      FUN_1405bba90(param_2,pvVar5,4);
      pvVar5 = (void *)((longlong)pvVar5 + 4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  FUN_1405bba90(param_2,param_1 + 0x170,4);
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000bd10(param_1 + 0x178,(longlong)local_res20[0]);
  uVar9 = *(ulonglong *)(param_1 + 0x180);
  for (uVar6 = *(ulonglong *)(param_1 + 0x178); uVar6 < uVar9; uVar6 = uVar6 + 4) {
    FUN_1405bba90(param_2,uVar6,4);
  }
  FUN_1405bba90(param_2,param_1 + 400,4);
  FUN_1405bba90(param_2,param_1 + 0x194,4);
  FUN_1405bba90(param_2,param_1 + 0x198,4);
  if (0x662 < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x1a0,(longlong)local_res18[0]);
    puVar2 = *(undefined8 **)(param_1 + 0x1a8);
    for (puVar7 = *(undefined8 **)(param_1 + 0x1a0); puVar7 < puVar2; puVar7 = puVar7 + 1) {
      pvVar5 = operator_new(0xc);
      *(undefined4 *)((longlong)pvVar5 + 8) = 0;
      *puVar7 = pvVar5;
      FUN_1405bba90(param_2,pvVar5,4);
      FUN_1405bba90(param_2,(longlong)pvVar5 + 4,4);
      FUN_1405bba90(param_2,(longlong)pvVar5 + 8,4);
    }
  }
  if (0x674 < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0x1b8,(longlong)local_res18[0]);
    puVar7 = *(undefined8 **)(param_1 + 0x1b8);
    uVar9 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x1c0) + (7 - (longlong)puVar7)) >> 3;
    if (*(undefined8 **)(param_1 + 0x1c0) < puVar7) {
      uVar9 = uVar11;
    }
    if (uVar9 != 0) {
      do {
        pvVar5 = operator_new(0x14);
        *puVar7 = pvVar5;
        FUN_1405bba90(param_2,pvVar5,4);
        FUN_1405bba90(param_2,(longlong)pvVar5 + 4,4);
        FUN_1405bba90(param_2,(longlong)pvVar5 + 8,4);
        FUN_1405bba90(param_2,(longlong)pvVar5 + 0xc,4);
        FUN_1405bba90(param_2,(longlong)pvVar5 + 0x10,4);
        uVar11 = uVar11 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar11 < uVar9);
    }
  }
  return;
}

