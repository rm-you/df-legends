// FUN_140cdcd70 @ 140cdcd70
// callees:
//   -> 140dfdccc atan2
//   -> 140dfdcd2 cos
//   -> 140dfdcde sin
//   -> 140c5cf00 FUN_140c5cf00
//   -> 140803150 FUN_140803150
//   -> 140c840a0 FUN_140c840a0


void FUN_140cdcd70(longlong param_1,short param_2,short param_3,short param_4)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  if ((*(uint *)(param_1 + 0x114) & 0x4000) != 0) {
    uVar6 = (int)param_2 - (int)*(short *)(param_1 + 0xa8);
    uVar8 = (int)uVar6 >> 0x1f;
    if ((((int)((uVar6 ^ uVar8) - uVar8) < 2) &&
        (uVar6 = (int)param_3 - (int)*(short *)(param_1 + 0xaa), uVar8 = (int)uVar6 >> 0x1f,
        (int)((uVar6 ^ uVar8) - uVar8) < 2)) && (param_4 == *(short *)(param_1 + 0xac))) {
      *(undefined2 *)(param_1 + 0x7f0) = *(undefined2 *)(param_1 + 0x7ea);
      *(undefined2 *)(param_1 + 0x7f2) = *(undefined2 *)(param_1 + 0x7ec);
      *(undefined2 *)(param_1 + 0x7f4) = *(undefined2 *)(param_1 + 0x7ee);
      *(undefined2 *)(param_1 + 0x7ea) = *(undefined2 *)(param_1 + 0xa8);
      *(undefined2 *)(param_1 + 0x7ec) = *(undefined2 *)(param_1 + 0xaa);
      *(undefined2 *)(param_1 + 0x7ee) = *(undefined2 *)(param_1 + 0xac);
    }
    else {
      *(short *)(param_1 + 0x7f0) = param_2;
      *(short *)(param_1 + 0x7f2) = param_3;
      *(short *)(param_1 + 0x7f4) = param_4;
      *(short *)(param_1 + 0x7ea) = param_2;
      *(short *)(param_1 + 0x7ec) = param_3;
      *(short *)(param_1 + 0x7ee) = param_4;
    }
  }
  sVar2 = param_2;
  sVar1 = param_3;
  if (*(short *)(param_1 + 0xc0) != -30000) {
    sVar1 = *(short *)(param_1 + 0xc2);
    sVar2 = *(short *)(param_1 + 0xc0);
  }
  lVar15 = *(longlong *)(param_1 + 0x478);
  if (lVar15 != 0) {
    sVar2 = *(short *)(lVar15 + 0xa8);
    sVar1 = *(short *)(lVar15 + 0xaa);
  }
  if ((((param_2 == *(short *)(param_1 + 0xa8)) && (param_3 == *(short *)(param_1 + 0xaa))) ||
      ((iVar10 = *(int *)(param_1 + 0x490), iVar10 == 0 && (*(int *)(param_1 + 0x494) == 0)))) ||
     (iVar9 = *(int *)(param_1 + 0x49c), iVar9 == -1)) goto LAB_140cdd05f;
  dVar16 = atan2((double)((int)sVar1 - (int)*(short *)(param_1 + 0xaa)),
                 (double)((int)sVar2 - (int)*(short *)(param_1 + 0xa8)));
  if (dVar16 < 0.0) {
    dVar16 = dVar16 + DAT_140f92b70;
  }
  dVar17 = cos(dVar16);
  dVar4 = DAT_140f92b78;
  dVar17 = dVar17 * DAT_140f92b78;
  dVar18 = sin(dVar16);
  dVar19 = DAT_140f92bd8;
  iVar12 = (int)(dVar16 * DAT_140f92bd8);
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  else if (0x1887 < iVar12) {
    iVar12 = 0x1887;
  }
  uVar6 = iVar12 - iVar9;
  if (0xc44 < (int)uVar6) {
    uVar6 = uVar6 - 0x1888;
  }
  if ((int)uVar6 < -0xc44) {
    uVar6 = uVar6 + 0x1888;
  }
  if ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) < 2000) {
    if ((iVar10 != (int)dVar17) || (*(int *)(param_1 + 0x494) != (int)(dVar18 * dVar4))) {
      *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x800000;
      *(int *)(param_1 + 0x490) = (int)dVar17;
      *(int *)(param_1 + 0x494) = (int)(dVar18 * dVar4);
    }
    *(int *)(param_1 + 0x49c) = iVar12;
    goto LAB_140cdd05f;
  }
  if ((int)uVar6 < 0) {
    *(int *)(param_1 + 0x49c) = iVar9 + -1000;
    if (iVar9 + -1000 < 0) {
      iVar9 = iVar9 + 0x14a0;
LAB_140cdcffd:
      *(int *)(param_1 + 0x49c) = iVar9;
    }
  }
  else if ((0 < (int)uVar6) && (*(int *)(param_1 + 0x49c) = iVar9 + 1000, 0x1887 < iVar9 + 1000)) {
    iVar9 = iVar9 + -0x14a0;
    goto LAB_140cdcffd;
  }
  dVar19 = (double)*(int *)(param_1 + 0x49c) / dVar19;
  dVar16 = cos(dVar19);
  dVar19 = sin(dVar19);
  if ((iVar10 != (int)(dVar16 * dVar4)) || (*(int *)(param_1 + 0x494) != (int)(dVar19 * dVar4))) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x800000;
    *(int *)(param_1 + 0x490) = (int)(dVar16 * dVar4);
    *(int *)(param_1 + 0x494) = (int)(dVar19 * dVar4);
  }
LAB_140cdd05f:
  iVar10 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
  while (iVar10 = iVar10 + -1, -1 < iVar10) {
    uVar11 = (ulonglong)iVar10;
    if (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3))
    {
      cVar5 = FUN_140c5cf00(param_1,**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + uVar11 * 8));
      if (cVar5 != '\0') {
        FUN_140803150(**(undefined8 **)(*(longlong *)(param_1 + 0x3f8) + uVar11 * 8),0,1,0);
      }
    }
    else {
      iVar10 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3);
    }
  }
  if ((*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3 != 0) &&
     (iVar10 = (int)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3) + -1,
     -1 < iVar10)) {
    lVar15 = (longlong)iVar10 * 8;
    do {
      iVar12 = **(int **)(lVar15 + *(longlong *)(param_1 + 0xaf8));
      iVar9 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3);
      if ((iVar9 != 0) && (iVar12 != -1)) {
        iVar9 = iVar9 + -1;
        iVar13 = 0;
        if (-1 < iVar9) {
          do {
            iVar7 = iVar13 + iVar9 >> 1;
            lVar3 = *(longlong *)(DAT_141c66fd0 + (longlong)iVar7 * 8);
            if (*(int *)(lVar3 + 0x130) == iVar12) {
              if ((lVar3 != 0) &&
                 (iVar9 = (int)(*(longlong *)(lVar3 + 0xb00) - *(longlong *)(lVar3 + 0xaf8) >> 3) +
                          -1, -1 < iVar9)) {
                lVar14 = (longlong)iVar9 * 8;
                do {
                  if (**(int **)(lVar14 + *(longlong *)(lVar3 + 0xaf8)) == *(int *)(param_1 + 0x130)
                     ) {
                    FUN_140c840a0(lVar3,iVar9);
                  }
                  lVar14 = lVar14 + -8;
                  iVar9 = iVar9 + -1;
                } while (-1 < iVar9);
              }
              break;
            }
            if (iVar12 < *(int *)(lVar3 + 0x130)) {
              iVar9 = iVar7 + -1;
            }
            else {
              iVar13 = iVar7 + 1;
            }
          } while (iVar13 <= iVar9);
        }
      }
      FUN_140c840a0(param_1,iVar10);
      lVar15 = lVar15 + -8;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  return;
}

