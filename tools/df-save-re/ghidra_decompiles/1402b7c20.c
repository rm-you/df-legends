// FUN_1402b7c20 @ 1402b7c20
// callees:
//   -> 140dfb5b4 free
//   -> 140dfb6d8 operator_new
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000d7e0 FUN_14000d7e0
//   -> 1400b4080 FUN_1400b4080


void FUN_1402b7c20(longlong param_1,longlong *param_2,short param_3,longlong *param_4,short param_5,
                  longlong *param_6,short param_7,longlong *param_8)

{
  longlong *plVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  void *pvVar18;
  __uint64 _Var19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  longlong lVar28;
  int iVar29;
  int *piVar30;
  undefined2 uVar31;
  longlong *plVar32;
  longlong lVar33;
  undefined1 uVar34;
  int local_res10;
  longlong local_50;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_3 * 8);
  if ((void *)*param_2 != (void *)0x0) {
    free((void *)*param_2);
  }
  if ((void *)param_2[2] != (void *)0x0) {
    free((void *)param_2[2]);
  }
  plVar32 = (longlong *)0x0;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  if ((int)(*(longlong *)(param_1 + 0x180) - *(longlong *)(param_1 + 0x178) >> 3) <= (int)param_5) {
    param_4 = plVar32;
  }
  if ((int)(*(longlong *)(param_1 + 0x180) - *(longlong *)(param_1 + 0x178) >> 3) <= (int)param_7) {
    param_6 = plVar32;
  }
  if (0 < *(int *)(lVar4 + 0x1798)) {
    pvVar18 = operator_new((longlong)*(int *)(lVar4 + 0x1798));
    *param_2 = (longlong)pvVar18;
    *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar4 + 0x1798);
    local_res10 = 0;
    if (*(longlong *)(lVar4 + 0x15d8) - *(longlong *)(lVar4 + 0x15d0) >> 3 != 0) {
      do {
        lVar33 = *(longlong *)(*(longlong *)(lVar4 + 0x15d0) + (longlong)plVar32 * 8);
        iVar21 = *(int *)(lVar33 + 0x7c);
        lVar28 = (longlong)iVar21;
        if (iVar21 != -1) {
          bVar9 = false;
          uVar14 = 0;
          bVar10 = false;
          uVar13 = 0;
          uVar12 = 0;
          bVar8 = false;
          if (param_4 != (longlong *)0x0) {
            if (param_5 == param_3) {
              if (*(short *)(lVar33 + 0x7a) == 0) {
                lVar33 = *param_4;
LAB_1402b7de1:
                uVar12 = (uint)*(byte *)(lVar28 + lVar33);
                bVar8 = true;
              }
              else if ((int)*(short *)(lVar33 + 0x7a) - 1U < 2) {
                uVar12 = FUN_1409fc0c0();
                if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) != 0) {
                  lVar33 = *param_4;
                  goto LAB_1402b7de1;
                }
                uVar12 = (uint)*(byte *)((longlong)(iVar21 + 1) + *param_4);
                bVar8 = true;
              }
            }
            else {
              iVar29 = 0;
              lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_5 * 8);
              lVar6 = *(longlong *)(lVar23 + 0x15d0);
              iVar22 = (int)(*(longlong *)(lVar23 + 0x15d8) - lVar6 >> 3) + -1;
              uVar12 = uVar14;
              bVar8 = bVar9;
              if (-1 < iVar22) {
                do {
                  iVar17 = iVar22 + iVar29 >> 1;
                  lVar23 = *(longlong *)(lVar6 + (longlong)iVar17 * 8);
                  if (*(int *)(lVar23 + 0x80) == *(int *)(lVar33 + 0x80)) {
                    iVar22 = *(int *)(lVar23 + 0x7c);
                    if (*(short *)(lVar23 + 0x7a) != 0) {
                      if (1 < (int)*(short *)(lVar23 + 0x7a) - 1U) break;
                      uVar12 = FUN_1409fc0c0();
                      if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        uVar12 = (uint)*(byte *)((longlong)(iVar22 + 1) + *param_4);
                        bVar8 = true;
                        break;
                      }
                    }
                    uVar12 = (uint)*(byte *)((longlong)iVar22 + *param_4);
                    bVar8 = true;
                    break;
                  }
                  if (*(int *)(lVar33 + 0x80) < *(int *)(lVar23 + 0x80)) {
                    iVar22 = iVar17 + -1;
                  }
                  else {
                    iVar29 = iVar17 + 1;
                  }
                } while (iVar29 <= iVar22);
              }
            }
          }
          if (param_6 != (longlong *)0x0) {
            if (param_7 == param_3) {
              sVar3 = *(short *)(*(longlong *)
                                  (*(longlong *)(lVar4 + 0x15d0) + (longlong)plVar32 * 8) + 0x7a);
              if (sVar3 == 0) {
                uVar13 = (uint)*(byte *)(lVar28 + *param_6);
                bVar10 = true;
              }
              else if ((int)sVar3 - 1U < 2) {
                uVar13 = FUN_1409fc0c0();
                bVar10 = true;
                if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) == 0) {
                  uVar13 = (uint)*(byte *)((longlong)(iVar21 + 1) + *param_6);
                }
                else {
                  uVar13 = (uint)*(byte *)(lVar28 + *param_6);
                }
              }
            }
            else {
              iVar17 = 0;
              lVar33 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_7 * 8);
              lVar23 = *(longlong *)(lVar33 + 0x15d0);
              iVar29 = (int)(*(longlong *)(lVar33 + 0x15d8) - lVar23 >> 3) + -1;
              iVar22 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x15d0) + (longlong)plVar32 * 8)
                               + 0x80);
              if (-1 < iVar29) {
                do {
                  iVar20 = iVar29 + iVar17 >> 1;
                  lVar33 = *(longlong *)(lVar23 + (longlong)iVar20 * 8);
                  if (*(int *)(lVar33 + 0x80) == iVar22) {
                    iVar22 = *(int *)(lVar33 + 0x7c);
                    if (*(short *)(lVar33 + 0x7a) != 0) {
                      uVar13 = 0;
                      bVar10 = false;
                      if (1 < (int)*(short *)(lVar33 + 0x7a) - 1U) break;
                      bVar10 = true;
                      uVar13 = FUN_1409fc0c0();
                      if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        uVar13 = (uint)*(byte *)((longlong)(iVar22 + 1) + *param_6);
                        break;
                      }
                    }
                    bVar10 = true;
                    uVar13 = (uint)*(byte *)((longlong)iVar22 + *param_6);
                    break;
                  }
                  if (iVar22 < *(int *)(lVar33 + 0x80)) {
                    iVar29 = iVar20 + -1;
                  }
                  else {
                    iVar17 = iVar20 + 1;
                  }
                } while (iVar17 <= iVar29);
              }
            }
          }
          lVar33 = *(longlong *)(*(longlong *)(lVar4 + 0x15d0) + (longlong)plVar32 * 8);
          sVar3 = *(short *)(lVar33 + 0x7a);
          uVar34 = (undefined1)uVar13;
          uVar25 = (undefined1)uVar12;
          if (sVar3 == 0) {
            if (bVar8) {
              if (bVar10) {
                uVar14 = FUN_1409fc0c0();
                uVar15 = FUN_1409fc0c0();
                uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x1446f87;
                iVar21 = FUN_14000d7e0(0x65 - uVar15);
                iVar21 = (uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >> 0x3f) *
                                   0x7fffffff >> 0x17) * uVar15 + ((100 - iVar21) - uVar15) * uVar13
                         + uVar12 * iVar21;
                *(char *)(lVar28 + *param_2) =
                     ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
                     (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
              }
              else {
                *(undefined1 *)(lVar28 + *param_2) = uVar25;
              }
            }
            else if (bVar10) {
              *(undefined1 *)(lVar28 + *param_2) = uVar34;
            }
            else if (param_8 == (longlong *)0x0) {
              uVar13 = FUN_1409fc0c0();
              *(char *)(lVar28 + *param_2) =
                   (char)(uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                   0x7fffffff >> 0x17);
            }
            else {
              iVar29 = 0;
              iVar21 = *(int *)(lVar33 + 0x80);
              iVar22 = (int)(param_8[1] - *param_8 >> 3) + -1;
              if (-1 < iVar22) {
                do {
                  iVar17 = iVar22 + iVar29 >> 1;
                  piVar30 = *(int **)(*param_8 + (longlong)iVar17 * 8);
                  if (*piVar30 == iVar21) {
                    cVar11 = FUN_14000d7e0((piVar30[2] - piVar30[1]) + 1);
                    *(char *)(lVar28 + *param_2) = cVar11 + (char)piVar30[1];
                    goto LAB_1402b83db;
                  }
                  if (iVar21 < *piVar30) {
                    iVar22 = iVar17 + -1;
                  }
                  else {
                    iVar29 = iVar17 + 1;
                  }
                } while (iVar29 <= iVar22);
              }
              uVar13 = FUN_1409fc0c0();
              *(char *)(lVar28 + *param_2) =
                   (char)(uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                   0x7fffffff >> 0x17);
            }
          }
          else if ((int)sVar3 - 1U < 2) {
            if (bVar8) {
              *(undefined1 *)(lVar28 + *param_2) = uVar25;
              if (bVar10) {
                *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar34;
              }
              else {
                *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar25;
              }
            }
            else if (bVar10) {
              *(undefined1 *)(lVar28 + *param_2) = uVar34;
              *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar34;
            }
            else {
              lVar33 = 2;
              do {
                if (param_8 == (longlong *)0x0) {
                  uVar13 = FUN_1409fc0c0();
                  uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                }
                else {
                  iVar29 = 0;
                  iVar22 = (int)(param_8[1] - *param_8 >> 3) + -1;
                  iVar21 = *(int *)(*(longlong *)
                                     (*(longlong *)(lVar4 + 0x15d0) + (longlong)plVar32 * 8) + 0x80)
                  ;
                  if (-1 < iVar22) {
                    do {
                      iVar17 = iVar22 + iVar29 >> 1;
                      piVar30 = *(int **)(*param_8 + (longlong)iVar17 * 8);
                      if (*piVar30 == iVar21) {
                        cVar11 = FUN_14000d7e0((piVar30[2] - piVar30[1]) + 1);
                        *(char *)(lVar28 + *param_2) = cVar11 + (char)piVar30[1];
                        goto LAB_1402b820a;
                      }
                      if (iVar21 < *piVar30) {
                        iVar22 = iVar17 + -1;
                      }
                      else {
                        iVar29 = iVar17 + 1;
                      }
                    } while (iVar29 <= iVar22);
                  }
                  uVar13 = FUN_1409fc0c0();
                  uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                }
                *(char *)(lVar28 + *param_2) = (char)(uVar13 >> 0x17);
LAB_1402b820a:
                lVar28 = lVar28 + 1;
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
          }
        }
LAB_1402b83db:
        plVar32 = (longlong *)((longlong)plVar32 + 1);
        local_res10 = local_res10 + 1;
      } while ((ulonglong)(longlong)local_res10 <
               (ulonglong)(*(longlong *)(lVar4 + 0x15d8) - *(longlong *)(lVar4 + 0x15d0) >> 3));
    }
    lVar33 = 0;
    local_res10 = 0;
    if (*(longlong *)(lVar4 + 0x15f0) - *(longlong *)(lVar4 + 0x15e8) >> 3 != 0) {
      do {
        lVar28 = *(longlong *)(*(longlong *)(lVar4 + 0x15e8) + lVar33 * 8);
        iVar21 = *(int *)(lVar28 + 0x7c);
        lVar23 = (longlong)iVar21;
        if (iVar21 != -1) {
          bVar9 = false;
          uVar14 = 0;
          bVar10 = false;
          uVar12 = 0;
          uVar13 = 0;
          bVar8 = false;
          if (param_4 != (longlong *)0x0) {
            if (param_5 == param_3) {
              if (*(short *)(lVar28 + 0x7a) == 0) {
                bVar2 = *(byte *)(lVar23 + *param_4);
LAB_1402b85f3:
                uVar13 = (uint)bVar2;
                bVar8 = true;
              }
              else if ((int)*(short *)(lVar28 + 0x7a) - 1U < 2) {
                uVar13 = FUN_1409fc0c0();
                bVar8 = true;
                if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) == 0) {
                  uVar13 = (uint)*(byte *)((longlong)(iVar21 + 1) + *param_4);
                }
                else {
                  uVar13 = (uint)*(byte *)(lVar23 + *param_4);
                }
              }
            }
            else {
              iVar29 = 0;
              lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_5 * 8);
              lVar5 = *(longlong *)(lVar6 + 0x15e8);
              iVar22 = (int)(*(longlong *)(lVar6 + 0x15f0) - lVar5 >> 3) + -1;
              uVar13 = uVar14;
              bVar8 = bVar9;
              if (-1 < iVar22) {
                do {
                  iVar17 = iVar22 + iVar29 >> 1;
                  lVar6 = *(longlong *)(lVar5 + (longlong)iVar17 * 8);
                  if (*(int *)(lVar6 + 0xb0) == *(int *)(lVar28 + 0xb0)) {
                    iVar22 = *(int *)(lVar6 + 0x7c);
                    if (*(short *)(lVar6 + 0x7a) == 0) {
                      bVar2 = *(byte *)((longlong)iVar22 + *param_4);
                      goto LAB_1402b85f3;
                    }
                    if ((int)*(short *)(lVar6 + 0x7a) - 1U < 2) {
                      uVar13 = FUN_1409fc0c0();
                      bVar8 = true;
                      if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        uVar13 = (uint)*(byte *)((longlong)(iVar22 + 1) + *param_4);
                      }
                      else {
                        uVar13 = (uint)*(byte *)((longlong)iVar22 + *param_4);
                      }
                    }
                    break;
                  }
                  if (*(int *)(lVar28 + 0xb0) < *(int *)(lVar6 + 0xb0)) {
                    iVar22 = iVar17 + -1;
                  }
                  else {
                    iVar29 = iVar17 + 1;
                  }
                } while (iVar29 <= iVar22);
              }
            }
          }
          if (param_6 != (longlong *)0x0) {
            if (param_7 == param_3) {
              sVar3 = *(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x15e8) + lVar33 * 8) + 0x7a);
              if (sVar3 == 0) {
                bVar2 = *(byte *)(lVar23 + *param_6);
LAB_1402b879c:
                uVar12 = (uint)bVar2;
                bVar10 = true;
              }
              else if ((int)sVar3 - 1U < 2) {
                bVar10 = true;
                uVar12 = FUN_1409fc0c0();
                if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) == 0) {
                  uVar12 = (uint)*(byte *)((longlong)(iVar21 + 1) + *param_6);
                }
                else {
                  uVar12 = (uint)*(byte *)(lVar23 + *param_6);
                }
              }
            }
            else {
              iVar17 = 0;
              lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_7 * 8);
              lVar6 = *(longlong *)(lVar28 + 0x15e8);
              iVar29 = (int)(*(longlong *)(lVar28 + 0x15f0) - lVar6 >> 3) + -1;
              iVar22 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x15e8) + lVar33 * 8) + 0xb0);
              if (-1 < iVar29) {
                do {
                  iVar20 = iVar29 + iVar17 >> 1;
                  lVar28 = *(longlong *)(lVar6 + (longlong)iVar20 * 8);
                  if (*(int *)(lVar28 + 0xb0) == iVar22) {
                    iVar22 = *(int *)(lVar28 + 0x7c);
                    if (*(short *)(lVar28 + 0x7a) == 0) {
                      bVar2 = *(byte *)((longlong)iVar22 + *param_6);
                      goto LAB_1402b879c;
                    }
                    if ((int)*(short *)(lVar28 + 0x7a) - 1U < 2) {
                      bVar10 = true;
                      uVar12 = FUN_1409fc0c0();
                      if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        uVar12 = (uint)*(byte *)((longlong)(iVar22 + 1) + *param_6);
                      }
                      else {
                        uVar12 = (uint)*(byte *)((longlong)iVar22 + *param_6);
                      }
                    }
                    break;
                  }
                  if (iVar22 < *(int *)(lVar28 + 0xb0)) {
                    iVar29 = iVar20 + -1;
                  }
                  else {
                    iVar17 = iVar20 + 1;
                  }
                } while (iVar17 <= iVar29);
              }
            }
          }
          lVar28 = *(longlong *)(*(longlong *)(lVar4 + 0x15e8) + lVar33 * 8);
          sVar3 = *(short *)(lVar28 + 0x7a);
          uVar25 = (undefined1)uVar12;
          uVar34 = (undefined1)uVar13;
          if (sVar3 == 0) {
            if (bVar8) {
              if (bVar10) {
                uVar14 = FUN_1409fc0c0();
                uVar15 = FUN_1409fc0c0();
                uVar15 = (uVar15 + (int)((longlong)((ulonglong)uVar15 * 0x100000003) >> 0x3f) *
                                   0x7fffffff) / 0x1446f87;
                if (0x65 - uVar15 < 2) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = FUN_1409fc0c0();
                  uVar16 = (uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) *
                                     0x7fffffff) /
                           ((int)(0x7fffffff / (ulonglong)(0x65 - uVar15)) + 1U);
                }
                iVar21 = ((100 - uVar16) - uVar15) * uVar12 +
                         uVar15 * (uVar14 + (int)((longlong)((ulonglong)uVar14 * 0x100000003) >>
                                                 0x3f) * 0x7fffffff >> 0x17) + uVar16 * uVar13;
                *(char *)(lVar23 + *param_2) =
                     ((char)(iVar21 / 100) + (char)(iVar21 >> 0x1f)) -
                     (char)((longlong)iVar21 * 0x51eb851f >> 0x3f);
              }
              else {
                *(undefined1 *)(lVar23 + *param_2) = uVar34;
              }
            }
            else if (bVar10) {
              *(undefined1 *)(lVar23 + *param_2) = uVar25;
            }
            else if (param_8 == (longlong *)0x0) {
              uVar13 = FUN_1409fc0c0();
              *(char *)(lVar23 + *param_2) =
                   (char)(uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                   0x7fffffff >> 0x17);
            }
            else {
              iVar29 = 0;
              iVar21 = *(int *)(lVar28 + 0xb0);
              iVar22 = (int)(param_8[4] - param_8[3] >> 3) + -1;
              if (-1 < iVar22) {
                do {
                  iVar17 = iVar22 + iVar29 >> 1;
                  piVar30 = *(int **)(param_8[3] + (longlong)iVar17 * 8);
                  if (*piVar30 == iVar21) {
                    cVar11 = FUN_14000d7e0((piVar30[2] - piVar30[1]) + 1);
                    *(char *)(lVar23 + *param_2) = cVar11 + (char)piVar30[1];
                    goto LAB_1402b8af1;
                  }
                  if (iVar21 < *piVar30) {
                    iVar22 = iVar17 + -1;
                  }
                  else {
                    iVar29 = iVar17 + 1;
                  }
                } while (iVar29 <= iVar22);
              }
              uVar13 = FUN_1409fc0c0();
              *(char *)(lVar23 + *param_2) =
                   (char)(uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                   0x7fffffff >> 0x17);
            }
          }
          else if ((int)sVar3 - 1U < 2) {
            if (bVar8) {
              *(undefined1 *)(lVar23 + *param_2) = uVar34;
              if (bVar10) {
                *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar25;
              }
              else {
                *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar34;
              }
            }
            else if (bVar10) {
              *(undefined1 *)(lVar23 + *param_2) = uVar25;
              *(undefined1 *)((longlong)(iVar21 + 1) + *param_2) = uVar25;
            }
            else {
              lVar28 = 2;
              do {
                if (param_8 == (longlong *)0x0) {
                  uVar13 = FUN_1409fc0c0();
                  uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                }
                else {
                  iVar29 = 0;
                  iVar22 = (int)(param_8[4] - param_8[3] >> 3) + -1;
                  iVar21 = *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0x15e8) + lVar33 * 8) + 0xb0
                                   );
                  if (-1 < iVar22) {
                    do {
                      iVar17 = iVar22 + iVar29 >> 1;
                      piVar30 = *(int **)(param_8[3] + (longlong)iVar17 * 8);
                      if (*piVar30 == iVar21) {
                        cVar11 = FUN_14000d7e0((piVar30[2] - piVar30[1]) + 1);
                        *(char *)(lVar23 + *param_2) = cVar11 + (char)piVar30[1];
                        goto LAB_1402b88fa;
                      }
                      if (iVar21 < *piVar30) {
                        iVar22 = iVar17 + -1;
                      }
                      else {
                        iVar29 = iVar17 + 1;
                      }
                    } while (iVar29 <= iVar22);
                  }
                  uVar13 = FUN_1409fc0c0();
                  uVar13 = uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff;
                }
                *(char *)(lVar23 + *param_2) = (char)(uVar13 >> 0x17);
LAB_1402b88fa:
                lVar23 = lVar23 + 1;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
            }
          }
        }
LAB_1402b8af1:
        lVar33 = lVar33 + 1;
        local_res10 = local_res10 + 1;
      } while ((ulonglong)(longlong)local_res10 <
               (ulonglong)(*(longlong *)(lVar4 + 0x15f0) - *(longlong *)(lVar4 + 0x15e8) >> 3));
    }
  }
  if (0 < *(int *)(lVar4 + 0x179c)) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (longlong)*(int *)(lVar4 + 0x179c);
    _Var19 = SUB168(ZEXT816(2) * auVar7,0);
    if (SUB168(ZEXT816(2) * auVar7,8) != 0) {
      _Var19 = 0xffffffffffffffff;
    }
    pvVar18 = operator_new(_Var19);
    param_2[2] = (longlong)pvVar18;
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)(lVar4 + 0x179c);
    local_res10 = 0;
    if (*(longlong *)(lVar4 + 0x1698) - *(longlong *)(lVar4 + 0x1690) >> 3 != 0) {
      local_50 = 0;
      do {
        plVar32 = *(longlong **)(local_50 + *(longlong *)(lVar4 + 0x1690));
        iVar21 = *(int *)((longlong)plVar32 + 0x94);
        lVar33 = (longlong)iVar21;
        if (iVar21 != -1) {
          iVar22 = 0;
          uVar31 = 0;
          bVar9 = false;
          bVar8 = false;
          uVar26 = 0;
          if (param_4 != (longlong *)0x0) {
            if (param_5 == param_3) {
              if (*(ushort *)((longlong)plVar32 + 0x92) < 3) {
                bVar8 = true;
                uVar13 = FUN_1409fc0c0();
                if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) == 0) {
                  lVar28 = param_4[2];
                  iVar22 = iVar21;
LAB_1402b8d28:
                  bVar8 = true;
                  uVar31 = *(undefined2 *)(lVar28 + (longlong)(iVar22 + 1) * 2);
                }
                else {
                  uVar31 = *(undefined2 *)(param_4[2] + lVar33 * 2);
                }
              }
            }
            else {
              lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_5 * 8);
              lVar23 = *(longlong *)(lVar28 + 0x1690);
              iVar29 = (int)(*(longlong *)(lVar28 + 0x1698) - lVar23 >> 3) + -1;
              if (-1 < iVar29) {
                do {
                  iVar17 = iVar29 + iVar22 >> 1;
                  lVar28 = *(longlong *)(lVar23 + (longlong)iVar17 * 8);
                  uVar31 = 0;
                  if (*(int *)(lVar28 + 0x98) == (int)plVar32[0x13]) {
                    iVar22 = *(int *)(lVar28 + 0x94);
                    if (*(ushort *)(lVar28 + 0x92) < 3) {
                      bVar8 = true;
                      uVar13 = FUN_1409fc0c0();
                      if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        lVar28 = param_4[2];
                        goto LAB_1402b8d28;
                      }
                      uVar31 = *(undefined2 *)(param_4[2] + (longlong)iVar22 * 2);
                    }
                    break;
                  }
                  if ((int)plVar32[0x13] < *(int *)(lVar28 + 0x98)) {
                    iVar29 = iVar17 + -1;
                  }
                  else {
                    iVar22 = iVar17 + 1;
                  }
                } while (iVar22 <= iVar29);
              }
            }
          }
          iVar22 = 0;
          uVar27 = 0;
          if (param_6 != (longlong *)0x0) {
            if (param_7 == param_3) {
              if (*(ushort *)((longlong)plVar32 + 0x92) < 3) {
                bVar9 = true;
                uVar13 = FUN_1409fc0c0();
                if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                              0x7fffffff & 0xc0000000) == 0) {
                  lVar28 = param_6[2];
                  iVar22 = iVar21;
LAB_1402b8e87:
                  bVar9 = true;
                  uVar27 = *(undefined2 *)(lVar28 + (longlong)(iVar22 + 1) * 2);
                }
                else {
                  uVar27 = *(undefined2 *)(param_6[2] + lVar33 * 2);
                }
              }
            }
            else {
              lVar28 = *(longlong *)(*(longlong *)(param_1 + 0x178) + (longlong)param_7 * 8);
              lVar23 = *(longlong *)(lVar28 + 0x1690);
              iVar29 = (int)(*(longlong *)(lVar28 + 0x1698) - lVar23 >> 3) + -1;
              uVar27 = uVar26;
              if (-1 < iVar29) {
                do {
                  iVar17 = iVar29 + iVar22 >> 1;
                  lVar28 = *(longlong *)(lVar23 + (longlong)iVar17 * 8);
                  if (*(int *)(lVar28 + 0x98) == (int)plVar32[0x13]) {
                    iVar22 = *(int *)(lVar28 + 0x94);
                    if (*(ushort *)(lVar28 + 0x92) < 3) {
                      bVar9 = true;
                      uVar13 = FUN_1409fc0c0();
                      if ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) *
                                    0x7fffffff & 0xc0000000) == 0) {
                        lVar28 = param_6[2];
                        goto LAB_1402b8e87;
                      }
                      uVar27 = *(undefined2 *)(param_6[2] + (longlong)iVar22 * 2);
                    }
                    break;
                  }
                  if ((int)plVar32[0x13] < *(int *)(lVar28 + 0x98)) {
                    iVar29 = iVar17 + -1;
                  }
                  else {
                    iVar22 = iVar17 + 1;
                  }
                } while (iVar22 <= iVar29);
              }
            }
          }
          if (*(ushort *)((longlong)plVar32 + 0x92) < 3) {
            if (plVar32[1] - *plVar32 >> 2 == 0) {
              uVar31 = 0xffff;
              *(undefined2 *)(param_2[2] + lVar33 * 2) = 0xffff;
              lVar28 = (longlong)(iVar21 + 1);
              lVar33 = param_2[2];
LAB_1402b9069:
              *(undefined2 *)(lVar33 + lVar28 * 2) = uVar31;
            }
            else if (bVar8) {
              *(undefined2 *)(param_2[2] + lVar33 * 2) = uVar31;
              lVar28 = (longlong)(iVar21 + 1);
              lVar33 = param_2[2];
              if (!bVar9) goto LAB_1402b9069;
              *(undefined2 *)(lVar33 + lVar28 * 2) = uVar27;
            }
            else {
              if (!bVar9) {
                plVar1 = plVar32 + 3;
                lVar28 = 2;
                lVar33 = lVar33 * 2;
LAB_1402b8f05:
                if (param_8 == (longlong *)0x0) {
                  iVar21 = FUN_1400b4080(plVar1);
                }
                else {
                  iVar22 = 0;
                  iVar21 = (int)(param_8[7] - param_8[6] >> 3) + -1;
                  if (-1 < iVar21) {
                    do {
                      iVar17 = iVar21 + iVar22 >> 1;
                      piVar30 = *(int **)(param_8[6] + (longlong)iVar17 * 8);
                      iVar29 = *piVar30;
                      if (iVar29 == (int)plVar32[0x13]) {
                        iVar22 = piVar30[1];
                        if (-1 < iVar22) {
                          iVar29 = 0;
                          iVar21 = (int)(plVar32[4] - *plVar1 >> 2) + -1;
                          if (iVar21 < 0) goto LAB_1402b8fcf;
                          lVar23 = (longlong)iVar21;
                          piVar30 = (int *)(*plVar1 + lVar23 * 4);
                          goto LAB_1402b8fa0;
                        }
                        break;
                      }
                      if ((int)plVar32[0x13] < iVar29) {
                        iVar21 = iVar17 + -1;
                      }
                      else {
                        iVar22 = iVar17 + 1;
                      }
                    } while (iVar22 <= iVar21);
                  }
                  iVar21 = FUN_1400b4080(plVar1);
                }
LAB_1402b8fca:
                iVar29 = iVar21;
                if (-1 < iVar29) goto LAB_1402b8fcf;
                goto LAB_1402b8fed;
              }
              *(undefined2 *)(param_2[2] + lVar33 * 2) = uVar27;
              *(undefined2 *)(param_2[2] + (longlong)(iVar21 + 1) * 2) = uVar27;
            }
          }
        }
LAB_1402b9070:
        local_res10 = local_res10 + 1;
        local_50 = local_50 + 8;
      } while ((ulonglong)(longlong)local_res10 <
               (ulonglong)(*(longlong *)(lVar4 + 0x1698) - *(longlong *)(lVar4 + 0x1690) >> 3));
    }
  }
  return;
  while( true ) {
    iVar22 = iVar22 - *piVar30;
    iVar21 = iVar21 + -1;
    piVar30 = piVar30 + -1;
    lVar23 = lVar23 + -1;
    if (lVar23 < 0) break;
LAB_1402b8fa0:
    if (iVar22 < *piVar30) goto LAB_1402b8fca;
  }
LAB_1402b8fcf:
  if ((ulonglong)(longlong)iVar29 < (ulonglong)(plVar32[1] - *plVar32 >> 2)) {
    *(short *)(lVar33 + param_2[2]) = (short)iVar29;
  }
  else {
LAB_1402b8fed:
    uVar24 = plVar32[1] - *plVar32 >> 2;
    if ((uint)uVar24 < 2) {
      uVar31 = 0;
    }
    else {
      uVar13 = FUN_1409fc0c0();
      uVar31 = (undefined2)
               ((uVar13 + (int)((longlong)((ulonglong)uVar13 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               ((int)(0x7fffffff / (uVar24 & 0xffffffff)) + 1U));
    }
    *(undefined2 *)(lVar33 + param_2[2]) = uVar31;
  }
  lVar33 = lVar33 + 2;
  lVar28 = lVar28 + -1;
  if (lVar28 == 0) goto LAB_1402b9070;
  goto LAB_1402b8f05;
}

