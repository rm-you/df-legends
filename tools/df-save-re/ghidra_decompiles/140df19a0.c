// FUN_140df19a0 @ 140df19a0
// callees:
//   -> 140d7ffa0 FUN_140d7ffa0
//   -> 140d86200 FUN_140d86200
//   -> 1400199b0 FUN_1400199b0
//   -> 140ce7da0 FUN_140ce7da0
//   -> 140de87d0 FUN_140de87d0
//   -> 140019bb0 FUN_140019bb0
//   -> 140052180 FUN_140052180
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 14000c380 _guard_check_icall


void FUN_140df19a0(undefined8 param_1,undefined4 *param_2,short param_3,short param_4,
                  undefined2 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  short local_res18 [4];
  short local_res20;
  ushort in_stack_ffffffffffffff78;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((param_3 != -30000) && (DAT_141d86410 < 1)) {
    if (((int)param_2[0x22] < 1) || (bVar1 = true, (**(byte **)(param_2 + 0x20) & 2) == 0)) {
      bVar1 = false;
    }
    iVar3 = param_2[0x2a];
    iVar13 = param_2[0x2b];
    local_70 = param_2[0x2e];
    local_6c = param_2[0x2d];
    *(undefined8 *)(param_2 + 0x2e) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x2a) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x2c) = 0xffffffffffffffff;
    local_res18[0] = param_3;
    local_res20 = param_4;
    local_78 = iVar13;
    local_74 = iVar3;
    lVar5 = FUN_140d7ffa0(&DAT_141c53470,param_3,param_4,param_5);
    uVar11 = 0;
    iVar2 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x170) - *(longlong *)(DAT_141d6cfd0 + 0x168) >> 3)
            + -1;
    lVar7 = (longlong)iVar2;
    if (-1 < iVar2) {
      uVar8 = uVar11;
      do {
        uVar10 = *(ulonglong *)(*(longlong *)(DAT_141d6cfd0 + 0x168) + lVar7 * 8);
        if (((((*(int *)(uVar10 + 0x2a8) < 2) ||
              ((*(byte *)(*(longlong *)(uVar10 + 0x2a0) + 1) & 4) == 0)) &&
             (iVar2 = (int)(short)(((param_3 / 0x30 + (param_3 >> 0xf)) -
                                   (short)((longlong)(int)param_3 * 0x2aaaaaab >> 0x3f)) +
                                  (short)DAT_141d69560), *(int *)(uVar10 + 0x1f8) <= iVar2)) &&
            (((iVar2 <= *(int *)(uVar10 + 0x200) &&
              (iVar2 = (int)(short)(((param_4 / 0x30 + (param_4 >> 0xf)) -
                                    (short)((longlong)(int)param_4 * 0x2aaaaaab >> 0x3f)) +
                                   (short)DAT_141d69564), *(int *)(uVar10 + 0x1fc) <= iVar2)) &&
             ((iVar2 <= *(int *)(uVar10 + 0x204) &&
              ((*(int *)(uVar10 + 0x2a8) < 1 || ((**(byte **)(uVar10 + 0x2a0) & 4) == 0)))))))) &&
           ((uVar8 == 0 ||
            ((((0 < *(int *)(uVar10 + 0x2a8) && ((**(byte **)(uVar10 + 0x2a0) & 0x80) != 0)) ||
              (*(int *)(uVar8 + 0x2a8) < 1)) || ((**(byte **)(uVar8 + 0x2a0) & 0x80) == 0)))))) {
          if (lVar5 == 0) {
            if (*(int *)(uVar10 + 0x348) < 1) {
LAB_140df1bbc:
              uVar8 = uVar10;
            }
          }
          else if ((*(int *)(uVar10 + 0x348) <= (int)*(short *)(lVar5 + 0x3a)) &&
                  ((int)*(short *)(lVar5 + 0x38) <= *(int *)(uVar10 + 0x34c))) goto LAB_140df1bbc;
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      if (uVar8 != 0) {
        param_2[0x2a] = *(undefined4 *)(uVar8 + 0x88);
        lVar5 = FUN_140d86200(&DAT_141c53470,param_3,param_4,param_5,
                              in_stack_ffffffffffffff78 & 0xff00);
        if (lVar5 != 0) {
          iVar2 = *(int *)(lVar5 + 8);
          param_2[0x2b] = iVar2;
          if ((iVar3 != param_2[0x2a]) || (iVar13 != iVar2)) {
            iVar2 = DAT_1416b1974 + 100;
            iVar12 = DAT_1416b1980;
            if (0x626ff < iVar2) {
              iVar12 = DAT_1416b1980 + 1;
              iVar2 = DAT_1416b1974 + -0x6269c;
            }
            local_44 = 0x19;
            local_48 = 0;
            local_68 = *param_2;
            local_64 = *(undefined4 *)(uVar8 + 0x88);
            local_60 = *(undefined4 *)(lVar5 + 8);
            local_50 = DAT_1416b1980;
            local_4c = DAT_1416b1974;
            plVar6 = *(longlong **)(uVar8 + 0x428);
            uVar10 = (ulonglong)((longlong)*(longlong **)(uVar8 + 0x430) + (7 - (longlong)plVar6))
                     >> 3;
            if (*(longlong **)(uVar8 + 0x430) < plVar6) {
              uVar10 = uVar11;
            }
            uVar9 = uVar11;
            if (uVar10 != 0) {
              do {
                if (((*(byte *)(*plVar6 + 0x18) & 1) != 0) &&
                   (lVar5 = FUN_1400199b0(&DAT_141c53718,*(undefined4 *)(*plVar6 + 4)), lVar5 != 0))
                {
                  FUN_140ce7da0(lVar5 + 0x1240,&local_68,iVar12,iVar2);
                }
                plVar6 = plVar6 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar10);
            }
            plVar6 = *(longlong **)(uVar8 + 0x440);
            uVar10 = (ulonglong)((longlong)*(longlong **)(uVar8 + 0x448) + (7 - (longlong)plVar6))
                     >> 3;
            if (*(longlong **)(uVar8 + 0x448) < plVar6) {
              uVar10 = uVar11;
            }
            iVar3 = local_74;
            iVar13 = local_78;
            param_4 = local_res20;
            param_3 = local_res18[0];
            if (uVar10 != 0) {
              do {
                FUN_140ce7da0(*plVar6 + 0x158,&local_68,iVar12,iVar2);
                plVar6 = plVar6 + 1;
                uVar11 = uVar11 + 1;
                iVar3 = local_74;
                iVar13 = local_78;
                param_4 = local_res20;
                param_3 = local_res18[0];
              } while (uVar11 < uVar10);
            }
          }
        }
      }
    }
    if (param_2[0x2a] == -1) {
      iVar3 = FUN_140de87d0(&DAT_141c53470,param_3,param_4,param_5);
      param_2[0x2e] = iVar3;
      if (iVar3 == -1) {
        FUN_140019bb0(&DAT_141c53470,&local_78,local_res18,param_3,param_4,param_5);
        lVar5 = FUN_140052180(DAT_141d6cfd0,(int)(short)local_78,(int)local_res18[0]);
        if (lVar5 != 0) {
          param_2[0x2d] = *(undefined4 *)(lVar5 + 0x78);
        }
      }
      if (0 < (int)param_2[0x22]) {
        **(byte **)(param_2 + 0x20) = **(byte **)(param_2 + 0x20) | 2;
      }
      if (((bVar1) && (local_70 == param_2[0x2e])) && (local_6c == param_2[0x2d])) {
        return;
      }
      plVar6 = operator_new(0x40);
      FUN_140709240(plVar6,0);
      *plVar6 = (longlong)history_event_artifact_lostst::vftable;
      plVar6[5] = -1;
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(int *)(plVar6 + 1) = DAT_1416b1980;
      *(int *)((longlong)plVar6 + 0xc) = DAT_1416b1974;
      *(undefined4 *)(plVar6 + 5) = *param_2;
      *(undefined4 *)((longlong)plVar6 + 0x34) = param_2[0x2d];
      uVar4 = param_2[0x2e];
    }
    else {
      if (0 < (int)param_2[0x22]) {
        **(byte **)(param_2 + 0x20) = **(byte **)(param_2 + 0x20) & 0xfd;
      }
      if (((!bVar1) && (iVar3 == param_2[0x2a])) && (iVar13 == param_2[0x2b])) {
        return;
      }
      plVar6 = operator_new(0x40);
      FUN_140709240(plVar6,0);
      *plVar6 = (longlong)history_event_artifact_storedst::vftable;
      plVar6[5] = -1;
      plVar6[6] = -1;
      *(undefined4 *)(plVar6 + 7) = 0xffffffff;
      *(int *)(plVar6 + 1) = DAT_1416b1980;
      *(int *)((longlong)plVar6 + 0xc) = DAT_1416b1974;
      *(undefined4 *)(plVar6 + 5) = *param_2;
      *(undefined4 *)((longlong)plVar6 + 0x34) = param_2[0x2a];
      uVar4 = param_2[0x2b];
    }
    *(undefined4 *)(plVar6 + 7) = uVar4;
    (**(code **)(*plVar6 + 0x128))(plVar6);
  }
  return;
}

