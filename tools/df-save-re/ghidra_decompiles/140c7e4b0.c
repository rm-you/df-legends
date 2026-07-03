// FUN_140c7e4b0 @ 140c7e4b0
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140cdf540 FUN_140cdf540
//   -> 14000c460 FUN_14000c460
//   -> 140002020 FUN_140002020


void FUN_140c7e4b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  short sVar12;
  longlong lVar13;
  byte *pbVar14;
  short sVar15;
  longlong lVar16;
  ulonglong uVar17;
  short *psVar18;
  longlong lVar19;
  longlong lVar20;
  short *psVar21;
  ulonglong uVar22;
  longlong lVar23;
  short *psVar24;
  short sVar25;
  short *psVar26;
  bool bVar27;
  short local_res8 [4];
  longlong local_res10;
  longlong local_res18;
  undefined8 uVar28;
  short *local_60;
  short *psStack_58;
  short *local_50;
  
  uVar28 = 0xfffffffffffffffe;
  if ((*(byte *)(param_1 + 0x114) & 0x10) != 0) {
    return;
  }
  lVar23 = *(longlong *)(param_1 + 0x1278) - *(longlong *)(param_1 + 0x1270);
  sVar15 = 0;
  iVar10 = (int)lVar23;
  if (0 < iVar10) {
    do {
      lVar13 = (longlong)sVar15;
      *(undefined1 *)(lVar13 + *(longlong *)(param_1 + 0x1270)) = 1;
      *(undefined1 *)(lVar13 + *(longlong *)(param_1 + 0x1288)) = 1;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar13 * 4);
      *puVar1 = *puVar1 & 0xff9ff803;
      sVar15 = sVar15 + 1;
    } while (sVar15 < iVar10);
  }
  sVar15 = *(short *)(param_1 + 0xa4);
  if (((sVar15 < 0) ||
      ((ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3) <= (ulonglong)(longlong)sVar15)) ||
     (lVar13 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar15 * 8), lVar13 == 0)) {
    *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x10;
    return;
  }
  iVar10 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  lVar16 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x590) + lVar16 * 8);
      iVar10 = (int)(*(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 3) + -1;
      lVar20 = (longlong)iVar10;
      if (-1 < iVar10) {
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + lVar20 * 8);
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
          *puVar1 = *puVar1 | 0x100;
          if ((*(byte *)(lVar4 + 100) & 0x10) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x20;
          }
          if ((*(byte *)(lVar4 + 100) & 0x60) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x10;
          }
          if ((*(byte *)(lVar4 + 100) & 0x80) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x80;
          }
          if ((*(uint *)(lVar4 + 100) & 0x300) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x40;
          }
          if (*(short *)(lVar4 + 6) != -1) {
            iVar10 = *(int *)(*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (**(longlong **)(param_1 + 0x5d8) +
                                   (longlong)*(short *)(lVar4 + 4) * 8) + 0x58) +
                               (longlong)*(short *)(lVar4 + 6) * 8) + 0x20);
            if (iVar10 != -1) {
              lVar19 = (longlong)iVar10 * 8;
              lVar5 = *(longlong *)(lVar19 + *(longlong *)(lVar13 + 0x24c8));
              if (((0 < *(int *)(lVar5 + 0x28)) && ((**(byte **)(lVar5 + 0x20) & 0x80) != 0)) &&
                 (puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                   (longlong)*(short *)(lVar4 + 4) * 4), *puVar1 = *puVar1 | 0x20,
                 (*(uint *)(lVar4 + 100) & 0x2490003) != 0)) {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                 (longlong)*(short *)(lVar4 + 4) * 4);
                *puVar1 = *puVar1 | 0x10;
              }
              lVar5 = *(longlong *)(lVar19 + *(longlong *)(lVar13 + 0x24c8));
              if (((0 < *(int *)(lVar5 + 0x28)) && ((**(byte **)(lVar5 + 0x20) & 0x10) != 0)) &&
                 (puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                   (longlong)*(short *)(lVar4 + 4) * 4), *puVar1 = *puVar1 | 0x80,
                 (*(uint *)(lVar4 + 100) & 0x2490003) != 0)) {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                 (longlong)*(short *)(lVar4 + 4) * 4);
                *puVar1 = *puVar1 | 0x40;
              }
              lVar19 = *(longlong *)(lVar19 + *(longlong *)(lVar13 + 0x24c8));
              if ((1 < *(int *)(lVar19 + 0x28)) &&
                 ((*(byte *)(*(longlong *)(lVar19 + 0x20) + 1) & 0x80) != 0)) {
                puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                 (longlong)*(short *)(lVar4 + 4) * 4);
                *puVar1 = *puVar1 | 8;
                bVar27 = false;
                iVar10 = (int)(*(longlong *)(lVar4 + 0x20) - *(longlong *)(lVar4 + 0x18) >> 1) + -1;
                lVar19 = (longlong)iVar10;
                if (-1 < iVar10) {
                  psVar18 = (short *)(*(longlong *)(lVar4 + 0x18) + lVar19 * 2);
                  bVar27 = false;
                  do {
                    if (0x4a < *psVar18) {
                      bVar27 = true;
                    }
                    psVar18 = psVar18 + -1;
                    lVar19 = lVar19 + -1;
                  } while (-1 < lVar19);
                }
                if (((((*(uint *)(lVar4 + 100) & 0x6db000f) != 0) || (99 < *(int *)(lVar4 + 0x88)))
                    || (bVar27)) || (24999 < *(int *)(lVar4 + 0x10))) {
                  puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) +
                                   (longlong)*(short *)(lVar4 + 4) * 4);
                  *puVar1 = *puVar1 | 4;
                }
              }
            }
          }
          if (((*(uint *)(lVar4 + 100) & 0x400) != 0) || (99 < *(int *)(lVar4 + 0x7c))) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x200;
          }
          if (((*(uint *)(lVar4 + 100) & 0x800) != 0) || (99 < *(int *)(lVar4 + 0x80))) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)*(short *)(lVar4 + 4) * 4);
            *puVar1 = *puVar1 | 0x400;
          }
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  iVar10 = (int)(*(longlong *)(param_1 + 0x580) - *(longlong *)(param_1 + 0x578) >> 2) + -1;
  lVar16 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      if (((*(byte *)(*(longlong *)(param_1 + 0x518) + lVar16 * 4) & 1) == 0) &&
         (((iVar10 = *(int *)(*(longlong *)(param_1 + 0x578) + lVar16 * 4), 4999 < iVar10 ||
           (24999 < *(int *)(*(longlong *)(param_1 + 0x560) + lVar16 * 4))) ||
          (4999 < *(int *)(*(longlong *)(param_1 + 0x548) + lVar16 * 4))))) {
        sVar15 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0x68) + lVar16 * 2);
        sVar25 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x5d8) + 0x80) + lVar16 * 2);
        if (sVar25 != -1) {
          if (((9999 < iVar10) || (24999 < *(int *)(*(longlong *)(param_1 + 0x560) + lVar16 * 4)))
             || (9999 < *(int *)(*(longlong *)(param_1 + 0x548) + lVar16 * 4))) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar15 * 4);
            *puVar1 = *puVar1 | 0x400000;
          }
          iVar10 = *(int *)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (**(longlong **)(param_1 + 0x5d8) + (longlong)sVar15 * 8) + 0x58) +
                             (longlong)sVar25 * 8) + 0x20);
          if (((iVar10 != -1) &&
              (lVar3 = *(longlong *)(*(longlong *)(lVar13 + 0x24c8) + (longlong)iVar10 * 8),
              1 < *(int *)(lVar3 + 0x28))) &&
             ((*(byte *)(*(longlong *)(lVar3 + 0x20) + 1) & 0x80) != 0)) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar15 * 4);
            *puVar1 = *puVar1 | 0xc;
          }
        }
      }
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  iVar10 = (int)(*(longlong *)(param_1 + 0x508) - *(longlong *)(param_1 + 0x500) >> 2) + -1;
  lVar16 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x500) + lVar16 * 4);
      if (iVar10 < 100) {
        plVar6 = *(longlong **)(param_1 + 0x5d8);
        lVar3 = (longlong)*(int *)(plVar6[0x19] + lVar16 * 4) * 2;
        lVar20 = (longlong)*(short *)(lVar3 + plVar6[0xd]);
        lVar3 = *(longlong *)
                 (*(longlong *)(lVar13 + 0x24c8) +
                 (longlong)
                 *(int *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(*plVar6 + lVar20 * 8) + 0x58) +
                           (longlong)*(short *)(lVar3 + plVar6[0x10]) * 8) + 0x20) * 8);
        bVar27 = iVar10 < 0x32;
        if (0 < *(int *)(lVar3 + 0x28)) {
          if (((**(byte **)(lVar3 + 0x20) & 0x80) != 0) &&
             (puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4),
             *puVar1 = *puVar1 | 0x20, bVar27)) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4);
            *puVar1 = *puVar1 | 0x10;
          }
          if (((0 < *(int *)(lVar3 + 0x28)) && ((**(byte **)(lVar3 + 0x20) & 0x10) != 0)) &&
             (puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4),
             *puVar1 = *puVar1 | 0x80, bVar27)) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4);
            *puVar1 = *puVar1 | 0x40;
          }
        }
        if (((1 < *(int *)(lVar3 + 0x28)) &&
            ((*(byte *)(*(longlong *)(lVar3 + 0x20) + 1) & 0x80) != 0)) &&
           (puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4), *puVar1 = *puVar1 | 8,
           bVar27)) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar20 * 4);
          *puVar1 = *puVar1 | 4;
        }
      }
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  sVar15 = (short)lVar23 + -1;
  if (-1 < sVar15) {
    uVar17 = (ulonglong)sVar15;
    do {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + uVar17 * 4);
      uVar2 = *puVar1;
      if ((((uVar2 >> 0x16 & 1) != 0) ||
          (((-1 < sVar15 &&
            (lVar23 = **(longlong **)(param_1 + 0x5d8),
            uVar17 < (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar23 >> 3))) &&
           (cVar7 = FUN_14000d840(*(longlong *)(lVar23 + uVar17 * 8) + 0x48,0x25), cVar7 != '\0'))))
         && (cVar7 = FUN_140cdf540(param_1,sVar15,1), cVar7 != '\0')) {
        *puVar1 = uVar2 | 0x200000;
      }
      uVar17 = uVar17 - 1;
      sVar15 = sVar15 + -1;
    } while (-1 < sVar15);
  }
  psVar24 = (short *)0x0;
  pbVar14 = *(byte **)(param_1 + 0x518);
  psVar18 = (short *)((ulonglong)(*(byte **)(param_1 + 0x520) + (3 - (longlong)pbVar14)) >> 2);
  if (*(byte **)(param_1 + 0x520) < pbVar14) {
    psVar18 = psVar24;
  }
  psVar21 = psVar24;
  if (psVar18 != (short *)0x0) {
    do {
      if ((*pbVar14 & 1) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x5d8);
        lVar16 = (longlong)*(short *)(plVar6[0xd] + (longlong)psVar21 * 2);
        lVar23 = *(longlong *)
                  (*(longlong *)(lVar13 + 0x24c8) +
                  (longlong)
                  *(int *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(*plVar6 + lVar16 * 8) + 0x58) +
                            (longlong)*(short *)(plVar6[0x10] + (longlong)psVar21 * 2) * 8) + 0x20)
                  * 8);
        if (0 < *(int *)(lVar23 + 0x28)) {
          if ((**(byte **)(lVar23 + 0x20) & 0x80) != 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
            *puVar1 = *puVar1 | 0x20;
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
            *puVar1 = *puVar1 | 0x10;
          }
          if ((0 < *(int *)(lVar23 + 0x28)) && ((**(byte **)(lVar23 + 0x20) & 0x10) != 0)) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
            *puVar1 = *puVar1 | 0x80;
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
            *puVar1 = *puVar1 | 0x40;
          }
        }
        if ((1 < *(int *)(lVar23 + 0x28)) &&
           ((*(byte *)(*(longlong *)(lVar23 + 0x20) + 1) & 0x80) != 0)) {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
          *puVar1 = *puVar1 | 8;
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x4d0) + lVar16 * 4);
          *puVar1 = *puVar1 | 4;
        }
      }
      psVar21 = (short *)((longlong)psVar21 + 1);
      pbVar14 = pbVar14 + 4;
    } while (psVar21 < psVar18);
  }
  local_60 = (short *)0x0;
  psStack_58 = (short *)0x0;
  local_50 = (short *)0x0;
  if ((*(longlong *)(param_1 + 0xd60) == 0) && ((*(uint *)(param_1 + 0x118) & 0x1000) == 0)) {
    if ((*(int *)(param_1 + 0x1260) < 0xc) ||
       ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 0xb) & 2) == 0)) {
      if (((*(uint *)(param_1 + 0x810) & 0x800000) == 0) &&
         ((*(uint *)(param_1 + 0x80c) & 0x800000) != 0)) goto LAB_140c7efef;
    }
    else if ((*(uint *)(param_1 + 0x810) & 0x800000) == 0) goto LAB_140c7efef;
    local_res10 = 0;
    local_res18 = 2;
    psVar18 = (short *)0x0;
    psVar21 = (short *)0x0;
    do {
      uVar17 = 0;
      local_res8[0] = 0;
      lVar23 = local_res10;
      if (*(longlong *)(param_1 + 0x1278) != *(longlong *)(param_1 + 0x1270)) {
        do {
          sVar15 = local_res8[0];
          plVar6 = *(longlong **)(param_1 + 0x5d8);
          if ((-1 < local_res8[0]) &&
             ((((uVar17 < (ulonglong)(plVar6[1] - *plVar6 >> 3) &&
                (cVar7 = FUN_14000d840(*(longlong *)(uVar17 * 8 + *plVar6) + 0x48,0x11),
                cVar7 != '\0')) && (local_res10 == 1)) ||
              (((lVar23 = local_res10, -1 < sVar15 &&
                (uVar17 < (ulonglong)(plVar6[1] - *plVar6 >> 3))) &&
               ((cVar7 = FUN_14000d840(*(longlong *)(uVar17 * 8 + *plVar6) + 0x48,0x10),
                lVar23 = local_res10, cVar7 != '\0' && (local_res10 == 0)))))))) {
            cVar7 = '\x02';
            if (uVar17 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) {
              cVar8 = FUN_14000d840(*(longlong *)(uVar17 * 8 + *plVar6) + 0x48,0x10);
              cVar7 = '\x02';
              if (cVar8 != '\0') {
                cVar7 = '\x03';
              }
            }
            if (((uVar17 < (ulonglong)(plVar6[1] - *plVar6 >> 3)) &&
                (cVar8 = FUN_14000d840(*(longlong *)(uVar17 * 8 + *plVar6) + 0x48,0xd),
                cVar8 != '\0')) && (*(short *)(*(longlong *)(*plVar6 + uVar17 * 8) + 0x40) != -1)) {
              if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar17 * 4) & 4) == 0) {
                if (cVar7 == '\x03') {
                  psVar26 = (short *)(*(longlong *)(*plVar6 + uVar17 * 8) + 0x40);
                  if ((psVar26 < psVar18) && (psVar21 <= psVar26)) {
                    lVar23 = (longlong)psVar26 - (longlong)psVar21;
                    if (psVar18 == psVar24) {
                      FUN_14000c460(&local_60,1);
                      psVar18 = psStack_58;
                      psVar21 = local_60;
                      psVar24 = local_50;
                    }
                    if (psVar18 != (short *)0x0) {
                      sVar15 = psVar21[lVar23 >> 1];
LAB_140c7ee41:
                      *psVar18 = sVar15;
                    }
                  }
                  else {
                    if (psVar18 == psVar24) {
                      FUN_14000c460(&local_60,1);
                      psVar18 = psStack_58;
                      psVar21 = local_60;
                      psVar24 = local_50;
                    }
                    if (psVar18 != (short *)0x0) {
                      sVar15 = *psVar26;
                      goto LAB_140c7ee41;
                    }
                  }
                  psVar18 = psVar18 + 1;
                  psStack_58 = psVar18;
                }
                if (*(char *)(*(longlong *)(param_1 + 0x1270) + uVar17) < cVar7) {
                  *(char *)(*(longlong *)(param_1 + 0x1270) + uVar17) = cVar7;
                }
                if (*(char *)(*(longlong *)(param_1 + 0x1270) +
                             (longlong)
                             *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8)
                                       + 0x40)) < cVar7) {
                  *(char *)(*(longlong *)(param_1 + 0x1270) +
                           (longlong)
                           *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) +
                                     0x40)) = cVar7;
                }
                if (*(char *)(*(longlong *)(param_1 + 0x1288) + uVar17) < cVar7) {
                  *(char *)(*(longlong *)(param_1 + 0x1288) + uVar17) = cVar7;
                }
                lVar23 = local_res10;
                if (*(char *)(*(longlong *)(param_1 + 0x1288) +
                             (longlong)
                             *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8)
                                       + 0x40)) < cVar7) {
                  *(char *)(*(longlong *)(param_1 + 0x1288) +
                           (longlong)
                           *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) +
                                     0x40)) = cVar7;
                }
              }
              else {
                *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1270)) = 0;
                *(undefined1 *)
                 ((longlong)
                  *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) + 0x40) +
                 *(longlong *)(param_1 + 0x1270)) = 0;
                *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1288)) = 0;
                *(undefined1 *)
                 ((longlong)
                  *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) + 0x40) +
                 *(longlong *)(param_1 + 0x1288)) = 0;
                lVar23 = local_res10;
              }
            }
            else if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar17 * 4) & 4) == 0) {
              if (cVar7 == '\x03') {
                if ((local_res8 < psVar18) && (psVar21 <= local_res8)) {
                  lVar23 = (longlong)local_res8 - (longlong)psVar21;
                  if (psVar18 == psVar24) {
                    FUN_14000c460(&local_60,1);
                    psVar18 = psStack_58;
                    psVar21 = local_60;
                    psVar24 = local_50;
                  }
                  if (psVar18 != (short *)0x0) {
                    sVar15 = psVar21[lVar23 >> 1];
LAB_140c7ef75:
                    *psVar18 = sVar15;
                  }
                }
                else {
                  if (psVar18 == psVar24) {
                    FUN_14000c460(&local_60,1);
                    psVar18 = psStack_58;
                    psVar21 = local_60;
                    psVar24 = local_50;
                  }
                  sVar15 = local_res8[0];
                  if (psVar18 != (short *)0x0) goto LAB_140c7ef75;
                }
                psVar18 = psVar18 + 1;
                psStack_58 = psVar18;
              }
              if (*(char *)(*(longlong *)(param_1 + 0x1270) + uVar17) < cVar7) {
                *(char *)(uVar17 + *(longlong *)(param_1 + 0x1270)) = cVar7;
              }
              lVar23 = local_res10;
              if (*(char *)(uVar17 + *(longlong *)(param_1 + 0x1288)) < cVar7) {
                *(char *)(uVar17 + *(longlong *)(param_1 + 0x1288)) = cVar7;
              }
            }
            else {
              *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1270)) = 0;
              *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1288)) = 0;
              lVar23 = local_res10;
            }
          }
          local_res8[0] = local_res8[0] + 1;
          uVar17 = (ulonglong)local_res8[0];
        } while (uVar17 < (ulonglong)
                          (*(longlong *)(param_1 + 0x1278) - *(longlong *)(param_1 + 0x1270)));
      }
      local_res10 = lVar23 + 1;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
    local_res18 = 0;
  }
  else {
LAB_140c7efef:
    FUN_14000c460(&local_60,1);
    if (psStack_58 != (short *)0x0) {
      *psStack_58 = 0;
    }
    psVar18 = psStack_58 + 1;
    **(undefined1 **)(param_1 + 0x1270) = 3;
    **(undefined1 **)(param_1 + 0x1288) = 3;
    psVar21 = local_60;
    psVar24 = local_50;
  }
  uVar17 = 0;
  if (*(longlong *)(param_1 + 0xd60) == 0) {
    if ((*(uint *)(param_1 + 0x118) & 0x1000) == 0) {
      if ((*(int *)(param_1 + 0x1260) < 6) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x1258) + 5) & 4) == 0)) {
        if (((*(uint *)(param_1 + 0x810) & 0x20000000) == 0) &&
           ((*(uint *)(param_1 + 0x80c) & 0x20000000) != 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
      }
      else {
        bVar9 = ~(byte)((uint)*(undefined4 *)(param_1 + 0x810) >> 0x1d) & 1;
      }
    }
    else {
      bVar9 = 1;
    }
  }
  else {
    bVar9 = 1;
  }
  bVar27 = bVar9 == 0;
  sVar15 = 0;
  if (bVar27) {
    uVar11 = uVar17;
    if (*(longlong *)(param_1 + 0x1278) != *(longlong *)(param_1 + 0x1270)) {
      do {
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar11 * 4) & 0x202) != 0) {
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1270)) = 0;
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar11 * 4) & 0x402) != 0) {
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1288)) = 0;
        }
        sVar15 = sVar15 + 1;
        uVar11 = (longlong)sVar15;
      } while ((ulonglong)(longlong)sVar15 <
               (ulonglong)(*(longlong *)(param_1 + 0x1278) - *(longlong *)(param_1 + 0x1270)));
    }
  }
  else {
    uVar11 = uVar17;
    if (*(longlong *)(param_1 + 0x1278) != *(longlong *)(param_1 + 0x1270)) {
      do {
        if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + uVar11 * 4) & 2) == 0) {
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1270)) = 1;
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1288)) = 1;
        }
        else {
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1270)) = 0;
          *(undefined1 *)(uVar11 + *(longlong *)(param_1 + 0x1288)) = 0;
        }
        sVar15 = sVar15 + 1;
        uVar11 = (longlong)sVar15;
      } while ((ulonglong)(longlong)sVar15 <
               (ulonglong)(*(longlong *)(param_1 + 0x1278) - *(longlong *)(param_1 + 0x1270)));
    }
  }
  sVar15 = 0;
  uVar22 = (longlong)psVar18 - (longlong)psVar21 >> 1;
  uVar11 = uVar17;
  if (uVar22 != 0) {
    do {
      lVar23 = (longlong)psVar21[uVar11];
      if (*(char *)(lVar23 + *(longlong *)(param_1 + 0x1270)) == '\x03') {
        sVar25 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar23 * 8) + 0x40);
        while (sVar25 != -1) {
          lVar13 = (longlong)sVar25;
          if (*(char *)(*(longlong *)(param_1 + 0x1270) + lVar13) == '\0') break;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1270) + lVar13) = 3;
          sVar25 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar13 * 8) + 0x40);
        }
      }
      if (*(char *)(lVar23 + *(longlong *)(param_1 + 0x1288)) == '\x03') {
        sVar25 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar23 * 8) + 0x40);
        while (sVar25 != -1) {
          lVar23 = (longlong)sVar25;
          if (*(char *)(*(longlong *)(param_1 + 0x1288) + lVar23) == '\0') break;
          *(undefined1 *)(*(longlong *)(param_1 + 0x1288) + lVar23) = 3;
          sVar25 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + lVar23 * 8) + 0x40);
        }
      }
      sVar15 = sVar15 + 1;
      uVar11 = (longlong)sVar15;
    } while ((ulonglong)(longlong)sVar15 < uVar22);
  }
  uVar11 = uVar17;
  if (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2 != 0) {
    do {
      sVar25 = (short)uVar11;
      if (*(int *)(param_1 + 0x958) < 100) {
        lVar23 = *(longlong *)(param_1 + 0x1270);
        if (((*(char *)(uVar17 + lVar23) != '\0') && (*(char *)(uVar17 + lVar23) != '\x03')) &&
           (bVar27)) {
          sVar12 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) + 0x40);
          if (sVar12 == -1) {
            sVar12 = sVar25;
          }
          if (*(char *)(sVar12 + lVar23) == '\x03') {
            *(undefined1 *)(uVar17 + lVar23) = 3;
          }
          else {
            *(undefined1 *)(uVar17 + lVar23) = 0;
          }
        }
      }
      else {
        *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1270)) = 0;
      }
      if (*(int *)(param_1 + 0x95c) < 100) {
        lVar23 = *(longlong *)(param_1 + 0x1288);
        if (((*(char *)(uVar17 + lVar23) != '\0') && (*(char *)(uVar17 + lVar23) != '\x03')) &&
           (bVar27)) {
          sVar12 = *(short *)(*(longlong *)(**(longlong **)(param_1 + 0x5d8) + uVar17 * 8) + 0x40);
          if (sVar12 == -1) {
            sVar12 = sVar25;
          }
          if (*(char *)(sVar12 + lVar23) == '\x03') {
            *(undefined1 *)(uVar17 + lVar23) = 3;
          }
          else {
            *(undefined1 *)(uVar17 + lVar23) = 0;
          }
        }
      }
      else {
        *(undefined1 *)(uVar17 + *(longlong *)(param_1 + 0x1288)) = 0;
      }
      uVar17 = (ulonglong)(short)(sVar25 + 1U);
      uVar11 = (ulonglong)(ushort)(sVar25 + 1U);
    } while (uVar17 < (ulonglong)
                      (*(longlong *)(param_1 + 0x4d8) - *(longlong *)(param_1 + 0x4d0) >> 2));
  }
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) | 0x10;
  if (psVar21 != (short *)0x0) {
    FUN_140002020(psVar21,(longlong)psVar24 - (longlong)psVar21 >> 1,2,sVar15,uVar28);
  }
  return;
}

