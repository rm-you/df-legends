// FUN_1407587d0 @ 1407587d0
// callees:
//   -> 14000c390 FUN_14000c390
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


undefined4 FUN_1407587d0(longlong *param_1,longlong param_2,int param_3)

{
  void *_Src;
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int *_Src_00;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int local_res8;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  int *local_98;
  undefined4 *local_90;
  undefined4 *local_80;
  undefined4 *puStack_78;
  undefined4 *local_70;
  int *local_68;
  int *piStack_60;
  int *local_58;
  
  uVar11 = 0xffffffff;
  iVar8 = local_res8;
  if (*(int *)(param_2 + 0x20) != -1) {
    uVar11 = 0x10;
    iVar8 = *(int *)(param_2 + 0x20);
  }
  local_res20 = *(int *)(param_2 + 0x38);
  if (local_res20 == -1) {
    local_res20 = local_res8;
    if (*(int *)(param_2 + 0x28) != -1) {
      uVar11 = 0x11;
      iVar8 = *(int *)(param_2 + 0x28);
    }
  }
  else {
    uVar11 = 0x1c;
    iVar8 = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x18) != -1) {
    uVar11 = 0x12;
    iVar8 = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x2c) != -1) {
    uVar11 = 0x17;
    iVar8 = *(int *)(param_2 + 0x2c);
  }
  if (*(int *)(param_2 + 0x30) != -1) {
    uVar11 = 0x18;
    iVar8 = *(int *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x34) != -1) {
    uVar11 = 0x1d;
    iVar8 = *(int *)(param_2 + 0x34);
  }
  if (*(int *)(param_2 + 0x68) != -1) {
    uVar11 = 0x1e;
    iVar8 = *(int *)(param_2 + 0x68);
  }
  if (*(int *)(param_2 + 0x1c) != -1) {
    uVar11 = 0xb;
    iVar8 = *(int *)(param_2 + 0x1c);
  }
  local_80 = (undefined4 *)0x0;
  puStack_78 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  local_70 = (undefined4 *)0x0;
  local_68 = (int *)0x0;
  piStack_60 = (int *)0x0;
  local_98 = (int *)0x0;
  local_58 = (int *)0x0;
  iVar13 = -1;
  iVar14 = -1;
  local_res8 = -1;
  iVar3 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar9 = (longlong)iVar3;
  puVar6 = (undefined4 *)0x0;
  piVar10 = (int *)0x0;
  local_res18 = param_3;
  if (-1 < iVar3) {
    do {
      iVar14 = iVar13;
      if ((param_3 == -1) || (*(int *)(*(longlong *)(*param_1 + lVar9 * 8) + 8) < param_3)) {
        switch(uVar11) {
        case 0xb:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1,iVar8);
          break;
        default:
          goto switchD_140758917_caseD_c;
        case 0x10:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,iVar8);
          break;
        case 0x11:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0x90))(plVar1,iVar8);
          break;
        case 0x12:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0xa0))(plVar1,iVar8);
          break;
        case 0x17:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,iVar8);
          break;
        case 0x18:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,iVar8);
          break;
        case 0x1c:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,iVar8,local_res20);
          break;
        case 0x1d:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,iVar8);
          break;
        case 0x1e:
          plVar1 = *(longlong **)(lVar9 * 8 + *param_1);
          cVar2 = (**(code **)(*plVar1 + 200))(plVar1,iVar8);
        }
        param_3 = local_res18;
        iVar14 = local_res8;
        if (cVar2 != '\0') {
          local_res10[0] = (**(code **)(**(longlong **)(lVar9 * 8 + *param_1) + 0xe8))();
          puVar15 = (undefined4 *)(*(longlong *)(lVar9 * 8 + *param_1) + 0x20);
          if ((puVar15 < puVar6) && (local_80 <= puVar15)) {
            lVar16 = (longlong)puVar15 - (longlong)local_80;
            if (puVar6 == local_90) {
              FUN_14000c390(&local_80,1);
              local_90 = local_70;
              puVar6 = puStack_78;
            }
            if (puVar6 != (undefined4 *)0x0) {
              uVar4 = local_80[lVar16 >> 2];
LAB_140758abf:
              *puVar6 = uVar4;
            }
          }
          else {
            if (puVar6 == local_90) {
              FUN_14000c390(&local_80,1);
              local_90 = local_70;
              puVar6 = puStack_78;
            }
            if (puVar6 != (undefined4 *)0x0) {
              uVar4 = *puVar15;
              goto LAB_140758abf;
            }
          }
          puVar6 = puVar6 + 1;
          puStack_78 = puVar6;
          if ((local_res10 < piVar10) && (local_68 <= local_res10)) {
            lVar16 = (longlong)local_res10 - (longlong)local_68;
            if (piVar10 == local_98) {
              FUN_14000c390(&local_68,1);
              local_98 = local_58;
              piVar10 = piStack_60;
            }
            if (piVar10 != (int *)0x0) {
              *piVar10 = local_68[lVar16 >> 2];
            }
          }
          else {
            if (piVar10 == local_98) {
              FUN_14000c390(&local_68,1);
              local_98 = local_58;
              piVar10 = piStack_60;
            }
            if (piVar10 != (int *)0x0) {
              *piVar10 = local_res10[0];
            }
          }
          piVar10 = piVar10 + 1;
          piStack_60 = piVar10;
          param_3 = local_res18;
          if (local_res8 < local_res10[0]) {
            local_res8 = local_res10[0];
            iVar14 = local_res10[0];
          }
        }
      }
switchD_140758917_caseD_c:
      lVar9 = lVar9 + -1;
      iVar13 = iVar14;
    } while (-1 < lVar9);
  }
  puVar15 = local_80;
  lVar9 = (longlong)puVar6 - (longlong)local_80 >> 2;
  if (lVar9 != 0) {
    uVar5 = FUN_1409fc0c0();
    if (uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e == 0)
    {
      uVar5 = FUN_1409fc0c0();
      if ((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab == 0) {
        uVar5 = FUN_1409fc0c0();
        if ((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x2aaaaaab == 0) {
          uVar5 = FUN_1409fc0c0();
          iVar14 = -1;
          if ((uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0xccccccd != 0) {
            iVar14 = 0;
          }
        }
        else {
          iVar14 = iVar14 / 5;
        }
      }
      else {
        iVar14 = iVar14 / 2;
      }
    }
    else {
      iVar14 = iVar14 + -1;
    }
    if (((iVar14 < local_res8) && (-1 < iVar14)) && (iVar8 = (int)lVar9 + -1, -1 < iVar8)) {
      piVar12 = local_68 + iVar8;
      _Src_00 = piVar12 + 1;
      lVar9 = (longlong)puVar15 - (longlong)local_68;
      do {
        if (*piVar12 <= iVar14) {
          _Src = (void *)((longlong)_Src_00 + lVar9);
          memmove((void *)(lVar9 + -4 + (longlong)_Src_00),_Src,(longlong)puVar6 - (longlong)_Src);
          puVar6 = puVar6 + -1;
          memmove(_Src_00 + -1,_Src_00,(longlong)piVar10 - (longlong)_Src_00);
          piVar10 = piVar10 + -1;
        }
        _Src_00 = _Src_00 + -1;
        piVar12 = piVar12 + -1;
        iVar8 = iVar8 + -1;
        puVar15 = local_80;
      } while (-1 < iVar8);
    }
    uVar7 = (longlong)puVar6 - (longlong)puVar15 >> 2;
    if (uVar7 != 0) {
      if ((uint)uVar7 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1409fc0c0();
        uVar5 = (uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (uVar7 & 0xffffffff)) + 1U);
      }
      uVar11 = puVar15[(int)uVar5];
      goto LAB_140758d57;
    }
  }
  uVar11 = 0xffffffff;
LAB_140758d57:
  if (local_68 != (int *)0x0) {
    FUN_140002020(local_68,(longlong)local_98 - (longlong)local_68 >> 2,4);
  }
  if (puVar15 != (undefined4 *)0x0) {
    FUN_140002020(puVar15,(longlong)local_90 - (longlong)puVar15 >> 2,4);
  }
  return uVar11;
}

