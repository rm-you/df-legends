// FUN_140db7c20 @ 140db7c20
// callees:


longlong FUN_140db7c20(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  piVar14 = *(int **)(param_2 + 0x2e8);
  lVar12 = 0;
  piVar2 = *(int **)(param_2 + 0x2f0);
  lVar20 = 0;
  lVar19 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
joined_r0x000140db7c6e:
  if (piVar2 <= piVar14) {
    return 0;
  }
  iVar1 = *piVar14;
  lVar8 = DAT_141d64da0 - DAT_141d64d98 >> 3;
  if ((lVar8 != 0) && (iVar1 != -1)) {
    iVar11 = (int)lVar8 + -1;
    iVar17 = 0;
    if (-1 < iVar11) {
      do {
        iVar10 = iVar17 + iVar11 >> 1;
        piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar10 * 8);
        if (*piVar3 == iVar1) {
          if ((piVar3 != (int *)0x0) && ((short)piVar3[1] == 2)) {
            plVar13 = *(longlong **)(piVar3 + 2);
            plVar4 = *(longlong **)(piVar3 + 4);
            goto joined_r0x000140db7d08;
          }
          break;
        }
        if (iVar1 < *piVar3) {
          iVar11 = iVar10 + -1;
        }
        else {
          iVar17 = iVar10 + 1;
        }
      } while (iVar17 <= iVar11);
    }
  }
  goto LAB_140db7f9a;
joined_r0x000140db7d08:
  lVar8 = local_60;
  if (plVar13 < plVar4) {
    sVar7 = (*(code *)**(undefined8 **)*plVar13)();
    if ((sVar7 == 8) && (lVar12 = *plVar13, (*(byte *)(lVar12 + 0x14) & 1) == 0)) {
      plVar9 = *(longlong **)(lVar12 + 0x48);
      if (plVar9 < *(longlong **)(lVar12 + 0x50)) {
        iVar1 = *(int *)(param_2 + 0xc10);
        iVar11 = *(int *)(param_3 + 0xc10);
LAB_140db7d54:
        lVar19 = *plVar9;
        bVar6 = false;
        iVar17 = (int)(*(longlong *)(lVar19 + 0x10) - *(longlong *)(lVar19 + 8) >> 2);
        if ((iVar17 != 0) && (iVar1 != -1)) {
          iVar10 = 0;
          iVar17 = iVar17 + -1;
          if (-1 < iVar17) {
            do {
              iVar15 = iVar10 + iVar17 >> 1;
              iVar18 = *(int *)(*(longlong *)(lVar19 + 8) + (longlong)iVar15 * 4);
              if (iVar18 == iVar1) {
                if (iVar15 != -1) goto LAB_140db7e1c;
                break;
              }
              if (iVar1 < iVar18) {
                iVar17 = iVar15 + -1;
              }
              else {
                iVar10 = iVar15 + 1;
              }
            } while (iVar10 <= iVar17);
          }
        }
        iVar17 = *(int *)(param_2 + 0x130);
        iVar10 = (int)(*(longlong *)(lVar19 + 0x28) - *(longlong *)(lVar19 + 0x20) >> 2);
        if ((iVar10 != 0) && (iVar17 != -1)) {
          iVar18 = 0;
          iVar10 = iVar10 + -1;
          if (-1 < iVar10) {
            do {
              iVar16 = iVar10 + iVar18 >> 1;
              iVar15 = *(int *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar16 * 4);
              if (iVar15 == iVar17) {
                if (iVar16 != -1) {
LAB_140db7e1c:
                  bVar6 = true;
                }
                break;
              }
              if (iVar17 < iVar15) {
                iVar10 = iVar16 + -1;
              }
              else {
                iVar18 = iVar16 + 1;
              }
            } while (iVar18 <= iVar10);
          }
        }
        iVar17 = (int)(*(longlong *)(lVar19 + 0x10) - *(longlong *)(lVar19 + 8) >> 2);
        if ((iVar17 != 0) && (iVar11 != -1)) {
          iVar10 = 0;
          iVar17 = iVar17 + -1;
          if (-1 < iVar17) {
            do {
              iVar15 = iVar17 + iVar10 >> 1;
              iVar18 = *(int *)(*(longlong *)(lVar19 + 8) + (longlong)iVar15 * 4);
              if (iVar18 == iVar11) {
                if (iVar15 != -1) goto LAB_140db7f01;
                break;
              }
              if (iVar11 < iVar18) {
                iVar17 = iVar15 + -1;
              }
              else {
                iVar10 = iVar15 + 1;
              }
            } while (iVar10 <= iVar17);
          }
        }
        iVar17 = *(int *)(param_3 + 0x130);
        iVar10 = (int)(*(longlong *)(lVar19 + 0x28) - *(longlong *)(lVar19 + 0x20) >> 2);
        if ((iVar10 == 0) || (iVar17 == -1)) {
LAB_140db7ed6:
          bVar5 = false;
        }
        else {
          iVar18 = 0;
          iVar10 = iVar10 + -1;
          if (-1 < iVar10) {
            do {
              iVar16 = iVar10 + iVar18 >> 1;
              iVar15 = *(int *)(*(longlong *)(lVar19 + 0x20) + (longlong)iVar16 * 4);
              if (iVar15 == iVar17) {
                if (iVar16 != -1) goto LAB_140db7f01;
                break;
              }
              if (iVar17 < iVar15) {
                iVar10 = iVar16 + -1;
              }
              else {
                iVar18 = iVar16 + 1;
              }
            } while (iVar18 <= iVar10);
            goto LAB_140db7ed6;
          }
          bVar5 = false;
        }
        goto LAB_140db7ede;
      }
      goto LAB_140db7f50;
    }
    goto LAB_140db7f5f;
  }
  goto LAB_140db7f85;
LAB_140db7f01:
  bVar5 = true;
LAB_140db7ede:
  if (bVar6) {
    local_50 = lVar19;
    if (bVar5) {
      lVar20 = 0;
      lVar19 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      goto LAB_140db7f5f;
    }
  }
  else if (bVar5) {
    local_58 = lVar19;
  }
  plVar9 = plVar9 + 1;
  if (*(longlong **)(lVar12 + 0x50) <= plVar9) goto LAB_140db7f4d;
  goto LAB_140db7d54;
LAB_140db7f4d:
  lVar12 = *plVar13;
  lVar19 = local_58;
  lVar20 = local_50;
LAB_140db7f50:
  if ((lVar20 != 0) && (lVar8 = lVar12, lVar19 != 0)) goto LAB_140db7f85;
LAB_140db7f5f:
  plVar13 = plVar13 + 1;
  lVar12 = local_60;
  goto joined_r0x000140db7d08;
LAB_140db7f85:
  local_60 = lVar8;
  if (lVar12 != 0) {
    return lVar12;
  }
LAB_140db7f9a:
  piVar14 = piVar14 + 1;
  goto joined_r0x000140db7c6e;
}

