// FUN_1407b8b40 @ 1407b8b40
// callees:
//   -> 1407b83c0 FUN_1407b83c0
//   -> 1407b8ef0 FUN_1407b8ef0
//   -> 1407b9500 FUN_1407b9500


undefined4 FUN_1407b8b40(longlong param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  short *psVar4;
  int *piVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  undefined2 uVar9;
  short sVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  
  uVar11 = FUN_1407b83c0();
  plVar17 = *(longlong **)(param_1 + 0xe8);
  bVar7 = false;
  plVar2 = *(longlong **)(param_1 + 0xf0);
  bVar8 = false;
  if (plVar17 < plVar2) {
    iVar18 = 0;
LAB_1407b8b90:
    puVar3 = (undefined8 *)*plVar17;
    if (*(int *)(puVar3 + 1) == param_2) {
      uVar9 = (**(code **)*puVar3)();
      switch(uVar9) {
      case 4:
      case 6:
        return 10;
      case 8:
      case 9:
        goto switchD_1407b8bbc_caseD_8;
      case 10:
      case 0xd:
        return 6;
      }
switchD_1407b8bbc_caseD_5:
    }
    else {
      sVar10 = (**(code **)*puVar3)();
      if (sVar10 == 0) {
        iVar16 = *(int *)(*plVar17 + 8);
        lVar12 = DAT_141c53720 - DAT_141c53718 >> 3;
        if (((lVar12 != 0) && (iVar16 != -1)) &&
           (iVar14 = (int)lVar12 + -1, iVar19 = 0, -1 < iVar14)) {
          do {
            iVar15 = iVar14 + iVar19 >> 1;
            puVar6 = *(ushort **)(DAT_141c53718 + (longlong)iVar15 * 8);
            if (*(int *)(puVar6 + 2) == iVar16) {
              if (puVar6 != (ushort *)0x0) {
                uVar1 = *puVar6;
                if (uVar1 < 2) {
                  bVar7 = true;
                }
                else if (((uVar1 - 3 & 0xfffa) == 0) && (uVar1 != 8)) {
                  plVar13 = *(longlong **)(puVar6 + 100);
                  goto joined_r0x0001407b8dec;
                }
              }
              break;
            }
            if (iVar16 < *(int *)(puVar6 + 2)) {
              iVar14 = iVar15 + -1;
            }
            else {
              iVar19 = iVar15 + 1;
            }
          } while (iVar19 <= iVar14);
        }
      }
      else {
        if ((sVar10 != 10) && (sVar10 != 0xd)) goto switchD_1407b8bbc_caseD_5;
        iVar16 = *(int *)(*plVar17 + 8);
        lVar12 = DAT_141c53720 - DAT_141c53718 >> 3;
        if ((lVar12 != 0) &&
           ((iVar16 != -1 && (iVar14 = (int)lVar12 + -1, iVar19 = 0, -1 < iVar14)))) {
          do {
            iVar15 = iVar14 + iVar19 >> 1;
            lVar12 = *(longlong *)(DAT_141c53718 + (longlong)iVar15 * 8);
            if (*(int *)(lVar12 + 4) == iVar16) {
              if (lVar12 != 0) {
                iVar14 = 0;
                iVar16 = (int)(*(longlong *)(lVar12 + 0x1020) - *(longlong *)(lVar12 + 0x1018) >> 3)
                         + -1;
                if (iVar16 < 0) goto LAB_1407b8d14;
                goto LAB_1407b8cf0;
              }
              break;
            }
            if (iVar16 < *(int *)(lVar12 + 4)) {
              iVar14 = iVar15 + -1;
            }
            else {
              iVar19 = iVar15 + 1;
            }
          } while (iVar19 <= iVar14);
        }
      }
    }
    goto LAB_1407b8be9;
  }
  goto LAB_1407b8e32;
joined_r0x0001407b8dec:
  if (*(longlong **)(puVar6 + 0x68) <= plVar13) goto LAB_1407b8be9;
  if ((*(byte *)(*plVar13 + 0x18) & 0x80) != 0) {
    bVar8 = true;
    goto LAB_1407b8be9;
  }
  plVar13 = plVar13 + 1;
  goto joined_r0x0001407b8dec;
  while( true ) {
    if (param_2 < iVar19) {
      iVar16 = iVar15 + -1;
    }
    else {
      iVar14 = iVar15 + 1;
    }
    if (iVar16 < iVar14) break;
LAB_1407b8cf0:
    iVar15 = iVar16 + iVar14 >> 1;
    piVar5 = *(int **)(*(longlong *)(lVar12 + 0x1018) + (longlong)iVar15 * 8);
    iVar19 = *piVar5;
    if (iVar19 == param_2) {
      sVar10 = (short)piVar5[1];
      goto LAB_1407b8d19;
    }
  }
LAB_1407b8d14:
  sVar10 = 2;
LAB_1407b8d19:
  if ((sVar10 == 1) || (sVar10 == 5)) {
switchD_1407b8bbc_caseD_8:
    return 9;
  }
LAB_1407b8be9:
  plVar17 = plVar17 + 1;
  if (plVar2 <= plVar17) goto code_r0x0001407b8bf2;
  goto LAB_1407b8b90;
code_r0x0001407b8bf2:
  if ((((bVar7) && (!bVar8)) && (lVar12 = DAT_141c53720 - DAT_141c53718 >> 3, lVar12 != 0)) &&
     ((param_2 != -1 && (iVar16 = (int)lVar12 + -1, -1 < iVar16)))) {
    do {
      iVar14 = iVar16 + iVar18 >> 1;
      psVar4 = *(short **)(DAT_141c53718 + (longlong)iVar14 * 8);
      if (*(int *)(psVar4 + 2) == param_2) {
        if (((psVar4 != (short *)0x0) && ((*psVar4 - 3U & 0xfffa) == 0)) && (*psVar4 != 8)) {
          for (plVar17 = *(longlong **)(psVar4 + 100); plVar17 < *(longlong **)(psVar4 + 0x68);
              plVar17 = plVar17 + 1) {
            if ((*(byte *)(*plVar17 + 0x18) & 0x80) != 0) {
              return 0x39;
            }
          }
        }
        break;
      }
      if (param_2 < *(int *)(psVar4 + 2)) {
        iVar16 = iVar14 + -1;
      }
      else {
        iVar18 = iVar14 + 1;
      }
    } while (iVar18 <= iVar16);
  }
LAB_1407b8e32:
  FUN_1407b8ef0(param_1,param_3);
  FUN_1407b9500();
  return uVar11;
}

