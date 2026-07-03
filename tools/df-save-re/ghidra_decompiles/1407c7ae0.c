// FUN_1407c7ae0 @ 1407c7ae0
// callees:
//   -> 1404e97a0 FUN_1404e97a0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140740090 FUN_140740090
//   -> 140050b50 FUN_140050b50
//   -> 14073f6d0 FUN_14073f6d0
//   -> 140002020 FUN_140002020


/* WARNING: Removing unreachable block (ram,0x0001407c7d57) */
/* WARNING: Removing unreachable block (ram,0x0001407c7d60) */
/* WARNING: Removing unreachable block (ram,0x0001407c7d81) */
/* WARNING: Removing unreachable block (ram,0x0001407c7d4b) */
/* WARNING: Removing unreachable block (ram,0x0001407c816d) */

void FUN_1407c7ae0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  short *psVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  
  uVar20 = 0;
  bVar4 = false;
  plVar10 = *(longlong **)(param_1 + 0xf0);
  lVar19 = DAT_141c53718;
  for (plVar15 = *(longlong **)(param_1 + 0xe8); plVar15 < plVar10; plVar15 = plVar15 + 1) {
    puVar12 = (undefined8 *)*plVar15;
    sVar5 = (**(code **)*puVar12)(puVar12);
    lVar19 = DAT_141c53718;
    if (sVar5 == 0) {
      iVar7 = *(int *)(puVar12 + 1);
      lVar8 = DAT_141c53720 - DAT_141c53718 >> 3;
      if (((lVar8 != 0) && (iVar7 != -1)) &&
         (iVar11 = (int)lVar8 + -1, uVar16 = uVar20, -1 < iVar11)) {
        do {
          iVar9 = iVar11 + (int)uVar16 >> 1;
          lVar8 = *(longlong *)(DAT_141c53718 + (longlong)iVar9 * 8);
          if (*(int *)(lVar8 + 4) == iVar7) {
            if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x94) & 0x2000000) != 0)) {
              bVar4 = true;
              iVar7 = FUN_1404e97a0(lVar8);
              if (iVar7 != -1) {
                uVar13 = FUN_1409fc0c0();
                FUN_140740090(param_1,4,iVar7,
                              (short)((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff) / 0xba2e8bb) + 0x5a,0);
              }
              puVar12 = *(undefined8 **)(lVar8 + 0xb0);
              uVar16 = (ulonglong)
                       ((longlong)*(undefined8 **)(lVar8 + 0xb8) + (7 - (longlong)puVar12)) >> 3;
              if (*(undefined8 **)(lVar8 + 0xb8) < puVar12) {
                uVar16 = uVar20;
              }
              uVar14 = uVar20;
              lVar19 = DAT_141c53718;
              if (uVar16 != 0) {
                do {
                  if (*(short *)*puVar12 == 2) {
                    iVar7 = *(int *)((short *)*puVar12 + 2);
                    lVar8 = DAT_141c53720 - lVar19 >> 3;
                    if (((lVar8 != 0) && (iVar7 != -1)) &&
                       (iVar11 = (int)lVar8 + -1, uVar17 = uVar20, -1 < iVar11)) {
                      do {
                        iVar9 = iVar11 + (int)uVar17 >> 1;
                        psVar3 = *(short **)(lVar19 + (longlong)iVar9 * 8);
                        if (*(int *)(psVar3 + 2) == iVar7) {
                          if (((psVar3 != (short *)0x0) && (*psVar3 == 5)) &&
                             ((*(uint *)(psVar3 + 0x4a) & 0x400000) == 0)) {
                            FUN_140050b50();
                            lVar19 = DAT_141c53718;
                          }
                          break;
                        }
                        if (iVar7 < *(int *)(psVar3 + 2)) {
                          iVar11 = iVar9 + -1;
                        }
                        else {
                          uVar17 = (ulonglong)(iVar9 + 1);
                        }
                      } while ((int)uVar17 <= iVar11);
                    }
                  }
                  puVar12 = puVar12 + 1;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar16);
              }
            }
            break;
          }
          if (iVar7 < *(int *)(lVar8 + 4)) {
            iVar11 = iVar9 + -1;
          }
          else {
            uVar16 = (ulonglong)(iVar9 + 1);
          }
        } while ((int)uVar16 <= iVar11);
      }
    }
  }
  if (!bVar4) {
    iVar7 = *(int *)(param_1 + 0xbc);
    if (iVar7 == -1) {
      iVar7 = *(int *)(param_1 + 0xb0);
      if (((iVar7 != -1) && (DAT_141c53720 - lVar19 >> 3 != 0)) &&
         (iVar11 = (int)(DAT_141c53720 - lVar19 >> 3) + -1, -1 < iVar11)) {
        do {
          iVar9 = iVar11 + (int)uVar20 >> 1;
          psVar3 = *(short **)(lVar19 + (longlong)iVar9 * 8);
          if (*(int *)(psVar3 + 2) == iVar7) {
            if (psVar3 == (short *)0x0) {
              return;
            }
            iVar7 = FUN_1404e97a0(psVar3);
            if (iVar7 == -1) {
              return;
            }
            if (*psVar3 != 5) {
              uVar13 = FUN_1409fc0c0();
              uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                0x7fffffff;
              goto LAB_1407c8142;
            }
            uVar13 = FUN_1409fc0c0();
            sVar5 = (short)((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                      0x7fffffff) / 0xba2e8bb) + 0x5a;
            goto LAB_1407c8155;
          }
          if (iVar7 < *(int *)(psVar3 + 2)) {
            iVar11 = iVar9 + -1;
          }
          else {
            uVar20 = (ulonglong)(iVar9 + 1);
          }
        } while ((int)uVar20 <= iVar11);
      }
    }
    else {
      iVar11 = (int)(DAT_141d692e8 - DAT_141d692e0 >> 3) + -1;
      uVar16 = uVar20;
      if (-1 < iVar11) {
        while( true ) {
          iVar9 = iVar11 + (int)uVar16 >> 1;
          piVar1 = *(int **)(DAT_141d692e0 + (longlong)iVar9 * 8);
          if (*piVar1 == iVar7) break;
          if (iVar7 < *piVar1) {
            iVar11 = iVar9 + -1;
          }
          else {
            uVar16 = (ulonglong)(iVar9 + 1);
          }
          if (iVar11 < (int)uVar16) {
            return;
          }
        }
        if (piVar1 == (int *)0x0) {
          return;
        }
        iVar7 = 0;
        plVar10 = *(longlong **)(piVar1 + 0x68);
        uVar16 = (ulonglong)((longlong)*(longlong **)(piVar1 + 0x6a) + (7 - (longlong)plVar10)) >> 3
        ;
        if (*(longlong **)(piVar1 + 0x6a) < plVar10) {
          uVar16 = uVar20;
        }
        uVar14 = uVar20;
        uVar17 = uVar20;
        uVar18 = uVar20;
        if (1 < uVar16) {
          lVar8 = (uVar16 - 2 >> 1) + 1;
          uVar14 = lVar8 * 2;
          do {
            uVar17 = (ulonglong)(uint)((int)uVar17 + *(int *)(*plVar10 + 8));
            uVar18 = (ulonglong)(uint)((int)uVar18 + *(int *)(plVar10[1] + 8));
            plVar10 = plVar10 + 2;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (uVar14 < uVar16) {
          iVar7 = *(int *)(*plVar10 + 8);
        }
        uVar13 = iVar7 + (int)uVar17 + (int)uVar18;
        if (0 < (int)uVar13) {
          iVar7 = -1;
          uVar16 = uVar20;
          if (1 < uVar13) {
            uVar6 = FUN_1409fc0c0();
            uVar16 = (ulonglong)
                     (uVar6 + (int)((longlong)((ulonglong)uVar6 * 0x100000003) >> 0x3f) * 0x7fffffff
                     ) / (ulonglong)((int)(0x7fffffff / (ulonglong)uVar13) + 1);
            lVar19 = DAT_141c53718;
          }
          uVar14 = uVar20;
          for (puVar12 = *(undefined8 **)(piVar1 + 0x68); iVar11 = -1,
              puVar12 < *(undefined8 **)(piVar1 + 0x6a); puVar12 = puVar12 + 1) {
            piVar2 = (int *)*puVar12;
            uVar13 = (int)uVar14 + piVar2[2];
            uVar14 = (ulonglong)uVar13;
            if ((int)uVar16 < (int)uVar13) {
              iVar11 = *piVar2;
              iVar7 = piVar2[1];
              break;
            }
          }
          if (iVar11 == 0) {
            uVar13 = FUN_1409fc0c0();
            uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                              0x7fffffff;
LAB_1407c8142:
            sVar5 = (byte)(uVar13 / 0x147ae15) + 1;
LAB_1407c8155:
            FUN_140740090(param_1,4,iVar7,sVar5,0);
          }
          else if (((iVar11 == 1) && (lVar8 = DAT_141c53720 - lVar19 >> 3, lVar8 != 0)) &&
                  ((iVar7 != -1 && (iVar11 = (int)lVar8 + -1, -1 < iVar11)))) {
            while( true ) {
              iVar9 = iVar11 + (int)uVar20 >> 1;
              lVar8 = *(longlong *)(lVar19 + (longlong)iVar9 * 8);
              if (*(int *)(lVar8 + 4) == iVar7) break;
              if (iVar7 < *(int *)(lVar8 + 4)) {
                iVar11 = iVar9 + -1;
              }
              else {
                uVar20 = (ulonglong)(iVar9 + 1);
              }
              if (iVar11 < (int)uVar20) {
                return;
              }
            }
            if (lVar8 != 0) {
              iVar11 = FUN_1404e97a0(lVar8);
              if (iVar11 != -1) {
                uVar13 = FUN_1409fc0c0();
                FUN_140740090(param_1,4,iVar11,
                              (short)((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >>
                                                     0x3f) * 0x7fffffff) / 0x147ae15) + 1,0);
              }
              if ((*(uint *)(lVar8 + 0x94) & 0x400000) == 0) {
                FUN_14073f6d0(param_1,0,iVar7,100,0);
              }
            }
          }
        }
      }
    }
  }
  return;
}

