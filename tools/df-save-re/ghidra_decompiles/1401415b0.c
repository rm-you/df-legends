// FUN_1401415b0 @ 1401415b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140010c40 FUN_140010c40
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140140ac0 FUN_140140ac0
//   -> 140ca8390 FUN_140ca8390
//   -> 1407ad250 FUN_1407ad250
//   -> 14000bc60 FUN_14000bc60
//   -> 140002250 FUN_140002250


void FUN_1401415b0(longlong param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_res18 [2];
  int local_res20;
  
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,param_3);
  local_res20 = param_4;
  FUN_1405bba90(param_2,param_1,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,param_1 + 8,4);
  FUN_1405bba90(param_2,param_1 + 0xc,4);
  FUN_1405bba90(param_2,param_1 + 0x10,4);
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  if (0x6a4 < param_4) {
    FUN_140010c40(param_1 + 0x18,param_2,param_4);
  }
  FUN_1405bba90(param_2,param_1 + 0x40,4);
  if (0x6a4 < param_4) {
    FUN_140010c40(param_1 + 0x48,param_2,param_4);
  }
  FUN_1405bba90(param_2,param_1 + 0x70,4);
  if (0x6a4 < param_4) {
    FUN_140010c40(param_1 + 0x78,param_2,param_4);
  }
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xa4,4);
  FUN_1405bba90(param_2,param_1 + 0xa8,4);
  FUN_1405bba90(param_2,param_1 + 0xac,4);
  FUN_1405bba90(param_2,param_1 + 0xb0,4);
  FUN_1405bba90(param_2,param_1 + 0xb4,4);
  FUN_1405bba90(param_2,param_1 + 0xb8,4);
  FUN_1405bba90(param_2,param_1 + 0xbc,4);
  if (param_4 < 0x695) {
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0xc0,4);
  }
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0xf8,(longlong)local_res18[0]);
  uVar14 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x100);
  for (puVar11 = *(undefined8 **)(param_1 + 0xf8); puVar11 < puVar1; puVar11 = puVar11 + 1) {
    puVar4 = operator_new(0x78);
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[3] = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[9] = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 10) = 0xffffffff;
    *puVar4 = 0xffffffffffffffff;
    *(undefined4 *)(puVar4 + 1) = 0xffffffff;
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar4 + 8) = 0xffffffff;
    puVar4[0xe] = 0;
    *puVar11 = puVar4;
    FUN_140140ac0(puVar4,param_2,param_4);
  }
  iVar13 = 0;
  if (param_4 < 0x6a5) {
    plVar12 = *(longlong **)(param_1 + 0xf8);
    uVar9 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x100) + (7 - (longlong)plVar12)) >> 3;
    if (*(longlong **)(param_1 + 0x100) < plVar12) {
      uVar9 = uVar14;
    }
    uVar17 = uVar14;
    if (uVar9 != 0) {
      do {
        lVar2 = *plVar12;
        iVar15 = *(int *)(lVar2 + 0x14);
        if (((iVar15 != -1) && (iVar10 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar10 != 0)) &&
           (iVar10 = iVar10 + -1, uVar16 = uVar14, -1 < iVar10)) {
          do {
            iVar7 = (int)uVar16 + iVar10 >> 1;
            lVar3 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
            if (*(int *)(lVar3 + 0x130) == iVar15) {
              if (lVar3 != 0) {
                *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0xc10);
                *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0xc10);
                lVar5 = FUN_140ca8390(lVar3);
                if ((lVar5 == 0) || (lVar5 = FUN_1407ad250(lVar5), lVar5 == 0)) {
                  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar3 + 0xc10);
                }
                else {
                  FUN_14000bc60(lVar2 + 0x28,lVar5);
                }
              }
              break;
            }
            if (iVar15 < *(int *)(lVar3 + 0x130)) {
              iVar10 = iVar7 + -1;
            }
            else {
              uVar16 = (ulonglong)(iVar7 + 1);
            }
          } while ((int)uVar16 <= iVar10);
        }
        iVar15 = *(int *)(lVar2 + 0x40);
        if (((iVar15 != -1) && (iVar10 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar10 != 0)) &&
           (iVar10 = iVar10 + -1, uVar16 = uVar14, -1 < iVar10)) {
          do {
            iVar7 = (int)uVar16 + iVar10 >> 1;
            lVar3 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
            if (*(int *)(lVar3 + 0x130) == iVar15) {
              if (lVar3 != 0) {
                *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar3 + 0xc10);
                *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar3 + 0xc10);
                lVar5 = FUN_140ca8390(lVar3);
                if ((lVar5 == 0) || (lVar5 = FUN_1407ad250(lVar5), lVar5 == 0)) {
                  *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar3 + 0xc10);
                }
                else {
                  FUN_14000bc60(lVar2 + 0x58,lVar5);
                }
              }
              break;
            }
            if (iVar15 < *(int *)(lVar3 + 0x130)) {
              iVar10 = iVar7 + -1;
            }
            else {
              uVar16 = (ulonglong)(iVar7 + 1);
            }
          } while ((int)uVar16 <= iVar10);
        }
        plVar12 = plVar12 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar9);
    }
  }
  if (0x696 < param_4) {
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 200,(longlong)local_res18[0]);
    iVar15 = local_res20;
    puVar1 = *(undefined8 **)(param_1 + 0xd0);
    for (puVar11 = *(undefined8 **)(param_1 + 200); puVar11 < puVar1; puVar11 = puVar11 + 1) {
      puVar6 = operator_new(0x28);
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *puVar6 = 0xffffffff;
      puVar6[2] = 0xffffffff;
      puVar6[1] = 0xffffffff;
      *puVar11 = puVar6;
      FUN_1405bba90(param_2,puVar6,4);
      if (0x628 < iVar15) {
        FUN_1405bba90(param_2,puVar6 + 1,4);
        FUN_1405bba90(param_2,puVar6 + 2,4);
        FUN_140002250(param_2,puVar6 + 4);
      }
    }
    FUN_1405bba90(param_2,local_res18,4);
    FUN_14000b9d0(param_1 + 0xe0,(longlong)local_res18[0]);
    iVar15 = local_res20;
    puVar1 = *(undefined8 **)(param_1 + 0xe8);
    for (puVar11 = *(undefined8 **)(param_1 + 0xe0); puVar11 < puVar1; puVar11 = puVar11 + 1) {
      puVar6 = operator_new(0x28);
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      *puVar6 = 0xffffffff;
      puVar6[2] = 0xffffffff;
      puVar6[1] = 0xffffffff;
      *puVar11 = puVar6;
      FUN_1405bba90(param_2,puVar6,4);
      if (0x628 < iVar15) {
        FUN_1405bba90(param_2,puVar6 + 1,4);
        FUN_1405bba90(param_2,puVar6 + 2,4);
        FUN_140002250(param_2,puVar6 + 4);
      }
    }
  }
  iVar15 = local_res20;
  if (local_res20 < 0x6a9) {
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  }
  else {
    FUN_1405bba90(param_2,param_1 + 0x110,4);
  }
  if (iVar15 < 0x6a5) {
    iVar15 = *(int *)(param_1 + 0x14);
    if (((iVar15 != -1) && (iVar10 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar10 != 0)) &&
       (iVar10 = iVar10 + -1, iVar7 = iVar13, -1 < iVar10)) {
      do {
        iVar8 = iVar7 + iVar10 >> 1;
        lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar8 * 8);
        if (*(int *)(lVar2 + 0x130) == iVar15) {
          if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar2 + 0xc10);
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar2 + 0xc10);
            *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar2 + 0xc10);
          }
          break;
        }
        if (iVar15 < *(int *)(lVar2 + 0x130)) {
          iVar10 = iVar8 + -1;
        }
        else {
          iVar7 = iVar8 + 1;
        }
      } while (iVar7 <= iVar10);
    }
    iVar15 = *(int *)(param_1 + 0x40);
    if (((iVar15 != -1) && (iVar10 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar10 != 0)) &&
       (iVar10 = iVar10 + -1, -1 < iVar10)) {
      do {
        iVar7 = iVar13 + iVar10 >> 1;
        lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
        if (*(int *)(lVar2 + 0x130) == iVar15) {
          if (lVar2 != 0) {
            *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar2 + 0xc10);
            *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar2 + 0xc10);
            *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 0xc10);
          }
          break;
        }
        if (iVar15 < *(int *)(lVar2 + 0x130)) {
          iVar10 = iVar7 + -1;
        }
        else {
          iVar13 = iVar7 + 1;
        }
      } while (iVar13 <= iVar10);
    }
    iVar13 = *(int *)(param_1 + 0x70);
    if (((iVar13 != -1) && (iVar15 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar15 != 0)) &&
       (iVar15 = iVar15 + -1, -1 < iVar15)) {
      while( true ) {
        iVar10 = (int)uVar14 + iVar15 >> 1;
        lVar2 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar10 * 8);
        if (*(int *)(lVar2 + 0x130) == iVar13) break;
        if (iVar13 < *(int *)(lVar2 + 0x130)) {
          iVar15 = iVar10 + -1;
        }
        else {
          uVar14 = (ulonglong)(iVar10 + 1);
        }
        if (iVar15 < (int)uVar14) {
          return;
        }
      }
      if (lVar2 != 0) {
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar2 + 0xc10);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar2 + 0xc10);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar2 + 0xc10);
      }
    }
  }
  return;
}

