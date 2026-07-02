// FUN_1407b4650 @ 1407b4650
// callees:
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 1406fac90 FUN_1406fac90
//   -> EXTERNAL:000000e1 memmove
//   -> 1401ce1b0 FUN_1401ce1b0
//   -> 14000bd10 FUN_14000bd10
//   -> 1406faef0 FUN_1406faef0
//   -> 1406f57a0 FUN_1406f57a0


void FUN_1407b4650(longlong param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int local_res8 [2];
  int local_res18 [2];
  void *local_res20;
  
  local_res18[0] = param_3;
  FUN_140002250(param_2,param_1);
  FUN_140002250(param_2,param_1 + 0x18);
  FUN_140002250(param_2,param_1 + 0x30);
  FUN_140002250(param_2,param_1 + 0x48);
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0xb0,(longlong)local_res8[0]);
  uVar10 = 0;
  puVar4 = *(undefined8 **)(param_1 + 0xb8);
  for (puVar9 = *(undefined8 **)(param_1 + 0xb0); puVar9 < puVar4; puVar9 = puVar9 + 1) {
    local_res20 = operator_new(0x48);
    *(undefined8 *)((longlong)local_res20 + 0x30) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x38) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x40) = 0;
    *(undefined4 *)((longlong)local_res20 + 4) = 0;
    *(undefined8 *)((longlong)local_res20 + 8) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x20) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x28) = 0xffffffff;
    *puVar9 = local_res20;
    FUN_1406fac90(local_res20,param_2);
  }
  FUN_1405bba90(param_2,param_1 + 200,4);
  if (0x65f < param_3) {
    bVar6 = false;
    FUN_1405bba90(param_2,local_res8,4);
    FUN_14000b9d0(param_1 + 0x80,(longlong)local_res8[0]);
    puVar9 = *(undefined8 **)(param_1 + 0x80);
    uVar12 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0x88) + (7 - (longlong)puVar9)) >> 3;
    if (*(undefined8 **)(param_1 + 0x88) < puVar9) {
      uVar12 = uVar10;
    }
    if (uVar12 != 0) {
      piVar16 = (int *)0x0;
      do {
        FUN_1405bba90(param_2,local_res8,4);
        param_3 = local_res18[0];
        iVar8 = (int)(DAT_141d69318 - DAT_141d69310 >> 3) + -1;
        piVar14 = piVar16;
        piVar15 = piVar16;
        if (-1 < iVar8) {
          do {
            iVar7 = iVar8 + (int)piVar14 >> 1;
            piVar15 = *(int **)(DAT_141d69310 + (longlong)iVar7 * 8);
            iVar3 = *piVar15;
            if (iVar3 == local_res8[0]) break;
            if (local_res8[0] < iVar3) {
              iVar8 = iVar7 + -1;
            }
            else {
              piVar14 = (int *)(ulonglong)(iVar7 + 1);
            }
            piVar15 = piVar16;
          } while ((int)piVar14 <= iVar8);
        }
        *puVar9 = piVar15;
        if (piVar15 == (int *)0x0) {
          bVar6 = true;
        }
        puVar9 = puVar9 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
      if ((bVar6) &&
         (iVar8 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3) + -1,
         -1 < iVar8)) {
        lVar11 = (longlong)iVar8 * 8;
        lVar13 = lVar11;
        do {
          lVar5 = *(longlong *)(param_1 + 0x80);
          if (*(longlong *)(lVar13 + lVar5) == 0) {
            pvVar2 = (void *)(lVar11 + lVar5);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,*(longlong *)(param_1 + 0x88) - (longlong)pvVar1);
            *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -8;
          }
          lVar11 = lVar11 + -8;
          lVar13 = lVar13 + -8;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
    bVar6 = false;
    FUN_1405bba90(param_2,local_res8,4);
    FUN_14000b9d0(param_1 + 0x98,(longlong)local_res8[0]);
    uVar12 = 0;
    puVar9 = *(undefined8 **)(param_1 + 0x98);
    uVar10 = (ulonglong)((longlong)*(undefined8 **)(param_1 + 0xa0) + (7 - (longlong)puVar9)) >> 3;
    if (*(undefined8 **)(param_1 + 0xa0) < puVar9) {
      uVar10 = uVar12;
    }
    if (uVar10 != 0) {
      piVar16 = (int *)0x0;
      do {
        FUN_1405bba90(param_2,local_res8,4);
        param_3 = local_res18[0];
        iVar8 = (int)(DAT_141d69318 - DAT_141d69310 >> 3) + -1;
        piVar14 = piVar16;
        piVar15 = piVar16;
        if (-1 < iVar8) {
          do {
            iVar7 = iVar8 + (int)piVar14 >> 1;
            piVar15 = *(int **)(DAT_141d69310 + (longlong)iVar7 * 8);
            iVar3 = *piVar15;
            if (iVar3 == local_res8[0]) break;
            if (local_res8[0] < iVar3) {
              iVar8 = iVar7 + -1;
            }
            else {
              piVar14 = (int *)(ulonglong)(iVar7 + 1);
            }
            piVar15 = piVar16;
          } while ((int)piVar14 <= iVar8);
        }
        *puVar9 = piVar15;
        if (piVar15 == (int *)0x0) {
          bVar6 = true;
        }
        puVar9 = puVar9 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
      if ((bVar6) &&
         (iVar8 = (int)(*(longlong *)(param_1 + 0xa0) - *(longlong *)(param_1 + 0x98) >> 3) + -1,
         -1 < iVar8)) {
        lVar11 = (longlong)iVar8 * 8;
        lVar13 = lVar11;
        do {
          lVar5 = *(longlong *)(param_1 + 0x98);
          if (*(longlong *)(lVar13 + lVar5) == 0) {
            pvVar2 = (void *)(lVar11 + lVar5);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,*(longlong *)(param_1 + 0xa0) - (longlong)pvVar1);
            *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + -8;
          }
          lVar11 = lVar11 + -8;
          lVar13 = lVar13 + -8;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0x60,(longlong)local_res8[0]);
  puVar4 = *(undefined8 **)(param_1 + 0x68);
  for (puVar9 = *(undefined8 **)(param_1 + 0x60); puVar9 < puVar4; puVar9 = puVar9 + 1) {
    local_res20 = operator_new(0x58);
    *(undefined8 *)((longlong)local_res20 + 0x10) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x18) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x20) = 0;
    *(undefined8 *)((longlong)local_res20 + 4) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_res20 + 0xc) = 0;
    *(undefined8 *)((longlong)local_res20 + 0x44) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x4c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)local_res20 + 0x38) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)local_res20 + 0x40) = 0xffffffff;
    *puVar9 = local_res20;
    FUN_1401ce1b0(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x78,4);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000bd10(param_1 + 0xd0,(longlong)local_res18[0]);
  uVar10 = *(ulonglong *)(param_1 + 0xd8);
  for (uVar12 = *(ulonglong *)(param_1 + 0xd0); uVar12 < uVar10; uVar12 = uVar12 + 4) {
    FUN_1405bba90(param_2,uVar12,4);
  }
  FUN_1405bba90(param_2,local_res8,4);
  FUN_14000b9d0(param_1 + 0xe8,(longlong)local_res8[0]);
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  for (puVar9 = *(undefined8 **)(param_1 + 0xe8); puVar9 < puVar4; puVar9 = puVar9 + 1) {
    local_res20 = operator_new(0x18);
    *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
    *(undefined4 *)((longlong)local_res20 + 8) = 0;
    *puVar9 = local_res20;
    FUN_1406faef0(local_res20,param_2,param_3);
  }
  FUN_1405bba90(param_2,param_1 + 0x100,4);
  if (0x673 < param_3) {
    FUN_1405bba90(param_2,local_res8,4);
    FUN_14000b9d0(param_1 + 0x108,(longlong)local_res8[0]);
    puVar4 = *(undefined8 **)(param_1 + 0x110);
    for (puVar9 = *(undefined8 **)(param_1 + 0x108); puVar9 < puVar4; puVar9 = puVar9 + 1) {
      local_res20 = operator_new(0x2c);
      *(undefined4 *)((longlong)local_res20 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)local_res20 + 8) = 0;
      *(undefined8 *)((longlong)local_res20 + 0xc) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)local_res20 + 0x28) = 0xffffffff;
      *puVar9 = local_res20;
      FUN_1406f57a0(local_res20,param_2,param_3);
    }
    FUN_1405bba90(param_2,param_1 + 0x120,4);
    FUN_1405bba90(param_2,param_1 + 0x124,4);
    FUN_1405bba90(param_2,param_1 + 0x128,4);
  }
  return;
}

