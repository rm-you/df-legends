// FUN_1400b5f70 @ 1400b5f70
// callees:
//   -> 140073d50 FUN_140073d50
//   -> 140dfb5b4 free
//   -> 140073930 FUN_140073930
//   -> EXTERNAL:000000e1 memmove
//   -> 14007e7f0 FUN_14007e7f0
//   -> 14007e740 FUN_14007e740
//   -> 14007e920 FUN_14007e920
//   -> 14007ef00 FUN_14007ef00
//   -> 140002020 FUN_140002020


void FUN_1400b5f70(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  pvVar7 = *(void **)(param_1 + 0x2c);
  if (pvVar7 != (void *)0x0) {
    FUN_140073d50(pvVar7);
    free(pvVar7);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  iVar9 = param_1[1];
  uVar12 = uVar13;
  if ((iVar9 != -1) && (lVar2 = DAT_141c53720 - DAT_141c53718 >> 3, lVar2 != 0)) {
    iVar8 = (int)lVar2 + -1;
    uVar10 = uVar13;
    if (-1 < iVar8) {
      do {
        iVar3 = iVar8 + (int)uVar10 >> 1;
        uVar12 = *(ulonglong *)(DAT_141c53718 + (longlong)iVar3 * 8);
        iVar4 = *(int *)(uVar12 + 4);
        if (iVar4 == iVar9) break;
        if (iVar9 < iVar4) {
          iVar8 = iVar3 + -1;
        }
        else {
          uVar10 = (ulonglong)(iVar3 + 1);
        }
        uVar12 = uVar13;
      } while ((int)uVar10 <= iVar8);
    }
    if (uVar12 != 0) {
      FUN_140073930(param_1,uVar12 + 0x13f8);
    }
  }
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    uVar10 = (ulonglong)((longlong)DAT_141d69258 + (7 - (longlong)DAT_141d69250)) >> 3;
    if (DAT_141d69258 < DAT_141d69250) {
      uVar10 = uVar13;
    }
    plVar5 = DAT_141d69250;
    uVar11 = uVar13;
    if (uVar10 != 0) {
      do {
        if ((*(int **)(*plVar5 + 0x60) == param_1) &&
           (*(undefined8 *)(*plVar5 + 0x60) = 0, uVar12 != 0)) {
          FUN_140073930(*plVar5,uVar12 + 0x13e0);
        }
        plVar5 = plVar5 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar10);
    }
    uVar12 = (ulonglong)((longlong)DAT_141c66ff0 + (7 - (longlong)DAT_141c66fe8)) >> 3;
    if (DAT_141c66ff0 < DAT_141c66fe8) {
      uVar12 = uVar13;
    }
    plVar5 = DAT_141c66fe8;
    uVar10 = uVar13;
    if (uVar12 != 0) {
      do {
        if (*(int **)(*plVar5 + 0x11e8) == param_1) {
          *(undefined8 *)(*plVar5 + 0x11e8) = 0;
          *(undefined4 *)(*plVar5 + 0x11e0) = 0xffffffff;
        }
        plVar5 = plVar5 + 1;
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar12);
    }
  }
  if ((param_1[0x30] == 4) && (**(int **)(param_1 + 0x2e) != -1)) {
    iVar8 = param_1[4] / 3 + (param_1[5] / 3) * *(int *)(DAT_141d6cfd0 + 0xa0) * 0x10;
    iVar9 = (int)(*(longlong *)(DAT_141d6cfd0 + 0x200) - *(longlong *)(DAT_141d6cfd0 + 0x1f8) >> 3)
            + -1;
    uVar12 = uVar13;
    if (-1 < iVar9) {
      do {
        iVar4 = (int)uVar12 + iVar9 >> 1;
        piVar1 = *(int **)(*(longlong *)(DAT_141d6cfd0 + 0x1f8) + (longlong)iVar4 * 8);
        if (*piVar1 == iVar8) {
          if ((piVar1 != (int *)0x0) &&
             (iVar9 = (int)(*(longlong *)(piVar1 + 0x40) - *(longlong *)(piVar1 + 0x3e) >> 3) + -1,
             -1 < iVar9)) {
            lVar2 = (longlong)iVar9;
            plVar5 = (longlong *)(*(longlong *)(piVar1 + 0x3e) + lVar2 * 8);
            goto LAB_1400b61c7;
          }
          break;
        }
        if (iVar8 < *piVar1) {
          iVar9 = iVar4 + -1;
        }
        else {
          uVar12 = (ulonglong)(iVar4 + 1);
        }
      } while ((int)uVar12 <= iVar9);
    }
  }
  goto LAB_1400b6223;
  while( true ) {
    iVar9 = iVar9 + -1;
    plVar5 = plVar5 + -1;
    lVar2 = lVar2 + -1;
    if (lVar2 < 0) break;
LAB_1400b61c7:
    if (*(int *)(*plVar5 + 8) == **(int **)(param_1 + 0x2e)) {
      plVar5 = *(longlong **)(*(longlong *)(piVar1 + 0x3e) + (longlong)iVar9 * 8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5,1);
      }
      pvVar6 = (void *)(*(longlong *)(piVar1 + 0x3e) + (longlong)iVar9 * 8);
      pvVar7 = (void *)((longlong)pvVar6 + 8);
      memmove(pvVar6,pvVar7,*(longlong *)(piVar1 + 0x40) - (longlong)pvVar7);
      *(longlong *)(piVar1 + 0x40) = *(longlong *)(piVar1 + 0x40) + -8;
      break;
    }
  }
LAB_1400b6223:
  switch(param_1[0x30]) {
  case 1:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    break;
  case 2:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e7f0(pvVar7);
    break;
  default:
    goto switchD_1400b624c_caseD_3;
  case 4:
  case 0x12:
  case 0x15:
  case 0x16:
    goto LAB_1400b639e;
  case 5:
    goto LAB_1400b639e;
  case 6:
    goto LAB_1400b639e;
  case 7:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e740(pvVar7);
    break;
  case 0xb:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e740(pvVar7);
    break;
  case 0xc:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e920(pvVar7);
    break;
  case 0xd:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e920(pvVar7);
    break;
  case 0xe:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e920(pvVar7);
    break;
  case 0xf:
    pvVar7 = *(void **)(param_1 + 0x2e);
    if (pvVar7 == (void *)0x0) goto switchD_1400b624c_caseD_3;
    FUN_14007e740(pvVar7);
    break;
  case 0x10:
    goto LAB_1400b639e;
  case 0x11:
  case 0x17:
  case 0x18:
    goto LAB_1400b639e;
  case 0x13:
    if (*(longlong *)(param_1 + 0x2e) != 0) {
      FUN_14007ef00();
    }
    goto switchD_1400b624c_caseD_3;
  case 0x14:
LAB_1400b639e:
    pvVar7 = *(void **)(param_1 + 0x2e);
  }
  free(pvVar7);
switchD_1400b624c_caseD_3:
  param_1[0x30] = -1;
  iVar9 = (int)(DAT_141d69288 - DAT_141d69280 >> 3) + -1;
  if (-1 < iVar9) {
    do {
      iVar8 = iVar9 + (int)uVar13 >> 1;
      piVar1 = *(int **)(DAT_141d69280 + (longlong)iVar8 * 8);
      if (piVar1 == param_1) {
        pvVar6 = (void *)(DAT_141d69280 + (longlong)iVar8 * 8);
        pvVar7 = (void *)((longlong)pvVar6 + 8);
        memmove(pvVar6,pvVar7,DAT_141d69288 - (longlong)pvVar7);
        DAT_141d69288 = DAT_141d69288 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar9 = iVar8 + -1;
      }
      else {
        uVar13 = (ulonglong)(iVar8 + 1);
      }
    } while ((int)uVar13 <= iVar9);
  }
  lVar2 = *(longlong *)(param_1 + 0x26);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x2a) - lVar2 >> 2,4);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x24) - lVar2 >> 2,4);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x1c) - lVar2 >> 2,4);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc) - lVar2 >> 2,4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return;
}

