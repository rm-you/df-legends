// FUN_1407ba490 @ 1407ba490
// callees:


short FUN_1407ba490(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  int local_res10;
  int local_res18;
  
  piVar11 = (int *)0x0;
  iVar9 = 0;
  if ((*(longlong *)(param_1 + 0x130) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18), lVar4 != 0)) {
    for (puVar3 = *(undefined8 **)(lVar4 + 0x18); puVar3 < *(undefined8 **)(lVar4 + 0x20);
        puVar3 = puVar3 + 1) {
      if (*(short *)*puVar3 == 0) {
        return ((short *)*puVar3)[1];
      }
    }
    iVar15 = *(int *)(lVar4 + 0xe8);
    if ((iVar15 != -1) &&
       (iVar8 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, piVar12 = piVar11, -1 < iVar8)) {
      do {
        iVar5 = (int)piVar12 + iVar8 >> 1;
        piVar16 = *(int **)(DAT_141d692e0 + (longlong)iVar5 * 8);
        if (*piVar16 == iVar15) {
          if (piVar16 != (int *)0x0) {
            return (short)piVar16[10];
          }
          break;
        }
        if (iVar15 < *piVar16) {
          iVar8 = iVar5 + -1;
        }
        else {
          piVar12 = (int *)(ulonglong)(iVar5 + 1);
        }
      } while ((int)piVar12 <= iVar8);
    }
    iVar15 = *(int *)(lVar4 + 0xe4);
    if (((iVar15 != -1) && (lVar4 = DAT_141c53720 - DAT_141c53718 >> 3, lVar4 != 0)) &&
       (iVar8 = (int)lVar4 + -1, -1 < iVar8)) {
      do {
        iVar5 = iVar8 + iVar9 >> 1;
        lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar5 * 8);
        if (*(int *)(lVar4 + 4) == iVar15) {
          if (lVar4 != 0) {
            return *(short *)(lVar4 + 0xce4);
          }
          break;
        }
        if (iVar15 < *(int *)(lVar4 + 4)) {
          iVar8 = iVar5 + -1;
        }
        else {
          iVar9 = iVar5 + 1;
        }
      } while (iVar9 <= iVar8);
    }
  }
  plVar10 = *(longlong **)(param_1 + 0xe8);
  local_res18 = -1;
  local_res10 = -1;
  iVar9 = 0x7531;
  piVar12 = (int *)((ulonglong)((longlong)*(longlong **)(param_1 + 0xf0) + (7 - (longlong)plVar10))
                   >> 3);
  if (*(longlong **)(param_1 + 0xf0) < plVar10) {
    piVar12 = piVar11;
  }
  piVar16 = piVar11;
  iVar15 = -1;
  iVar8 = -1;
  if (piVar12 != (int *)0x0) {
LAB_1407ba622:
    plVar1 = (longlong *)*plVar10;
    sVar2 = (**(code **)*plVar1)(plVar1);
    iVar15 = iVar8;
    if (sVar2 == 10) {
      iVar8 = (int)plVar1[1];
      lVar4 = DAT_141c53720 - DAT_141c53718 >> 3;
      if (((lVar4 != 0) && (iVar8 != -1)) &&
         (iVar5 = (int)lVar4 + -1, piVar13 = piVar11, -1 < iVar5)) {
        do {
          iVar7 = iVar5 + (int)piVar13 >> 1;
          lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar7 * 8);
          iVar15 = local_res18;
          if (*(int *)(lVar4 + 4) == iVar8) {
            if (lVar4 != 0) {
              iVar5 = (**(code **)(*plVar1 + 0x30))(plVar1);
              iVar8 = (int)(*(longlong *)(lVar4 + 0x1108) - *(longlong *)(lVar4 + 0x1100) >> 3) + -1
              ;
              piVar13 = piVar11;
              if (-1 < iVar8) goto LAB_1407ba720;
            }
            break;
          }
          if (iVar8 < *(int *)(lVar4 + 4)) {
            iVar5 = iVar7 + -1;
          }
          else {
            piVar13 = (int *)(ulonglong)(iVar7 + 1);
          }
        } while ((int)piVar13 <= iVar5);
      }
    }
    else if (sVar2 == 0xd) {
      local_res10 = (int)plVar1[1];
    }
    goto LAB_1407ba6bd;
  }
LAB_1407ba7c3:
  iVar9 = *(int *)(param_1 + 0xbc);
  piVar12 = piVar11;
  if (iVar9 != -1) {
    iVar8 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
    piVar16 = piVar11;
    if (-1 < iVar8) {
      do {
        iVar7 = iVar8 + (int)piVar16 >> 1;
        piVar12 = *(int **)(DAT_141d692e0 + (longlong)iVar7 * 8);
        iVar5 = *piVar12;
        if (iVar5 == iVar9) break;
        if (iVar9 < iVar5) {
          iVar8 = iVar7 + -1;
        }
        else {
          piVar16 = (int *)(ulonglong)(iVar7 + 1);
        }
        piVar12 = piVar11;
      } while ((int)piVar16 <= iVar8);
    }
    if (piVar12 != (int *)0x0) {
      for (puVar3 = *(undefined8 **)(piVar12 + 4); puVar3 < *(undefined8 **)(piVar12 + 6);
          puVar3 = puVar3 + 1) {
        if ((*(byte *)((int *)*puVar3 + 7) & 2) != 0) {
          iVar15 = *(int *)*puVar3;
          break;
        }
      }
    }
  }
  if (((iVar15 != -1) && (lVar4 = DAT_141c53720 - DAT_141c53718 >> 3, lVar4 != 0)) &&
     (iVar9 = (int)lVar4 + -1, -1 < iVar9)) {
    do {
      iVar8 = iVar9 + (int)piVar11 >> 1;
      lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar8 * 8);
      if (*(int *)(lVar4 + 4) == iVar15) {
        if (lVar4 != 0) {
          return *(short *)(lVar4 + 0xce4);
        }
        break;
      }
      if (iVar15 < *(int *)(lVar4 + 4)) {
        iVar9 = iVar8 + -1;
      }
      else {
        piVar11 = (int *)(ulonglong)(iVar8 + 1);
      }
    } while ((int)piVar11 <= iVar9);
  }
  if (piVar12 == (int *)0x0) {
    return -1;
  }
  return (short)piVar12[10];
  while( true ) {
    if (iVar5 < iVar7) {
      iVar8 = iVar6 + -1;
    }
    else {
      piVar13 = (int *)(ulonglong)(iVar6 + 1);
    }
    if (iVar8 < (int)piVar13) break;
LAB_1407ba720:
    iVar6 = iVar8 + (int)piVar13 >> 1;
    piVar14 = *(int **)(*(longlong *)(lVar4 + 0x1100) + (longlong)iVar6 * 8);
    iVar7 = *piVar14;
    if (iVar7 == iVar5) {
      iVar5 = piVar14[3];
      iVar8 = (int)(*(longlong *)(lVar4 + 0x10b8) - *(longlong *)(lVar4 + 0x10b0) >> 3) + -1;
      piVar14 = piVar11;
      piVar13 = piVar11;
      if (iVar8 < 0) goto LAB_1407ba799;
      goto LAB_1407ba770;
    }
  }
  goto LAB_1407ba6bd;
  while( true ) {
    if (iVar5 < iVar7) {
      iVar8 = iVar6 + -1;
    }
    else {
      piVar14 = (int *)(ulonglong)(iVar6 + 1);
    }
    piVar13 = piVar11;
    if (iVar8 < (int)piVar14) break;
LAB_1407ba770:
    iVar6 = iVar8 + (int)piVar14 >> 1;
    piVar13 = *(int **)(*(longlong *)(lVar4 + 0x10b0) + (longlong)iVar6 * 8);
    iVar7 = piVar13[8];
    if (iVar7 == iVar5) break;
  }
LAB_1407ba799:
  if (piVar13[0xb4] < iVar9) {
    local_res18 = *(int *)(lVar4 + 4);
    iVar9 = piVar13[0xb4];
    iVar15 = local_res18;
  }
LAB_1407ba6bd:
  plVar10 = plVar10 + 1;
  piVar16 = (int *)((longlong)piVar16 + 1);
  iVar8 = iVar15;
  if (piVar12 <= piVar16) goto code_r0x0001407ba6cd;
  goto LAB_1407ba622;
code_r0x0001407ba6cd:
  if ((iVar15 == -1) && (iVar15 = -1, local_res10 != -1)) {
    iVar15 = local_res10;
  }
  goto LAB_1407ba7c3;
}

