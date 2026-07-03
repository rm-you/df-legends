// FUN_1407b5f90 @ 1407b5f90
// callees:
//   -> 1407b5400 FUN_1407b5400
//   -> 140dfb5c4 operator_new
//   -> 140071810 FUN_140071810
//   -> 1407b5510 FUN_1407b5510
//   -> 1407410f0 FUN_1407410f0
//   -> 140740270 FUN_140740270
//   -> 1407b5cb0 FUN_1407b5cb0
//   -> 140dfb5b4 free
//   -> 1407b5980 FUN_1407b5980


int * FUN_1407b5f90(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  short sVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar13;
  int iVar14;
  undefined8 local_res20;
  int local_38;
  int iStack_34;
  undefined1 local_30 [4];
  int local_2c;
  ulonglong uVar12;
  
  FUN_1407b5400();
  if (param_2 == -1) {
    return (int *)0x0;
  }
  iVar8 = 0;
  iVar14 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x60);
  lVar5 = *plVar1;
  iVar9 = (int)(plVar1[1] - lVar5 >> 3) + -1;
  if (-1 < iVar9) {
    do {
      iVar7 = iVar9 + iVar8 >> 1;
      piVar4 = *(int **)(lVar5 + (longlong)iVar7 * 8);
      if (*piVar4 == param_2) {
        FUN_1407b5510(param_1,piVar4,param_3);
        return piVar4;
      }
      if (param_2 < *piVar4) {
        iVar9 = iVar7 + -1;
      }
      else {
        iVar8 = iVar7 + 1;
      }
    } while (iVar8 <= iVar9);
  }
  piVar4 = operator_new(0xa0);
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[4] = 0;
  piVar4[5] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  piVar4[9] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  piVar4[0x15] = 0;
  piVar4[0x16] = 0;
  piVar4[0x17] = 0;
  piVar4[0x18] = 0;
  piVar4[0x19] = 0;
  piVar4[0x1a] = 0;
  piVar4[1] = 0;
  piVar4[0x1b] = -1;
  piVar4[0x26] = -1;
  piVar4[0x27] = -1;
  *(undefined2 *)(piVar4 + 0x14) = 0xffff;
  piVar4[0x1d] = -1000000;
  piVar4[0x1e] = -1000000;
  piVar4[0x1f] = -1000000;
  piVar4[0x20] = 0;
  piVar4[0x21] = 0;
  piVar4[0x22] = 0;
  piVar4[0x23] = 0;
  piVar4[0x24] = 0;
  piVar4[0x25] = 0;
  *piVar4 = param_2;
  local_res20 = piVar4;
  FUN_140071810(piVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x60));
  lVar5 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
  if ((lVar5 != 0) && (iVar9 = (int)lVar5 + -1, -1 < iVar9)) {
    do {
      iVar8 = iVar9 + iVar14 >> 1;
      lVar5 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar8 * 8);
      if (*(int *)(lVar5 + 0xe0) == param_2) {
        if (lVar5 == 0) {
          return piVar4;
        }
        FUN_1407410f0(param_1,&local_res20,&local_38,local_30);
        FUN_1407410f0(lVar5,(longlong)&local_res20 + 4,&iStack_34,&local_2c);
        if (DAT_1410b67dc == 3) {
          lVar11 = *(longlong *)(param_1 + 0x160);
          bVar2 = false;
          if ((lVar11 != 0) &&
             ((*(longlong *)(lVar11 + 0x48) == lVar5 || (*(longlong *)(lVar11 + 0x50) == lVar5)))) {
            bVar2 = true;
          }
        }
        else {
          sVar3 = FUN_140740270(param_1,5,param_2);
          bVar2 = false;
          if (sVar3 != 0) {
            bVar2 = true;
          }
        }
        iVar9 = (int)local_res20;
        if ((((iVar9 == local_res20._4_4_) && (iVar9 != -1)) ||
            ((local_38 == iStack_34 && (local_38 != -1)))) ||
           (((((iVar8 = *(int *)(param_1 + 0xe0), iVar8 == local_res20._4_4_ || (iVar8 == iStack_34)
               ) || (*(int *)(lVar5 + 0xe0) == iVar9)) ||
             ((*(int *)(lVar5 + 0xe0) == local_38 || (iVar8 == local_2c)))) || (bVar2)))) {
          piVar4[0x15] = 100;
          piVar4[0x16] = 100;
          piVar4[0x17] = 0;
          piVar4[0x18] = 100;
          piVar4[0x19] = 100;
        }
        if (DAT_1410b67dc == 3) {
          if ((*(longlong *)(param_1 + 0x160) != 0) &&
             (iVar9 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x3c) + -1, lVar11 = (longlong)iVar9
             , -1 < iVar9)) {
            lVar13 = lVar11 * 2 + 0x30;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x160) + lVar11 * 8) == lVar5) {
                FUN_1407b5cb0();
                *(undefined2 *)(piVar4 + 0x14) =
                     *(undefined2 *)(lVar13 + *(longlong *)(param_1 + 0x160));
              }
              lVar13 = lVar13 + -2;
              lVar11 = lVar11 + -1;
            } while (-1 < lVar11);
          }
          goto LAB_1407b6396;
        }
        lVar5 = *(longlong *)(param_1 + 0x138);
        if (lVar5 == 0) goto LAB_1407b6396;
        uVar10 = *(int *)(lVar5 + 0x24) - 1;
        if ((int)uVar10 < 0) goto LAB_1407b6378;
        lVar11 = (longlong)(int)uVar10;
        piVar6 = (int *)(lVar5 + lVar11 * 4);
        goto LAB_1407b62c0;
      }
      if (param_2 < *(int *)(lVar5 + 0xe0)) {
        iVar9 = iVar8 + -1;
      }
      else {
        iVar14 = iVar8 + 1;
      }
    } while (iVar14 <= iVar9);
  }
  return piVar4;
LAB_1407b62c0:
  uVar12 = (ulonglong)uVar10;
  if (*piVar6 == param_2) {
    lVar13 = (longlong)(int)uVar10 * 2 + 0x18;
    FUN_1407b5cb0(lVar5,*(undefined2 *)(lVar13 + lVar5),piVar4 + 0x15);
    *(undefined2 *)(piVar4 + 0x14) = *(undefined2 *)(lVar13 + *(longlong *)(param_1 + 0x138));
    if ((int)uVar12 < *(int *)(*(longlong *)(param_1 + 0x138) + 0x24) + -1) {
      lVar5 = (longlong)(int)uVar10 * 4;
      do {
        lVar13 = lVar13 + 2;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
        lVar5 = lVar5 + 4;
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + -4 + lVar5) =
             *(undefined4 *)(lVar11 * 4 + 4 + *(longlong *)(param_1 + 0x138));
        *(undefined2 *)(*(longlong *)(param_1 + 0x138) + -2 + lVar13) =
             *(undefined2 *)(lVar11 * 2 + 0x1a + *(longlong *)(param_1 + 0x138));
      } while ((int)uVar10 < *(int *)(*(longlong *)(param_1 + 0x138) + 0x24) + -1);
    }
    piVar6 = (int *)(*(longlong *)(param_1 + 0x138) + 0x24);
    *piVar6 = *piVar6 + -1;
LAB_1407b6378:
    if (*(int *)((longlong)*(void **)(param_1 + 0x138) + 0x24) == 0) {
      free(*(void **)(param_1 + 0x138));
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
LAB_1407b6396:
    FUN_1407b5980(param_1,piVar4 + 0x15,param_3);
    FUN_1407b5510(param_1,piVar4,param_3);
    return piVar4;
  }
  uVar10 = uVar10 - 1;
  piVar6 = piVar6 + -1;
  lVar11 = lVar11 + -1;
  if (lVar11 < 0) goto LAB_1407b6378;
  goto LAB_1407b62c0;
}

