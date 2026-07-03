// FUN_140824a40 @ 140824a40
// callees:
//   -> 140c627a0 FUN_140c627a0
//   -> 1408054d0 FUN_1408054d0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1407f0860 FUN_1407f0860
//   -> 140002020 FUN_140002020


void FUN_140824a40(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  short local_res10 [4];
  short local_res18 [4];
  short local_res20 [4];
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  
  local_60 = (undefined8 *)0x0;
  puStack_58 = (undefined8 *)0x0;
  puVar9 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  iVar3 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) + -1;
  lVar10 = (longlong)iVar3;
  puVar8 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)0x0;
  if (-1 < iVar3) {
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8);
      local_res10[0] = -30000;
      if ((*(uint *)(lVar7 + 0x10) & 0x10) == 0) {
        if ((*(uint *)(lVar7 + 0x10) & 8) == 0) {
          local_res10[0] = *(short *)(lVar7 + 8);
          local_res18[0] = *(short *)(lVar7 + 10);
          local_res20[0] = *(short *)(lVar7 + 0xc);
        }
        else {
          puVar1 = *(undefined8 **)(lVar7 + 0x40);
          for (puVar6 = *(undefined8 **)(lVar7 + 0x38); puVar6 < puVar1; puVar6 = puVar6 + 1) {
            iVar3 = (**(code **)(*(longlong *)*puVar6 + 0x10))();
            if (iVar3 == 0xb) {
              lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x18))();
              if (lVar4 != 0) {
                FUN_1408054d0(lVar4,local_res10,local_res18,local_res20);
                goto LAB_140824bad;
              }
            }
            else if ((iVar3 == 0x12) &&
                    (lVar4 = (**(code **)(*(longlong *)*puVar6 + 0x20))(), lVar4 != 0)) {
              FUN_140c627a0(lVar4,local_res10,local_res18,local_res20);
              goto LAB_140824bad;
            }
          }
          for (puVar6 = *(undefined8 **)(lVar7 + 0x20); puVar6 < *(undefined8 **)(lVar7 + 0x28);
              puVar6 = puVar6 + 1) {
            if (*(int *)*puVar6 == 10) {
              lVar7 = *(longlong *)((int *)*puVar6 + 2);
              local_res10[0] = *(short *)(lVar7 + 4);
              local_res18[0] = *(short *)(lVar7 + 6);
              local_res20[0] = *(short *)(lVar7 + 8);
              break;
            }
          }
        }
LAB_140824bad:
        if (((((local_res10[0] < 0) || (DAT_141d69554 <= local_res10[0])) || (local_res18[0] < 0))
            || ((DAT_141d69558 <= local_res18[0] || (local_res20[0] < 0)))) ||
           (DAT_141d6955c <= local_res20[0])) goto LAB_140824c1e;
        if ((DAT_141d69520 == 0) ||
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(DAT_141d69520 + (longlong)(local_res10[0] >> 4) * 8) +
               (longlong)(local_res18[0] >> 4) * 8) + (longlong)local_res20[0] * 8) == 0))
        goto LAB_140824c1e;
      }
      else {
LAB_140824c1e:
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8);
        if ((puVar6 < puVar8) && (puVar11 <= puVar6)) {
          lVar7 = (longlong)puVar6 - (longlong)puVar11;
          if (puVar8 == puVar9) {
            FUN_14000c2d0(&local_60,1);
            puVar8 = puStack_58;
            puVar9 = local_50;
            puVar11 = local_60;
          }
          if (puVar8 != (undefined8 *)0x0) {
            uVar5 = puVar11[lVar7 >> 3];
LAB_140824c88:
            *puVar8 = uVar5;
          }
        }
        else {
          if (puVar8 == puVar9) {
            FUN_14000c2d0(&local_60,1);
            puVar8 = puStack_58;
            puVar9 = local_50;
            puVar11 = local_60;
          }
          if (puVar8 != (undefined8 *)0x0) {
            uVar5 = *puVar6;
            goto LAB_140824c88;
          }
        }
        puVar8 = puVar8 + 1;
        puStack_58 = puVar8;
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar11 >> 3) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar2 = (longlong *)puVar11[lVar10];
      if (plVar2 != (longlong *)0x0) {
        if ((*(uint *)(plVar2 + 2) & 0x100000) == 0) {
          FUN_1407f0860(plVar2,0);
          (**(code **)(*plVar2 + 800))(plVar2);
        }
        (**(code **)(*plVar2 + 0x770))(plVar2);
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_140002020(puVar11,(longlong)puVar9 - (longlong)puVar11 >> 3,8);
  }
  return;
}

