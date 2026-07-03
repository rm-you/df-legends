// FUN_14031a140 @ 14031a140
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140dfb6d8 operator_new
//   -> 140314d40 FUN_140314d40
//   -> 140315500 FUN_140315500
//   -> 14000b9d0 FUN_14000b9d0
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5c4 operator_new
//   -> 1405bb6d0 FUN_1405bb6d0


void FUN_14031a140(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  undefined8 *local_res8;
  int local_res20 [2];
  
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  FUN_1405bba90(param_2,param_1 + 0x18,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 0x20,4);
  FUN_1405bba90(param_2,param_1 + 0x24,4);
  FUN_1405bba90(param_2,param_1 + 0x28,2);
  FUN_1405bba90(param_2,param_1 + 0x2c,4);
  FUN_1405bba90(param_2,param_1 + 0x38,4);
  FUN_1405bba90(param_2,param_1 + 0x3c,4);
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  FUN_1405bba90(param_2,param_1 + 0x44,4);
  FUN_1405bba90(param_2,&local_res8,1);
  piVar14 = (int *)0x0;
  iVar13 = 0;
  if ((char)local_res8 == '\0') {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    uVar10 = *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x40);
    uVar12 = (ulonglong)uVar10;
    pvVar5 = operator_new((longlong)(int)uVar10);
    *(void **)(param_1 + 0x30) = pvVar5;
    piVar9 = piVar14;
    if (0 < (int)uVar10) {
      do {
        FUN_1405bba90(param_2,*(longlong *)(param_1 + 0x30) + (longlong)piVar9,1);
        uVar12 = uVar12 - 1;
        piVar9 = (int *)((longlong)piVar9 + 1);
      } while (uVar12 != 0);
    }
  }
  FUN_1405bba90(param_2,param_1 + 0x48,4);
  FUN_1405bba90(param_2,param_1 + 0x50,4);
  FUN_1405bba90(param_2,param_1 + 0x138,4);
  FUN_1405bba90(param_2,param_1 + 0x13c,4);
  FUN_1405bba90(param_2,param_1 + 0x140,4);
  FUN_140314d40(param_2,param_1 + 0x70);
  FUN_140315500(param_2,param_1 + 0x88,param_3);
  bVar4 = false;
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 0x58,(longlong)local_res20[0]);
  piVar9 = piVar14;
  piVar18 = piVar14;
  if (*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3 != 0) {
    do {
      FUN_1405bba90(param_2,local_res20,4);
      for (puVar3 = DAT_141c68058;
          (piVar8 = piVar14, puVar3 != (undefined8 *)0x0 &&
          (piVar8 = (int *)*puVar3, *(int *)*puVar3 != local_res20[0]));
          puVar3 = (undefined8 *)puVar3[2]) {
      }
      *(int **)((longlong)piVar9 + *(longlong *)(param_1 + 0x58)) = piVar8;
      if (*(longlong *)((longlong)piVar9 + *(longlong *)(param_1 + 0x58)) == 0) {
        bVar4 = true;
      }
      uVar10 = (int)piVar18 + 1;
      piVar9 = piVar9 + 2;
      piVar18 = (int *)(ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3));
    if ((bVar4) &&
       (iVar11 = (int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 3) + -1,
       -1 < iVar11)) {
      lVar17 = (longlong)iVar11 * 8;
      lVar19 = lVar17;
      do {
        if (*(longlong *)(lVar17 + *(longlong *)(param_1 + 0x58)) == 0) {
          pvVar2 = (void *)(lVar19 + *(longlong *)(param_1 + 0x58));
          pvVar5 = (void *)((longlong)pvVar2 + 8);
          memmove(pvVar2,pvVar5,*(longlong *)(param_1 + 0x60) - (longlong)pvVar5);
          *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + -8;
        }
        lVar19 = lVar19 + -8;
        lVar17 = lVar17 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  FUN_1405bba90(param_2,param_1 + 0xa0,1);
  bVar4 = false;
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0xa8);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  piVar9 = piVar14;
  piVar18 = piVar14;
  if (*(longlong *)(param_1 + 0xb0) - *plVar1 >> 3 != 0) {
    do {
      FUN_1405bba90(param_2,local_res20,4);
      lVar17 = DAT_141c6fda8 - DAT_141c6fda0 >> 3;
      piVar8 = piVar14;
      if (((lVar17 != 0) && (local_res20[0] != -1)) &&
         (iVar11 = (int)lVar17 + -1, iVar15 = iVar13, -1 < iVar11)) {
        do {
          iVar6 = iVar15 + iVar11 >> 1;
          piVar8 = *(int **)(DAT_141c6fda0 + (longlong)iVar6 * 8);
          iVar16 = piVar8[0x14];
          if (iVar16 == local_res20[0]) break;
          if (local_res20[0] < iVar16) {
            iVar11 = iVar6 + -1;
          }
          else {
            iVar15 = iVar6 + 1;
          }
          piVar8 = piVar14;
        } while (iVar15 <= iVar11);
      }
      *(int **)((longlong)piVar9 + *plVar1) = piVar8;
      if (*(longlong *)((longlong)piVar9 + *plVar1) == 0) {
        bVar4 = true;
      }
      uVar10 = (int)piVar18 + 1;
      piVar9 = piVar9 + 2;
      piVar18 = (int *)(ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xb0) - *plVar1 >> 3));
    if ((bVar4) && (iVar11 = (int)(*(longlong *)(param_1 + 0xb0) - *plVar1 >> 3) + -1, -1 < iVar11))
    {
      lVar17 = (longlong)iVar11 * 8;
      lVar19 = lVar17;
      do {
        if (*(longlong *)(lVar17 + *plVar1) == 0) {
          pvVar2 = (void *)(lVar19 + *plVar1);
          pvVar5 = (void *)((longlong)pvVar2 + 8);
          memmove(pvVar2,pvVar5,*(longlong *)(param_1 + 0xb0) - (longlong)pvVar5);
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -8;
        }
        lVar19 = lVar19 + -8;
        lVar17 = lVar17 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  bVar4 = false;
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0xc0);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  piVar9 = piVar14;
  piVar18 = piVar14;
  if (*(longlong *)(param_1 + 200) - *plVar1 >> 3 != 0) {
    do {
      FUN_1405bba90(param_2,local_res20,4);
      lVar17 = DAT_141c6fda8 - DAT_141c6fda0 >> 3;
      piVar8 = piVar14;
      if (((lVar17 != 0) && (local_res20[0] != -1)) &&
         (iVar11 = (int)lVar17 + -1, iVar15 = iVar13, -1 < iVar11)) {
        do {
          iVar6 = iVar15 + iVar11 >> 1;
          piVar8 = *(int **)(DAT_141c6fda0 + (longlong)iVar6 * 8);
          iVar16 = piVar8[0x14];
          if (iVar16 == local_res20[0]) break;
          if (local_res20[0] < iVar16) {
            iVar11 = iVar6 + -1;
          }
          else {
            iVar15 = iVar6 + 1;
          }
          piVar8 = piVar14;
        } while (iVar15 <= iVar11);
      }
      *(int **)((longlong)piVar9 + *plVar1) = piVar8;
      if (*(longlong *)((longlong)piVar9 + *plVar1) == 0) {
        bVar4 = true;
      }
      uVar10 = (int)piVar18 + 1;
      piVar9 = piVar9 + 2;
      piVar18 = (int *)(ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 200) - *plVar1 >> 3));
    if ((bVar4) && (iVar11 = (int)(*(longlong *)(param_1 + 200) - *plVar1 >> 3) + -1, -1 < iVar11))
    {
      lVar17 = (longlong)iVar11 * 8;
      lVar19 = lVar17;
      do {
        if (*(longlong *)(lVar17 + *plVar1) == 0) {
          pvVar2 = (void *)(lVar19 + *plVar1);
          pvVar5 = (void *)((longlong)pvVar2 + 8);
          memmove(pvVar2,pvVar5,*(longlong *)(param_1 + 200) - (longlong)pvVar5);
          *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + -8;
        }
        lVar19 = lVar19 + -8;
        lVar17 = lVar17 + -8;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  FUN_1405bba90(param_2,param_1 + 0xd8,4);
  iVar15 = *(int *)(param_1 + 0xd8);
  iVar11 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
  piVar9 = piVar14;
  if (((iVar11 != 0) && (iVar15 != -1)) && (iVar11 = iVar11 + -1, iVar16 = iVar13, -1 < iVar11)) {
    do {
      iVar7 = iVar16 + iVar11 >> 1;
      piVar9 = *(int **)(DAT_141c66fd0 + (longlong)iVar7 * 8);
      iVar6 = piVar9[0x4c];
      if (iVar6 == iVar15) break;
      if (iVar15 < iVar6) {
        iVar11 = iVar7 + -1;
      }
      else {
        iVar16 = iVar7 + 1;
      }
      piVar9 = piVar14;
    } while (iVar16 <= iVar11);
  }
  *(int **)(param_1 + 0xe0) = piVar9;
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0xe8);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  piVar9 = piVar14;
  piVar18 = piVar14;
  if (*(longlong *)(param_1 + 0xf0) - *plVar1 >> 3 != 0) {
    do {
      local_res8 = operator_new(0x10);
      *local_res8 = 0;
      *(undefined4 *)(local_res8 + 1) = 100;
      *(undefined8 **)((longlong)piVar18 + *plVar1) = local_res8;
      FUN_1405bba90(param_2,local_res20,4);
      iVar11 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
      piVar8 = piVar14;
      if (((iVar11 != 0) && (local_res20[0] != -1)) &&
         (iVar11 = iVar11 + -1, iVar15 = iVar13, -1 < iVar11)) {
        do {
          iVar6 = iVar15 + iVar11 >> 1;
          piVar8 = *(int **)(DAT_141c66fd0 + (longlong)iVar6 * 8);
          iVar16 = piVar8[0x4c];
          if (iVar16 == local_res20[0]) break;
          if (local_res20[0] < iVar16) {
            iVar11 = iVar6 + -1;
          }
          else {
            iVar15 = iVar6 + 1;
          }
          piVar8 = piVar14;
        } while (iVar15 <= iVar11);
      }
      **(undefined8 **)((longlong)piVar18 + *plVar1) = piVar8;
      FUN_1405bba90(param_2,*(longlong *)((longlong)piVar18 + *plVar1) + 8,4);
      uVar10 = (int)piVar9 + 1;
      piVar9 = (int *)(ulonglong)uVar10;
      piVar18 = piVar18 + 2;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xf0) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,param_1 + 0x4c,2);
  FUN_1405bb6d0(param_2,param_1 + 0x100);
  FUN_1405bba90(param_2,local_res20,4);
  plVar1 = (longlong *)(param_1 + 0x120);
  FUN_14000b9d0(plVar1,(longlong)local_res20[0]);
  piVar9 = piVar14;
  if (*(longlong *)(param_1 + 0x128) - *plVar1 >> 3 != 0) {
    do {
      local_res8 = operator_new(8);
      *local_res8 = 0xffffffffffffffff;
      *(undefined8 **)((longlong)piVar9 + *plVar1) = local_res8;
      lVar17 = *(longlong *)((longlong)piVar9 + *plVar1);
      FUN_1405bba90(param_2,lVar17,4);
      FUN_1405bba90(param_2,lVar17 + 4,4);
      uVar10 = (int)piVar14 + 1;
      piVar14 = (int *)(ulonglong)uVar10;
      piVar9 = piVar9 + 2;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0x128) - *plVar1 >> 3));
  }
  if (0x5c9 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0x144,4);
    FUN_1405bba90(param_2,param_1 + 0x148,4);
  }
  return;
}

