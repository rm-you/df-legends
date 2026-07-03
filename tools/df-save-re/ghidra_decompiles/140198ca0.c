// FUN_140198ca0 @ 140198ca0
// callees:
//   -> 1401977e0 FUN_1401977e0
//   -> 140977140 FUN_140977140
//   -> 1401742b0 FUN_1401742b0
//   -> EXTERNAL:000000e1 memmove
//   -> 14084d1c0 FUN_14084d1c0
//   -> 1400f1b70 FUN_1400f1b70
//   -> 140dfb5b4 free
//   -> 14060dfb0 FUN_14060dfb0
//   -> 140d89e40 FUN_140d89e40
//   -> 140168eb0 FUN_140168eb0
//   -> 140168dc0 FUN_140168dc0
//   -> 14015e850 FUN_14015e850
//   -> 140d22a50 FUN_140d22a50
//   -> 140d8d4c0 FUN_140d8d4c0
//   -> 140d7efa0 FUN_140d7efa0
//   -> 140168410 FUN_140168410


void FUN_140198ca0(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  void *pvVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  short sVar23;
  ushort uVar24;
  uint uVar25;
  ushort local_res20;
  
  if ((*(uint *)((longlong)param_1 + 0x24) & 0x20) == 0) {
    *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 0x20;
    FUN_1401977e0(param_1,1);
    iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
    if (iVar7 == 4) {
      param_2 = 1;
    }
    (**(code **)(*param_1 + 0x268))(param_1,param_2);
    iVar7 = (int)(DAT_141c36a90 - DAT_141c36a88 >> 3) + -1;
    if (-1 < iVar7) {
      lVar20 = (longlong)iVar7 * 8;
      lVar12 = DAT_141c36a88;
      do {
        if (*(longlong **)(*(longlong *)(lVar12 + lVar20) + 0x18) == param_1) {
          FUN_140977140(lVar12,iVar7);
          lVar12 = DAT_141c36a88;
        }
        lVar20 = lVar20 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    FUN_1401742b0(param_1);
    iVar7 = 0;
    if (DAT_141c66ff0 - DAT_141c66fe8 >> 3 != 0) {
      lVar21 = 0;
      lVar20 = DAT_141c66fe8;
      lVar12 = DAT_141c66ff0;
      do {
        if (*(longlong **)(*(longlong *)(lVar20 + lVar21) + 0x488) == param_1) {
          *(undefined8 *)(*(longlong *)(lVar20 + lVar21) + 0x488) = 0;
          lVar20 = DAT_141c66fe8;
          lVar12 = DAT_141c66ff0;
        }
        iVar7 = iVar7 + 1;
        lVar21 = lVar21 + 8;
      } while ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar12 - lVar20 >> 3));
    }
    iVar7 = (int)(DAT_141c34718 - DAT_141c34710 >> 2) + -1;
    if (-1 < iVar7) {
      lVar20 = (longlong)iVar7 * 4;
      lVar12 = DAT_141c34710;
      lVar21 = lVar20;
      lVar22 = DAT_141c34718;
      do {
        if (*(int *)(lVar12 + lVar21) == (int)param_1[10]) {
          pvVar1 = (void *)(lVar12 + lVar20 + 4);
          memmove((void *)(lVar12 + lVar20),pvVar1,lVar22 - (longlong)pvVar1);
          lVar22 = DAT_141c34718 + -4;
          lVar12 = DAT_141c34710;
          DAT_141c34718 = lVar22;
        }
        lVar20 = lVar20 + -4;
        lVar21 = lVar21 + -4;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    iVar7 = 0;
    plVar15 = DAT_141c68058;
    if (DAT_141c36a78 - DAT_141c36a70 >> 3 != 0) {
      lVar21 = 0;
      lVar20 = DAT_141c36a70;
      lVar12 = DAT_141c36a78;
      do {
        if (*(int *)(*(longlong *)(lVar20 + lVar21) + 0x14) == (int)param_1[10]) {
          *(undefined4 *)(*(longlong *)(lVar20 + lVar21) + 0x14) = 0xffffffff;
          lVar20 = DAT_141c36a70;
          lVar12 = DAT_141c36a78;
        }
        iVar7 = iVar7 + 1;
        lVar21 = lVar21 + 8;
        plVar15 = DAT_141c68058;
      } while ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar12 - lVar20 >> 3));
    }
    for (; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[2]) {
      if ((*(uint *)(*plVar15 + 0x2c) & 0x20010) != 0) {
        FUN_14084d1c0(*plVar15,0x24,(int)param_1[10]);
      }
    }
    uVar8 = (**(code **)(*param_1 + 0xd8))(param_1);
    switch(uVar8) {
    case 1:
    case 0x2d:
      plVar15 = DAT_141c68058;
      while (plVar15 != (longlong *)0x0) {
        pvVar1 = (void *)*plVar15;
        if ((((*(short *)((longlong)pvVar1 + 0x14) == 0x34) ||
             (*(short *)((longlong)pvVar1 + 0x14) == 0x15)) &&
            ((int)*(short *)((longlong)pvVar1 + 0x1c) == (int)param_1[1])) &&
           (((int)*(short *)((longlong)pvVar1 + 0x1e) == *(int *)((longlong)param_1 + 0xc) &&
            ((int)*(short *)((longlong)pvVar1 + 0x20) == (int)param_1[4])))) {
          plVar15 = (longlong *)plVar15[2];
          if (pvVar1 != (void *)0x0) {
            FUN_1400f1b70(pvVar1);
            free(pvVar1);
          }
        }
        else {
          plVar15 = (longlong *)plVar15[2];
        }
      }
      break;
    case 8:
    case 9:
    case 0x13:
    case 0x19:
    case 0x1b:
    case 0x1c:
    case 0x1f:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      for (plVar15 = DAT_141c68058; plVar15 != (longlong *)0x0; plVar15 = (longlong *)plVar15[2]) {
        lVar20 = *plVar15;
        if (*(short *)(lVar20 + 0x14) == 0x94) {
          plVar14 = (longlong *)(lVar20 + 0xb0);
          iVar7 = 0;
          if (*(longlong *)(lVar20 + 0xb8) - *plVar14 >> 3 != 0) {
            lVar20 = 0;
            do {
              iVar9 = (**(code **)(**(longlong **)(lVar20 + *plVar14) + 0x10))();
              if ((iVar9 == 0x21) &&
                 (iVar9 = (**(code **)(**(longlong **)(lVar20 + *(longlong *)(*plVar15 + 0xb0)) +
                                      0x60))(), iVar9 == (int)param_1[10])) {
                pvVar1 = (void *)*plVar15;
                plVar15 = (longlong *)plVar15[2];
                if (pvVar1 != (void *)0x0) {
                  FUN_1400f1b70(pvVar1);
                  free(pvVar1);
                }
              }
              iVar7 = iVar7 + 1;
              plVar14 = (longlong *)(*plVar15 + 0xb0);
              lVar20 = lVar20 + 8;
            } while ((ulonglong)(longlong)iVar7 <
                     (ulonglong)(*(longlong *)(*plVar15 + 0xb8) - *plVar14 >> 3));
          }
        }
      }
      break;
    case 0x12:
      plVar15 = DAT_141c68058;
      while (plVar15 != (longlong *)0x0) {
        pvVar1 = (void *)*plVar15;
        sVar3 = *(short *)((longlong)pvVar1 + 0x14);
        if ((((sVar3 == 0x11) || (sVar3 == 0xd0)) || (sVar3 == 0x13)) &&
           ((uVar10 = (uint)(short)(*(short *)((longlong)pvVar1 + 0x1e) -
                                   *(short *)((longlong)param_1 + 0xc)),
            uVar17 = (int)uVar10 >> 0x1f,
            uVar6 = *(short *)((longlong)pvVar1 + 0x1c) - (short)param_1[1],
            uVar24 = (short)uVar6 >> 0xf,
            (short)((short)((uVar10 ^ uVar17) - uVar17) + ((uVar6 ^ uVar24) - uVar24)) < 2 &&
            ((int)param_1[4] == (int)*(short *)((longlong)pvVar1 + 0x20))))) {
          plVar15 = (longlong *)plVar15[2];
          if (pvVar1 != (void *)0x0) {
            FUN_1400f1b70(pvVar1);
            free(pvVar1);
          }
        }
        else {
          plVar15 = (longlong *)plVar15[2];
        }
      }
    }
    iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
    if ((((iVar7 == 0x13) || (iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 8)) ||
        ((iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 9 ||
         (((iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 0x23 ||
           (iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 0x24)) ||
          (iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 0x25)))))) ||
       ((iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 0x26 ||
        (iVar7 = (**(code **)(*param_1 + 0xd8))(param_1), iVar7 == 0x27)))) {
      DAT_141d86414 = 1;
    }
    iVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
    if (iVar7 == 0x13) {
      DAT_141c70670 = 1;
    }
    lVar20 = (**(code **)(*param_1 + 0xc0))(param_1);
    if (lVar20 != 0) {
      DAT_141c70671 = 1;
    }
    (**(code **)(*param_1 + 0x270))(param_1,param_2,param_3);
    cVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar5 != '\0') {
      local_res20 = *(ushort *)(param_1 + 1);
      uVar17 = (uint)(short)local_res20;
      sVar3 = (short)param_1[4];
      uVar10 = uVar17;
      if ((int)uVar17 <= *(int *)((longlong)param_1 + 0x14)) {
        do {
          sVar16 = (short)uVar10;
          uVar25 = (uint)*(short *)((longlong)param_1 + 0xc);
          uVar18 = uVar25;
          if ((int)uVar25 <= (int)param_1[3]) {
            do {
              sVar23 = (short)uVar25;
              bVar4 = false;
              FUN_14060dfb0(uVar10 & 0xffff,uVar25 & 0xffff,sVar3);
              FUN_14060dfb0(uVar10 & 0xffff,uVar25 & 0xffff,sVar3 + 1);
              cVar5 = FUN_140d89e40(&DAT_141c53470,uVar10 & 0xffff,uVar25 & 0xffff,sVar3,0,0);
              lVar20 = DAT_141d69520;
              if (cVar5 == '\0') {
                if ((((short)uVar10 < 0) || (DAT_141d69554 <= (int)uVar17)) ||
                   ((sVar23 < 0 ||
                    ((((DAT_141d69558 <= (int)uVar18 || (sVar3 < 0)) || (DAT_141d6955c <= sVar3)) ||
                     ((DAT_141d69520 == 0 ||
                      (lVar12 = *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (DAT_141d69520 + ((longlong)(short)uVar10 >> 4) * 8) +
                                   ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8), lVar12 == 0)
                      ))))))) {
                  uVar24 = 0;
                }
                else {
                  uVar10 = uVar17 & 0x8000000f;
                  if ((int)uVar10 < 0) {
                    uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
                  }
                  uVar11 = uVar18 & 0x8000000f;
                  if ((int)uVar11 < 0) {
                    uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                  }
                  uVar24 = *(ushort *)
                            (lVar12 + 0x92 +
                            ((longlong)(int)uVar10 * 0x10 + (longlong)(int)uVar11) * 2);
                }
                if ((uVar24 == 0x23) || (uVar24 == 0x2a)) {
                  bVar4 = true;
                }
                if ((ushort)(uVar24 - 0x103) < 2) {
                  bVar4 = true;
                }
                cVar5 = FUN_140168eb0(&DAT_141c53470,local_res20,uVar25 & 0xffff,sVar3);
                if (cVar5 != '\0') {
                  bVar4 = true;
                }
                if (((uVar24 == 0x43) || (uVar24 == 0x46)) || (uVar24 - 0x47 < 6)) {
                  bVar4 = true;
                }
                if (uVar24 < 0x179) {
                  if (((0x168 < uVar24) || (uVar24 - 2 < 2)) || (uVar24 - 0x59 < 2)) {
LAB_1401993a9:
                    bVar4 = true;
                  }
                }
                else if (uVar24 - 0x1d1 < 8) goto LAB_1401993a9;
                uVar10 = (uint)local_res20;
                cVar5 = FUN_140168dc0(&DAT_141c53470,uVar10,uVar25 & 0xffff,sVar3);
                if ((cVar5 != '\0') || (bVar4)) {
                  if (((-1 < (short)local_res20) &&
                      ((((int)uVar17 < DAT_141d69554 && (-1 < sVar23)) &&
                       ((int)uVar18 < DAT_141d69558)))) &&
                     (((-1 < sVar3 && (sVar3 < DAT_141d6955c)) &&
                      ((lVar20 != 0 &&
                       (lVar20 = *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lVar20 + ((longlong)(short)local_res20 >> 4) * 8)
                                    + ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                       lVar20 != 0)))))) {
                    uVar11 = uVar18 & 0x8000000f;
                    if ((int)uVar11 < 0) {
                      uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                    }
                    uVar13 = uVar17 & 0x8000000f;
                    if ((int)uVar13 < 0) {
                      uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                    }
                    FUN_14015e850(lVar20,uVar13,uVar11 & 0xffff);
                  }
                  FUN_140d22a50(&DAT_141c53470,local_res20,uVar25 & 0xffff,sVar3);
                  if (-1 < (short)local_res20) {
                    if ((((int)uVar17 < DAT_141d69554) && (-1 < sVar23)) &&
                       (((int)uVar18 < DAT_141d69558 &&
                        ((((-1 < sVar3 && (sVar3 < DAT_141d6955c)) && (DAT_141d69520 != 0)) &&
                         (lVar20 = *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        (DAT_141d69520 + ((longlong)(short)local_res20 >> 4) * 8) +
                                      ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                         lVar20 != 0)))))) {
                      uVar11 = uVar17 & 0x8000000f;
                      if ((int)uVar11 < 0) {
                        uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                      }
                      uVar13 = uVar18 & 0x8000000f;
                      if ((int)uVar13 < 0) {
                        uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                      }
                      puVar2 = (uint *)(lVar20 + 0x694 +
                                       ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar13) * 4);
                      *puVar2 = *puVar2 & 0xfffffeff;
                    }
                    if ((int)uVar17 < DAT_141d69554) {
                      if ((((-1 < sVar23) && ((int)uVar18 < DAT_141d69558)) &&
                          ((-1 < sVar3 && ((sVar3 < DAT_141d6955c && (DAT_141d69520 != 0)))))) &&
                         (lVar20 = *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        (DAT_141d69520 + ((longlong)(short)local_res20 >> 4) * 8) +
                                      ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                         lVar20 != 0)) {
                        uVar11 = uVar17 & 0x8000000f;
                        if ((int)uVar11 < 0) {
                          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                        }
                        uVar13 = uVar18 & 0x8000000f;
                        if ((int)uVar13 < 0) {
                          uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                        }
                        puVar2 = (uint *)(lVar20 + 0x694 +
                                         ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar13) * 4)
                        ;
                        *puVar2 = *puVar2 & 0xfffffdff;
                      }
                      if ((int)uVar17 < DAT_141d69554) {
                        if ((((-1 < sVar23) && ((int)uVar18 < DAT_141d69558)) && (-1 < sVar3)) &&
                           (((sVar3 < DAT_141d6955c && (DAT_141d69520 != 0)) &&
                            (lVar20 = *(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (DAT_141d69520 + ((longlong)(short)local_res20 >> 4) * 8)
                                         + ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                            lVar20 != 0)))) {
                          uVar11 = uVar17 & 0x8000000f;
                          if ((int)uVar11 < 0) {
                            uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                          }
                          uVar13 = uVar18 & 0x8000000f;
                          if ((int)uVar13 < 0) {
                            uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                          }
                          puVar2 = (uint *)(lVar20 + 0x694 +
                                           ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar13) *
                                           4);
                          *puVar2 = *puVar2 & 0xfffffbff;
                        }
                        if ((int)uVar17 < DAT_141d69554) {
                          if (((-1 < sVar23) && ((int)uVar18 < DAT_141d69558)) &&
                             ((-1 < sVar3 &&
                              (((sVar3 < DAT_141d6955c && (DAT_141d69520 != 0)) &&
                               (lVar20 = *(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)
                                              (DAT_141d69520 +
                                              ((longlong)(short)local_res20 >> 4) * 8) +
                                            ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                               lVar20 != 0)))))) {
                            uVar11 = uVar17 & 0x8000000f;
                            if ((int)uVar11 < 0) {
                              uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                            }
                            uVar13 = uVar18 & 0x8000000f;
                            if ((int)uVar13 < 0) {
                              uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                            }
                            puVar2 = (uint *)(lVar20 + 0x694 +
                                             ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar13)
                                             * 4);
                            *puVar2 = *puVar2 & 0xfffff7ff;
                          }
                          if ((int)uVar17 < DAT_141d69554) {
                            if (((-1 < sVar23) && ((int)uVar18 < DAT_141d69558)) &&
                               (((-1 < sVar3 && ((sVar3 < DAT_141d6955c && (DAT_141d69520 != 0))))
                                && (lVar20 = *(longlong *)
                                              (*(longlong *)
                                                (*(longlong *)
                                                  (DAT_141d69520 +
                                                  ((longlong)(short)local_res20 >> 4) * 8) +
                                                ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                                   lVar20 != 0)))) {
                              uVar11 = uVar17 & 0x8000000f;
                              if ((int)uVar11 < 0) {
                                uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                              }
                              uVar13 = uVar18 & 0x8000000f;
                              if ((int)uVar13 < 0) {
                                uVar13 = (uVar13 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar20 + 0x694 +
                                               ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar13
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xffffefff;
                            }
                            if (((((((int)uVar17 < DAT_141d69554) && (-1 < sVar23)) &&
                                  ((int)uVar18 < DAT_141d69558)) &&
                                 ((-1 < sVar3 && (sVar3 < DAT_141d6955c)))) && (DAT_141d69520 != 0))
                               && (lVar20 = *(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)
                                                 (DAT_141d69520 +
                                                 ((longlong)(short)local_res20 >> 4) * 8) +
                                               ((longlong)sVar23 >> 4) * 8) + (longlong)sVar3 * 8),
                                  lVar20 != 0)) {
                              uVar11 = uVar17 & 0x8000000f;
                              if ((int)uVar11 < 0) {
                                uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
                              }
                              uVar18 = uVar18 & 0x8000000f;
                              if ((int)uVar18 < 0) {
                                uVar18 = (uVar18 - 1 | 0xfffffff0) + 1;
                              }
                              puVar2 = (uint *)(lVar20 + 0x694 +
                                               ((longlong)(int)uVar11 * 0x10 + (longlong)(int)uVar18
                                               ) * 4);
                              *puVar2 = *puVar2 & 0xffffff7f;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                FUN_140d8d4c0(&DAT_141c53470,local_res20,uVar25 & 0xffff,1);
              }
              sVar16 = (short)uVar10;
              uVar24 = sVar23 + 1;
              uVar25 = (uint)uVar24;
              uVar18 = (int)(short)uVar24;
            } while ((int)(short)uVar24 <= (int)param_1[3]);
          }
          local_res20 = sVar16 + 1;
          uVar10 = (uint)local_res20;
          uVar17 = (uint)(short)local_res20;
        } while ((int)uVar17 <= *(int *)((longlong)param_1 + 0x14));
      }
      uVar24 = *(ushort *)(param_1 + 2);
      uVar6 = *(ushort *)((longlong)param_1 + 0x1c);
      uVar10 = 0xffff;
      do {
        uVar17 = 0xffff;
        do {
          FUN_140d7efa0(&DAT_141c53470,uVar24 + uVar10,uVar17 + uVar6,sVar3);
          uVar19 = (short)uVar17 + 1;
          uVar17 = (uint)uVar19;
        } while ((short)uVar19 < 2);
        uVar19 = (short)uVar10 + 1;
        uVar10 = (uint)uVar19;
      } while ((short)uVar19 < 2);
      uVar10 = 0xfffe;
      do {
        uVar17 = 0xfffe;
        do {
          FUN_140d7efa0(&DAT_141c53470,uVar24 + uVar10,uVar17 + uVar6,sVar3);
          uVar19 = (short)uVar17 + 1;
          uVar17 = (uint)uVar19;
        } while ((short)uVar19 < 3);
        uVar19 = (short)uVar10 + 1;
        uVar10 = (uint)uVar19;
      } while ((short)uVar19 < 3);
    }
    if ((*(byte *)((longlong)param_1 + 0x24) & 0x40) == 0) {
      FUN_140168410(&DAT_141c6fd98,param_1);
      DAT_141c3e245 = 1;
      DAT_14169928f = 1;
      DAT_14169928e = 1;
      if (((DAT_141c3d260 == 0x11) || (DAT_141c3d260 == 0x17)) && (DAT_141d694f0 == param_1)) {
        DAT_141d694f0 = (longlong *)0x0;
        DAT_141d694fa = 1;
      }
    }
  }
  return;
}

