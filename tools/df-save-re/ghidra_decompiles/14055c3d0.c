// FUN_14055c3d0 @ 14055c3d0
// callees:
//   -> 1402dda70 FUN_1402dda70
//   -> 14000d7e0 FUN_14000d7e0
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 1402ddc50 FUN_1402ddc50
//   -> 140002020 FUN_140002020
//   -> 14000d840 FUN_14000d840
//   -> 1408dd360 FUN_1408dd360
//   -> 140d89d60 FUN_140d89d60
//   -> 14000d730 FUN_14000d730
//   -> 1408dd6a0 FUN_1408dd6a0


void FUN_14055c3d0(longlong param_1,longlong param_2,undefined2 *param_3,uint *param_4,char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_res10 [4];
  uint *local_res20;
  uint *local_68;
  uint *local_50;
  uint *puStack_48;
  uint *local_40;
  
  plVar7 = (longlong *)(param_2 + 0xa0);
  local_res20 = param_4;
  if ((2 < *(int *)(param_2 + 0xa8)) && ((*(byte *)(*plVar7 + 2) & 8) != 0)) {
    plVar7 = (longlong *)(param_1 + 0x428);
    if (*(longlong *)(param_1 + 0x430) - *plVar7 >> 1 != 0) {
      if (param_5 != '\0') {
        FUN_1402dda70(local_res10,plVar7,param_1 + 0x440);
        *param_3 = *(undefined2 *)(*plVar7 + (longlong)(int)local_res10[0] * 2);
        *param_4 = *(uint *)(*(longlong *)(param_1 + 0x440) + (longlong)(int)local_res10[0] * 4);
        return;
      }
      iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x430) - *plVar7 >> 1);
      *param_3 = *(undefined2 *)(*plVar7 + (longlong)iVar2 * 2);
      *param_4 = *(uint *)(*(longlong *)(param_1 + 0x440) + (longlong)iVar2 * 4);
      return;
    }
    iVar6 = (int)(DAT_141d77d58 - DAT_141d77d50 >> 1);
    iVar2 = (int)(DAT_141d77d70 - DAT_141d77d68 >> 1);
    if ((0 < iVar6) || (0 < iVar2)) {
      iVar2 = FUN_14000d7e0(iVar2 + iVar6);
      if (iVar2 < iVar6) {
        *param_3 = *(undefined2 *)(DAT_141d77d50 + (longlong)iVar2 * 2);
        *param_4 = *(uint *)(DAT_141d780f8 + (longlong)iVar2 * 4);
        return;
      }
      *param_3 = *(undefined2 *)(DAT_141d77d68 + (longlong)(iVar2 - iVar6) * 2);
      *param_4 = *(uint *)(DAT_141d78110 + (longlong)(iVar2 - iVar6) * 4);
      return;
    }
    puVar13 = (uint *)0x0;
    uVar3 = 0;
    *param_3 = 0;
    if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 != 0) {
      local_50 = (uint *)0x0;
      puStack_48 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_res10[0] = 0;
      local_68 = (uint *)0x0;
      puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3);
      if (DAT_141d6dbe8 < DAT_141d6dbe0) {
        puVar12 = puVar13;
      }
      puVar10 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      plVar7 = DAT_141d6dbe0;
      puVar15 = puVar13;
      if (puVar12 != (uint *)0x0) {
        do {
          lVar4 = *plVar7;
          if (((1 < *(int *)(lVar4 + 0x440)) &&
              ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
             ((*(int *)(lVar4 + 0x40) < 3 || ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)
              ))) {
            if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
              lVar4 = (longlong)local_res10 - (longlong)puVar8;
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = puVar8[lVar4 >> 2];
              }
            }
            else {
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)puVar13;
              }
            }
            puVar10 = puVar10 + 1;
            puStack_48 = puVar10;
          }
          local_res10[0] = (uint)puVar13 + 1;
          puVar13 = (uint *)(ulonglong)local_res10[0];
          plVar7 = plVar7 + 1;
          local_68 = (uint *)((longlong)local_68 + 1);
        } while (local_68 < puVar12);
      }
      param_4 = local_res20;
      uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
      if (uVar9 != 0) {
        if (1 < (uint)uVar9) {
          uVar3 = FUN_1409fc0c0();
          uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
        }
        uVar3 = puVar8[(int)uVar3];
        goto LAB_14055d57e;
      }
LAB_14055d59d:
      param_4 = local_res20;
      if (puVar8 != (uint *)0x0) {
        FUN_140002020(puVar8,(longlong)puVar15 - (longlong)puVar8 >> 2,4);
      }
    }
LAB_14055d5ba:
    uVar3 = 0xffffffff;
LAB_14055d5bd:
    *param_4 = uVar3;
    return;
  }
  if (*(int *)(param_2 + 0xa8) < 1) {
LAB_14055d358:
    if ((*(int *)(param_2 + 0xa8) < 2) || ((*(byte *)(*plVar7 + 1) & 2) == 0)) {
      cVar1 = FUN_14000d840(plVar7,10);
      if (cVar1 == '\0') {
        cVar1 = FUN_14000d840(plVar7,0xb);
        if (cVar1 != '\0') {
          plVar7 = (longlong *)(param_1 + 0x458);
          if (*(longlong *)(param_1 + 0x460) - *plVar7 >> 1 == 0) {
            uVar9 = DAT_141d77ba8 - DAT_141d77ba0 >> 1;
            if (uVar9 == 0) goto LAB_14055d664;
            iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
            lVar5 = (longlong)iVar2;
            *param_3 = *(undefined2 *)(DAT_141d77ba0 + lVar5 * 2);
            lVar4 = DAT_141d77f48;
          }
          else {
            if (param_5 == '\0') {
              local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x460) - *plVar7 >> 1);
            }
            else {
              FUN_1402dda70(local_res10,plVar7,param_1 + 0x470);
            }
            lVar5 = (longlong)(int)local_res10[0];
            *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
            lVar4 = *(longlong *)(param_1 + 0x470);
          }
LAB_14055cadb:
          uVar3 = *(uint *)(lVar4 + lVar5 * 4);
LAB_14055cade:
          *param_4 = uVar3;
          return;
        }
        cVar1 = FUN_14000d840(plVar7,0xc);
        if (cVar1 == '\0') {
          cVar1 = FUN_14000d840(plVar7,0xd);
          if (cVar1 != '\0') {
            if (*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 1 != 0) {
              iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0)
                                    >> 1);
              uVar3 = *(uint *)(*(longlong *)(param_1 + 0x6f8) + (longlong)iVar2 * 4);
              *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x6e0) + (longlong)iVar2 * 2);
              *param_4 = uVar3;
              lVar4 = FUN_140d89d60(&DAT_141c53470);
              if (lVar4 == 0) {
                return;
              }
              uVar9 = 0;
              iVar2 = (int)(*(longlong *)(lVar4 + 0x350) - *(longlong *)(lVar4 + 0x348) >> 3);
              if (iVar2 < 1) {
                return;
              }
              puVar11 = *(undefined8 **)(lVar4 + 0x348);
              uVar14 = uVar9;
              do {
                cVar1 = FUN_14000d730(*puVar11,"FIRED_MAT");
                iVar6 = (int)uVar14;
                if (cVar1 != '\0') {
                  *param_3 = *(undefined2 *)(*(longlong *)(lVar4 + 0x390) + (longlong)iVar6 * 2);
                  *local_res20 = *(uint *)(*(longlong *)(lVar4 + 0x3a8) + (longlong)iVar6 * 4);
                  return;
                }
                uVar14 = (ulonglong)(iVar6 + 1);
                uVar9 = uVar9 + 1;
                puVar11 = puVar11 + 1;
              } while ((longlong)uVar9 < (longlong)iVar2);
              return;
            }
            goto LAB_14055d664;
          }
          cVar1 = FUN_14000d840(plVar7,0xe);
          if (cVar1 == '\0') {
            cVar1 = FUN_14000d840(plVar7,0xf);
            if (cVar1 == '\0') {
              cVar1 = FUN_14000d840(plVar7,0x10);
              if (cVar1 == '\0') {
                *param_3 = 0;
                uVar3 = FUN_1408dd6a0(&DAT_141d6dbe0);
                goto LAB_14055da7c;
              }
              plVar7 = (longlong *)(param_1 + 0x560);
              if (*(longlong *)(param_1 + 0x568) - *plVar7 >> 1 == 0) {
                uVar9 = DAT_141d77bc0 - DAT_141d77bb8 >> 1;
                if (uVar9 == 0) goto LAB_14055d664;
                iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
                lVar5 = (longlong)iVar2;
                *param_3 = *(undefined2 *)(DAT_141d77bb8 + lVar5 * 2);
                lVar4 = DAT_141d77f60;
              }
              else {
                if (param_5 == '\0') {
                  local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x568) - *plVar7 >> 1);
                }
                else {
                  FUN_1402dda70(local_res10,plVar7,param_1 + 0x578);
                }
                lVar5 = (longlong)(int)local_res10[0];
                *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
                lVar4 = *(longlong *)(param_1 + 0x578);
              }
            }
            else {
              plVar7 = (longlong *)(param_1 + 0x590);
              if (*(longlong *)(param_1 + 0x598) - *plVar7 >> 1 == 0) {
                uVar9 = DAT_141d77bd8 - DAT_141d77bd0 >> 1;
                if (uVar9 == 0) goto LAB_14055d664;
                iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
                lVar5 = (longlong)iVar2;
                *param_3 = *(undefined2 *)(DAT_141d77bd0 + lVar5 * 2);
                lVar4 = DAT_141d77f78;
              }
              else {
                if (param_5 == '\0') {
                  local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x598) - *plVar7 >> 1);
                }
                else {
                  FUN_1402dda70(local_res10,plVar7,param_1 + 0x5a8);
                }
                lVar5 = (longlong)(int)local_res10[0];
                *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
                lVar4 = *(longlong *)(param_1 + 0x5a8);
              }
            }
            goto LAB_14055cadb;
          }
          plVar7 = (longlong *)(param_1 + 0x530);
          lVar4 = *(longlong *)(param_1 + 0x538);
          lVar5 = *plVar7;
          *param_3 = 0;
          if (lVar4 - lVar5 >> 2 != 0) {
            if (param_5 == '\0') {
              iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x538) - *plVar7 >> 2);
              uVar3 = *(uint *)(*plVar7 + (longlong)iVar2 * 4);
            }
            else {
              FUN_1402ddc50(local_res10,0,plVar7);
              uVar3 = *(uint *)(*plVar7 + (longlong)(int)local_res10[0] * 4);
            }
            goto LAB_14055cade;
          }
        }
        else {
          plVar7 = (longlong *)(param_1 + 0x680);
          if (*(longlong *)(param_1 + 0x688) - *plVar7 >> 1 != 0) {
            if (param_5 == '\0') {
              local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x688) - *plVar7 >> 1);
            }
            else {
              FUN_1402dda70(local_res10,plVar7,param_1 + 0x698);
            }
            lVar5 = (longlong)(int)local_res10[0];
            *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
            lVar4 = *(longlong *)(param_1 + 0x698);
            goto LAB_14055cadb;
          }
LAB_14055d664:
          *param_3 = 0;
        }
        uVar3 = FUN_1408dd360(&DAT_141d6dbe0,0xffffffff,0xb,0x10,0xffffffff);
LAB_14055da7c:
        *param_4 = uVar3;
        return;
      }
      plVar7 = (longlong *)(param_1 + 0x488);
      if (*(longlong *)(param_1 + 0x490) - *plVar7 >> 1 != 0) {
        if (param_5 == '\0') {
          iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x490) - *plVar7 >> 1);
          lVar5 = (longlong)iVar2;
          lVar4 = *plVar7;
        }
        else {
          FUN_1402dda70(local_res10,plVar7,param_1 + 0x4a0);
          lVar5 = (longlong)(int)local_res10[0];
          lVar4 = *plVar7;
        }
        goto LAB_14055cacd;
      }
      uVar9 = DAT_141d77b90 - DAT_141d77b88 >> 1;
      if (uVar9 == 0) goto LAB_14055d664;
      iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
      lVar5 = (longlong)iVar2;
      *param_3 = *(undefined2 *)(DAT_141d77b88 + lVar5 * 2);
      lVar4 = DAT_141d77f30;
    }
    else {
      plVar7 = (longlong *)(param_1 + 0x3f8);
      if (*(longlong *)(param_1 + 0x400) - *plVar7 >> 1 == 0) {
        uVar9 = DAT_141d77b78 - DAT_141d77b70 >> 1;
        if (uVar9 != 0) {
LAB_14055c73d:
          iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
          *param_3 = *(undefined2 *)(DAT_141d77b70 + (longlong)iVar2 * 2);
          *param_4 = *(uint *)(DAT_141d77f18 + (longlong)iVar2 * 4);
          return;
        }
        puVar13 = (uint *)0x0;
        uVar3 = 0;
        *param_3 = 0;
        if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 != 0) {
          local_50 = (uint *)0x0;
          puStack_48 = (uint *)0x0;
          local_40 = (uint *)0x0;
          local_res10[0] = 0;
          local_68 = (uint *)0x0;
          puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >>
                            3);
          if (DAT_141d6dbe8 < DAT_141d6dbe0) {
            puVar12 = puVar13;
          }
          puVar10 = (uint *)0x0;
          puVar8 = (uint *)0x0;
          plVar7 = DAT_141d6dbe0;
          puVar15 = puVar13;
          if (puVar12 != (uint *)0x0) {
            do {
              lVar4 = *plVar7;
              if (((1 < *(int *)(lVar4 + 0x440)) &&
                  ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
                 ((*(int *)(lVar4 + 0x40) < 3 ||
                  ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)))) {
                if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
                  lVar4 = (longlong)local_res10 - (longlong)puVar8;
                  if (puVar10 == puVar15) {
                    FUN_14000c390(&local_50,1);
                    puVar8 = local_50;
                    puVar10 = puStack_48;
                    puVar15 = local_40;
                  }
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = puVar8[lVar4 >> 2];
                  }
                }
                else {
                  if (puVar10 == puVar15) {
                    FUN_14000c390(&local_50,1);
                    puVar8 = local_50;
                    puVar10 = puStack_48;
                    puVar15 = local_40;
                  }
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = (uint)puVar13;
                  }
                }
                puVar10 = puVar10 + 1;
                puStack_48 = puVar10;
              }
              local_res10[0] = (uint)puVar13 + 1;
              puVar13 = (uint *)(ulonglong)local_res10[0];
              plVar7 = plVar7 + 1;
              local_68 = (uint *)((longlong)local_68 + 1);
            } while (local_68 < puVar12);
          }
          param_4 = local_res20;
          uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
          if (uVar9 != 0) {
            if (1 < (uint)uVar9) {
              uVar3 = FUN_1409fc0c0();
              uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
            }
            uVar3 = puVar8[(int)uVar3];
            goto LAB_14055d57e;
          }
          goto LAB_14055d59d;
        }
        goto LAB_14055d5ba;
      }
      if (param_5 == '\0') {
        local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x400) - *plVar7 >> 1);
      }
      else {
        FUN_1402dda70(local_res10,plVar7,param_1 + 0x410);
      }
      lVar5 = (longlong)(int)local_res10[0];
      *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
      lVar4 = *(longlong *)(param_1 + 0x410);
    }
  }
  else {
    if ((*(byte *)*plVar7 & 0x20) != 0) {
      if (((*(longlong *)(param_1 + 0x490) - *(longlong *)(param_1 + 0x488) >> 1 == 0) &&
          (*(longlong *)(param_1 + 0x4c0) - *(longlong *)(param_1 + 0x4b8) >> 1 == 0)) &&
         (*(longlong *)(param_1 + 0x460) - *(longlong *)(param_1 + 0x458) >> 1 == 0)) {
        uVar9 = DAT_141d77b78 - DAT_141d77b70 >> 1;
        if (uVar9 != 0) goto LAB_14055c73d;
        puVar13 = (uint *)0x0;
        uVar3 = 0;
        *param_3 = 0;
        if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 != 0) {
          local_50 = (uint *)0x0;
          puStack_48 = (uint *)0x0;
          local_40 = (uint *)0x0;
          local_res10[0] = 0;
          local_68 = (uint *)0x0;
          puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >>
                            3);
          if (DAT_141d6dbe8 < DAT_141d6dbe0) {
            puVar12 = puVar13;
          }
          puVar10 = (uint *)0x0;
          puVar8 = (uint *)0x0;
          plVar7 = DAT_141d6dbe0;
          puVar15 = puVar13;
          if (puVar12 != (uint *)0x0) {
            do {
              lVar4 = *plVar7;
              if (((1 < *(int *)(lVar4 + 0x440)) &&
                  ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
                 ((*(int *)(lVar4 + 0x40) < 3 ||
                  ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)))) {
                if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
                  lVar4 = (longlong)local_res10 - (longlong)puVar8;
                  if (puVar10 == puVar15) {
                    FUN_14000c390(&local_50,1);
                    puVar8 = local_50;
                    puVar10 = puStack_48;
                    puVar15 = local_40;
                  }
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = puVar8[lVar4 >> 2];
                  }
                }
                else {
                  if (puVar10 == puVar15) {
                    FUN_14000c390(&local_50,1);
                    puVar8 = local_50;
                    puVar10 = puStack_48;
                    puVar15 = local_40;
                  }
                  if (puVar10 != (uint *)0x0) {
                    *puVar10 = (uint)puVar13;
                  }
                }
                puVar10 = puVar10 + 1;
                puStack_48 = puVar10;
              }
              local_res10[0] = (uint)puVar13 + 1;
              puVar13 = (uint *)(ulonglong)local_res10[0];
              local_68 = (uint *)((longlong)local_68 + 1);
              plVar7 = plVar7 + 1;
            } while (local_68 < puVar12);
          }
          param_4 = local_res20;
          uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
          if (uVar9 == 0) goto LAB_14055d59d;
          if (1 < (uint)uVar9) {
            uVar3 = FUN_1409fc0c0();
            uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff)
                    / ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
          }
          uVar3 = puVar8[(int)uVar3];
          goto LAB_14055d57e;
        }
        goto LAB_14055d5ba;
      }
      do {
        while( true ) {
          uVar3 = FUN_1409fc0c0();
          uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  0x2aaaaaab;
          if (uVar3 == 0) break;
          if (uVar3 == 1) {
            if (*(longlong *)(param_1 + 0x460) - *(longlong *)(param_1 + 0x458) >> 1 != 0) {
              if (param_5 == '\0') {
                iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x460) -
                                      *(longlong *)(param_1 + 0x458) >> 1);
                *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x458) + (longlong)iVar2 * 2);
                *param_4 = *(uint *)(*(longlong *)(param_1 + 0x470) + (longlong)iVar2 * 4);
                return;
              }
              FUN_1402dda70(local_res10,param_1 + 0x458,param_1 + 0x470);
              lVar5 = (longlong)(int)local_res10[0];
              *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x458) + lVar5 * 2);
              lVar4 = *(longlong *)(param_1 + 0x470);
              goto LAB_14055c9ed;
            }
          }
          else if ((uVar3 == 2) &&
                  (*(longlong *)(param_1 + 0x4c0) - *(longlong *)(param_1 + 0x4b8) >> 1 != 0)) {
            if (param_5 == '\0') {
              local_res10[0] =
                   FUN_14000d7e0(*(longlong *)(param_1 + 0x4c0) - *(longlong *)(param_1 + 0x4b8) >>
                                 1);
            }
            else {
              FUN_1402dda70(local_res10,param_1 + 0x4b8,param_1 + 0x4d0);
            }
            lVar5 = (longlong)(int)local_res10[0];
            *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x4b8) + lVar5 * 2);
            lVar4 = *(longlong *)(param_1 + 0x4d0);
            goto LAB_14055c9ed;
          }
        }
      } while (*(longlong *)(param_1 + 0x490) - *(longlong *)(param_1 + 0x488) >> 1 == 0);
      if (param_5 != '\0') {
        FUN_1402dda70(local_res10,param_1 + 0x3f8,param_1 + 0x410);
        *param_3 = *(undefined2 *)
                    (*(longlong *)(param_1 + 0x3f8) + (longlong)(int)local_res10[0] * 2);
        *param_4 = *(uint *)(*(longlong *)(param_1 + 0x410) + (longlong)(int)local_res10[0] * 4);
        return;
      }
      iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x490) - *(longlong *)(param_1 + 0x488) >> 1);
      lVar5 = (longlong)iVar2;
      lVar4 = *(longlong *)(param_1 + 0x488);
LAB_14055cacd:
      *param_3 = *(undefined2 *)(lVar4 + lVar5 * 2);
      lVar4 = *(longlong *)(param_1 + 0x4a0);
      goto LAB_14055cadb;
    }
    if (*(int *)(param_2 + 0xa8) < 1) goto LAB_14055d358;
    if ((*(byte *)*plVar7 & 8) != 0) {
      if (*(longlong *)(param_1 + 0x2e0) - *(longlong *)(param_1 + 0x2d8) >> 1 != 0) {
LAB_14055cb11:
        plVar7 = (longlong *)(param_1 + 0x2d8);
        if (param_5 == '\0') {
          local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x2e0) - *plVar7 >> 1);
        }
        else {
          FUN_1402dda70(local_res10,plVar7,param_1 + 0x2f0);
        }
        lVar5 = (longlong)(int)local_res10[0];
        *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
        lVar4 = *(longlong *)(param_1 + 0x2f0);
        goto LAB_14055c9ed;
      }
      puVar13 = (uint *)0x0;
      uVar3 = 0;
      *param_3 = 0;
      if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 == 0) goto LAB_14055d5ba;
      local_50 = (uint *)0x0;
      puStack_48 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_res10[0] = 0;
      local_68 = (uint *)0x0;
      puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3);
      if (DAT_141d6dbe8 < DAT_141d6dbe0) {
        puVar12 = puVar13;
      }
      puVar10 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      plVar7 = DAT_141d6dbe0;
      puVar15 = puVar13;
      if (puVar12 != (uint *)0x0) {
        do {
          lVar4 = *plVar7;
          if (((1 < *(int *)(lVar4 + 0x440)) &&
              ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
             ((*(int *)(lVar4 + 0x40) < 3 || ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)
              ))) {
            if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
              lVar4 = (longlong)local_res10 - (longlong)puVar8;
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = puVar8[lVar4 >> 2];
              }
            }
            else {
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)puVar13;
              }
            }
            puVar10 = puVar10 + 1;
            puStack_48 = puVar10;
          }
          local_res10[0] = (uint)puVar13 + 1;
          puVar13 = (uint *)(ulonglong)local_res10[0];
          local_68 = (uint *)((longlong)local_68 + 1);
          plVar7 = plVar7 + 1;
        } while (local_68 < puVar12);
      }
      param_4 = local_res20;
      uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
      if (uVar9 == 0) goto LAB_14055d59d;
      if (1 < (uint)uVar9) {
        uVar3 = FUN_1409fc0c0();
        uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
      }
      uVar3 = puVar8[(int)uVar3];
LAB_14055d57e:
      if (puVar8 != (uint *)0x0) {
        FUN_140002020(puVar8,(longlong)puVar15 - (longlong)puVar8 >> 2,4);
      }
      goto LAB_14055d5bd;
    }
    if (*(int *)(param_2 + 0xa8) < 1) goto LAB_14055d358;
    if ((*(byte *)*plVar7 & 2) != 0) {
      if (*(longlong *)(param_1 + 0x2e0) - *(longlong *)(param_1 + 0x2d8) >> 1 != 0)
      goto LAB_14055cb11;
      puVar13 = (uint *)0x0;
      uVar3 = 0;
      *param_3 = 0;
      if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 == 0) goto LAB_14055d5ba;
      local_50 = (uint *)0x0;
      puStack_48 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_res10[0] = 0;
      local_68 = (uint *)0x0;
      puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3);
      if (DAT_141d6dbe8 < DAT_141d6dbe0) {
        puVar12 = puVar13;
      }
      puVar10 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      plVar7 = DAT_141d6dbe0;
      puVar15 = puVar13;
      if (puVar12 != (uint *)0x0) {
        do {
          lVar4 = *plVar7;
          if (((1 < *(int *)(lVar4 + 0x440)) &&
              ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
             ((*(int *)(lVar4 + 0x40) < 3 || ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)
              ))) {
            if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
              lVar4 = (longlong)local_res10 - (longlong)puVar8;
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = puVar8[lVar4 >> 2];
              }
            }
            else {
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)puVar13;
              }
            }
            puVar10 = puVar10 + 1;
            puStack_48 = puVar10;
          }
          local_res10[0] = (uint)puVar13 + 1;
          puVar13 = (uint *)(ulonglong)local_res10[0];
          local_68 = (uint *)((longlong)local_68 + 1);
          plVar7 = plVar7 + 1;
        } while (local_68 < puVar12);
      }
      param_4 = local_res20;
      uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
      if (uVar9 == 0) goto LAB_14055d59d;
      if (1 < (uint)uVar9) {
        uVar3 = FUN_1409fc0c0();
        uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
      }
      uVar3 = puVar8[(int)uVar3];
      goto LAB_14055d57e;
    }
    if (*(int *)(param_2 + 0xa8) < 1) goto LAB_14055d358;
    if ((*(byte *)*plVar7 & 1) != 0) {
      plVar7 = (longlong *)(param_1 + 0x530);
      lVar4 = *(longlong *)(param_1 + 0x538);
      lVar5 = *plVar7;
      puVar13 = (uint *)0x0;
      uVar3 = 0;
      *param_3 = 0;
      if (lVar4 - lVar5 >> 2 != 0) {
        if (param_5 == '\0') {
          iVar2 = FUN_14000d7e0(*(longlong *)(param_1 + 0x538) - *plVar7 >> 2);
          uVar3 = *(uint *)(*plVar7 + (longlong)iVar2 * 4);
        }
        else {
          FUN_1402ddc50(local_res10,0,plVar7);
          uVar3 = *(uint *)(*plVar7 + (longlong)(int)local_res10[0] * 4);
        }
        goto LAB_14055c9f0;
      }
      if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 == 0) goto LAB_14055d5ba;
      local_50 = (uint *)0x0;
      puStack_48 = (uint *)0x0;
      local_40 = (uint *)0x0;
      local_res10[0] = 0;
      local_68 = (uint *)0x0;
      puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3);
      if (DAT_141d6dbe8 < DAT_141d6dbe0) {
        puVar12 = puVar13;
      }
      puVar10 = (uint *)0x0;
      puVar8 = (uint *)0x0;
      plVar7 = DAT_141d6dbe0;
      puVar15 = puVar13;
      if (puVar12 != (uint *)0x0) {
        do {
          lVar4 = *plVar7;
          if (((1 < *(int *)(lVar4 + 0x440)) &&
              ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
             ((*(int *)(lVar4 + 0x40) < 3 || ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)
              ))) {
            if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
              lVar4 = (longlong)local_res10 - (longlong)puVar8;
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = puVar8[lVar4 >> 2];
              }
            }
            else {
              if (puVar10 == puVar15) {
                FUN_14000c390(&local_50,1);
                puVar8 = local_50;
                puVar10 = puStack_48;
                puVar15 = local_40;
              }
              if (puVar10 != (uint *)0x0) {
                *puVar10 = (uint)puVar13;
              }
            }
            puVar10 = puVar10 + 1;
            puStack_48 = puVar10;
          }
          local_res10[0] = (uint)puVar13 + 1;
          puVar13 = (uint *)(ulonglong)local_res10[0];
          local_68 = (uint *)((longlong)local_68 + 1);
          plVar7 = plVar7 + 1;
        } while (local_68 < puVar12);
      }
      param_4 = local_res20;
      uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
      if (uVar9 == 0) goto LAB_14055d59d;
      if (1 < (uint)uVar9) {
        uVar3 = FUN_1409fc0c0();
        uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
      }
      uVar3 = puVar8[(int)uVar3];
      goto LAB_14055d57e;
    }
    if ((*(int *)(param_2 + 0xa8) < 1) || ((*(byte *)*plVar7 & 0x40) == 0)) goto LAB_14055d358;
    plVar7 = (longlong *)(param_1 + 0x4e8);
    if (*(longlong *)(param_1 + 0x4f0) - *plVar7 >> 1 == 0) {
      uVar9 = DAT_141d77bf0 - DAT_141d77be8 >> 1;
      if (uVar9 == 0) {
        puVar13 = (uint *)0x0;
        uVar3 = 0;
        *param_3 = 0;
        if ((longlong)DAT_141d6dbe8 - (longlong)DAT_141d6dbe0 >> 3 == 0) goto LAB_14055d5ba;
        local_50 = (uint *)0x0;
        puStack_48 = (uint *)0x0;
        local_40 = (uint *)0x0;
        local_res10[0] = 0;
        local_68 = (uint *)0x0;
        puVar12 = (uint *)((ulonglong)((longlong)DAT_141d6dbe8 + (7 - (longlong)DAT_141d6dbe0)) >> 3
                          );
        if (DAT_141d6dbe8 < DAT_141d6dbe0) {
          puVar12 = puVar13;
        }
        puVar10 = (uint *)0x0;
        puVar8 = (uint *)0x0;
        plVar7 = DAT_141d6dbe0;
        puVar15 = puVar13;
        if (puVar12 != (uint *)0x0) {
          do {
            lVar4 = *plVar7;
            if (((1 < *(int *)(lVar4 + 0x440)) &&
                ((*(byte *)(*(longlong *)(lVar4 + 0x438) + 1) & 8) != 0)) &&
               ((*(int *)(lVar4 + 0x40) < 3 ||
                ((*(byte *)(*(longlong *)(lVar4 + 0x38) + 2) & 1) == 0)))) {
              if ((local_res10 < puVar10) && (puVar8 <= local_res10)) {
                lVar4 = (longlong)local_res10 - (longlong)puVar8;
                if (puVar10 == puVar15) {
                  FUN_14000c390(&local_50,1);
                  puVar8 = local_50;
                  puVar10 = puStack_48;
                  puVar15 = local_40;
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = puVar8[lVar4 >> 2];
                }
              }
              else {
                if (puVar10 == puVar15) {
                  FUN_14000c390(&local_50,1);
                  puVar8 = local_50;
                  puVar10 = puStack_48;
                  puVar15 = local_40;
                }
                if (puVar10 != (uint *)0x0) {
                  *puVar10 = (uint)puVar13;
                }
              }
              puVar10 = puVar10 + 1;
              puStack_48 = puVar10;
            }
            local_res10[0] = (uint)puVar13 + 1;
            puVar13 = (uint *)(ulonglong)local_res10[0];
            plVar7 = plVar7 + 1;
            local_68 = (uint *)((longlong)local_68 + 1);
          } while (local_68 < puVar12);
        }
        param_4 = local_res20;
        uVar9 = (longlong)puVar10 - (longlong)puVar8 >> 2;
        if (uVar9 == 0) goto LAB_14055d59d;
        if (1 < (uint)uVar9) {
          uVar3 = FUN_1409fc0c0();
          uVar3 = (uVar3 + (int)((longlong)((ulonglong)uVar3 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                  ((int)(0x7fffffff / (uVar9 & 0xffffffff)) + 1U);
        }
        uVar3 = puVar8[(int)uVar3];
        goto LAB_14055d57e;
      }
      iVar2 = FUN_14000d7e0(uVar9 & 0xffffffff);
      lVar5 = (longlong)iVar2;
      *param_3 = *(undefined2 *)(DAT_141d77be8 + lVar5 * 2);
      lVar4 = DAT_141d77f90;
    }
    else {
      if (param_5 == '\0') {
        local_res10[0] = FUN_14000d7e0(*(longlong *)(param_1 + 0x4f0) - *plVar7 >> 1);
      }
      else {
        FUN_1402dda70(local_res10,plVar7,param_1 + 0x500);
      }
      lVar5 = (longlong)(int)local_res10[0];
      *param_3 = *(undefined2 *)(*plVar7 + lVar5 * 2);
      lVar4 = *(longlong *)(param_1 + 0x500);
    }
  }
LAB_14055c9ed:
  uVar3 = *(uint *)(lVar4 + lVar5 * 4);
LAB_14055c9f0:
  *param_4 = uVar3;
  return;
}

