// FUN_140c800d0 @ 140c800d0
// callees:
//   -> 140c7e4b0 FUN_140c7e4b0
//   -> 140c26340 FUN_140c26340
//   -> 14000d840 FUN_14000d840
//   -> 140c81340 FUN_140c81340
//   -> 140c813c0 FUN_140c813c0


void FUN_140c800d0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  short sVar9;
  ulonglong uVar10;
  short sVar11;
  short sVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  FUN_140c7e4b0();
  if ((*(byte *)(param_1 + 0x114) & 0x20) == 0) {
    cVar5 = FUN_140c26340(param_1);
    sVar9 = (*(short *)(param_1 + 0x12c0) - *(short *)(param_1 + 0x12b8)) + -1;
    if (-1 < sVar9) {
      uVar15 = (ulonglong)sVar9;
      do {
        uVar10 = uVar15;
        if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 2) == 0) {
          *(undefined1 *)(uVar15 + *(longlong *)(param_1 + 0x12b8)) = 1;
          plVar16 = *(longlong **)(param_1 + 0x5d8);
          if (((-1 < sVar9) && (uVar15 < (ulonglong)(plVar16[1] - *plVar16 >> 3))) &&
             (cVar6 = FUN_14000d840(*(longlong *)(*plVar16 + uVar15 * 8) + 0x48), cVar6 != '\0')) {
            uVar10 = 0;
            cVar6 = '\0';
            sVar11 = 0;
            if (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2 != 0) {
              lVar13 = *(longlong *)(param_1 + 0x4d0);
              uVar18 = 0;
              lVar17 = *(longlong *)(param_1 + 0x4d8);
              do {
                uVar1 = *(uint *)(lVar13 + uVar18 * 4);
                if (((((uVar1 & 2) == 0) &&
                     (lVar2 = *plVar16,
                     *(short *)(*(longlong *)(lVar2 + uVar18 * 8) + 0x40) == sVar9)) &&
                    ((-1 < sVar11 &&
                     ((uVar18 < (ulonglong)(plVar16[1] - lVar2 >> 3) &&
                      (cVar7 = FUN_14000d840(*(longlong *)(lVar2 + uVar18 * 8) + 0x48,0x17),
                      cVar7 != '\0')))))) &&
                   ((cVar6 = cVar6 + '\x01', cVar5 == '\0' || ((uVar1 & 0x50) == 0)))) {
                  uVar10 = (ulonglong)(byte)((char)uVar10 + 1);
                }
                sVar11 = sVar11 + 1;
                uVar18 = (ulonglong)sVar11;
              } while (uVar18 < (ulonglong)(lVar17 - lVar13 >> 2));
              if (('\0' < cVar6) && ((char)uVar10 == '\0')) {
                *(undefined1 *)(uVar15 + *(longlong *)(param_1 + 0x12b8)) = 0;
              }
            }
            uVar10 = uVar15;
            if (*(char *)(uVar15 + *(longlong *)(param_1 + 0x12b8)) == '\0') goto LAB_140c8043e;
          }
          if (cVar5 == '\0') {
            if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar10 * 4) & 0x40) != 0) {
              *(undefined1 *)(uVar10 + *(longlong *)(param_1 + 0x12b8)) = 0;
            }
          }
          else {
            sVar11 = sVar9;
            if (sVar9 != -1) {
              while( true ) {
                lVar13 = *(longlong *)(param_1 + 0x4d0);
                lVar17 = (longlong)sVar11;
                if (((*(byte *)(lVar13 + lVar17 * 4) & 0x50) != 0) ||
                   (*(char *)(*(longlong *)(param_1 + 0x1270) + lVar17) == '\0')) break;
                sVar12 = 0;
                if (*(longlong *)(param_1 + 0x4d8) - lVar13 >> 2 != 0) {
                  plVar16 = *(longlong **)(param_1 + 0x5d8);
                  uVar18 = 0;
                  lVar2 = *(longlong *)(param_1 + 0x4d8);
                  lVar3 = *plVar16;
                  do {
                    if ((((*(short *)(*(longlong *)(lVar3 + uVar18 * 8) + 0x40) == sVar11) &&
                         (-1 < sVar12)) && (uVar18 < (ulonglong)(plVar16[1] - lVar3 >> 3))) &&
                       ((cVar6 = FUN_14000d840(*(longlong *)(lVar3 + uVar18 * 8) + 0x48,0xf),
                        cVar6 != '\0' && ((*(byte *)(lVar13 + uVar18 * 4) & 0x50) != 0)))) {
                      *(undefined1 *)(uVar15 + *(longlong *)(param_1 + 0x12b8)) = 0;
                      uVar10 = uVar15;
                      break;
                    }
                    sVar12 = sVar12 + 1;
                    uVar18 = (ulonglong)sVar12;
                    uVar10 = uVar15;
                  } while (uVar18 < (ulonglong)(lVar2 - lVar13 >> 2));
                }
                if (*(char *)(uVar10 + *(longlong *)(param_1 + 0x12b8)) == '\0') goto LAB_140c8043e;
                lVar13 = **(longlong **)(param_1 + 0x5d8);
                sVar11 = *(short *)(*(longlong *)(lVar13 + lVar17 * 8) + 0x40);
                if (((sVar11 < 0) ||
                    ((ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar13 >> 3) <=
                     (ulonglong)(longlong)sVar11)) ||
                   ((cVar6 = FUN_14000d840(*(longlong *)(lVar13 + (longlong)sVar11 * 8) + 0x48,8),
                    cVar6 == '\0' || (sVar11 == -1)))) goto LAB_140c8043e;
              }
              *(undefined1 *)(uVar10 + *(longlong *)(param_1 + 0x12b8)) = 0;
            }
          }
        }
        else {
          *(undefined1 *)(uVar15 + *(longlong *)(param_1 + 0x12b8)) = 0;
        }
LAB_140c8043e:
        sVar9 = sVar9 + -1;
        uVar15 = uVar10 - 1;
      } while (-1 < sVar9);
    }
    uVar15 = 0;
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xc1ffbfff;
    sVar11 = 0;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) & 0xeeffffff;
    iVar14 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
    sVar9 = sVar11;
    if (-1 < iVar14) {
      plVar16 = *(longlong **)(param_1 + 0x5d8);
      do {
        sVar12 = (short)iVar14;
        if (-1 < sVar12) {
          lVar13 = *plVar16;
          if (((ulonglong)(longlong)sVar12 < (ulonglong)(plVar16[1] - lVar13 >> 3)) &&
             (cVar5 = FUN_14000d840(*(longlong *)(lVar13 + (longlong)sVar12 * 8) + 0x48,10),
             cVar5 != '\0')) {
            sVar9 = sVar9 + 1;
          }
        }
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    *(short *)(param_1 + 0xc18) = sVar9;
    iVar14 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
    sVar9 = sVar11;
    if (-1 < iVar14) {
      plVar16 = *(longlong **)(param_1 + 0x5d8);
      lVar13 = (longlong)iVar14;
      do {
        sVar12 = (short)iVar14;
        if (-1 < sVar12) {
          lVar17 = *plVar16;
          if ((((ulonglong)(longlong)sVar12 < (ulonglong)(plVar16[1] - lVar17 >> 3)) &&
              (cVar5 = FUN_14000d840(*(longlong *)(lVar17 + (longlong)sVar12 * 8) + 0x48,10),
              cVar5 != '\0')) && (*(char *)(lVar13 + *(longlong *)(param_1 + 0x12b8)) != '\0')) {
            sVar9 = sVar9 + 1;
          }
        }
        lVar13 = lVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    *(short *)(param_1 + 0xc1a) = sVar9;
    uVar8 = FUN_140c81340(param_1);
    *(undefined2 *)(param_1 + 0xc1c) = uVar8;
    iVar14 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
    sVar9 = sVar11;
    if (-1 < iVar14) {
      plVar16 = *(longlong **)(param_1 + 0x5d8);
      lVar13 = (longlong)iVar14;
      do {
        sVar12 = (short)iVar14;
        if (-1 < sVar12) {
          lVar17 = *plVar16;
          if ((((ulonglong)(longlong)sVar12 < (ulonglong)(plVar16[1] - lVar17 >> 3)) &&
              (cVar5 = FUN_14000d840(*(longlong *)(lVar17 + (longlong)sVar12 * 8) + 0x48,9),
              cVar5 != '\0')) && (*(char *)(lVar13 + *(longlong *)(param_1 + 0x12b8)) != '\0')) {
            sVar9 = sVar9 + 1;
          }
        }
        lVar13 = lVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    *(short *)(param_1 + 0xc1e) = sVar9;
    uVar8 = FUN_140c813c0(param_1);
    *(undefined2 *)(param_1 + 0xc20) = uVar8;
    iVar14 = (int)(*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2) + -1;
    if (-1 < iVar14) {
      plVar16 = *(longlong **)(param_1 + 0x5d8);
      lVar13 = (longlong)iVar14;
      do {
        sVar9 = (short)iVar14;
        if (-1 < sVar9) {
          lVar17 = *plVar16;
          if ((((ulonglong)(longlong)sVar9 < (ulonglong)(plVar16[1] - lVar17 >> 3)) &&
              (cVar5 = FUN_14000d840(*(longlong *)(lVar17 + (longlong)sVar9 * 8) + 0x48,0x16),
              cVar5 != '\0')) && (*(char *)(lVar13 + *(longlong *)(param_1 + 0x12b8)) != '\0')) {
            sVar11 = sVar11 + 1;
          }
        }
        lVar13 = lVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    puVar4 = *(ulonglong **)(param_1 + 0x5d8);
    *(short *)(param_1 + 0xc22) = sVar11;
    sVar9 = -1;
    plVar16 = (longlong *)*puVar4;
    uVar10 = (puVar4[1] - (longlong)plVar16) + 7 >> 3;
    if ((longlong *)puVar4[1] < plVar16) {
      uVar10 = uVar15;
    }
    if (uVar10 != 0) {
      uVar18 = uVar15;
      do {
        sVar11 = (short)uVar15;
        uVar15 = (ulonglong)sVar11;
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 0x802) == 0x800) {
          *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x4000;
        }
        if (-1 < sVar11) {
          if (((uVar15 < (ulonglong)((longlong)(puVar4[1] - *puVar4) >> 3)) &&
              (cVar5 = FUN_14000d840(*(longlong *)(*puVar4 + uVar15 * 8) + 0x48,0x26), cVar5 != '\0'
              )) && ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 0xa00002) != 0)) {
            *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x10000000;
          }
          if ((uVar15 < (ulonglong)((longlong)(puVar4[1] - *puVar4) >> 3)) &&
             (cVar5 = FUN_14000d840(*(longlong *)(*puVar4 + uVar15 * 8) + 0x48,0xc), cVar5 != '\0'))
          {
            if (((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 6) == 0) &&
               ('\0' < *(char *)(uVar15 + *(longlong *)(param_1 + 0x1270)))) {
              *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x10000000;
            }
            else {
              *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x20000000;
            }
          }
          if (((uVar15 < (ulonglong)((longlong)(puVar4[1] - *puVar4) >> 3)) &&
              (cVar5 = FUN_14000d840(*(longlong *)(*puVar4 + uVar15 * 8) + 0x48,3), cVar5 != '\0'))
             && ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 6) == 0)) {
            if (sVar9 != -2) {
              if (sVar9 == -1) {
                sVar9 = *(short *)(*plVar16 + 0x40);
              }
              else if (sVar9 != *(short *)(*plVar16 + 0x40)) {
                *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 0x1000000;
                sVar9 = -2;
              }
            }
            if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar15 * 4) & 8) == 0) {
              *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x2000000;
            }
            else {
              *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x4000000;
            }
          }
        }
        uVar15 = (ulonglong)(ushort)(sVar11 + 1);
        plVar16 = plVar16 + 1;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar10);
    }
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x20;
  }
  return;
}

