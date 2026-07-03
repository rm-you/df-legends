// FUN_140c47c20 @ 140c47c20
// callees:
//   -> 14018f3f0 FUN_14018f3f0
//   -> 1406b54b0 FUN_1406b54b0
//   -> 1406b73b0 FUN_1406b73b0
//   -> 140973d30 FUN_140973d30
//   -> 140ca7950 FUN_140ca7950
//   -> 140ca7b70 FUN_140ca7b70
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140c5ff60 FUN_140c5ff60
//   -> 14073cef0 FUN_14073cef0
//   -> 14073d5b0 FUN_14073d5b0
//   -> 14073d100 FUN_14073d100
//   -> 140cc1710 FUN_140cc1710
//   -> 140c47930 FUN_140c47930
//   -> 1405af830 FUN_1405af830
//   -> 140cc1410 FUN_140cc1410


void FUN_140c47c20(longlong param_1,char param_2)

{
  void *pvVar1;
  void *_Dst;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  uVar16 = 0;
  if ((param_2 == '\0') &&
     (uVar9 = uVar16, uVar8 = uVar16, lVar11 = DAT_141c6fda0,
     *(longlong *)(param_1 + 0xb18) - *(longlong *)(param_1 + 0xb10) >> 2 != 0)) {
    do {
      iVar15 = *(int *)(uVar9 + *(longlong *)(param_1 + 0xb10));
      lVar3 = DAT_141c6fda8 - lVar11 >> 3;
      if ((lVar3 != 0) && ((iVar15 != -1 && (iVar7 = (int)lVar3 + -1, uVar12 = uVar16, -1 < iVar7)))
         ) {
        do {
          iVar5 = (int)uVar12 + iVar7 >> 1;
          lVar3 = *(longlong *)(lVar11 + (longlong)iVar5 * 8);
          if (*(int *)(lVar3 + 0x50) == iVar15) {
            if (lVar3 != 0) {
              FUN_14018f3f0(lVar3,*(undefined4 *)(param_1 + 0x140));
              lVar11 = DAT_141c6fda0;
            }
            break;
          }
          if (iVar15 < *(int *)(lVar3 + 0x50)) {
            iVar7 = iVar5 + -1;
          }
          else {
            uVar12 = (ulonglong)(iVar5 + 1);
          }
        } while ((int)uVar12 <= iVar7);
      }
      uVar10 = (int)uVar8 + 1;
      uVar9 = uVar9 + 4;
      uVar8 = (ulonglong)uVar10;
    } while ((ulonglong)(longlong)(int)uVar10 <
             (ulonglong)(*(longlong *)(param_1 + 0xb18) - *(longlong *)(param_1 + 0xb10) >> 2));
  }
  lVar11 = DAT_141c66fe8;
  if ((*(byte *)(param_1 + 0x110) & 0x40) != 0) {
    if (DAT_141c34788 < DAT_141c34790) {
      plVar4 = DAT_141c34788;
      do {
        lVar11 = *plVar4;
        if (*(int *)(lVar11 + 0xc) == *(int *)(param_1 + 0x140)) {
          *(uint *)(lVar11 + 0x20e0) = *(uint *)(lVar11 + 0x20e0) | 1;
          if (param_2 == '\0') {
            uVar10 = *(uint *)(lVar11 + 0x20e0) | 8;
          }
          else {
            uVar10 = *(uint *)(lVar11 + 0x20e0) | 2;
          }
          *(uint *)(lVar11 + 0x20e0) = uVar10;
          break;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 < DAT_141c34790);
    }
    lVar11 = DAT_141c66fe8;
    uVar9 = uVar16;
    uVar8 = uVar16;
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(uVar9 + lVar11) + 0x398) == param_1) {
          *(undefined8 *)(*(longlong *)(uVar9 + lVar11) + 0x398) = 0;
          lVar11 = DAT_141c66fe8;
        }
        uVar10 = (int)uVar8 + 1;
        uVar9 = uVar9 + 8;
        uVar8 = (ulonglong)uVar10;
      } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(DAT_141c66ff0 - lVar11 >> 3));
    }
  }
  if ((*(uint *)(param_1 + 0x110) & 0x800) != 0) {
    iVar15 = *(int *)(param_1 + 0xc10);
    if ((iVar15 != -1) && (iVar7 = (int)(DAT_141c36a20 - DAT_141c36a18 >> 3) + -1, -1 < iVar7)) {
      plVar4 = (longlong *)(DAT_141c36a18 + (longlong)iVar7 * 8);
      do {
        if ((*(int *)(*plVar4 + 8) == iVar15) || (*(int *)(*plVar4 + 0xc) == iVar15)) {
          lVar3 = *(longlong *)(DAT_141c36a18 + (longlong)iVar7 * 8);
          if (lVar3 != 0) {
            if (param_2 == '\0') {
              FUN_1406b54b0(lVar3,param_1);
            }
            else {
              FUN_1406b73b0();
            }
            FUN_140973d30(&DAT_141c34700,param_1);
            lVar11 = DAT_141c66fe8;
          }
          break;
        }
        plVar4 = plVar4 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    uVar9 = uVar16;
    uVar8 = uVar16;
    if (DAT_141c66ff0 - lVar11 >> 3 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(lVar11 + uVar9) + 0x398) == param_1) {
          *(undefined8 *)(*(longlong *)(lVar11 + uVar9) + 0x398) = 0;
          lVar11 = DAT_141c66fe8;
        }
        uVar10 = (int)uVar8 + 1;
        uVar9 = uVar9 + 8;
        uVar8 = (ulonglong)uVar10;
      } while ((ulonglong)(longlong)(int)uVar10 < (ulonglong)(DAT_141c66ff0 - lVar11 >> 3));
    }
  }
  FUN_140ca7950(param_1);
  FUN_140ca7b70(param_1);
  plVar4 = *(longlong **)(param_1 + 0x1398);
  uVar9 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x13a0) + (7 - (longlong)plVar4)) >> 3;
  if (*(longlong **)(param_1 + 0x13a0) < plVar4) {
    uVar9 = uVar16;
  }
  uVar8 = uVar16;
  if (uVar9 != 0) {
    do {
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*plVar4 + 8) = 0xffffffff;
      *(undefined4 *)(*plVar4 + 0xc) = 0xffffffff;
      plVar4 = plVar4 + 1;
    } while (uVar8 < uVar9);
  }
  *(undefined8 *)(param_1 + 0x13a0) = *(undefined8 *)(param_1 + 0x1398);
  iVar15 = (int)((longlong)DAT_141c3cd00 - (longlong)DAT_141c3ccf8 >> 3) + -1;
  uVar9 = uVar16;
  if (-1 < iVar15) {
    do {
      iVar7 = iVar15 + (int)uVar9 >> 1;
      if (*(int *)DAT_141c3ccf8[iVar7] == *(int *)(param_1 + 0x130)) {
        if (iVar7 != -1) {
          free((void *)DAT_141c3ccf8[iVar7]);
          plVar4 = DAT_141c3ccf8 + iVar7;
          memmove(plVar4,plVar4 + 1,(longlong)DAT_141c3cd00 - (longlong)(plVar4 + 1));
          DAT_141c3cd00 = DAT_141c3cd00 + -1;
        }
        break;
      }
      if (*(int *)(param_1 + 0x130) < *(int *)DAT_141c3ccf8[iVar7]) {
        iVar15 = iVar7 + -1;
      }
      else {
        uVar9 = (ulonglong)(iVar7 + 1);
      }
    } while ((int)uVar9 <= iVar15);
  }
  uVar9 = (ulonglong)((longlong)DAT_141c3cd00 + (7 - (longlong)DAT_141c3ccf8)) >> 3;
  if (DAT_141c3cd00 < DAT_141c3ccf8) {
    uVar9 = uVar16;
  }
  plVar4 = DAT_141c3ccf8;
  uVar8 = uVar16;
  if (uVar9 != 0) {
    do {
      if (*(int *)(*plVar4 + 4) == *(int *)(param_1 + 0x130)) {
        *(undefined4 *)(*plVar4 + 4) = 0xffffffff;
      }
      uVar8 = uVar8 + 1;
      plVar4 = plVar4 + 1;
    } while (uVar8 < uVar9);
  }
  FUN_140c5ff60(param_1);
  iVar15 = (int)(DAT_141c369f0 - DAT_141c369e8 >> 2) + -1;
  if (-1 < iVar15) {
    lVar11 = (longlong)iVar15 * 4;
    lVar3 = DAT_141c369e8;
    lVar13 = DAT_141c369f0;
    lVar17 = lVar11;
    do {
      if (*(int *)(lVar11 + lVar3) == *(int *)(param_1 + 0x130)) {
        pvVar1 = (void *)(lVar3 + lVar17 + 4);
        memmove((void *)(lVar3 + lVar17),pvVar1,lVar13 - (longlong)pvVar1);
        lVar13 = DAT_141c369f0 + -4;
        lVar3 = DAT_141c369e8;
        DAT_141c369f0 = lVar13;
      }
      lVar17 = lVar17 + -4;
      lVar11 = lVar11 + -4;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x128) = 0xffff;
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (DAT_141c34750 == param_1) {
    DAT_141c34750 = 0;
    DAT_141c34708 = 0;
    DAT_141c3470c = 5000;
  }
  iVar15 = (int)(DAT_141c6fdc0 - DAT_141c6fdb8 >> 3) + -1;
  lVar11 = (longlong)iVar15;
  if (-1 < iVar15) {
    do {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(DAT_141c6fdb8 + lVar11 * 8) + 0xb8))();
      if (plVar4 != (longlong *)0x0) {
        lVar3 = *plVar4;
        iVar15 = (int)(plVar4[1] - lVar3 >> 2) + -1;
        if (-1 < iVar15) {
          lVar13 = (longlong)iVar15;
          piVar14 = (int *)(lVar3 + lVar13 * 4);
          do {
            if (*piVar14 == *(int *)(param_1 + 0x130)) {
              _Dst = (void *)(lVar3 + (longlong)iVar15 * 4);
              pvVar1 = (void *)((longlong)_Dst + 4);
              memmove(_Dst,pvVar1,plVar4[1] - (longlong)pvVar1);
              plVar4[1] = plVar4[1] + -4;
              break;
            }
            iVar15 = iVar15 + -1;
            piVar14 = piVar14 + -1;
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  if (param_2 != '\0') {
    iVar15 = *(int *)(param_1 + 0xc10);
    lVar11 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
    if ((lVar11 != 0) && (iVar15 != -1)) {
      iVar7 = (int)lVar11 + -1;
      uVar9 = uVar16;
      uVar8 = uVar16;
      if (-1 < iVar7) {
        do {
          iVar6 = iVar7 + (int)uVar8 >> 1;
          uVar9 = *(ulonglong *)(DAT_141d7a0a8 + (longlong)iVar6 * 8);
          iVar5 = *(int *)(uVar9 + 0xe0);
          if (iVar5 == iVar15) break;
          if (iVar15 < iVar5) {
            iVar7 = iVar6 + -1;
          }
          else {
            uVar8 = (ulonglong)(iVar6 + 1);
          }
          uVar9 = uVar16;
        } while ((int)uVar8 <= iVar7);
      }
      if ((uVar9 != 0) &&
         (iVar15 = (int)(*(longlong *)(uVar9 + 0xf0) - *(longlong *)(uVar9 + 0xe8) >> 3) + -1,
         -1 < iVar15)) {
        lVar11 = (longlong)iVar15 * 8;
        do {
          sVar2 = (**(code **)**(undefined8 **)(lVar11 + *(longlong *)(uVar9 + 0xe8)))();
          if (sVar2 == 10) {
            FUN_14073d100(uVar9,iVar15,0,1);
          }
          else if (sVar2 == 0xc) {
            FUN_14073d5b0(uVar9,iVar15);
          }
          else if (sVar2 == 0xf) {
            FUN_14073cef0(uVar9,iVar15);
          }
          lVar11 = lVar11 + -8;
          iVar15 = iVar15 + -1;
        } while (-1 < iVar15);
      }
    }
    FUN_140cc1710(param_1);
  }
  FUN_140c47930(param_1);
  FUN_1405af830(param_1);
  FUN_140cc1410(param_1);
  return;
}

