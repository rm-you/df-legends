// FUN_140c7f720 @ 140c7f720
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140c81440 FUN_140c81440


void FUN_140c7f720(longlong param_1)

{
  short *psVar1;
  short sVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  ulonglong uVar11;
  short sVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  
  if ((*(uint *)(param_1 + 0x114) & 0x200000) == 0) {
    iVar13 = *(int *)(param_1 + 0x5e4) - *(int *)(param_1 + 0x5f4);
    piVar3 = *(int **)(param_1 + 0x8c8);
    if (piVar3 != (int *)0x0) {
      iVar13 = (*piVar3 * iVar13) / 100 + piVar3[6];
    }
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    sVar9 = (short)((longlong)
                    (ulonglong)(uint)(*(int *)(param_1 + 0x12d8) - *(int *)(param_1 + 0x12d0)) >> 1)
            + -1;
    if (-1 < sVar9) {
      lVar17 = (longlong)sVar9 * 2;
      lVar15 = (longlong)sVar9 * 8;
      do {
        sVar7 = *(short *)(param_1 + 0xa4);
        sVar2 = *(short *)(param_1 + 300);
        lVar4 = *(longlong *)(lVar15 + **(longlong **)(param_1 + 0x5d8));
        sVar12 = *(short *)(lVar4 + 0xe4);
        if ((((-1 < sVar7) &&
             ((ulonglong)(longlong)sVar7 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
            (-1 < sVar2)) &&
           (lVar5 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar7 * 8),
           (ulonglong)(longlong)sVar2 <
           (ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3))) {
          sVar10 = sVar12;
          if (0 < sVar12) {
            iVar8 = iVar13;
            if (5000 < iVar13) {
              iVar8 = 5000;
            }
            sVar12 = (short)((sVar12 * iVar8) / 1000);
            sVar10 = 0;
          }
          sVar12 = sVar12 + sVar10;
        }
        sVar10 = *(short *)(lVar4 + 0xe6);
        if (((-1 < sVar7) &&
            ((ulonglong)(longlong)sVar7 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
           ((-1 < sVar2 &&
            (lVar5 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar7 * 8),
            (ulonglong)(longlong)sVar2 <
            (ulonglong)(*(longlong *)(lVar5 + 0x180) - *(longlong *)(lVar5 + 0x178) >> 3))))) {
          sVar7 = sVar10;
          if (0 < sVar10) {
            sVar7 = 0;
            iVar8 = *(int *)(param_1 + 0x980);
            if (999999 < *(int *)(param_1 + 0x980)) {
              iVar8 = 999999;
            }
            sVar10 = (short)(((iVar8 / 0x9c4) * (int)sVar10) / 100);
          }
          sVar10 = sVar10 + sVar7;
        }
        lVar15 = lVar15 + -8;
        *(short *)(lVar17 + *(longlong *)(param_1 + 0x12d0)) =
             *(short *)(lVar4 + 0xe8) + sVar10 + sVar12;
        *(undefined2 *)(lVar17 + *(longlong *)(param_1 + 0x12e8)) = 0;
        lVar17 = lVar17 + -2;
        sVar9 = sVar9 + -1;
      } while (-1 < sVar9);
    }
    sVar9 = (short)((longlong)
                    (ulonglong)(uint)(*(int *)(param_1 + 0x12d8) - *(int *)(param_1 + 0x12d0)) >> 1)
            + -1;
    if (-1 < sVar9) {
      uVar16 = (ulonglong)sVar9;
      do {
        plVar14 = *(longlong **)(param_1 + 0x5d8);
        if ((((sVar9 < 0) || ((ulonglong)(plVar14[1] - *plVar14 >> 3) <= uVar16)) ||
            ((cVar6 = FUN_14000d840(*(longlong *)(*plVar14 + uVar16 * 8) + 0x48,5), cVar6 == '\0' ||
             (((ulonglong)(plVar14[1] - *plVar14 >> 3) <= uVar16 ||
              (cVar6 = FUN_14000d840(*(longlong *)(*plVar14 + uVar16 * 8) + 0x48,0xd), cVar6 == '\0'
              )))))) &&
           (iVar13 = (int)(*(longlong *)(param_1 + 0x400) - *(longlong *)(param_1 + 0x3f8) >> 3) +
                     -1, lVar15 = (longlong)iVar13, -1 < iVar13)) {
          do {
            sVar7 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x3f8) + lVar15 * 8) + 8);
            if ((sVar7 == 2) || (sVar7 == 5)) {
              psVar1 = (short *)(*(longlong *)(param_1 + 0x12e8) + uVar16 * 2);
              sVar7 = FUN_140c81440(param_1,*(undefined8 *)
                                             (*(longlong *)(param_1 + 0x3f8) + lVar15 * 8),sVar9);
              *psVar1 = *psVar1 + sVar7;
            }
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
        }
        uVar16 = uVar16 - 1;
        sVar9 = sVar9 + -1;
      } while (-1 < sVar9);
    }
    sVar9 = (short)((longlong)
                    (ulonglong)(uint)(*(int *)(param_1 + 0x12d8) - *(int *)(param_1 + 0x12d0)) >> 1)
            + -1;
    if (-1 < sVar9) {
      uVar16 = (ulonglong)sVar9;
      do {
        plVar14 = *(longlong **)(param_1 + 0x5d8);
        if (((((-1 < sVar9) && (uVar16 < (ulonglong)(plVar14[1] - *plVar14 >> 3))) &&
             (cVar6 = FUN_14000d840(*(longlong *)(*plVar14 + uVar16 * 8) + 0x48,0xd), cVar6 != '\0')
             ) && ((uVar16 < (ulonglong)(plVar14[1] - *plVar14 >> 3) &&
                   (sVar7 = *(short *)(*(longlong *)(*plVar14 + uVar16 * 8) + 0x40), -1 < sVar7))))
           && (uVar11 = (ulonglong)sVar7,
              uVar11 < (ulonglong)
                       (*(longlong *)(param_1 + 0x12d8) - *(longlong *)(param_1 + 0x12d0) >> 1))) {
          psVar1 = (short *)(*(longlong *)(param_1 + 0x12d0) + uVar16 * 2);
          *psVar1 = *psVar1 + *(short *)(*(longlong *)(param_1 + 0x12e8) + uVar11 * 2);
          lVar15 = *(longlong *)(param_1 + 0x12d0);
          sVar7 = *(short *)(lVar15 + uVar11 * 2);
          if (*(short *)(lVar15 + uVar16 * 2) < sVar7) {
            *(short *)(lVar15 + uVar16 * 2) = sVar7;
          }
        }
        uVar16 = uVar16 - 1;
        sVar9 = sVar9 + -1;
      } while (-1 < sVar9);
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x200000;
  }
  return;
}

