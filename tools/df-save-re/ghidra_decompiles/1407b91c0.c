// FUN_1407b91c0 @ 1407b91c0
// callees:
//   -> 14014a480 FUN_14014a480


void FUN_1407b91c0(undefined8 param_1,int param_2,int *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong local_48;
  
  lVar6 = DAT_141d691a8;
  iVar11 = DAT_1416b1980;
  iVar15 = DAT_1416b1974;
  if ((*(byte *)((longlong)param_4 + 0x1b4) & 1) == 0) {
    FUN_14014a480("world view filter not set (adjust ci ps)");
    return;
  }
  local_48 = (ulonglong)*(uint *)(param_4 + 0x33);
  lVar16 = DAT_141d691b0;
  plVar18 = param_4;
  if (0 < (int)*(uint *)(param_4 + 0x33)) {
    do {
      uVar12 = 0;
      puVar1 = (ulonglong *)plVar18[1];
      plVar8 = (longlong *)*puVar1;
      plVar2 = (longlong *)puVar1[1];
      uVar14 = (ulonglong)((longlong)plVar2 + (7 - (longlong)plVar8)) >> 3;
      if (plVar2 < plVar8) {
        uVar14 = uVar12;
      }
      if (uVar14 != 0) {
        do {
          lVar3 = *plVar8;
          if (((*(byte *)(lVar3 + 0x20) & 1) == 0) &&
             ((*(int *)(lVar3 + 0x10) < iVar11 ||
              ((*(int *)(lVar3 + 0x10) == iVar11 && (*(int *)(lVar3 + 0x14) <= iVar15)))))) {
            if (*(int *)(lVar3 + 0x24) == 2) {
              iVar17 = 0;
              iVar7 = (int)(lVar16 - lVar6 >> 3) + -1;
              lVar16 = DAT_141d691b0;
              if (-1 < iVar7) {
                do {
                  iVar10 = iVar7 + iVar17 >> 1;
                  piVar5 = *(int **)(lVar6 + (longlong)iVar10 * 8);
                  if (*piVar5 == *(int *)(lVar3 + 4)) {
                    if (piVar5 != (int *)0x0) {
                      if (piVar5[1] == 0) {
                        iVar7 = -5;
                        if (piVar5[0x18] != param_2) goto LAB_1407b9353;
                      }
                      else if ((piVar5[1] - 2U < 2) && (piVar5[0x18] == param_2)) {
                        iVar7 = -1;
                      }
                      else {
LAB_1407b9353:
                        iVar7 = 0;
                      }
                      *param_3 = *param_3 + iVar7;
                      lVar16 = DAT_141d691b0;
                    }
                    break;
                  }
                  if (*(int *)(lVar3 + 4) < *piVar5) {
                    iVar7 = iVar10 + -1;
                  }
                  else {
                    iVar17 = iVar10 + 1;
                  }
                } while (iVar17 <= iVar7);
              }
            }
            else if (((*(int *)(lVar3 + 0x24) == 0xf) && (*(int *)(lVar3 + 8) == 2)) &&
                    (*(int *)(lVar3 + 4) == param_2)) {
              *param_3 = *param_3 + 10000000;
            }
          }
          plVar8 = plVar8 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar14);
      }
      local_48 = local_48 - 1;
      plVar18 = plVar18 + 1;
    } while (local_48 != 0);
  }
  plVar18 = param_4 + 0x34;
  if (0 < (int)*(uint *)(param_4 + 0x36)) {
    uVar14 = (ulonglong)*(uint *)(param_4 + 0x36);
    do {
      uVar13 = 0;
      puVar9 = *(undefined8 **)*plVar18;
      puVar4 = (undefined8 *)((undefined8 *)*plVar18)[1];
      uVar12 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar9)) >> 3;
      if (puVar4 < puVar9) {
        uVar12 = uVar13;
      }
      if (uVar12 != 0) {
        do {
          iVar15 = (int)(lVar16 - lVar6 >> 3) + -1;
          iVar11 = 0;
          if (-1 < iVar15) {
            do {
              iVar7 = iVar11 + iVar15 >> 1;
              piVar5 = *(int **)(lVar6 + (longlong)iVar7 * 8);
              if (*piVar5 == *(int *)*puVar9) {
                if (piVar5 == (int *)0x0) break;
                if (piVar5[1] == 0) {
                  if (piVar5[0x18] == param_2) {
                    *param_3 = *param_3 + -5;
                    break;
                  }
                }
                else if ((piVar5[1] - 2U < 2) && (piVar5[0x18] == param_2)) {
                  *param_3 = *param_3 + -1;
                  break;
                }
                *param_3 = *param_3;
                break;
              }
              if (*(int *)*puVar9 < *piVar5) {
                iVar15 = iVar7 + -1;
              }
              else {
                iVar11 = iVar7 + 1;
              }
            } while (iVar11 <= iVar15);
          }
          puVar9 = puVar9 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar12);
      }
      plVar18 = plVar18 + 1;
      uVar14 = uVar14 - 1;
      lVar16 = DAT_141d691b0;
    } while (uVar14 != 0);
  }
  if (-1 < *param_3) {
    if (100 < *param_3) {
      *param_3 = 100;
    }
    return;
  }
  *param_3 = 0;
  return;
}

