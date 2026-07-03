// FUN_1407b68c0 @ 1407b68c0
// callees:
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1407b68c0(longlong param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int **ppiVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_1d8 [32];
  int *local_1b8 [50];
  ulonglong local_28;
  
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_1d8;
  iVar6 = *(int *)(param_1 + 0xbc);
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = uVar13;
  if ((iVar6 != -1) &&
     (iVar10 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1, uVar8 = uVar13, uVar15 = uVar14,
     -1 < iVar10)) {
    do {
      iVar5 = iVar10 + (int)uVar8 >> 1;
      piVar2 = *(int **)(DAT_141d692e0 + (longlong)iVar5 * 8);
      if (*piVar2 == iVar6) {
        if (piVar2 != (int *)0x0) {
          local_1b8[0] = piVar2 + 0x56;
          uVar15 = 1;
        }
        break;
      }
      if (iVar6 < *piVar2) {
        iVar10 = iVar5 + -1;
      }
      else {
        uVar8 = (ulonglong)(iVar5 + 1);
      }
    } while ((int)uVar8 <= iVar10);
  }
  iVar6 = (int)uVar15;
  plVar4 = *(longlong **)(param_1 + 0xf0);
  plVar7 = *(longlong **)(param_1 + 0xe8);
  uVar14 = (ulonglong)((longlong)plVar4 + (7 - (longlong)plVar7)) >> 3;
  if (plVar4 < plVar7) {
    uVar14 = uVar13;
  }
  if (uVar14 != 0) {
    lVar9 = (longlong)iVar6;
    uVar8 = uVar13;
    do {
      plVar4 = (longlong *)(*(code *)**(undefined8 **)*plVar7)();
      if ((short)plVar4 == 0) {
        uVar12 = *(uint *)(*plVar7 + 8);
        plVar4 = (longlong *)(DAT_141c53720 - DAT_141c53718 >> 3);
        if (((plVar4 != (longlong *)0x0) && (uVar12 != 0xffffffff)) &&
           (iVar6 = (int)plVar4 + -1, iVar10 = 0, -1 < iVar6)) {
          do {
            iVar5 = iVar6 + iVar10 >> 1;
            lVar3 = *(longlong *)(DAT_141c53718 + (longlong)iVar5 * 8);
            uVar1 = *(uint *)(lVar3 + 4);
            plVar4 = (longlong *)(ulonglong)uVar1;
            if (uVar1 == uVar12) {
              if ((lVar3 != 0) && (lVar9 < 0x32)) {
                plVar4 = (longlong *)(lVar3 + 0x1240);
                uVar15 = (ulonglong)((int)uVar15 + 1);
                local_1b8[lVar9] = (int *)plVar4;
                lVar9 = lVar9 + 1;
              }
              break;
            }
            if ((int)uVar12 < (int)uVar1) {
              iVar6 = iVar5 + -1;
            }
            else {
              iVar10 = iVar5 + 1;
            }
          } while (iVar10 <= iVar6);
        }
      }
      iVar6 = (int)uVar15;
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar14);
  }
  ppiVar11 = local_1b8;
  if (0 < iVar6) {
    do {
      for (plVar4 = *(longlong **)*ppiVar11; plVar4 < *(longlong **)(*ppiVar11 + 2);
          plVar4 = plVar4 + 1) {
        lVar9 = *plVar4;
        if ((((*(byte *)(lVar9 + 0x20) & 1) == 0) &&
            (((*(int *)(lVar9 + 0x10) < DAT_1416b1980 ||
              ((*(int *)(lVar9 + 0x10) == DAT_1416b1980 && (*(int *)(lVar9 + 0x14) <= DAT_1416b1974)
               ))) && (*(int *)(lVar9 + 0x24) == 2)))) && (*(int *)(lVar9 + 4) == param_2)) {
          return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
        }
      }
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      ppiVar11 = ppiVar11 + 1;
    } while ((int)uVar12 < iVar6);
  }
  return (ulonglong)plVar4 & 0xffffffffffffff00;
}

