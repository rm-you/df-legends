// FUN_14075ec60 @ 14075ec60
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140050b50 FUN_140050b50
//   -> 14075f020 FUN_14075f020
//   -> 14075f120 FUN_14075f120
//   -> 140161210 FUN_140161210
//   -> 14000f360 FUN_14000f360
//   -> 1407b5f90 FUN_1407b5f90
//   -> 14073eb00 FUN_14073eb00


void FUN_14075ec60(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  uVar12 = 0;
  if (*(longlong *)(param_1 + 0x130) == 0) {
    puVar4 = operator_new(0x68);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *(undefined8 **)(param_1 + 0x130) = puVar4;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x30) == 0) {
    puVar4 = operator_new(0xc0);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x130) + 0x30) = puVar4;
  }
  FUN_140050b50(param_2);
  cVar1 = *(char *)(param_1 + 0xaa);
  bVar14 = *(int *)(param_1 + 0x7c) == -1;
  if (bVar14) {
    FUN_14075f020(param_1,param_3);
  }
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x30);
  if (((((ulonglong)(plVar10[1] - *plVar10 >> 2) < 5) || (*(int *)(param_1 + 0x8c) != -1)) ||
      (*(int *)(param_1 + 0x90) != -1)) ||
     ((*(int *)(param_1 + 0x80) != -1 || (*(int *)(param_1 + 0x84) != -1)))) {
    if (!bVar14) goto LAB_14075ee5d;
  }
  else {
    FUN_14075f120(param_1,param_3);
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  if (((iVar2 != -1) && (iVar8 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3), iVar8 != 0)) &&
     (iVar8 = iVar8 + -1, uVar11 = uVar12, -1 < iVar8)) {
    do {
      iVar7 = (int)uVar11 + iVar8 >> 1;
      lVar5 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
      if (*(int *)(lVar5 + 0x130) == iVar2) {
        if (lVar5 != 0) {
          FUN_140161210(lVar5 + 8,param_1 + 0x38);
        }
        break;
      }
      if (iVar2 < *(int *)(lVar5 + 0x130)) {
        iVar8 = iVar7 + -1;
      }
      else {
        uVar11 = (ulonglong)(iVar7 + 1);
      }
    } while ((int)uVar11 <= iVar8);
  }
LAB_14075ee5d:
  if ((((*(char *)(param_1 + 0xaa) != '\0') && (cVar1 == '\0')) && (DAT_1410b67dc == 1)) &&
     (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0)) {
    uVar11 = (ulonglong)((longlong)DAT_141ec92a0 + (3 - (longlong)DAT_141ec9298)) >> 2;
    if (DAT_141ec92a0 < DAT_141ec9298) {
      uVar11 = uVar12;
    }
    piVar9 = DAT_141ec9298;
    uVar13 = uVar12;
    if (uVar11 != 0) {
      do {
        iVar2 = *piVar9;
        lVar5 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
        if (((lVar5 != 0) && (iVar2 != -1)) && (iVar8 = (int)lVar5 + -1, uVar6 = uVar12, -1 < iVar8)
           ) {
          do {
            iVar7 = iVar8 + (int)uVar6 >> 1;
            lVar5 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar7 * 8);
            if (*(int *)(lVar5 + 0xe0) == iVar2) {
              if ((lVar5 != 0) && (lVar5 != param_1)) {
                uVar6 = FUN_14000f360(&DAT_141c66fd0,*(undefined4 *)(lVar5 + 0xd8));
                if ((uVar6 != 0) && ((*(uint *)(uVar6 + 0x110) & 2) != 0)) {
                  uVar6 = uVar12;
                }
                lVar5 = FUN_1407b5f90(lVar5,*(undefined4 *)(param_1 + 0xe0),uVar6);
                if (lVar5 != 0) {
                  *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 1;
                }
              }
              break;
            }
            if (iVar2 < *(int *)(lVar5 + 0xe0)) {
              iVar8 = iVar7 + -1;
            }
            else {
              uVar6 = (ulonglong)(iVar7 + 1);
            }
          } while ((int)uVar6 <= iVar8);
        }
        uVar13 = uVar13 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar13 < uVar11);
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 8);
  if ((lVar5 != 0) && (puVar4 = *(undefined8 **)(lVar5 + 0x70), puVar4 != (undefined8 *)0x0)) {
    plVar10 = (longlong *)*puVar4;
    uVar11 = (ulonglong)((longlong)puVar4[1] + (7 - (longlong)plVar10)) >> 3;
    if ((longlong *)puVar4[1] < plVar10) {
      uVar11 = uVar12;
    }
    if (uVar11 != 0) {
      do {
        sVar3 = FUN_14073eb00(param_1,0,*(undefined4 *)*plVar10);
        if (sVar3 != 0) {
          *(int *)(*plVar10 + 0x24) = *(int *)(*plVar10 + 0x24) + 1;
        }
        plVar10 = plVar10 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar11);
    }
  }
  return;
}

