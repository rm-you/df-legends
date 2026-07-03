// FUN_140de2250 @ 140de2250
// callees:
//   -> 1407f0860 FUN_1407f0860
//   -> 140838f60 FUN_140838f60
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 1400390b0 FUN_1400390b0
//   -> 14001b620 FUN_14001b620
//   -> 140050410 FUN_140050410
//   -> 1400b5f70 FUN_1400b5f70
//   -> 140cab160 FUN_140cab160
//   -> 14000c390 FUN_14000c390
//   -> 140002020 FUN_140002020


void FUN_140de2250(longlong param_1)

{
  uint *puVar1;
  void *pvVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  longlong *plVar14;
  int *piVar15;
  int iVar16;
  longlong *plVar17;
  int *piVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  int *piVar26;
  int *piVar27;
  longlong lVar28;
  bool bVar29;
  int *local_78;
  int *piStack_70;
  int *local_68;
  longlong *local_60;
  longlong *plStack_58;
  longlong *local_50;
  
  iVar7 = (int)(*(longlong *)(param_1 + 0x13f00) - *(longlong *)(param_1 + 0x13ef8) >> 3) + -1;
  lVar20 = (longlong)iVar7;
  iVar8 = DAT_1416b1980;
  plVar9 = DAT_141d69430;
  plVar24 = DAT_141d69438;
  if (-1 < iVar7) {
    do {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x13ef8) + lVar20 * 8);
      if (((*(uint *)(plVar9 + 2) & 0x20000) != 0) && (plVar9 != (longlong *)0x0)) {
        if ((*(uint *)(plVar9 + 2) & 0x100000) == 0) {
          FUN_1407f0860(plVar9,0);
          if ((int)plVar9[10] != -1) {
            FUN_140838f60(plVar9);
          }
          *(uint *)(plVar9 + 2) = *(uint *)(plVar9 + 2) & 0x7fffffff;
          (**(code **)(*plVar9 + 800))(plVar9);
        }
        (**(code **)(*plVar9 + 0x770))(plVar9);
      }
      lVar20 = lVar20 + -1;
      iVar8 = DAT_1416b1980;
      plVar9 = DAT_141d69430;
      plVar24 = DAT_141d69438;
    } while (-1 < lVar20);
  }
  for (; plVar17 = DAT_141d69438, plVar9 < DAT_141d69438; plVar9 = plVar9 + 1) {
    lVar20 = *plVar9;
    iVar7 = (int)(*(longlong *)(lVar20 + 0x28) - *(longlong *)(lVar20 + 0x20) >> 3) + -1;
    DAT_141d69438 = plVar24;
    if (-1 < iVar7) {
      lVar25 = (longlong)iVar7 * 8;
      lVar28 = lVar25;
      do {
        pvVar2 = *(void **)(lVar28 + *(longlong *)(lVar20 + 0x20));
        if ((((*(byte *)((longlong)pvVar2 + 0x44) & 1) != 0) ||
            (((*(int *)((longlong)pvVar2 + 4) == 1 &&
              (iVar11 = *(int *)((longlong)pvVar2 + 0x2c), iVar11 != -1)) &&
             ((iVar11 < iVar8 ||
              ((iVar8 == iVar11 && (*(int *)((longlong)pvVar2 + 0x28) <= DAT_1416b1974)))))))) &&
           (*(int *)((longlong)pvVar2 + 0x1c) == 0)) {
          free(pvVar2);
          pvVar13 = (void *)(*(longlong *)(lVar20 + 0x20) + lVar25);
          pvVar2 = (void *)((longlong)pvVar13 + 8);
          memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x28) - (longlong)pvVar2);
          *(longlong *)(lVar20 + 0x28) = *(longlong *)(lVar20 + 0x28) + -8;
          iVar8 = DAT_1416b1980;
        }
        lVar25 = lVar25 + -8;
        lVar28 = lVar28 + -8;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    plVar24 = DAT_141d69438;
    DAT_141d69438 = plVar17;
  }
  uVar19 = 0;
  iVar8 = (int)(*(longlong *)(param_1 + 0x111930) - *(longlong *)(param_1 + 0x111928) >> 3) + -1;
  lVar20 = (longlong)iVar8;
  DAT_141d69438 = plVar24;
  if (-1 < iVar8) {
    do {
      pvVar2 = *(void **)(*(longlong *)(param_1 + 0x111928) + lVar20 * 8);
      iVar8 = *(int *)((longlong)pvVar2 + 0x24);
      if (iVar8 == -1) {
LAB_140de246e:
        FUN_1400390b0(pvVar2);
        if (*(longlong *)((longlong)pvVar2 + 0x10) - *(longlong *)((longlong)pvVar2 + 8) >> 3 == 0)
        goto LAB_140de2487;
      }
      else {
        iVar7 = (int)(DAT_141d69288 - DAT_141d69280 >> 3) + -1;
        uVar22 = uVar19;
        if (-1 < iVar7) {
          do {
            iVar11 = iVar7 + (int)uVar22 >> 1;
            piVar26 = *(int **)(DAT_141d69280 + (longlong)iVar11 * 8);
            if (*piVar26 == iVar8) {
              if (piVar26 != (int *)0x0) {
                if (*(short *)((longlong)pvVar2 + 4) == 3) {
                  bVar29 = piVar26[0x30] == 1;
                }
                else {
                  if (*(short *)((longlong)pvVar2 + 4) != 4) goto LAB_140de246e;
                  bVar29 = piVar26[0x30] == 5;
                }
                if (bVar29) goto LAB_140de246e;
              }
              break;
            }
            if (iVar8 < *piVar26) {
              iVar7 = iVar11 + -1;
            }
            else {
              uVar22 = (ulonglong)(iVar11 + 1);
            }
          } while ((int)uVar22 <= iVar7);
        }
LAB_140de2487:
        FUN_14001b620(pvVar2);
        free(pvVar2);
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  local_60 = (longlong *)0x0;
  plStack_58 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  plVar24 = *(longlong **)(param_1 + 0x115e18);
  for (plVar9 = *(longlong **)(param_1 + 0x115e10); plVar9 < plVar24; plVar9 = plVar9 + 1) {
    lVar20 = *plVar9;
    switch(*(undefined4 *)(lVar20 + 0xc0)) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xc:
    case 0xf:
    case 0x10:
switchD_140de2503_caseD_0:
      *(uint *)(lVar20 + 0x78) = *(uint *)(lVar20 + 0x78) | 2;
      break;
    case 0xd:
    case 0xe:
      if ((**(byte **)(lVar20 + 0xb8) & 1) != 0) goto switchD_140de2503_caseD_0;
      break;
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      if (*(int *)(lVar20 + 4) == -1) goto switchD_140de2503_caseD_0;
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x115e10);
  uVar22 = (ulonglong)((longlong)plVar24 + (7 - (longlong)plVar9)) >> 3;
  if (plVar24 < plVar9) {
    uVar22 = uVar19;
  }
  uVar21 = uVar19;
  if (uVar22 != 0) {
    do {
      iVar8 = ((int *)*plVar9)[0x10];
      if ((iVar8 != -1) && (iVar8 != *(int *)*plVar9)) {
        iVar7 = (int)(*(longlong *)(param_1 + 0x115e18) - *(longlong *)(param_1 + 0x115e10) >> 3) +
                -1;
        uVar23 = uVar19;
        if (-1 < iVar7) {
          do {
            iVar11 = (int)uVar23 + iVar7 >> 1;
            piVar26 = *(int **)(*(longlong *)(param_1 + 0x115e10) + (longlong)iVar11 * 8);
            if (*piVar26 == iVar8) {
              if (piVar26 != (int *)0x0) {
                piVar26[0x1e] = piVar26[0x1e] & 0xfffffffd;
              }
              break;
            }
            if (iVar8 < *piVar26) {
              iVar7 = iVar11 + -1;
            }
            else {
              uVar23 = (ulonglong)(iVar11 + 1);
            }
          } while ((int)uVar23 <= iVar7);
        }
      }
      plVar9 = plVar9 + 1;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar22);
  }
  plVar24 = (longlong *)0x0;
  plVar9 = *(longlong **)(param_1 + 0x13b60);
  uVar22 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x13b68) + (7 - (longlong)plVar9)) >> 3;
  if (*(longlong **)(param_1 + 0x13b68) < plVar9) {
    uVar22 = uVar19;
  }
  uVar21 = uVar19;
  if (uVar22 != 0) {
    do {
      if (*(longlong *)(*plVar9 + 0x11e8) != 0) {
        puVar1 = (uint *)(*(longlong *)(*plVar9 + 0x11e8) + 0x78);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      plVar9 = plVar9 + 1;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar22);
  }
  plVar9 = *(longlong **)(param_1 + 0x115de0);
  uVar22 = (ulonglong)((longlong)*(longlong **)(param_1 + 0x115de8) + (7 - (longlong)plVar9)) >> 3;
  if (*(longlong **)(param_1 + 0x115de8) < plVar9) {
    uVar22 = uVar19;
  }
  uVar21 = uVar19;
  if (uVar22 != 0) {
    do {
      if (*(longlong *)(*plVar9 + 0x60) != 0) {
        puVar1 = (uint *)(*(longlong *)(*plVar9 + 0x60) + 0x78);
        *puVar1 = *puVar1 & 0xfffffffd;
      }
      plVar9 = plVar9 + 1;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar22);
  }
  plVar9 = *(longlong **)(param_1 + 0x115e18);
  plVar17 = *(longlong **)(param_1 + 0x115e10);
  plVar14 = (longlong *)0x0;
  plVar4 = local_60;
  plVar6 = plStack_58;
  do {
    plStack_58 = plVar14;
    local_60 = plVar4;
    if (plVar9 <= plVar17) {
      uVar22 = (ulonglong)((longlong)plStack_58 + (7 - (longlong)plVar4)) >> 3;
      if (plStack_58 < plVar4) {
        uVar22 = uVar19;
      }
      plVar14 = plVar4;
      plStack_58 = plVar6;
      plVar9 = DAT_141c66fe8;
      plVar17 = DAT_141c66ff0;
      if (uVar22 != 0) {
        do {
          *(uint *)(*plVar14 + 0x78) = *(uint *)(*plVar14 + 0x78) | 1;
          pvVar2 = (void *)*plVar14;
          if (pvVar2 != (void *)0x0) {
            FUN_1400b5f70(pvVar2);
            free(pvVar2);
          }
          uVar19 = uVar19 + 1;
          plVar14 = plVar14 + 1;
          plVar9 = DAT_141c66fe8;
          plVar17 = DAT_141c66ff0;
        } while (uVar19 < uVar22);
      }
      do {
        plVar6 = DAT_141c66ff0;
        if (DAT_141c66ff0 <= plVar9) {
          DAT_141c66ff0 = plVar17;
          if (plVar4 != (longlong *)0x0) {
            FUN_140002020(plVar4,(longlong)plVar24 - (longlong)plVar4 >> 3,8);
          }
          return;
        }
        piVar26 = (int *)0x0;
        lVar20 = *plVar9;
        DAT_141c66ff0 = plVar17;
        if (*(longlong *)(lVar20 + 0x9a0) != 0) {
          FUN_140cab160();
        }
        local_78 = (int *)0x0;
        piStack_70 = (int *)0x0;
        local_68 = (int *)0x0;
        piVar27 = *(int **)(lVar20 + 0x2f0);
        piVar10 = (int *)0x0;
        piVar15 = (int *)0x0;
        piVar5 = piStack_70;
        for (piVar18 = *(int **)(lVar20 + 0x2e8); piStack_70 = piVar15, piVar18 < piVar27;
            piVar18 = piVar18 + 1) {
          iVar8 = *piVar18;
          lVar25 = DAT_141d64da0 - DAT_141d64d98 >> 3;
          if ((lVar25 != 0) && (iVar8 != -1)) {
            iVar7 = (int)lVar25 + -1;
            iVar11 = 0;
            if (-1 < iVar7) {
              do {
                iVar16 = iVar11 + iVar7 >> 1;
                piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar16 * 8);
                if (*piVar3 == iVar8) {
                  if ((piVar3 != (int *)0x0) && (piVar15 = piStack_70, (short)piVar3[1] == 2))
                  goto LAB_140de2893;
                  break;
                }
                if (iVar8 < *piVar3) {
                  iVar7 = iVar16 + -1;
                }
                else {
                  iVar11 = iVar16 + 1;
                }
              } while (iVar11 <= iVar7);
            }
          }
          if ((piVar18 < piStack_70) && (piVar10 <= piVar18)) {
            lVar25 = (longlong)piVar18 - (longlong)piVar10;
            if (piStack_70 == piVar26) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar10 = local_78;
              piVar26 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = piVar10[lVar25 >> 2];
LAB_140de2889:
              *piStack_70 = iVar8;
            }
          }
          else {
            if (piStack_70 == piVar26) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar10 = local_78;
              piVar26 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = *piVar18;
              goto LAB_140de2889;
            }
          }
          piVar15 = piStack_70 + 1;
          piVar5 = piStack_70 + 1;
LAB_140de2893:
          piStack_70 = piVar5;
          piVar5 = piStack_70;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)((longlong)piStack_70 + (3 - (longlong)piVar10)) >> 2;
        if (piStack_70 < piVar10) {
          uVar19 = uVar22;
        }
        piVar27 = piVar10;
        piStack_70 = piVar5;
        if (uVar19 != 0) {
          do {
            lVar25 = *(longlong *)(lVar20 + 0x2e8);
            iVar8 = (int)(*(longlong *)(lVar20 + 0x2f0) - lVar25 >> 2) + -1;
            iVar7 = 0;
            if (-1 < iVar8) {
              do {
                iVar16 = iVar8 + iVar7 >> 1;
                iVar11 = *(int *)(lVar25 + (longlong)iVar16 * 4);
                if (iVar11 == *piVar10) {
                  pvVar13 = (void *)(lVar25 + (longlong)iVar16 * 4);
                  pvVar2 = (void *)((longlong)pvVar13 + 4);
                  memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x2f0) - (longlong)pvVar2);
                  *(longlong *)(lVar20 + 0x2f0) = *(longlong *)(lVar20 + 0x2f0) + -4;
                  break;
                }
                if (*piVar10 < iVar11) {
                  iVar8 = iVar16 + -1;
                }
                else {
                  iVar7 = iVar16 + 1;
                }
              } while (iVar7 <= iVar8);
            }
            piVar10 = piVar10 + 1;
            uVar22 = uVar22 + 1;
            piVar27 = local_78;
          } while (uVar22 < uVar19);
        }
        if (piVar27 != (int *)0x0) {
          FUN_140002020(piVar27,(longlong)piVar26 - (longlong)piVar27 >> 2,4);
        }
        local_78 = (int *)0x0;
        piStack_70 = (int *)0x0;
        piVar10 = (int *)0x0;
        local_68 = (int *)0x0;
        piVar26 = *(int **)(lVar20 + 0x2a8);
        piVar18 = (int *)0x0;
        piVar15 = (int *)0x0;
        piVar5 = piStack_70;
        for (piVar27 = *(int **)(lVar20 + 0x2a0); piStack_70 = piVar15, piVar27 < piVar26;
            piVar27 = piVar27 + 1) {
          iVar8 = *piVar27;
          lVar25 = DAT_141d64da0 - DAT_141d64d98 >> 3;
          if ((lVar25 != 0) && (iVar8 != -1)) {
            iVar7 = (int)lVar25 + -1;
            iVar11 = 0;
            if (-1 < iVar7) {
              do {
                iVar12 = iVar11 + iVar7 >> 1;
                piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar12 * 8);
                iVar16 = *piVar3;
                if (iVar16 == iVar8) {
                  piVar15 = piStack_70;
                  if (piVar3 != (int *)0x0) goto LAB_140de2a8c;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar7 = iVar12 + -1;
                }
                else {
                  iVar11 = iVar12 + 1;
                }
              } while (iVar11 <= iVar7);
            }
          }
          if ((piVar27 < piStack_70) && (piVar18 <= piVar27)) {
            lVar25 = (longlong)piVar27 - (longlong)piVar18;
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = piVar18[lVar25 >> 2];
LAB_140de2a82:
              *piStack_70 = iVar8;
            }
          }
          else {
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = *piVar27;
              goto LAB_140de2a82;
            }
          }
          piVar15 = piStack_70 + 1;
          piVar5 = piStack_70 + 1;
LAB_140de2a8c:
          piStack_70 = piVar5;
          piVar5 = piStack_70;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)((longlong)piStack_70 + (3 - (longlong)piVar18)) >> 2;
        if (piStack_70 < piVar18) {
          uVar19 = uVar22;
        }
        piVar26 = piVar18;
        piStack_70 = piVar5;
        if (uVar19 != 0) {
          do {
            lVar25 = *(longlong *)(lVar20 + 0x2a0);
            iVar8 = (int)(*(longlong *)(lVar20 + 0x2a8) - lVar25 >> 2) + -1;
            iVar7 = 0;
            if (-1 < iVar8) {
              do {
                iVar16 = iVar8 + iVar7 >> 1;
                iVar11 = *(int *)(lVar25 + (longlong)iVar16 * 4);
                if (iVar11 == *piVar18) {
                  pvVar13 = (void *)(lVar25 + (longlong)iVar16 * 4);
                  pvVar2 = (void *)((longlong)pvVar13 + 4);
                  memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x2a8) - (longlong)pvVar2);
                  *(longlong *)(lVar20 + 0x2a8) = *(longlong *)(lVar20 + 0x2a8) + -4;
                  break;
                }
                if (*piVar18 < iVar11) {
                  iVar8 = iVar16 + -1;
                }
                else {
                  iVar7 = iVar16 + 1;
                }
              } while (iVar7 <= iVar8);
            }
            piVar18 = piVar18 + 1;
            uVar22 = uVar22 + 1;
            piVar26 = local_78;
          } while (uVar22 < uVar19);
        }
        if (piVar26 != (int *)0x0) {
          FUN_140002020(piVar26,(longlong)piVar10 - (longlong)piVar26 >> 2,4);
        }
        local_78 = (int *)0x0;
        piStack_70 = (int *)0x0;
        piVar10 = (int *)0x0;
        local_68 = (int *)0x0;
        piVar26 = *(int **)(lVar20 + 0x2c0);
        piVar18 = (int *)0x0;
        piVar15 = (int *)0x0;
        piVar5 = piStack_70;
        for (piVar27 = *(int **)(lVar20 + 0x2b8); piStack_70 = piVar15, piVar27 < piVar26;
            piVar27 = piVar27 + 1) {
          iVar8 = *piVar27;
          lVar25 = DAT_141d64da0 - DAT_141d64d98 >> 3;
          if ((lVar25 != 0) && (iVar8 != -1)) {
            iVar7 = (int)lVar25 + -1;
            iVar11 = 0;
            if (-1 < iVar7) {
              do {
                iVar12 = iVar11 + iVar7 >> 1;
                piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar12 * 8);
                iVar16 = *piVar3;
                if (iVar16 == iVar8) {
                  piVar15 = piStack_70;
                  if (piVar3 != (int *)0x0) goto LAB_140de2c8c;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar7 = iVar12 + -1;
                }
                else {
                  iVar11 = iVar12 + 1;
                }
              } while (iVar11 <= iVar7);
            }
          }
          if ((piVar27 < piStack_70) && (piVar18 <= piVar27)) {
            lVar25 = (longlong)piVar27 - (longlong)piVar18;
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = piVar18[lVar25 >> 2];
LAB_140de2c82:
              *piStack_70 = iVar8;
            }
          }
          else {
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = *piVar27;
              goto LAB_140de2c82;
            }
          }
          piVar15 = piStack_70 + 1;
          piVar5 = piStack_70 + 1;
LAB_140de2c8c:
          piStack_70 = piVar5;
          piVar5 = piStack_70;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)((longlong)piStack_70 + (3 - (longlong)piVar18)) >> 2;
        if (piStack_70 < piVar18) {
          uVar19 = uVar22;
        }
        piVar26 = piVar18;
        piStack_70 = piVar5;
        if (uVar19 != 0) {
          do {
            lVar25 = *(longlong *)(lVar20 + 0x2b8);
            iVar8 = (int)(*(longlong *)(lVar20 + 0x2c0) - lVar25 >> 2) + -1;
            iVar7 = 0;
            if (-1 < iVar8) {
              do {
                iVar16 = iVar8 + iVar7 >> 1;
                iVar11 = *(int *)(lVar25 + (longlong)iVar16 * 4);
                if (iVar11 == *piVar18) {
                  pvVar13 = (void *)(lVar25 + (longlong)iVar16 * 4);
                  pvVar2 = (void *)((longlong)pvVar13 + 4);
                  memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x2c0) - (longlong)pvVar2);
                  *(longlong *)(lVar20 + 0x2c0) = *(longlong *)(lVar20 + 0x2c0) + -4;
                  break;
                }
                if (*piVar18 < iVar11) {
                  iVar8 = iVar16 + -1;
                }
                else {
                  iVar7 = iVar16 + 1;
                }
              } while (iVar7 <= iVar8);
            }
            piVar18 = piVar18 + 1;
            uVar22 = uVar22 + 1;
            piVar26 = local_78;
          } while (uVar22 < uVar19);
        }
        if (piVar26 != (int *)0x0) {
          FUN_140002020(piVar26,(longlong)piVar10 - (longlong)piVar26 >> 2,4);
        }
        local_78 = (int *)0x0;
        piStack_70 = (int *)0x0;
        piVar10 = (int *)0x0;
        local_68 = (int *)0x0;
        piVar26 = *(int **)(lVar20 + 0x2d8);
        piVar18 = (int *)0x0;
        piVar15 = (int *)0x0;
        piVar5 = piStack_70;
        for (piVar27 = *(int **)(lVar20 + 0x2d0); piStack_70 = piVar15, piVar27 < piVar26;
            piVar27 = piVar27 + 1) {
          iVar8 = *piVar27;
          lVar25 = DAT_141d64da0 - DAT_141d64d98 >> 3;
          if ((lVar25 != 0) && (iVar8 != -1)) {
            iVar7 = (int)lVar25 + -1;
            iVar11 = 0;
            if (-1 < iVar7) {
              do {
                iVar12 = iVar11 + iVar7 >> 1;
                piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar12 * 8);
                iVar16 = *piVar3;
                if (iVar16 == iVar8) {
                  piVar15 = piStack_70;
                  if (piVar3 != (int *)0x0) goto LAB_140de2e8c;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar7 = iVar12 + -1;
                }
                else {
                  iVar11 = iVar12 + 1;
                }
              } while (iVar11 <= iVar7);
            }
          }
          if ((piVar27 < piStack_70) && (piVar18 <= piVar27)) {
            lVar25 = (longlong)piVar27 - (longlong)piVar18;
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = piVar18[lVar25 >> 2];
LAB_140de2e82:
              *piStack_70 = iVar8;
            }
          }
          else {
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = *piVar27;
              goto LAB_140de2e82;
            }
          }
          piVar15 = piStack_70 + 1;
          piVar5 = piStack_70 + 1;
LAB_140de2e8c:
          piStack_70 = piVar5;
          piVar5 = piStack_70;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)((longlong)piStack_70 + (3 - (longlong)piVar18)) >> 2;
        if (piStack_70 < piVar18) {
          uVar19 = uVar22;
        }
        piVar26 = piVar18;
        piStack_70 = piVar5;
        if (uVar19 != 0) {
          do {
            lVar25 = *(longlong *)(lVar20 + 0x2d0);
            iVar8 = (int)(*(longlong *)(lVar20 + 0x2d8) - lVar25 >> 2) + -1;
            iVar7 = 0;
            if (-1 < iVar8) {
              do {
                iVar16 = iVar8 + iVar7 >> 1;
                iVar11 = *(int *)(lVar25 + (longlong)iVar16 * 4);
                if (iVar11 == *piVar18) {
                  pvVar13 = (void *)(lVar25 + (longlong)iVar16 * 4);
                  pvVar2 = (void *)((longlong)pvVar13 + 4);
                  memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x2d8) - (longlong)pvVar2);
                  *(longlong *)(lVar20 + 0x2d8) = *(longlong *)(lVar20 + 0x2d8) + -4;
                  break;
                }
                if (*piVar18 < iVar11) {
                  iVar8 = iVar16 + -1;
                }
                else {
                  iVar7 = iVar16 + 1;
                }
              } while (iVar7 <= iVar8);
            }
            piVar18 = piVar18 + 1;
            uVar22 = uVar22 + 1;
            piVar26 = local_78;
          } while (uVar22 < uVar19);
        }
        if (piVar26 != (int *)0x0) {
          FUN_140002020(piVar26,(longlong)piVar10 - (longlong)piVar26 >> 2,4);
        }
        local_78 = (int *)0x0;
        piStack_70 = (int *)0x0;
        piVar10 = (int *)0x0;
        local_68 = (int *)0x0;
        piVar26 = *(int **)(lVar20 + 0x308);
        piVar18 = (int *)0x0;
        piVar15 = (int *)0x0;
        piVar5 = piStack_70;
        for (piVar27 = *(int **)(lVar20 + 0x300); piStack_70 = piVar15, piVar27 < piVar26;
            piVar27 = piVar27 + 1) {
          iVar8 = *piVar27;
          lVar25 = DAT_141d64da0 - DAT_141d64d98 >> 3;
          if ((lVar25 != 0) && (iVar8 != -1)) {
            iVar11 = (int)lVar25 + -1;
            iVar7 = 0;
            if (-1 < iVar11) {
              do {
                iVar12 = iVar7 + iVar11 >> 1;
                piVar3 = *(int **)(DAT_141d64d98 + (longlong)iVar12 * 8);
                iVar16 = *piVar3;
                if (iVar16 == iVar8) {
                  piVar15 = piStack_70;
                  if (piVar3 != (int *)0x0) goto LAB_140de308c;
                  break;
                }
                if (iVar8 < iVar16) {
                  iVar11 = iVar12 + -1;
                }
                else {
                  iVar7 = iVar12 + 1;
                }
              } while (iVar7 <= iVar11);
            }
          }
          if ((piVar27 < piStack_70) && (piVar18 <= piVar27)) {
            lVar25 = (longlong)piVar27 - (longlong)piVar18;
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = piVar18[lVar25 >> 2];
LAB_140de3082:
              *piStack_70 = iVar8;
            }
          }
          else {
            if (piStack_70 == piVar10) {
              piStack_70 = piVar5;
              FUN_14000c390(&local_78,1);
              piVar18 = local_78;
              piVar10 = local_68;
            }
            if (piStack_70 != (int *)0x0) {
              iVar8 = *piVar27;
              goto LAB_140de3082;
            }
          }
          piVar15 = piStack_70 + 1;
          piVar5 = piStack_70 + 1;
LAB_140de308c:
          piStack_70 = piVar5;
          piVar5 = piStack_70;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)((longlong)piStack_70 + (3 - (longlong)piVar18)) >> 2;
        if (piStack_70 < piVar18) {
          uVar19 = uVar22;
        }
        piVar26 = piVar18;
        piStack_70 = piVar5;
        if (uVar19 != 0) {
          do {
            lVar25 = *(longlong *)(lVar20 + 0x300);
            iVar8 = (int)(*(longlong *)(lVar20 + 0x308) - lVar25 >> 2) + -1;
            iVar7 = 0;
            if (-1 < iVar8) {
              do {
                iVar16 = iVar8 + iVar7 >> 1;
                iVar11 = *(int *)(lVar25 + (longlong)iVar16 * 4);
                if (iVar11 == *piVar18) {
                  pvVar13 = (void *)(lVar25 + (longlong)iVar16 * 4);
                  pvVar2 = (void *)((longlong)pvVar13 + 4);
                  memmove(pvVar13,pvVar2,*(longlong *)(lVar20 + 0x308) - (longlong)pvVar2);
                  *(longlong *)(lVar20 + 0x308) = *(longlong *)(lVar20 + 0x308) + -4;
                  break;
                }
                if (*piVar18 < iVar11) {
                  iVar8 = iVar16 + -1;
                }
                else {
                  iVar7 = iVar16 + 1;
                }
              } while (iVar7 <= iVar8);
            }
            piVar18 = piVar18 + 1;
            uVar22 = uVar22 + 1;
            piVar26 = local_78;
          } while (uVar22 < uVar19);
        }
        if (piVar26 != (int *)0x0) {
          FUN_140002020(piVar26,(longlong)piVar10 - (longlong)piVar26 >> 2,4);
        }
        plVar9 = plVar9 + 1;
        plVar17 = DAT_141c66ff0;
        plVar4 = local_60;
        DAT_141c66ff0 = plVar6;
      } while( true );
    }
    plVar14 = plStack_58;
    if ((*(byte *)(*plVar17 + 0x78) & 2) != 0) {
      if ((plVar17 < plStack_58) && (plVar4 <= plVar17)) {
        if (plStack_58 == plVar24) {
          plStack_58 = plVar6;
          FUN_140050410(&local_60);
          plVar24 = local_50;
        }
        if (plStack_58 != (longlong *)0x0) {
          lVar20 = local_60[(longlong)plVar17 - (longlong)plVar4 >> 3];
LAB_140de26d7:
          *plStack_58 = lVar20;
        }
      }
      else {
        if (plStack_58 == plVar24) {
          plStack_58 = plVar6;
          FUN_140050410(&local_60);
          plVar24 = local_50;
        }
        if (plStack_58 != (longlong *)0x0) {
          lVar20 = *plVar17;
          goto LAB_140de26d7;
        }
      }
      plVar14 = plStack_58 + 1;
      plVar6 = plVar14;
    }
    plStack_58 = plVar6;
    plVar17 = plVar17 + 1;
    plVar4 = local_60;
    plVar6 = plStack_58;
  } while( true );
}

