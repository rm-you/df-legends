// FUN_140c09f00 @ 140c09f00
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140a5db40 FUN_140a5db40
//   -> 140dfb5b4 free


void FUN_140c09f00(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  undefined4 **ppuVar8;
  short *psVar9;
  void *_Memory;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong *puVar22;
  undefined4 *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  
  puVar22 = *(ulonglong **)(param_1 + 0x308);
  if (puVar22 != (ulonglong *)0x0) {
    for (plVar17 = *(longlong **)(param_1 + 0x428); plVar17 < *(longlong **)(param_1 + 0x430);
        plVar17 = plVar17 + 1) {
      lVar3 = *plVar17;
      if ((((*(byte *)(lVar3 + 0x18) & 1) != 0) && (*(int *)(lVar3 + 0xc) == 0)) &&
         (*(int *)(lVar3 + 0x10) == -1)) {
        iVar21 = *(int *)(lVar3 + 4);
        goto LAB_140c09f66;
      }
    }
    iVar21 = -1;
LAB_140c09f66:
    plVar17 = (longlong *)*puVar22;
    plVar16 = (longlong *)puVar22[1];
    local_res10 = plVar16;
    if (plVar17 < plVar16) {
      do {
        plVar4 = *(longlong **)(*plVar17 + 0x28);
        lVar3 = DAT_141d6dd50;
        for (plVar15 = *(longlong **)(*plVar17 + 0x20); DAT_141d6dd50 = lVar3, plVar15 < plVar4;
            plVar15 = plVar15 + 1) {
          if (0 < *(int *)*plVar15) {
            sVar1 = (short)((int *)*plVar15)[1];
            if (-1 < sVar1) {
              uVar20 = DAT_141d6dd58 - lVar3 >> 3;
              if ((((ulonglong)(longlong)sVar1 < uVar20) &&
                  (cVar11 = FUN_14000d840(*(longlong *)(lVar3 + (longlong)sVar1 * 8) + 0x1a8),
                  cVar11 != '\0')) &&
                 ((sVar1 < 0 ||
                  ((uVar20 <= (ulonglong)(longlong)sVar1 ||
                   (cVar11 = FUN_14000d840(*(longlong *)(lVar3 + (longlong)sVar1 * 8) + 0x1a8),
                   cVar11 == '\0')))))) {
                puVar22 = (ulonglong *)(param_1 + 0xd8);
                puVar14 = (undefined8 *)*puVar22;
                uVar18 = 0;
                bVar10 = false;
                uVar20 = (ulonglong)
                         ((longlong)*(undefined8 **)(param_1 + 0xe0) + (7 - (longlong)puVar14)) >> 3
                ;
                if (*(undefined8 **)(param_1 + 0xe0) < puVar14) {
                  uVar20 = uVar18;
                }
                if (uVar20 != 0) {
                  do {
                    piVar5 = (int *)*plVar15;
                    piVar6 = (int *)*puVar14;
                    if ((piVar6[1] == piVar5[1]) && (piVar6[2] == piVar5[2])) {
                      iVar12 = piVar6[3];
                      iVar2 = piVar5[3];
                      if ((((iVar12 == iVar2) || ((iVar12 == -1 && (iVar2 == -1)))) ||
                          ((iVar2 == -1 && (iVar12 == -1)))) &&
                         (((((piVar6[4] == piVar5[4] && (piVar6[5] == piVar5[5])) &&
                            (piVar6[6] == piVar5[6])) &&
                           ((piVar6[7] == piVar5[7] && (piVar6[8] == piVar5[8])))) &&
                          ((piVar6[9] == piVar5[9] && (piVar6[10] == piVar5[10])))))) {
                        bVar10 = true;
                        *piVar6 = *piVar6 + *piVar5;
                      }
                    }
                    puVar14 = puVar14 + 1;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar20);
                  if (bVar10) goto LAB_140c0a3bc;
                }
                puVar13 = operator_new(0x2c);
                puVar13[1] = 0xffffffff;
                puVar13[2] = 0xffffffff;
                puVar13[4] = 0xffffffff;
                puVar13[3] = 0xffffffff;
                puVar13[5] = 0xffffffff;
                puVar13[6] = 0xffffffff;
                puVar13[7] = 0xffffffff;
                puVar13[8] = 0xffffffff;
                puVar13[9] = 0xffffffff;
                puVar13[10] = 0xffffffff;
                *puVar13 = 0;
                *puVar13 = *(undefined4 *)*plVar15;
                lVar3 = *plVar15;
                puVar13[1] = *(undefined4 *)(lVar3 + 4);
                puVar13[2] = *(undefined4 *)(lVar3 + 8);
                iVar12 = *(int *)(lVar3 + 0xc);
                if (iVar12 == -1) {
                  iVar12 = -1;
                }
                puVar13[3] = iVar12;
                puVar13[4] = *(undefined4 *)(lVar3 + 0x10);
                puVar13[5] = *(undefined4 *)(lVar3 + 0x14);
                puVar13[6] = *(undefined4 *)(lVar3 + 0x18);
                puVar13[7] = *(undefined4 *)(lVar3 + 0x1c);
                puVar13[8] = *(undefined4 *)(lVar3 + 0x20);
                puVar13[9] = *(undefined4 *)(lVar3 + 0x24);
                puVar13[10] = *(undefined4 *)(lVar3 + 0x28);
                ppuVar7 = *(undefined4 ***)(param_1 + 0xe0);
                local_res8 = puVar13;
                if ((&local_res8 < ppuVar7) &&
                   (ppuVar8 = (undefined4 **)*puVar22, ppuVar8 <= &local_res8)) {
                  if (ppuVar7 == *(undefined4 ***)(param_1 + 0xe8)) {
                    FUN_14000c2d0(puVar22,1);
                  }
                  if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
                    **(undefined8 **)(param_1 + 0xe0) =
                         *(undefined8 *)
                          (*puVar22 + ((longlong)&local_res8 - (longlong)ppuVar8 >> 3) * 8);
                  }
                  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 8;
                }
                else {
                  if (ppuVar7 == *(undefined4 ***)(param_1 + 0xe8)) {
                    FUN_14000c2d0(puVar22);
                  }
                  if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
                    **(undefined8 **)(param_1 + 0xe0) = puVar13;
                  }
                  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + 8;
                }
                goto LAB_140c0a3bc;
              }
            }
            uVar18 = 0;
            puVar22 = (ulonglong *)(param_1 + 0xc0);
            puVar14 = (undefined8 *)*puVar22;
            bVar10 = false;
            uVar20 = (ulonglong)
                     ((longlong)*(undefined8 **)(param_1 + 200) + (7 - (longlong)puVar14)) >> 3;
            if (*(undefined8 **)(param_1 + 200) < puVar14) {
              uVar20 = uVar18;
            }
            if (uVar20 != 0) {
              do {
                psVar9 = (short *)*puVar14;
                if ((((*(int *)(psVar9 + 8) == iVar21) && (*psVar9 == 0)) &&
                    (piVar5 = (int *)*plVar15, (int)psVar9[1] == piVar5[1])) &&
                   (*(int *)(psVar9 + 10) == piVar5[4])) {
                  if (*(int *)(psVar9 + 2) != 0x989681) {
                    *(int *)(psVar9 + 2) = *piVar5 + *(int *)(psVar9 + 2);
                  }
                  bVar10 = true;
                }
                puVar14 = puVar14 + 1;
                uVar18 = uVar18 + 1;
              } while (uVar18 < uVar20);
              if (bVar10) goto LAB_140c0a3bc;
            }
            puVar13 = operator_new(0x28);
            *(undefined2 *)puVar13 = 0;
            *(undefined2 *)((longlong)puVar13 + 2) = 0xffff;
            puVar13[1] = 0x989681;
            *(undefined8 *)(puVar13 + 2) = 0x989681;
            puVar13[4] = 0xffffffff;
            puVar13[5] = 0xffffffff;
            puVar13[6] = 0xffffffff;
            puVar13[7] = 0xffffffff;
            puVar13[8] = 0xffffffff;
            puVar13[9] = 0xffffffff;
            puVar13[1] = *(undefined4 *)*plVar15;
            puVar13[2] = *(undefined4 *)*plVar15;
            puVar13[4] = iVar21;
            *(undefined2 *)puVar13 = 0;
            *(undefined2 *)((longlong)puVar13 + 2) = *(undefined2 *)(*plVar15 + 4);
            puVar13[5] = *(undefined4 *)(*plVar15 + 0x10);
            ppuVar7 = *(undefined4 ***)(param_1 + 200);
            local_res8 = puVar13;
            if ((&local_res8 < ppuVar7) &&
               (ppuVar8 = (undefined4 **)*puVar22, ppuVar8 <= &local_res8)) {
              if (ppuVar7 == *(undefined4 ***)(param_1 + 0xd0)) {
                FUN_14000c2d0(puVar22,1);
              }
              if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                **(undefined8 **)(param_1 + 200) =
                     *(undefined8 *)
                      (*puVar22 + ((longlong)&local_res8 - (longlong)ppuVar8 >> 3) * 8);
              }
              *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 8;
            }
            else {
              if (ppuVar7 == *(undefined4 ***)(param_1 + 0xd0)) {
                FUN_14000c2d0(puVar22);
              }
              if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                **(undefined8 **)(param_1 + 200) = puVar13;
              }
              *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 8;
            }
          }
LAB_140c0a3bc:
          plVar16 = local_res10;
          lVar3 = DAT_141d6dd50;
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 < plVar16);
    }
    local_res10 = *(longlong **)(*(longlong *)(param_1 + 0x308) + 0x41740);
    plVar17 = *(longlong **)(*(longlong *)(param_1 + 0x308) + 0x41748);
    local_res18 = plVar17;
    if (local_res10 < plVar17) {
      do {
        plVar16 = *(longlong **)(*local_res10 + 0xd8);
        plVar15 = *(longlong **)(*local_res10 + 0xe0);
        if (plVar16 < plVar15) {
          uVar20 = 0;
          do {
            lVar3 = DAT_141d6dd50;
            if (0 < *(int *)*plVar16) {
              sVar1 = (short)((int *)*plVar16)[1];
              if (sVar1 < 0) {
LAB_140c0a67a:
                puVar22 = (ulonglong *)(param_1 + 0xc0);
                puVar14 = (undefined8 *)*puVar22;
                bVar10 = false;
                uVar18 = (ulonglong)
                         ((longlong)*(undefined8 **)(param_1 + 200) + (7 - (longlong)puVar14)) >> 3;
                if (*(undefined8 **)(param_1 + 200) < puVar14) {
                  uVar18 = uVar20;
                }
                uVar19 = uVar20;
                if (uVar18 != 0) {
                  do {
                    psVar9 = (short *)*puVar14;
                    if ((((*(int *)(psVar9 + 8) == iVar21) && (*psVar9 == 0)) &&
                        (piVar5 = (int *)*plVar16, (int)psVar9[1] == piVar5[1])) &&
                       (*(int *)(psVar9 + 10) == piVar5[4])) {
                      if (*(int *)(psVar9 + 2) != 0x989681) {
                        *(int *)(psVar9 + 2) = *piVar5 + *(int *)(psVar9 + 2);
                      }
                      bVar10 = true;
                    }
                    puVar14 = puVar14 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar18);
                  if (bVar10) goto LAB_140c0a7e5;
                }
                puVar13 = operator_new(0x28);
                *(undefined2 *)puVar13 = 0;
                *(undefined2 *)((longlong)puVar13 + 2) = 0xffff;
                puVar13[1] = 0x989681;
                *(undefined8 *)(puVar13 + 2) = 0x989681;
                puVar13[4] = 0xffffffff;
                puVar13[5] = 0xffffffff;
                puVar13[6] = 0xffffffff;
                puVar13[7] = 0xffffffff;
                puVar13[8] = 0xffffffff;
                puVar13[9] = 0xffffffff;
                puVar13[1] = *(undefined4 *)*plVar16;
                puVar13[2] = *(undefined4 *)*plVar16;
                puVar13[4] = iVar21;
                *(undefined2 *)puVar13 = 0;
                *(undefined2 *)((longlong)puVar13 + 2) = *(undefined2 *)(*plVar16 + 4);
                puVar13[5] = *(undefined4 *)(*plVar16 + 0x10);
                ppuVar7 = *(undefined4 ***)(param_1 + 200);
                local_res8 = puVar13;
                if ((&local_res8 < ppuVar7) &&
                   (ppuVar8 = (undefined4 **)*puVar22, ppuVar8 <= &local_res8)) {
                  if (ppuVar7 == *(undefined4 ***)(param_1 + 0xd0)) {
                    FUN_14000c2d0(puVar22,1);
                  }
                  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                    **(undefined8 **)(param_1 + 200) =
                         *(undefined8 *)
                          (*puVar22 + ((longlong)&local_res8 - (longlong)ppuVar8 >> 3) * 8);
                  }
                }
                else {
                  if (ppuVar7 == *(undefined4 ***)(param_1 + 0xd0)) {
                    FUN_14000c2d0(puVar22);
                  }
LAB_140c0a7d4:
                  if ((undefined8 *)puVar22[1] != (undefined8 *)0x0) {
                    *(undefined8 *)puVar22[1] = puVar13;
                  }
                }
              }
              else {
                uVar18 = DAT_141d6dd58 - DAT_141d6dd50 >> 3;
                if (((uVar18 <= (ulonglong)(longlong)sVar1) ||
                    (cVar11 = FUN_14000d840(*(longlong *)(DAT_141d6dd50 + (longlong)sVar1 * 8) +
                                            0x1a8), cVar11 == '\0')) ||
                   ((-1 < sVar1 &&
                    (((ulonglong)(longlong)sVar1 < uVar18 &&
                     (cVar11 = FUN_14000d840(*(longlong *)(lVar3 + (longlong)sVar1 * 8) + 0x1a8),
                     cVar11 != '\0')))))) goto LAB_140c0a67a;
                puVar22 = (ulonglong *)(param_1 + 0xd8);
                puVar14 = (undefined8 *)*puVar22;
                bVar10 = false;
                uVar18 = (ulonglong)
                         ((longlong)*(undefined8 **)(param_1 + 0xe0) + (7 - (longlong)puVar14)) >> 3
                ;
                if (*(undefined8 **)(param_1 + 0xe0) < puVar14) {
                  uVar18 = uVar20;
                }
                uVar19 = uVar20;
                if (uVar18 != 0) {
                  do {
                    piVar5 = (int *)*plVar16;
                    piVar6 = (int *)*puVar14;
                    if ((piVar6[1] == piVar5[1]) && (piVar6[2] == piVar5[2])) {
                      iVar12 = piVar6[3];
                      iVar2 = piVar5[3];
                      if ((((iVar12 == iVar2) || ((iVar12 == -1 && (iVar2 == -1)))) ||
                          ((iVar2 == -1 && (iVar12 == -1)))) &&
                         (((((piVar6[4] == piVar5[4] && (piVar6[5] == piVar5[5])) &&
                            (piVar6[6] == piVar5[6])) &&
                           ((piVar6[7] == piVar5[7] && (piVar6[8] == piVar5[8])))) &&
                          ((piVar6[9] == piVar5[9] && (piVar6[10] == piVar5[10])))))) {
                        bVar10 = true;
                        *piVar6 = *piVar6 + *piVar5;
                      }
                    }
                    puVar14 = puVar14 + 1;
                    uVar19 = uVar19 + 1;
                  } while (uVar19 < uVar18);
                  if (bVar10) goto LAB_140c0a7e5;
                }
                puVar13 = operator_new(0x2c);
                puVar13[1] = 0xffffffff;
                puVar13[2] = 0xffffffff;
                puVar13[4] = 0xffffffff;
                puVar13[3] = 0xffffffff;
                puVar13[5] = 0xffffffff;
                puVar13[6] = 0xffffffff;
                puVar13[7] = 0xffffffff;
                puVar13[8] = 0xffffffff;
                puVar13[9] = 0xffffffff;
                puVar13[10] = 0xffffffff;
                *puVar13 = 0;
                *puVar13 = *(undefined4 *)*plVar16;
                lVar3 = *plVar16;
                puVar13[1] = *(undefined4 *)(lVar3 + 4);
                puVar13[2] = *(undefined4 *)(lVar3 + 8);
                iVar12 = *(int *)(lVar3 + 0xc);
                if (iVar12 == -1) {
                  iVar12 = -1;
                }
                puVar13[3] = iVar12;
                puVar13[4] = *(undefined4 *)(lVar3 + 0x10);
                puVar13[5] = *(undefined4 *)(lVar3 + 0x14);
                puVar13[6] = *(undefined4 *)(lVar3 + 0x18);
                puVar13[7] = *(undefined4 *)(lVar3 + 0x1c);
                puVar13[8] = *(undefined4 *)(lVar3 + 0x20);
                puVar13[9] = *(undefined4 *)(lVar3 + 0x24);
                puVar13[10] = *(undefined4 *)(lVar3 + 0x28);
                ppuVar7 = *(undefined4 ***)(param_1 + 0xe0);
                local_res8 = puVar13;
                if ((ppuVar7 <= &local_res8) ||
                   (ppuVar8 = (undefined4 **)*puVar22, &local_res8 < ppuVar8)) {
                  if (ppuVar7 == *(undefined4 ***)(param_1 + 0xe8)) {
                    FUN_14000c2d0(puVar22);
                  }
                  goto LAB_140c0a7d4;
                }
                if (ppuVar7 == *(undefined4 ***)(param_1 + 0xe8)) {
                  FUN_14000c2d0(puVar22,1);
                }
                if (*(undefined8 **)(param_1 + 0xe0) != (undefined8 *)0x0) {
                  **(undefined8 **)(param_1 + 0xe0) =
                       *(undefined8 *)
                        (*puVar22 + ((longlong)&local_res8 - (longlong)ppuVar8 >> 3) * 8);
                }
              }
              puVar22[1] = puVar22[1] + 8;
            }
LAB_140c0a7e5:
            plVar16 = plVar16 + 1;
            plVar17 = local_res18;
          } while (plVar16 < plVar15);
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < plVar17);
    }
    _Memory = *(void **)(param_1 + 0x308);
    if (_Memory != (void *)0x0) {
      FUN_140a5db40(_Memory);
      free(_Memory);
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  return;
}

