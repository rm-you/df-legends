// FUN_14073da70 @ 14073da70
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 14073d100 FUN_14073d100
//   -> 14073cef0 FUN_14073cef0
//   -> 14073d5b0 FUN_14073d5b0
//   -> 14073ccb0 FUN_14073ccb0
//   -> 140dfb5c4 operator_new
//   -> 140709240 FUN_140709240
//   -> 140010e10 FUN_140010e10
//   -> 1400199b0 FUN_1400199b0
//   -> 1400511c0 FUN_1400511c0
//   -> 14000c380 _guard_check_icall
//   -> EXTERNAL:000000e1 memmove
//   -> 1407075a0 FUN_1407075a0
//   -> 140010db0 FUN_140010db0
//   -> 1404e8250 FUN_1404e8250
//   -> 1404e8360 FUN_1404e8360
//   -> 140002020 FUN_140002020


void FUN_14073da70(longlong param_1,short param_2,int param_3,char param_4,char param_5)

{
  void *_Src;
  undefined8 *puVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  int local_res8;
  int *local_a8;
  int *local_a0;
  int *piStack_98;
  int *local_90;
  int *local_88;
  int *piStack_80;
  int *local_78;
  int *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  
  local_60 = 0xfffffffffffffffe;
  local_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_90 = (int *)0x0;
  local_88 = (int *)0x0;
  piStack_80 = (int *)0x0;
  local_70 = (int *)0x0;
  local_78 = (int *)0x0;
  iVar19 = (int)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3) + -1;
  piVar18 = (int *)0x0;
  piVar14 = (int *)0x0;
  if (-1 < iVar19) {
    lVar21 = (longlong)iVar19 * 8;
    local_68 = lVar21;
    do {
      piVar17 = local_70;
      sVar3 = (**(code **)**(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)))();
      if (((sVar3 != param_2) && (param_2 != -1)) ||
         ((puVar1 = *(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)),
          *(int *)(puVar1 + 1) != param_3 && (param_3 != -1)))) {
        uVar4 = (**(code **)**(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)))();
        if ((uVar4 & 0xfff9) == 0) {
          piVar15 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar21) + 8);
          if ((piVar15 < piVar14) && (local_88 <= piVar15)) {
            lVar16 = (longlong)piVar15 - (longlong)local_88;
            if (piVar14 == piVar17) {
              FUN_14000c390();
              local_70 = local_78;
              piVar14 = piStack_80;
            }
            if (piVar14 != (int *)0x0) {
              *piVar14 = local_88[lVar16 >> 2];
            }
            piVar14 = piVar14 + 1;
            piStack_80 = piVar14;
          }
          else {
            if (piVar14 == piVar17) {
              FUN_14000c390();
              local_70 = local_78;
              piVar14 = piStack_80;
            }
            if (piVar14 != (int *)0x0) {
              *piVar14 = *piVar15;
            }
            piVar14 = piVar14 + 1;
            piStack_80 = piVar14;
          }
          goto switchD_14073dc1b_caseD_1;
        }
        goto LAB_14073df2a;
      }
      bVar2 = false;
      uVar5 = (**(code **)*puVar1)();
      switch(uVar5) {
      case 0:
      case 2:
      case 4:
      case 6:
        piVar17 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar21) + 8);
        if ((piVar17 < piVar18) && (local_a0 <= piVar17)) {
          lVar16 = (longlong)piVar17 - (longlong)local_a0;
          if (piVar18 == local_a8) {
            FUN_14000c390(&local_a0,1);
            local_a8 = local_90;
            piVar18 = piStack_98;
          }
          if (piVar18 != (int *)0x0) {
            iVar12 = local_a0[lVar16 >> 2];
LAB_14073dcbc:
            *piVar18 = iVar12;
          }
        }
        else {
          if (piVar18 == local_a8) {
            FUN_14000c390(&local_a0,1);
            local_a8 = local_90;
            piVar18 = piStack_98;
          }
          if (piVar18 != (int *)0x0) {
            iVar12 = *piVar17;
            goto LAB_14073dcbc;
          }
        }
        piVar18 = piVar18 + 1;
        bVar2 = true;
        piStack_98 = piVar18;
      default:
        if ((param_4 != '\0') && ((bVar2 || (param_5 != '\0')))) {
          plVar8 = operator_new(0x38);
          local_58 = plVar8;
          FUN_140709240(plVar8,0);
          *plVar8 = (longlong)history_event_remove_hf_entity_linkst::vftable;
          plVar8[5] = -1;
          plVar8[6] = -1;
          *(undefined4 *)(plVar8 + 5) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar21) + 8);
          *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 0xe0);
          sVar3 = (**(code **)**(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)))();
          *(int *)(plVar8 + 6) = (int)sVar3;
          sVar3 = (**(code **)**(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)))();
          if ((sVar3 == 10) || (sVar3 == 0xc)) {
            lVar16 = *(longlong *)(lVar21 + *(longlong *)(param_1 + 0xe8));
            lVar9 = FUN_1400199b0(&DAT_141c53718);
            if ((lVar9 != 0) &&
               (lVar16 = FUN_1400511c0(*(undefined4 *)(lVar16 + 0x10)), lVar16 != 0)) {
              uVar6 = *(undefined4 *)(lVar16 + 0xc);
              goto LAB_14073de48;
            }
          }
          else if (sVar3 == 0xd) {
            lVar16 = FUN_140010e10(&DAT_141d64d38);
            if (lVar16 != 0) {
              uVar6 = *(undefined4 *)(lVar16 + 0x1c0);
              goto LAB_14073de48;
            }
          }
          else if (sVar3 == 0xf) {
            uVar6 = (**(code **)(**(longlong **)(lVar21 + *(longlong *)(param_1 + 0xe8)) + 0x38))();
LAB_14073de48:
            *(undefined4 *)((longlong)plVar8 + 0x34) = uVar6;
          }
          *(undefined4 *)(plVar8 + 1) = DAT_1416b1980;
          *(undefined4 *)((longlong)plVar8 + 0xc) = DAT_1416b1974;
          (**(code **)(*plVar8 + 0x128))(plVar8);
        }
        sVar3 = (**(code **)**(undefined8 **)(lVar21 + *(longlong *)(param_1 + 0xe8)))();
        plVar8 = *(longlong **)(lVar21 + *(longlong *)(param_1 + 0xe8));
        lVar16 = plVar8[1];
        uVar5 = *(undefined2 *)((longlong)plVar8 + 0xc);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        if (sVar3 == 0) {
          uVar11 = 1;
        }
        else if (sVar3 == 2) {
          uVar11 = 3;
        }
        else if (sVar3 == 4) {
          uVar11 = 5;
        }
        else {
          if (sVar3 != 6) {
            _Dst = (void *)(local_68 + *(longlong *)(param_1 + 0xe8));
            _Src = (void *)((longlong)_Dst + 8);
            memmove(_Dst,_Src,*(longlong *)(param_1 + 0xf0) - (longlong)_Src);
            *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
            break;
          }
          uVar11 = 7;
        }
        lVar9 = *(longlong *)(param_1 + 0xe8);
        uVar11 = FUN_1407075a0(uVar11);
        *(undefined8 *)(lVar9 + lVar21) = uVar11;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar21) + 8) = (int)lVar16;
        *(undefined2 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar21) + 0xc) = uVar5;
        break;
      case 1:
      case 3:
      case 5:
      case 7:
      case 0xb:
      case 0xe:
      case 0x10:
        break;
      case 10:
        if ((param_4 == '\0') || (param_5 == '\0')) {
          uVar11 = 0;
        }
        else {
          uVar11 = 1;
        }
        FUN_14073d100(param_1,iVar19,uVar11,1);
        break;
      case 0xc:
        FUN_14073d5b0(param_1,iVar19);
        break;
      case 0xd:
        FUN_14073ccb0(param_1,iVar19);
        break;
      case 0xf:
        FUN_14073cef0(param_1,iVar19);
      }
switchD_14073dc1b_caseD_1:
LAB_14073df2a:
      iVar19 = iVar19 + -1;
      local_68 = local_68 + -8;
      lVar21 = lVar21 + -8;
    } while (-1 < iVar19);
  }
  local_res8 = 0;
  uVar22 = (longlong)piVar14 - (longlong)local_88 >> 2;
  piVar14 = local_a0;
  piVar17 = local_88;
  if (uVar22 != 0) {
    do {
      iVar19 = (int)((longlong)piVar18 - (longlong)piVar14 >> 2) + -1;
      if (-1 < iVar19) {
        piVar20 = piVar14 + iVar19;
        piVar15 = piVar20 + 1;
        do {
          if (*piVar20 == *piVar17) {
            memmove(piVar15 + -1,piVar15,(longlong)piVar18 - (longlong)piVar15);
            piVar18 = piVar18 + -1;
          }
          piVar15 = piVar15 + -1;
          piVar20 = piVar20 + -1;
          iVar19 = iVar19 + -1;
          piVar14 = local_a0;
        } while (-1 < iVar19);
      }
      local_res8 = local_res8 + 1;
      piVar17 = piVar17 + 1;
    } while ((ulonglong)(longlong)local_res8 < uVar22);
  }
  piVar17 = local_88;
  piVar14 = local_a0;
  lVar21 = 0;
  lVar16 = 0;
  uVar22 = (longlong)piVar18 - (longlong)local_a0 >> 2;
  if (uVar22 != 0) {
    iVar19 = *(int *)(param_1 + 0xe0);
    lVar9 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar9 != 0) && (iVar19 != -1)) {
      iVar13 = 0;
      iVar12 = (int)lVar9 + -1;
      lVar21 = lVar16;
      if (-1 < iVar12) {
        do {
          iVar10 = iVar12 + iVar13 >> 1;
          lVar16 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar10 * 8);
          if (*(int *)(lVar16 + 0xe0) == iVar19) {
            if (lVar16 != 0) {
              lVar21 = FUN_140010db0(&DAT_141c67090,*(undefined4 *)(lVar16 + 0xdc));
            }
            break;
          }
          if (iVar19 < *(int *)(lVar16 + 0xe0)) {
            iVar12 = iVar10 + -1;
          }
          else {
            iVar13 = iVar10 + 1;
          }
        } while (iVar13 <= iVar12);
      }
    }
  }
  iVar19 = 0;
  piVar18 = piVar14;
  if (uVar22 != 0) {
    do {
      iVar12 = *piVar14;
      lVar16 = DAT_141c53720 - DAT_141c53718 >> 3;
      if ((lVar16 != 0) && (iVar12 != -1)) {
        iVar10 = 0;
        iVar13 = (int)lVar16 + -1;
        if (-1 < iVar13) {
          do {
            iVar7 = iVar13 + iVar10 >> 1;
            lVar16 = *(longlong *)(DAT_141c53718 + (longlong)iVar7 * 8);
            if (*(int *)(lVar16 + 4) == iVar12) {
              if ((lVar16 != 0) && (FUN_1404e8250(lVar16,param_1), lVar21 != 0)) {
                FUN_1404e8360(lVar16,lVar21);
              }
              break;
            }
            if (iVar12 < *(int *)(lVar16 + 4)) {
              iVar13 = iVar7 + -1;
            }
            else {
              iVar10 = iVar7 + 1;
            }
          } while (iVar10 <= iVar13);
        }
      }
      iVar19 = iVar19 + 1;
      piVar14 = piVar14 + 1;
      piVar18 = local_a0;
    } while ((ulonglong)(longlong)iVar19 < uVar22);
  }
  if (piVar17 != (int *)0x0) {
    FUN_140002020(piVar17,(longlong)local_70 - (longlong)piVar17 >> 2,4);
  }
  if (piVar18 != (int *)0x0) {
    FUN_140002020(piVar18,(longlong)local_a8 - (longlong)piVar18 >> 2,4);
  }
  return;
}

