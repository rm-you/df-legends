// FUN_14098a340 @ 14098a340
// callees:
//   -> 140071310 FUN_140071310
//   -> 14055c3d0 FUN_14055c3d0
//   -> 1402dda70 FUN_1402dda70
//   -> 14000d7e0 FUN_14000d7e0
//   -> 1402ddc50 FUN_1402ddc50
//   -> 140d89d60 FUN_140d89d60
//   -> 14000c110 FUN_14000c110
//   -> 1408dd6a0 FUN_1408dd6a0
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c2d0 FUN_14000c2d0


void FUN_14098a340(longlong param_1,longlong param_2,char param_3)

{
  short *psVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int local_res10 [2];
  char local_res18;
  undefined4 local_res20 [2];
  undefined8 *local_48 [2];
  
  lVar3 = *(longlong *)(param_2 + 0xe0);
  if (lVar3 == 0) {
    return;
  }
  psVar1 = (short *)(param_2 + 0xb0);
  local_res18 = param_3;
  if (*psVar1 == -1) {
    if (*(longlong *)(lVar3 + 200) - *(longlong *)(lVar3 + 0xc0) >> 3 == 0) {
      if (0 < *(int *)(lVar3 + 0xa8)) {
        if (((**(byte **)(lVar3 + 0xa0) & 4) != 0) &&
           (plVar12 = (longlong *)(param_1 + 0x2d8),
           *(longlong *)(param_1 + 0x2e0) - *plVar12 >> 1 != 0)) {
          if (param_3 == '\0') {
            iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x2e0) - *plVar12 >> 1);
          }
          else {
            FUN_1402dda70(local_res10,plVar12,param_1 + 0x2f0);
            iVar7 = local_res10[0];
          }
          *psVar1 = *(short *)(*plVar12 + (longlong)iVar7 * 2);
          *(undefined4 *)(param_2 + 0xb4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + (longlong)iVar7 * 4);
          goto LAB_14098a845;
        }
        if ((0 < *(int *)(lVar3 + 0xa8)) &&
           (((**(byte **)(lVar3 + 0xa0) & 8) != 0 &&
            (plVar12 = (longlong *)(param_1 + 0x530),
            *(longlong *)(param_1 + 0x538) - *plVar12 >> 2 != 0)))) {
          *psVar1 = 0;
          if (param_3 == '\0') {
            iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x538) - *plVar12 >> 2);
            *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(*plVar12 + (longlong)iVar7 * 4);
          }
          else {
            FUN_1402ddc50(local_res10,0,plVar12);
            *(undefined4 *)(param_2 + 0xb4) =
                 *(undefined4 *)(*plVar12 + (longlong)local_res10[0] * 4);
          }
          goto LAB_14098a845;
        }
      }
      uVar13 = 0;
      if (0 < *(int *)(lVar3 + 0xa8)) {
        if (((**(byte **)(lVar3 + 0xa0) & 0x10) != 0) &&
           (plVar12 = (longlong *)(param_1 + 0x4e8),
           *(longlong *)(param_1 + 0x4f0) - *plVar12 >> 1 != 0)) {
          if (param_3 == '\0') {
            iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x4f0) - *plVar12 >> 1);
          }
          else {
            FUN_1402dda70(local_res10,plVar12,param_1 + 0x500);
            iVar7 = local_res10[0];
          }
          *psVar1 = *(short *)(*plVar12 + (longlong)iVar7 * 2);
          *(undefined4 *)(param_2 + 0xb4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x500) + (longlong)iVar7 * 4);
          goto LAB_14098a845;
        }
        if (0 < *(int *)(lVar3 + 0xa8)) {
          if (((**(byte **)(lVar3 + 0xa0) & 0x20) != 0) &&
             (plVar12 = (longlong *)(param_1 + 0x680),
             *(longlong *)(param_1 + 0x688) - *plVar12 >> 1 != 0)) {
            if (param_3 == '\0') {
              iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x688) - *plVar12 >> 1);
            }
            else {
              FUN_1402dda70(local_res10,plVar12,param_1 + 0x698);
              iVar7 = local_res10[0];
            }
            *psVar1 = *(short *)(*plVar12 + (longlong)iVar7 * 2);
            *(undefined4 *)(param_2 + 0xb4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x698) + (longlong)iVar7 * 4);
            goto LAB_14098a845;
          }
          if ((0 < *(int *)(lVar3 + 0xa8)) &&
             (((**(byte **)(lVar3 + 0xa0) & 0x80) != 0 &&
              (plVar12 = (longlong *)(param_1 + 0x590),
              *(longlong *)(param_1 + 0x598) - *plVar12 >> 1 != 0)))) {
            if (param_3 == '\0') {
              iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x598) - *plVar12 >> 1);
            }
            else {
              FUN_1402dda70(local_res10,plVar12,param_1 + 0x5a8);
              iVar7 = local_res10[0];
            }
            *psVar1 = *(short *)(*plVar12 + (longlong)iVar7 * 2);
            *(undefined4 *)(param_2 + 0xb4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x5a8) + (longlong)iVar7 * 4);
            goto LAB_14098a845;
          }
        }
      }
      if ((*(int *)(lVar3 + 0xa8) < 2) ||
         (((*(byte *)(*(longlong *)(lVar3 + 0xa0) + 1) & 1) == 0 ||
          (plVar12 = (longlong *)(param_1 + 0x560),
          *(longlong *)(param_1 + 0x568) - *plVar12 >> 1 == 0)))) {
        if ((*(int *)(lVar3 + 0xa8) < 1) ||
           (((**(byte **)(lVar3 + 0xa0) & 0x40) == 0 ||
            (*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 1 == 0)))) {
          *psVar1 = 0;
          uVar9 = FUN_1408dd6a0(&DAT_141d6dbe0,param_2,0xb);
          *(undefined4 *)(param_2 + 0xb4) = uVar9;
        }
        else {
          iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x6e8) - *(longlong *)(param_1 + 0x6e0) >> 1
                               );
          uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x6f8) + (longlong)iVar7 * 4);
          *psVar1 = *(short *)(*(longlong *)(param_1 + 0x6e0) + (longlong)iVar7 * 2);
          *(undefined4 *)(param_2 + 0xb4) = uVar9;
          lVar10 = FUN_140d89d60(&DAT_141c53470);
          param_3 = local_res18;
          if ((lVar10 != 0) &&
             (iVar7 = (int)(*(longlong *)(lVar10 + 0x350) - *(longlong *)(lVar10 + 0x348) >> 3),
             0 < iVar7)) {
            puVar17 = *(undefined8 **)(lVar10 + 0x348);
            uVar16 = uVar13;
            do {
              iVar8 = FUN_14000c110(*puVar17,"FIRED_MAT");
              iVar15 = (int)uVar16;
              param_3 = local_res18;
              if (iVar8 == 0) {
                *(undefined2 *)(param_2 + 0xb0) =
                     *(undefined2 *)(*(longlong *)(lVar10 + 0x390) + (longlong)iVar15 * 2);
                *(undefined4 *)(param_2 + 0xb4) =
                     *(undefined4 *)(*(longlong *)(lVar10 + 0x3a8) + (longlong)iVar15 * 4);
                break;
              }
              uVar16 = (ulonglong)(iVar15 + 1);
              uVar13 = uVar13 + 1;
              puVar17 = puVar17 + 1;
            } while ((longlong)uVar13 < (longlong)iVar7);
          }
        }
      }
      else {
        if (param_3 == '\0') {
          iVar7 = FUN_14000d7e0(*(longlong *)(param_1 + 0x568) - *plVar12 >> 1);
        }
        else {
          FUN_1402dda70(local_res10,plVar12,param_1 + 0x578);
          iVar7 = local_res10[0];
        }
        *psVar1 = *(short *)(*plVar12 + (longlong)iVar7 * 2);
        *(undefined4 *)(param_2 + 0xb4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x578) + (longlong)iVar7 * 4);
      }
    }
    else {
      plVar4 = *(longlong **)(lVar3 + 200);
      for (plVar12 = *(longlong **)(lVar3 + 0xc0); plVar12 < plVar4; plVar12 = plVar12 + 1) {
        iVar7 = FUN_140071310(*plVar12,lVar3 + 0xd8);
        if (iVar7 == 0) {
          iVar7 = *(int *)(*plVar12 + 0x40);
          if ((-1 < iVar7) &&
             ((ulonglong)(longlong)iVar7 < (ulonglong)(DAT_141d6de20 - DAT_141d6de18 >> 3))) {
            FUN_14055c3d0(param_1,*(undefined8 *)(DAT_141d6de18 + (longlong)iVar7 * 8),psVar1,
                          param_2 + 0xb4,param_3);
          }
          break;
        }
      }
    }
  }
LAB_14098a845:
  if (*(longlong *)(lVar3 + 200) - *(longlong *)(lVar3 + 0xc0) >> 3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 200);
    for (plVar12 = *(longlong **)(lVar3 + 0xc0); plVar12 < plVar4; plVar12 = plVar12 + 1) {
      iVar7 = *(int *)(*plVar12 + 0x40);
      if ((-1 < iVar7) &&
         ((ulonglong)(longlong)iVar7 < (ulonglong)(DAT_141d6de20 - DAT_141d6de18 >> 3))) {
        iVar8 = FUN_140071310();
        if (iVar8 == 0) {
          local_res20[0] = *(undefined4 *)(param_2 + 0xb4);
          local_res10[0] = CONCAT22(local_res10[0]._2_2_,*(undefined2 *)(param_2 + 0xb0));
          uVar14 = *(undefined2 *)(param_2 + 0xb0);
        }
        else {
          FUN_14055c3d0(param_1,*(undefined8 *)(DAT_141d6de18 + (longlong)iVar7 * 8),local_res10,
                        local_res20,param_3);
          uVar14 = (undefined2)local_res10[0];
        }
        uVar9 = local_res20[0];
        puVar11 = operator_new(0x48);
        *puVar11 = itemimprovement_instrument_piecest::vftable;
        puVar17 = puVar11 + 5;
        *(undefined2 *)(puVar11 + 1) = 0xffff;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0xffffffff;
        *(undefined4 *)(puVar11 + 2) = 0xffffffff;
        *(undefined4 *)((longlong)puVar11 + 0x14) = 0xffffffff;
        *(undefined2 *)(puVar11 + 3) = 0;
        *(undefined8 *)((longlong)puVar11 + 0x1c) = 0;
        puVar11[8] = 0xf;
        puVar11[7] = 0;
        *(undefined1 *)puVar17 = 0;
        if (puVar17 != (undefined8 *)*plVar12) {
          local_48[0] = puVar11;
          FUN_14000c8b0(puVar17,(undefined8 *)*plVar12,0,0xffffffffffffffff);
        }
        *(undefined2 *)(puVar11 + 1) = uVar14;
        puVar2 = (ulonglong *)(param_2 + 200);
        *(undefined4 *)((longlong)puVar11 + 0xc) = uVar9;
        ppuVar5 = *(undefined8 ***)(param_2 + 0xd0);
        if ((local_48 < ppuVar5) && (ppuVar6 = (undefined8 **)*puVar2, ppuVar6 <= local_48)) {
          local_48[0] = puVar11;
          if (ppuVar5 == *(undefined8 ***)(param_2 + 0xd8)) {
            FUN_14000c2d0(puVar2,1);
          }
          if (*(undefined8 **)(param_2 + 0xd0) != (undefined8 *)0x0) {
            **(undefined8 **)(param_2 + 0xd0) =
                 *(undefined8 *)(*puVar2 + ((longlong)local_48 - (longlong)ppuVar6 >> 3) * 8);
          }
        }
        else {
          local_48[0] = puVar11;
          if (ppuVar5 == *(undefined8 ***)(param_2 + 0xd8)) {
            FUN_14000c2d0(puVar2,1);
          }
          if (*(undefined8 **)(param_2 + 0xd0) != (undefined8 *)0x0) {
            **(undefined8 **)(param_2 + 0xd0) = puVar11;
          }
        }
        *(longlong *)(param_2 + 0xd0) = *(longlong *)(param_2 + 0xd0) + 8;
      }
      param_3 = local_res18;
    }
  }
  return;
}

