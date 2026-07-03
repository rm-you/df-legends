// FUN_140669b30 @ 140669b30
// callees:
//   -> 14000f360 FUN_14000f360
//   -> 140c3de80 FUN_140c3de80
//   -> 14000c2d0 FUN_14000c2d0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000bed0 FUN_14000bed0
//   -> 140002020 FUN_140002020


void FUN_140669b30(longlong param_1)

{
  short sVar1;
  short sVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong local_res18;
  longlong *local_res20;
  longlong *local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *plStack_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  plVar10 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x3b8) == -1) {
    local_88 = (longlong *)0x0;
  }
  else {
    local_88 = (longlong *)FUN_14000f360(&DAT_141c66fd0);
  }
  sVar2 = 0;
  local_80 = (longlong *)0x0;
  plStack_78 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  plStack_a0 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  local_68 = (longlong *)((ulonglong)((longlong)DAT_141c66ff0 + (7 - (longlong)DAT_141c66fe8)) >> 3)
  ;
  if (DAT_141c66ff0 < DAT_141c66fe8) {
    local_68 = plVar10;
  }
  plVar3 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar4 = DAT_141c66fe8;
  plVar11 = plVar10;
  if (local_68 != (longlong *)0x0) {
    do {
      lVar12 = *plVar4;
      local_res18 = lVar12;
      if (((*(byte *)(lVar12 + 0x110) & 2) == 0) &&
         (*(int *)(lVar12 + 0x3b8) == *(int *)(param_1 + 0x130))) {
        sVar1 = FUN_140c3de80(lVar12);
        if (sVar2 < sVar1) {
          plStack_a0 = plVar14;
          if (plVar14 == plVar11) {
            FUN_14000c2d0(&local_a8,1);
            plVar11 = local_98;
            plVar14 = local_a8;
          }
          if (plStack_a0 != (longlong *)0x0) {
            *plStack_a0 = lVar12;
          }
          plVar5 = plStack_a0 + 1;
          plStack_a0 = plVar5;
          sVar2 = FUN_140c3de80(lVar12);
        }
        else {
          sVar1 = FUN_140c3de80(lVar12);
          if (sVar1 == sVar2) {
            if ((&local_res18 < plVar5) && (plVar14 <= &local_res18)) {
              lVar9 = (longlong)&local_res18 - (longlong)plVar14;
              if (plVar5 == plVar11) {
                FUN_14000c2d0(&local_a8,1);
                plVar5 = plStack_a0;
                plVar11 = local_98;
                plVar14 = local_a8;
              }
              plVar10 = local_90;
              if (plVar5 != (longlong *)0x0) {
                *plVar5 = plVar14[lVar9 >> 3];
              }
            }
            else {
              if (plVar5 == plVar11) {
                FUN_14000c2d0(&local_a8,1);
                plVar5 = plStack_a0;
                plVar11 = local_98;
                plVar14 = local_a8;
              }
              if (plVar5 != (longlong *)0x0) {
                *plVar5 = lVar12;
              }
            }
            plVar5 = plVar5 + 1;
            plStack_a0 = plVar5;
          }
        }
        if ((&local_res18 < plVar3) && (local_80 <= &local_res18)) {
          lVar12 = (longlong)&local_res18 - (longlong)local_80;
          if (plVar3 == plVar10) {
            FUN_14000c2d0(&local_80,1);
            local_90 = local_70;
            plVar3 = plStack_78;
            plVar10 = local_70;
          }
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = local_80[lVar12 >> 3];
          }
        }
        else {
          if (plVar3 == plVar10) {
            FUN_14000c2d0(&local_80,1);
            local_90 = local_70;
            plVar3 = plStack_78;
            plVar10 = local_70;
          }
          if (plVar3 != (longlong *)0x0) {
            *plVar3 = lVar12;
          }
        }
        plVar3 = plVar3 + 1;
        plStack_78 = plVar3;
      }
      local_res20 = (longlong *)((longlong)local_res20 + 1);
      plVar4 = plVar4 + 1;
    } while (local_res20 < local_68);
  }
  plVar4 = local_80;
  uVar13 = 0;
  local_60 = (longlong)plVar3 - (longlong)local_80;
  if (local_60 >> 3 != 0) {
    uVar6 = (longlong)plVar5 - (longlong)plVar14 >> 3;
    if ((uint)uVar6 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1409fc0c0();
      uVar7 = (uVar7 + (int)((longlong)((ulonglong)uVar7 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              ((int)(0x7fffffff / (uVar6 & 0xffffffff)) + 1U);
    }
    local_res18 = plVar14[(int)uVar7];
    if (local_88 == (longlong *)0x0) {
      *(undefined4 *)(local_res18 + 0x3b8) = 0xffffffff;
    }
    else {
      *(int *)(local_res18 + 0x3b8) = (int)local_88[0x26];
    }
    if (*(int *)(local_res18 + 0x3b8) == -1) {
      local_res20 = (longlong *)(local_res18 + 0x158);
      FUN_14000bed0(local_res20,*(longlong *)(param_1 + 0x160) - *(longlong *)(param_1 + 0x158) >> 1
                   );
      local_68 = (longlong *)(local_res18 + 0x170);
      FUN_14000bed0(local_68,*(longlong *)(param_1 + 0x178) - *(longlong *)(param_1 + 0x170) >> 1);
      local_88 = (longlong *)(local_res18 + 0x188);
      FUN_14000bed0(local_88,*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 1);
      uVar6 = uVar13;
      uVar8 = uVar13;
      if (*(longlong *)(param_1 + 0x160) - *(longlong *)(param_1 + 0x158) >> 1 != 0) {
        do {
          *(undefined2 *)(uVar6 + *local_res20) =
               *(undefined2 *)(uVar6 + *(longlong *)(param_1 + 0x158));
          *(undefined2 *)(uVar6 + *local_68) =
               *(undefined2 *)(uVar6 + *(longlong *)(param_1 + 0x170));
          *(undefined2 *)(uVar6 + *local_88) =
               *(undefined2 *)(uVar6 + *(longlong *)(param_1 + 0x188));
          uVar7 = (int)uVar8 + 1;
          uVar6 = uVar6 + 2;
          uVar8 = (ulonglong)uVar7;
        } while ((ulonglong)(longlong)(int)uVar7 <
                 (ulonglong)(*(longlong *)(param_1 + 0x160) - *(longlong *)(param_1 + 0x158) >> 1));
      }
    }
    uVar6 = local_60 + 7U >> 3;
    if (plVar3 < plVar4) {
      uVar6 = uVar13;
    }
    plVar3 = plVar4;
    if (uVar6 != 0) {
      do {
        if (*plVar3 != local_res18) {
          *(undefined4 *)(*plVar3 + 0x3b8) = *(undefined4 *)(local_res18 + 0x130);
        }
        uVar13 = uVar13 + 1;
        plVar3 = plVar3 + 1;
        plVar10 = local_90;
      } while (uVar13 < uVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x188);
  if (plVar14 != (longlong *)0x0) {
    FUN_140002020(plVar14,(longlong)plVar11 - (longlong)plVar14 >> 3,8);
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_140002020(plVar4,(longlong)plVar10 - (longlong)plVar4 >> 3,8);
  }
  return;
}

