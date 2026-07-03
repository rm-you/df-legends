// FUN_140ce5d50 @ 140ce5d50
// callees:
//   -> 140ca8390 FUN_140ca8390
//   -> 140071a80 FUN_140071a80


ulonglong FUN_140ce5d50(longlong param_1,short param_2)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int local_res18;
  int local_58;
  
  lVar6 = DAT_141d692e0;
  lVar5 = *(longlong *)(param_1 + 0xa78);
  piVar18 = (int *)0x0;
  iVar14 = 0;
  if (lVar5 != 0) {
    for (puVar4 = *(undefined8 **)(lVar5 + 0x260); puVar4 < *(undefined8 **)(lVar5 + 0x268);
        puVar4 = puVar4 + 1) {
      if (*(short *)*puVar4 == param_2) {
        return (ulonglong)(ushort)((short *)*puVar4)[1];
      }
    }
    iVar13 = *(int *)(lVar5 + 0x330);
    if ((iVar13 != -1) &&
       (iVar12 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, piVar16 = piVar18, -1 < iVar12)) {
      do {
        iVar8 = (int)piVar16 + iVar12 >> 1;
        piVar19 = *(int **)(DAT_141d692e0 + (longlong)iVar8 * 8);
        if (*piVar19 == iVar13) {
          if (piVar19 != (int *)0x0) {
            return (ulonglong)*(ushort *)((longlong)piVar19 + (longlong)param_2 * 2 + 0x28);
          }
          break;
        }
        if (iVar13 < *piVar19) {
          iVar12 = iVar8 + -1;
        }
        else {
          piVar16 = (int *)(ulonglong)(iVar8 + 1);
        }
      } while ((int)piVar16 <= iVar12);
    }
    iVar13 = *(int *)(lVar5 + 0x32c);
    if (((iVar13 != -1) && (lVar5 = DAT_141c53720 - DAT_141c53718 >> 3, lVar5 != 0)) &&
       (iVar12 = (int)lVar5 + -1, piVar16 = piVar18, -1 < iVar12)) {
      do {
        iVar8 = iVar12 + (int)piVar16 >> 1;
        lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar8 * 8);
        if (*(int *)(lVar5 + 4) == iVar13) {
          if (lVar5 != 0) {
            return (ulonglong)*(ushort *)(lVar5 + 0xce4 + (longlong)param_2 * 2);
          }
          break;
        }
        if (iVar13 < *(int *)(lVar5 + 4)) {
          iVar12 = iVar8 + -1;
        }
        else {
          piVar16 = (int *)(ulonglong)(iVar8 + 1);
        }
      } while ((int)piVar16 <= iVar12);
    }
  }
  local_58 = -1;
  iVar13 = -1;
  if ((*(longlong *)(param_1 + 0x11e8) == 0) ||
     (iVar12 = *(int *)(*(longlong *)(param_1 + 0x11e8) + 4), iVar12 == -1)) {
    if (*(int *)(param_1 + 0xc10) == -1) {
      iVar12 = *(int *)(param_1 + 0x1d8);
      if (((iVar12 != -1) && (lVar5 = DAT_141d64d40 - DAT_141d64d38 >> 3, lVar5 != 0)) &&
         (iVar8 = (int)lVar5 + -1, iVar11 = iVar14, -1 < iVar8)) {
        do {
          iVar9 = iVar11 + iVar8 >> 1;
          piVar16 = *(int **)(DAT_141d64d38 + (longlong)iVar9 * 8);
          if (*piVar16 == iVar12) {
            if (piVar16 != (int *)0x0) {
              iVar12 = piVar16[0x6f];
              goto LAB_140ce6133;
            }
            break;
          }
          if (iVar12 < *piVar16) {
            iVar8 = iVar9 + -1;
          }
          else {
            iVar11 = iVar9 + 1;
          }
        } while (iVar11 <= iVar8);
      }
    }
    else {
      lVar5 = FUN_140ca8390(param_1);
      if (lVar5 != 0) {
        plVar15 = *(longlong **)(lVar5 + 0xe8);
        iVar8 = 0x7531;
        local_res18 = -1;
        piVar16 = (int *)((ulonglong)
                          ((longlong)*(longlong **)(lVar5 + 0xf0) + (7 - (longlong)plVar15)) >> 3);
        if (*(longlong **)(lVar5 + 0xf0) < plVar15) {
          piVar16 = piVar18;
        }
        piVar19 = piVar18;
        iVar12 = -1;
        if (piVar16 != (int *)0x0) {
LAB_140ce5f40:
          plVar1 = (longlong *)*plVar15;
          sVar3 = (**(code **)*plVar1)(plVar1);
          if (sVar3 == 10) {
            iVar13 = (int)plVar1[1];
            lVar5 = DAT_141c53720 - DAT_141c53718 >> 3;
            if (((lVar5 != 0) && (iVar13 != -1)) &&
               (iVar11 = (int)lVar5 + -1, piVar17 = piVar18, -1 < iVar11)) {
              do {
                iVar9 = iVar11 + (int)piVar17 >> 1;
                lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar9 * 8);
                if (*(int *)(lVar5 + 4) == iVar13) {
                  if (lVar5 != 0) {
                    iVar11 = (**(code **)(*plVar1 + 0x30))(plVar1);
                    iVar13 = (int)(*(longlong *)(lVar5 + 0x1108) - *(longlong *)(lVar5 + 0x1100) >>
                                  3) + -1;
                    piVar17 = piVar18;
                    if (-1 < iVar13) goto LAB_140ce6040;
                  }
                  break;
                }
                if (iVar13 < *(int *)(lVar5 + 4)) {
                  iVar11 = iVar9 + -1;
                }
                else {
                  piVar17 = (int *)(ulonglong)(iVar9 + 1);
                }
              } while ((int)piVar17 <= iVar11);
            }
          }
          else if (sVar3 == 0xd) {
            local_res18 = (int)plVar1[1];
          }
          goto LAB_140ce5fcc;
        }
      }
    }
    goto LAB_140ce6188;
  }
LAB_140ce6133:
  iVar8 = -1;
  lVar6 = DAT_141d692e0;
  iVar13 = iVar12;
  if ((iVar12 != -1) &&
     ((lVar5 = DAT_141c53720 - DAT_141c53718 >> 3, iVar13 = iVar8, lVar5 != 0 &&
      (iVar8 = (int)lVar5 + -1, -1 < iVar8)))) {
    do {
      iVar11 = iVar8 + iVar14 >> 1;
      lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar11 * 8);
      if (*(int *)(lVar5 + 4) == iVar12) {
        if (lVar5 != 0) {
          return (ulonglong)*(ushort *)(lVar5 + 0xce4 + (longlong)param_2 * 2);
        }
        break;
      }
      if (iVar12 < *(int *)(lVar5 + 4)) {
        iVar8 = iVar11 + -1;
      }
      else {
        iVar14 = iVar11 + 1;
      }
    } while (iVar14 <= iVar8);
  }
LAB_140ce6188:
  iVar14 = *(int *)(param_1 + 0x14c);
  piVar16 = piVar18;
  if (iVar14 != -1) {
    iVar12 = (int)(DAT_141d692e8 - lVar6 >> 3) + -1;
    piVar19 = piVar18;
    if (-1 < iVar12) {
      do {
        iVar11 = iVar12 + (int)piVar19 >> 1;
        piVar16 = *(int **)(lVar6 + (longlong)iVar11 * 8);
        iVar8 = *piVar16;
        if (iVar8 == iVar14) break;
        if (iVar14 < iVar8) {
          iVar12 = iVar11 + -1;
        }
        else {
          piVar19 = (int *)(ulonglong)(iVar11 + 1);
        }
        piVar16 = piVar18;
      } while ((int)piVar19 <= iVar12);
    }
    if (piVar16 != (int *)0x0) {
      for (puVar4 = *(undefined8 **)(piVar16 + 4); puVar4 < *(undefined8 **)(piVar16 + 6);
          puVar4 = puVar4 + 1) {
        if ((*(byte *)((int *)*puVar4 + 7) & 2) != 0) {
          iVar13 = *(int *)*puVar4;
          break;
        }
      }
    }
  }
  if (((iVar13 != -1) && (lVar5 = DAT_141c53720 - DAT_141c53718 >> 3, lVar5 != 0)) &&
     (iVar14 = (int)lVar5 + -1, -1 < iVar14)) {
    do {
      iVar12 = iVar14 + (int)piVar18 >> 1;
      lVar5 = *(longlong *)(DAT_141c53718 + (longlong)iVar12 * 8);
      if (*(int *)(lVar5 + 4) == iVar13) {
        if (lVar5 != 0) {
          return (ulonglong)*(ushort *)(lVar5 + 0xce4 + (longlong)param_2 * 2);
        }
        break;
      }
      if (iVar13 < *(int *)(lVar5 + 4)) {
        iVar14 = iVar12 + -1;
      }
      else {
        piVar18 = (int *)(ulonglong)(iVar12 + 1);
      }
    } while ((int)piVar18 <= iVar14);
  }
  if (piVar16 == (int *)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (ulonglong)*(ushort *)((longlong)piVar16 + (longlong)param_2 * 2 + 0x28);
  }
  return uVar7;
  while( true ) {
    if (iVar11 < iVar9) {
      iVar13 = iVar10 + -1;
    }
    else {
      piVar17 = (int *)(ulonglong)(iVar10 + 1);
    }
    if (iVar13 < (int)piVar17) break;
LAB_140ce6040:
    iVar10 = iVar13 + (int)piVar17 >> 1;
    piVar2 = *(int **)(*(longlong *)(lVar5 + 0x1100) + (longlong)iVar10 * 8);
    iVar9 = *piVar2;
    if (iVar9 == iVar11) {
      lVar6 = FUN_140071a80(piVar2[3],lVar5 + 0x10b0);
      if (*(int *)(lVar6 + 0x2d0) < iVar8) {
        iVar12 = *(int *)(lVar5 + 4);
        iVar8 = *(int *)(lVar6 + 0x2d0);
      }
      break;
    }
  }
LAB_140ce5fcc:
  plVar15 = plVar15 + 1;
  piVar19 = (int *)((longlong)piVar19 + 1);
  if (piVar16 <= piVar19) goto code_r0x000140ce5fdc;
  goto LAB_140ce5f40;
code_r0x000140ce5fdc:
  if ((iVar12 == -1) &&
     (lVar6 = DAT_141d692e0, iVar12 = local_res18, iVar13 = local_58, local_res18 == -1))
  goto LAB_140ce6188;
  goto LAB_140ce6133;
}

