// FUN_14028e0e0 @ 14028e0e0
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c460 FUN_14000c460
//   -> 140dfb5c4 operator_new
//   -> 140284710 FUN_140284710
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1402803e0 FUN_1402803e0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020


undefined8 FUN_14028e0e0(ulonglong *param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  short sVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  short sVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  longlong *plVar19;
  int local_res18 [2];
  int local_res20;
  longlong local_a8;
  int *local_a0;
  int *piStack_98;
  int *local_90;
  int *local_88;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  void *local_48;
  
  lVar12 = DAT_141d6dce8;
  local_50 = 0xfffffffffffffffe;
  iVar13 = (int)(DAT_141d6dcf0 - DAT_141d6dce8 >> 3) + -1;
  if (-1 < iVar13) {
    lVar11 = (longlong)iVar13;
    do {
      iVar6 = FUN_140071310(*(undefined8 *)(lVar12 + lVar11 * 8),param_2);
      if (iVar6 == 0) {
        lVar12 = *(longlong *)(lVar12 + (longlong)iVar13 * 8);
        if (lVar12 == 0) {
          return 0;
        }
        local_a0 = (int *)0x0;
        piStack_98 = (int *)0x0;
        local_88 = (int *)0x0;
        local_90 = (int *)0x0;
        local_res20 = 0;
        local_58 = lVar12;
        if (*(longlong *)(lVar12 + 0x28) - *(longlong *)(lVar12 + 0x20) >> 3 == 0)
        goto LAB_14028ef1d;
        local_a8 = 0;
        piVar14 = (int *)0x0;
        goto LAB_14028e1b0;
      }
      iVar13 = iVar13 + -1;
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  return 0;
LAB_14028e1b0:
  piVar18 = local_88;
  iVar13 = 0;
  lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
  piVar16 = piVar14;
  piStack_98 = piVar14;
  piVar5 = local_88;
  if (((*(longlong *)(lVar11 + 0x30) != 0) &&
      (iVar6 = FUN_140071310(lVar11,lVar11 + 0x20), piVar5 = local_88, iVar6 != 0)) &&
     ((longlong)(param_1[1] - *param_1) >> 3 != 0)) {
    uVar15 = 0;
    do {
      iVar6 = FUN_140071310(*(undefined8 *)(*param_1 + uVar15 * 8),
                            *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x20);
      if (iVar6 == 0) {
        local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)iVar13);
        if ((local_res18 < piVar14) && (piVar16 <= local_res18)) {
          lVar11 = (longlong)local_res18 - (longlong)piVar16;
          if (piVar14 == piVar18) {
            FUN_14000c460(&local_a0,1);
            piVar14 = piStack_98;
            piVar16 = local_a0;
            piVar18 = local_90;
          }
          if (piVar14 != (int *)0x0) {
            *(undefined2 *)piVar14 = *(undefined2 *)((longlong)piVar16 + (lVar11 >> 1) * 2);
          }
        }
        else {
          if (piVar14 == piVar18) {
            FUN_14000c460(&local_a0,1);
            piVar14 = piStack_98;
            piVar16 = local_a0;
            piVar18 = local_90;
          }
          if (piVar14 != (int *)0x0) {
            *(short *)piVar14 = (short)iVar13;
          }
        }
        piVar14 = (int *)((longlong)piVar14 + 2);
        piStack_98 = piVar14;
      }
      iVar13 = iVar13 + 1;
      uVar15 = (ulonglong)iVar13;
      piVar5 = piVar18;
    } while (uVar15 < (ulonglong)((longlong)(param_1[1] - *param_1) >> 3));
  }
  local_88 = piVar5;
  piVar5 = local_88;
  if ((longlong)piVar14 - (longlong)piVar16 >> 1 == 0) {
    plVar2 = (longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
    lVar11 = *plVar2;
    if (*(longlong *)(lVar11 + 0x70) != 0) {
      iVar13 = FUN_140071310(lVar11 + 0x60,*plVar2 + 0x40);
      uVar15 = 0;
      piVar5 = local_88;
      if ((iVar13 != 0) && (uVar8 = uVar15, (longlong)(param_1[1] - *param_1) >> 3 != 0)) {
        do {
          iVar13 = FUN_140071310(*(longlong *)(*param_1 + uVar15 * 8) + 0x20,
                                 *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x60);
          if (iVar13 == 0) {
            local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)uVar8);
            if ((local_res18 < piVar14) && (piVar16 <= local_res18)) {
              lVar11 = (longlong)local_res18 - (longlong)piVar16;
              if (piVar14 == piVar18) {
                FUN_14000c460(&local_a0,1);
                piVar14 = piStack_98;
                piVar16 = local_a0;
                piVar18 = local_90;
              }
              if (piVar14 != (int *)0x0) {
                *(undefined2 *)piVar14 = *(undefined2 *)((longlong)piVar16 + (lVar11 >> 1) * 2);
              }
            }
            else {
              if (piVar14 == piVar18) {
                FUN_14000c460(&local_a0,1);
                piVar14 = piStack_98;
                piVar16 = local_a0;
                piVar18 = local_90;
              }
              if (piVar14 != (int *)0x0) {
                *(short *)piVar14 = (short)uVar8;
              }
            }
            piVar14 = (int *)((longlong)piVar14 + 2);
            piStack_98 = piVar14;
          }
          uVar17 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar17;
          uVar15 = (ulonglong)(int)uVar17;
          piVar5 = piVar18;
        } while (uVar15 < (ulonglong)((longlong)(param_1[1] - *param_1) >> 3));
      }
    }
  }
  local_88 = piVar5;
  uVar15 = 0;
  if (((longlong)piVar14 - (longlong)piVar16 >> 1 == 0) &&
     (sVar3 = *(short *)(*(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x80),
     sVar3 != -1)) {
    sVar10 = 1;
    if (sVar3 == 1) {
      sVar10 = 2;
    }
    else if (sVar3 == 2) {
      sVar10 = 0;
    }
    else if (sVar3 == 3) {
      sVar10 = 9;
    }
    else if (sVar3 == 4) {
      sVar10 = 10;
    }
    if ((longlong)(param_1[1] - *param_1) >> 3 != 0) {
      uVar8 = uVar15;
      do {
        lVar11 = *(longlong *)(*param_1 + uVar15 * 8);
        if ((((-1 < sVar10) && ((int)sVar10 >> 3 < *(int *)(lVar11 + 0x50))) &&
            ((*(byte *)((longlong)((int)sVar10 >> 3) + *(longlong *)(lVar11 + 0x48)) &
             (byte)(1 << ((byte)sVar10 & 7))) != 0)) &&
           (iVar13 = FUN_140071310(lVar11,*(undefined8 *)
                                           (*(longlong *)(lVar12 + 0x20) + local_a8 * 8)),
           iVar13 != 0)) {
          local_res18[0] = CONCAT22(local_res18[0]._2_2_,(short)uVar8);
          if ((local_res18 < piVar14) && (piVar16 <= local_res18)) {
            lVar11 = (longlong)local_res18 - (longlong)piVar16;
            if (piVar14 == local_88) {
              FUN_14000c460(&local_a0,1);
              local_88 = local_90;
              piVar14 = piStack_98;
              piVar16 = local_a0;
            }
            if (piVar14 != (int *)0x0) {
              *(undefined2 *)piVar14 = *(undefined2 *)((longlong)piVar16 + (lVar11 >> 1) * 2);
            }
          }
          else {
            if (piVar14 == local_88) {
              FUN_14000c460(&local_a0,1);
              local_88 = local_90;
              piVar14 = piStack_98;
              piVar16 = local_a0;
            }
            if (piVar14 != (int *)0x0) {
              *(short *)piVar14 = (short)uVar8;
            }
          }
          piVar14 = (int *)((longlong)piVar14 + 2);
          piStack_98 = piVar14;
        }
        uVar17 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar17;
        uVar15 = (ulonglong)(int)uVar17;
      } while (uVar15 < (ulonglong)((longlong)(param_1[1] - *param_1) >> 3));
    }
  }
  if ((longlong)piVar14 - (longlong)piVar16 >> 1 == 0) {
    lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
    if (((*(longlong *)(lVar11 + 0x30) == 0) && (*(longlong *)(lVar11 + 0x70) == 0)) &&
       (*(short *)(lVar11 + 0x80) == -1)) {
      local_res18[0] = CONCAT22(local_res18[0]._2_2_,0xffff);
      if ((local_res18 < piVar14) && (piVar16 <= local_res18)) {
        lVar11 = (longlong)local_res18 - (longlong)piVar16;
        if (piVar14 == local_88) {
          FUN_14000c460(&local_a0,1);
          local_88 = local_90;
          piVar14 = piStack_98;
          piVar16 = local_a0;
        }
        if (piVar14 != (int *)0x0) {
          *(undefined2 *)piVar14 = *(undefined2 *)((longlong)piVar16 + (lVar11 >> 1) * 2);
        }
      }
      else {
        if (piVar14 == local_88) {
          FUN_14000c460(&local_a0,1);
          local_88 = local_90;
          piVar14 = piStack_98;
          piVar16 = local_a0;
        }
        if (piVar14 != (int *)0x0) {
          *(undefined2 *)piVar14 = 0xffff;
        }
      }
      piVar14 = (int *)((longlong)piVar14 + 2);
      piStack_98 = piVar14;
      goto LAB_14028e66a;
    }
  }
  else {
LAB_14028e66a:
    local_res18[0] = 0;
    local_80 = 0;
    uVar15 = (longlong)piVar14 - (longlong)piVar16 >> 1;
    local_60 = uVar15;
    if (uVar15 != 0) {
      do {
        local_48 = operator_new(0xf0);
        lVar7 = FUN_140284710(local_48,0);
        lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        local_70 = lVar7;
        local_68 = lVar7;
        if (lVar7 != lVar11) {
          FUN_14000c8b0(lVar7,lVar11,0,0xffffffffffffffff);
        }
        lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x40;
        if (lVar7 + 0x20 != lVar11) {
          FUN_14000c8b0(lVar7 + 0x20,lVar11,0,0xffffffffffffffff);
        }
        plVar2 = (longlong *)(lVar7 + 0x90);
        FUN_1402803e0(plVar2,*(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0xa0);
        plVar19 = (longlong *)(lVar7 + 0xa8);
        FUN_1402803e0(plVar19);
        lVar11 = local_80;
        piVar14 = local_a0;
        *(undefined4 *)(lVar7 + 0x84) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x9c);
        if ((*(short *)((longlong)piVar16 + local_80 * 2) != -1) && (1 < uVar15)) {
          uVar8 = 0;
          uVar9 = uVar8;
          if (*(longlong *)(lVar7 + 0x98) - *plVar2 >> 3 != 0) {
            do {
              FUN_14000c9f0(*(undefined8 *)(*plVar2 + uVar8),&DAT_140e5a200);
              FUN_14000cb40(*(undefined8 *)(*plVar2 + uVar8),
                            **(undefined8 **)
                              (*(longlong *)
                                (*param_1 + (longlong)*(short *)((longlong)piVar14 + lVar11 * 2) * 8
                                ) + 0x90),0,0xffffffffffffffff);
              uVar17 = (int)uVar9 + 1;
              uVar8 = uVar8 + 8;
              uVar9 = (ulonglong)uVar17;
            } while ((ulonglong)(longlong)(int)uVar17 <
                     (ulonglong)(*(longlong *)(lVar7 + 0x98) - *plVar2 >> 3));
            plVar19 = (longlong *)(local_68 + 0xa8);
            lVar7 = local_68;
            lVar12 = local_58;
            uVar15 = local_60;
          }
          lVar11 = local_80;
          piVar14 = local_a0;
          uVar9 = 0;
          piVar16 = local_a0;
          uVar8 = uVar9;
          if (plVar19[1] - *plVar19 >> 3 != 0) {
            do {
              FUN_14000c9f0(*(undefined8 *)(uVar8 + *plVar19),&DAT_140e5a200);
              FUN_14000cb40(*(undefined8 *)(uVar8 + *plVar19),
                            **(undefined8 **)
                              (*(longlong *)
                                (*param_1 + (longlong)*(short *)((longlong)piVar14 + lVar11 * 2) * 8
                                ) + 0x90),0,0xffffffffffffffff);
              uVar17 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar17;
              lVar7 = local_68;
              lVar12 = local_58;
              uVar15 = local_60;
              piVar16 = local_a0;
              uVar8 = uVar8 + 8;
            } while ((ulonglong)(longlong)(int)uVar17 < (ulonglong)(plVar19[1] - *plVar19 >> 3));
          }
        }
        lVar11 = local_80;
        *(undefined2 *)(lVar7 + 0x40) = *(undefined2 *)((longlong)piVar16 + local_80 * 2);
        plVar2 = (longlong *)param_1[1];
        if ((&local_70 < plVar2) && (plVar19 = (longlong *)*param_1, plVar19 <= &local_70)) {
          if (plVar2 == (longlong *)param_1[2]) {
            FUN_14000c2d0(param_1);
          }
          if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_1[1] =
                 *(undefined8 *)(*param_1 + ((longlong)&local_70 - (longlong)plVar19 >> 3) * 8);
          }
        }
        else {
          if (plVar2 == (longlong *)param_1[2]) {
            FUN_14000c2d0(param_1);
          }
          if ((longlong *)param_1[1] != (longlong *)0x0) {
            *(longlong *)param_1[1] = lVar7;
          }
        }
        param_1[1] = param_1[1] + 8;
        *(undefined4 *)(lVar7 + 0x80) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8) + 0x98);
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 1) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 2) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 2;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 4) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 4;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 8) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 8;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 0x10) != 0)) &&
           (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 0x10;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 0x20) != 0)) &&
           (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 0x20;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 0x10) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 0x10;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 2) != 0)
            ) && (3 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 3);
          *pbVar1 = *pbVar1 | 2;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 0x20) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 0x20;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 0x40) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 0x40;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 1) != 0)
            ) && (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 0x40) != 0)) &&
           (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 0x40;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 0x80) != 0)) &&
           (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 0x80;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((0 < *(int *)(lVar4 + 0x90)) && ((**(byte **)(lVar4 + 0x88) & 0x80) != 0)) &&
           (0 < *(int *)(lVar7 + 0x50))) {
          **(byte **)(lVar7 + 0x48) = **(byte **)(lVar7 + 0x48) | 0x80;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 2) != 0)
            ) && (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 2;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 1) != 0)
            ) && (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 2) != 0)
            ) && (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 2;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 0x40) != 0)) &&
           (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 0x40;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 0x10) != 0)) &&
           (3 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 3);
          *pbVar1 = *pbVar1 | 0x40;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 8) != 0)
            ) && (3 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 3);
          *pbVar1 = *pbVar1 | 8;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 0x20) != 0)) &&
           (4 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 4);
          *pbVar1 = *pbVar1 | 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 4) != 0)
            ) && (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 4;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 8) != 0)
            ) && (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 8;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((4 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 4) & 1) != 0)
            ) && (4 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 4);
          *pbVar1 = *pbVar1 | 0x40;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 0x10) != 0)) &&
           (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 0x10;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((1 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 1) & 0x20) != 0)) &&
           (1 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 1);
          *pbVar1 = *pbVar1 | 0x20;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 4) != 0)
            ) && (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 4;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 8) != 0)
            ) && (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 8;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((2 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 2) & 0x80) != 0)) &&
           (2 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 2);
          *pbVar1 = *pbVar1 | 0x80;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 1) != 0)
            ) && (3 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 3);
          *pbVar1 = *pbVar1 | 1;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) && ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 4) != 0)
            ) && (3 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 3);
          *pbVar1 = *pbVar1 | 4;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 0x40) != 0)) &&
           (4 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 4);
          *pbVar1 = *pbVar1 | 2;
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x20) + local_a8 * 8);
        if (((3 < *(int *)(lVar4 + 0x90)) &&
            ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 3) & 0x80) != 0)) &&
           (4 < *(int *)(lVar7 + 0x50))) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0x48) + 4);
          *pbVar1 = *pbVar1 | 0x10;
        }
        local_res18[0] = local_res18[0] + 1;
        local_80 = lVar11 + 1;
      } while ((ulonglong)(longlong)local_res18[0] < uVar15);
    }
  }
  local_res20 = local_res20 + 1;
  local_a8 = local_a8 + 1;
  piVar14 = piVar16;
  if ((ulonglong)(*(longlong *)(lVar12 + 0x28) - *(longlong *)(lVar12 + 0x20) >> 3) <=
      (ulonglong)(longlong)local_res20) {
LAB_14028ef1d:
    if (local_a0 != (int *)0x0) {
      FUN_140002020(local_a0,(longlong)local_88 - (longlong)local_a0 >> 1,2);
    }
    return 1;
  }
  goto LAB_14028e1b0;
}

