// FUN_140c41a40 @ 140c41a40
// callees:
//   -> 140010860 FUN_140010860
//   -> 140dfb5b4 free
//   -> 140335d50 FUN_140335d50
//   -> EXTERNAL:000000e1 memmove
//   -> 140360820 FUN_140360820
//   -> 140c26640 FUN_140c26640
//   -> 140c26f00 FUN_140c26f00
//   -> 140c0c6e0 FUN_140c0c6e0
//   -> 140c24a40 FUN_140c24a40
//   -> 1407efc10 FUN_1407efc10
//   -> 140002020 FUN_140002020
//   -> 140c24510 FUN_140c24510
//   -> 140907ac0 FUN_140907ac0
//   -> 140c840a0 FUN_140c840a0
//   -> 140284c80 FUN_140284c80
//   -> 140c43450 FUN_140c43450
//   -> 140011a80 FUN_140011a80
//   -> 1401bb180 FUN_1401bb180
//   -> 140c84420 FUN_140c84420
//   -> 14000e930 FUN_14000e930
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 1400030c0 FUN_1400030c0
//   -> 140002740 FUN_140002740
//   -> 140002620 FUN_140002620
//   -> 1400025c0 FUN_1400025c0
//   -> 140c432f0 FUN_140c432f0
//   -> 14000c260 FUN_14000c260
//   -> 1401b8730 FUN_1401b8730
//   -> 140c43210 FUN_140c43210


void FUN_140c41a40(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  int *piVar20;
  
  *param_1 = unitst::vftable;
  pvVar4 = (void *)param_1[0x248];
  piVar11 = (int *)0x0;
  if (pvVar4 != (void *)0x0) {
    FUN_140010860(pvVar4);
    free(pvVar4);
    param_1[0x248] = 0;
  }
  if (param_1[0x249] != 0) {
    FUN_140335d50();
    param_1[0x249] = 0;
  }
  if ((void *)param_1[0x272] != (void *)0x0) {
    free((void *)param_1[0x272]);
    param_1[0x272] = 0;
  }
  if ((DAT_1410b67dc == 0) && (plVar2 = DAT_141c3d370, DAT_141c3d260 == 1)) {
    for (; plVar1 = DAT_141c3d390, plVar2 < DAT_141c3d378; plVar2 = plVar2 + 1) {
      if ((undefined8 *)*plVar2 == param_1) {
        iVar9 = (int)((longlong)plVar2 - (longlong)DAT_141c3d370 >> 3);
        if (iVar9 != -1) {
          plVar2 = DAT_141c3d370 + iVar9;
          memmove(plVar2,plVar2 + 1,(longlong)DAT_141c3d378 - (longlong)(plVar2 + 1));
          DAT_141c3d378 = DAT_141c3d378 + -1;
          plVar1 = DAT_141c3d390;
          if ((ulonglong)((longlong)DAT_141c3d378 - (longlong)DAT_141c3d370 >> 3) <=
              (ulonglong)(longlong)DAT_141c3d388) {
            DAT_141c3d388 = DAT_141c3d388 + -1;
          }
        }
        break;
      }
    }
    do {
      if (DAT_141c3d398 <= plVar1) break;
      if ((undefined8 *)*plVar1 == param_1) {
        iVar9 = (int)((longlong)plVar1 - (longlong)DAT_141c3d390 >> 3);
        if (iVar9 != -1) {
          plVar2 = DAT_141c3d390 + iVar9;
          memmove(plVar2,plVar2 + 1,(longlong)DAT_141c3d398 - (longlong)(plVar2 + 1));
          DAT_141c3d398 = DAT_141c3d398 + -1;
          FUN_140360820(&DAT_141c3d3a8,(longlong)iVar9);
          if ((ulonglong)((longlong)DAT_141c3d398 - (longlong)DAT_141c3d390 >> 3) <=
              (ulonglong)(longlong)DAT_141c3d3c8) {
            DAT_141c3d3c8 = DAT_141c3d3c8 + -1;
          }
        }
        break;
      }
      plVar1 = plVar1 + 1;
    } while( true );
  }
  plVar2 = param_1 + 0x7f;
  iVar9 = (int)(param_1[0x80] - *plVar2 >> 3) + -1;
  if (-1 < iVar9) {
    lVar16 = (longlong)iVar9 * 8;
    lVar14 = (longlong)iVar9 * 8;
    do {
      if ((*(uint *)((longlong)param_1 + 0x114) & 0x100000) == 0) {
        FUN_140c26640(param_1,iVar9);
      }
      else {
        free(*(void **)(lVar16 + *plVar2));
        pvVar4 = (void *)(*plVar2 + lVar14 + 8);
        memmove((void *)(*plVar2 + lVar14),pvVar4,param_1[0x80] - (longlong)pvVar4);
        param_1[0x80] = param_1[0x80] + -8;
      }
      lVar14 = lVar14 + -8;
      lVar16 = lVar16 + -8;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  if ((*(uint *)((longlong)param_1 + 0x114) & 0x100000) == 0) {
    FUN_140c26f00(param_1,0,0,1,0);
  }
  plVar1 = param_1 + 0x14c;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0x14d] - *plVar1 >> 3 != 0) {
    do {
      pvVar4 = *(void **)((longlong)piVar17 + *plVar1);
      if (pvVar4 != (void *)0x0) {
        FUN_140c0c6e0(pvVar4);
        free(pvVar4);
      }
      uVar13 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar13;
      piVar17 = piVar17 + 2;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0x14d] - *plVar1 >> 3));
  }
  param_1[0x14d] = *plVar1;
  param_1[0x14f] = 0;
  pvVar4 = (void *)param_1[0x1a5];
  if (pvVar4 != (void *)0x0) {
    FUN_140c24a40(pvVar4);
    free(pvVar4);
  }
  param_1[0x1a5] = 0;
  plVar1 = param_1 + 0x150;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0x151] - *plVar1 >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + *plVar1));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0x151] - *plVar1 >> 3));
  }
  param_1[0x151] = *plVar1;
  plVar1 = param_1 + 0xd6;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0xd7] - *plVar1 >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + *plVar1));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0xd7] - *plVar1 >> 3));
  }
  param_1[0xd7] = *plVar1;
  plVar1 = param_1 + 0x131;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0x132] - *plVar1 >> 3 != 0) {
    do {
      free(*(void **)(*plVar1 + (longlong)piVar10));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0x132] - *plVar1 >> 3));
  }
  param_1[0x132] = *plVar1;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x166] - param_1[0x165]) >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + param_1[0x165]));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x166] - param_1[0x165]) >> 3));
  }
  param_1[0x166] = param_1[0x165];
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x169] - param_1[0x168]) >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + param_1[0x168]));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x169] - param_1[0x168]) >> 3));
  }
  param_1[0x169] = param_1[0x168];
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x16c] - param_1[0x16b]) >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + param_1[0x16b]));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x16c] - param_1[0x16b]) >> 3));
  }
  param_1[0x16c] = param_1[0x16b];
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x16f] - param_1[0x16e]) >> 3 != 0) {
    do {
      free(*(void **)(param_1[0x16e] + (longlong)piVar10));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x16f] - param_1[0x16e]) >> 3));
  }
  param_1[0x16f] = param_1[0x16e];
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x186] - param_1[0x185]) >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + param_1[0x185]));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x186] - param_1[0x185]) >> 3));
  }
  param_1[0x186] = param_1[0x185];
  plVar1 = param_1 + 0xb2;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0xb3] - *plVar1 >> 3 != 0) {
    do {
      pvVar4 = *(void **)((longlong)piVar17 + *plVar1);
      if (pvVar4 != (void *)0x0) {
        FUN_1407efc10(pvVar4);
        lVar16 = *(longlong *)((longlong)pvVar4 + 8);
        if (lVar16 != 0) {
          FUN_140002020(lVar16,*(longlong *)((longlong)pvVar4 + 0x18) - lVar16 >> 3,8);
          *(undefined8 *)((longlong)pvVar4 + 8) = 0;
          *(undefined8 *)((longlong)pvVar4 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar4 + 0x18) = 0;
        }
        free(pvVar4);
      }
      uVar13 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar13;
      piVar17 = piVar17 + 2;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0xb3] - *plVar1 >> 3));
  }
  param_1[0xb3] = *plVar1;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x191] - param_1[400]) >> 3 != 0) {
    do {
      pvVar4 = *(void **)((longlong)piVar17 + param_1[400]);
      if (pvVar4 != (void *)0x0) {
        FUN_140c24510(pvVar4);
        free(pvVar4);
      }
      uVar13 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar13;
      piVar17 = piVar17 + 2;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x191] - param_1[400]) >> 3));
  }
  param_1[0x191] = param_1[400];
  iVar9 = (int)((longlong)(param_1[0x1a7] - param_1[0x1a6]) >> 3) + -1;
  lVar16 = (longlong)iVar9;
  if (-1 < iVar9) {
    do {
      free(*(void **)(param_1[0x1a6] + lVar16 * 8));
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  param_1[0x1a7] = param_1[0x1a6];
  plVar1 = param_1 + 0x35;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0x36] - *plVar1 >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar10 + *plVar1));
      uVar13 = (int)piVar17 + 1;
      piVar10 = piVar10 + 2;
      piVar17 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0x36] - *plVar1 >> 3));
  }
  param_1[0x36] = *plVar1;
  plVar1 = param_1 + 0x38;
  piVar10 = piVar11;
  piVar17 = piVar11;
  if (param_1[0x39] - *plVar1 >> 3 != 0) {
    do {
      piVar6 = piVar11;
      if ((((*(uint *)((longlong)param_1 + 0x114) & 0x100000) == 0) &&
          (iVar9 = (**(code **)(**(longlong **)((longlong)piVar17 + *plVar1) + 0x10))(), iVar9 == 3)
          ) && (piVar6 = (int *)(**(code **)(**(longlong **)((longlong)piVar17 + *plVar1) + 0x48))()
               , piVar6 != (int *)0x0)) {
        piVar6[6] = 0;
        piVar6[7] = 0;
      }
      plVar5 = *(longlong **)((longlong)piVar17 + *plVar1);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x78))(plVar5,1);
      }
      if (piVar6 != (int *)0x0) {
        iVar9 = (int)(DAT_141c67098 - DAT_141c67090 >> 3) + -1;
        piVar20 = piVar11;
        if (-1 < iVar9) {
          do {
            iVar7 = iVar9 + (int)piVar20 >> 1;
            iVar19 = **(int **)(DAT_141c67090 + (longlong)iVar7 * 8);
            if (iVar19 == *piVar6) {
              if ((iVar7 != -1) &&
                 (pvVar4 = *(void **)(DAT_141c67090 + (longlong)iVar7 * 8), pvVar4 != (void *)0x0))
              {
                FUN_140907ac0(pvVar4);
                free(pvVar4);
              }
              break;
            }
            if (*piVar6 < iVar19) {
              iVar9 = iVar7 + -1;
            }
            else {
              piVar20 = (int *)(ulonglong)(iVar7 + 1);
            }
          } while ((int)piVar20 <= iVar9);
        }
      }
      uVar13 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar13;
      piVar17 = piVar17 + 2;
    } while ((ulonglong)(longlong)(int)uVar13 < (ulonglong)(param_1[0x39] - *plVar1 >> 3));
  }
  param_1[0x39] = *plVar1;
  iVar9 = (int)((longlong)(param_1[0x160] - param_1[0x15f]) >> 3);
  while (iVar9 = iVar9 + -1, -1 < iVar9) {
    FUN_140c840a0(param_1,iVar9);
  }
  if (((*(byte *)((longlong)param_1 + 0x114) & 8) != 0) &&
     (pvVar4 = (void *)param_1[0xbb], pvVar4 != (void *)0x0)) {
    FUN_140284c80(pvVar4);
    free(pvVar4);
    param_1[0xbb] = 0;
  }
  pvVar4 = (void *)param_1[0x134];
  if (pvVar4 != (void *)0x0) {
    FUN_140c43450(pvVar4);
    free(pvVar4);
    param_1[0x134] = 0;
  }
  if ((void *)param_1[0x6d] != (void *)0x0) {
    free((void *)param_1[0x6d]);
    param_1[0x6d] = 0;
  }
  pvVar4 = (void *)param_1[0x1ac];
  if (pvVar4 != (void *)0x0) {
    puVar12 = (undefined8 *)((longlong)pvVar4 + 0x20);
    if (0xf < *(ulonglong *)((longlong)pvVar4 + 0x38)) {
      FUN_140002020(*puVar12,*(ulonglong *)((longlong)pvVar4 + 0x38) + 1,1);
    }
    *(undefined8 *)((longlong)pvVar4 + 0x38) = 0xf;
    *(undefined8 *)((longlong)pvVar4 + 0x30) = 0;
    if (0xf < *(ulonglong *)((longlong)pvVar4 + 0x38)) {
      puVar12 = (undefined8 *)*puVar12;
    }
    *(undefined1 *)puVar12 = 0;
    free(pvVar4);
    param_1[0x1ac] = 0;
  }
  if ((void *)param_1[0x239] != (void *)0x0) {
    free((void *)param_1[0x239]);
    param_1[0x239] = 0;
  }
  if ((void *)param_1[0x23a] != (void *)0x0) {
    free((void *)param_1[0x23a]);
    param_1[0x23a] = 0;
  }
  pvVar4 = (void *)param_1[0x23e];
  if (pvVar4 != (void *)0x0) {
    FUN_140011a80(pvVar4);
    free(pvVar4);
    param_1[0x23e] = 0;
  }
  piVar10 = piVar11;
  piVar17 = piVar11;
  if ((longlong)(param_1[0x1b1] - param_1[0x1b0]) >> 3 != 0) {
    do {
      pvVar4 = *(void **)((longlong)piVar17 + param_1[0x1b0]);
      if (pvVar4 != (void *)0x0) {
        FUN_1401bb180(pvVar4);
        free(pvVar4);
      }
      uVar13 = (int)piVar10 + 1;
      piVar10 = (int *)(ulonglong)uVar13;
      piVar17 = piVar17 + 2;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x1b1] - param_1[0x1b0]) >> 3));
  }
  param_1[0x1b1] = param_1[0x1b0];
  piVar10 = piVar11;
  if ((longlong)(param_1[0x1b4] - param_1[0x1b3]) >> 3 != 0) {
    do {
      free(*(void **)((longlong)piVar11 + param_1[0x1b3]));
      uVar13 = (int)piVar10 + 1;
      piVar11 = piVar11 + 2;
      piVar10 = (int *)(ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar13 <
             (ulonglong)((longlong)(param_1[0x1b4] - param_1[0x1b3]) >> 3));
  }
  param_1[0x1b4] = param_1[0x1b3];
  puVar12 = (undefined8 *)param_1[0xf6];
  uVar18 = 0;
  uVar15 = (ulonglong)((longlong)param_1[0xf7] + (7 - (longlong)puVar12)) >> 3;
  if ((undefined8 *)param_1[0xf7] < puVar12) {
    uVar15 = uVar18;
  }
  if (uVar15 != 0) {
    do {
      free((void *)*puVar12);
      puVar12 = puVar12 + 1;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar15);
  }
  param_1[0xf7] = param_1[0xf6];
  iVar9 = (int)(DAT_141c67008 - DAT_141c67000 >> 3) + -1;
  if (-1 < iVar9) {
    lVar16 = (longlong)iVar9;
    do {
      if (*(undefined8 **)(DAT_141c67000 + lVar16 * 8) == param_1) {
        pvVar3 = (void *)(DAT_141c67000 + (longlong)iVar9 * 8);
        pvVar4 = (void *)((longlong)pvVar3 + 8);
        memmove(pvVar3,pvVar4,DAT_141c67008 - (longlong)pvVar4);
        DAT_141c67008 = DAT_141c67008 + -8;
        break;
      }
      iVar9 = iVar9 + -1;
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  iVar9 = (int)(DAT_141c67020 - DAT_141c67018 >> 3) + -1;
  if (-1 < iVar9) {
    lVar16 = (longlong)iVar9;
    do {
      if (*(undefined8 **)(DAT_141c67018 + lVar16 * 8) == param_1) {
        pvVar3 = (void *)(DAT_141c67018 + (longlong)iVar9 * 8);
        pvVar4 = (void *)((longlong)pvVar3 + 8);
        memmove(pvVar3,pvVar4,DAT_141c67020 - (longlong)pvVar4);
        DAT_141c67020 = DAT_141c67020 + -8;
        break;
      }
      iVar9 = iVar9 + -1;
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  FUN_140c84420(param_1);
  iVar19 = 0;
  iVar9 = (int)(DAT_141c66fd8 - DAT_141c66fd0 >> 3) + -1;
  if (-1 < iVar9) {
    do {
      iVar8 = iVar19 + iVar9 >> 1;
      iVar7 = *(int *)(*(longlong *)(DAT_141c66fd0 + (longlong)iVar8 * 8) + 0x130);
      if (iVar7 == *(int *)(param_1 + 0x26)) {
        if ((iVar8 != -1) &&
           (plVar5 = (longlong *)(DAT_141c66fd0 + (longlong)iVar8 * 8),
           (undefined8 *)*plVar5 == param_1)) {
          memmove(plVar5,plVar5 + 1,DAT_141c66fd8 - (longlong)(plVar5 + 1));
          DAT_141c66fd8 = DAT_141c66fd8 + -8;
        }
        break;
      }
      if (*(int *)(param_1 + 0x26) < iVar7) {
        iVar9 = iVar8 + -1;
      }
      else {
        iVar19 = iVar8 + 1;
      }
    } while (iVar19 <= iVar9);
  }
  puVar12 = param_1 + 0x276;
  if (0xf < (ulonglong)param_1[0x279]) {
    FUN_140002020(*puVar12,param_1[0x279] + 1,1);
  }
  param_1[0x279] = 0xf;
  param_1[0x278] = 0;
  if (0xf < (ulonglong)param_1[0x279]) {
    puVar12 = (undefined8 *)*puVar12;
  }
  *(undefined1 *)puVar12 = 0;
  lVar16 = param_1[0x273];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x275] - lVar16 >> 3,8);
    param_1[0x273] = 0;
    param_1[0x274] = 0;
    param_1[0x275] = 0;
  }
  lVar16 = param_1[0x26f];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x271] - lVar16 >> 2,4);
    param_1[0x26f] = 0;
    param_1[0x270] = 0;
    param_1[0x271] = 0;
  }
  lVar16 = param_1[0x269];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x26b] - lVar16 >> 2,4);
    param_1[0x269] = 0;
    param_1[0x26a] = 0;
    param_1[0x26b] = 0;
  }
  lVar16 = param_1[0x266];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x268] - lVar16 >> 1,2);
    param_1[0x266] = 0;
    param_1[0x267] = 0;
    param_1[0x268] = 0;
  }
  lVar16 = param_1[0x263];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x265] - lVar16 >> 2,4);
    param_1[0x263] = 0;
    param_1[0x264] = 0;
    param_1[0x265] = 0;
  }
  lVar16 = param_1[0x260];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x262] - lVar16 >> 1,2);
    param_1[0x260] = 0;
    param_1[0x261] = 0;
    param_1[0x262] = 0;
  }
  lVar16 = param_1[0x25d];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x25f] - lVar16 >> 1,2);
    param_1[0x25d] = 0;
    param_1[0x25e] = 0;
    param_1[0x25f] = 0;
  }
  lVar16 = param_1[0x25a];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x25c] - lVar16 >> 1,2);
    param_1[0x25a] = 0;
    param_1[0x25b] = 0;
    param_1[0x25c] = 0;
  }
  lVar16 = param_1[599];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x259] - lVar16,1);
    param_1[599] = 0;
    param_1[600] = 0;
    param_1[0x259] = 0;
  }
  lVar16 = param_1[0x254];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x256] - lVar16 >> 2,4);
    param_1[0x254] = 0;
    param_1[0x255] = 0;
    param_1[0x256] = 0;
  }
  lVar16 = param_1[0x251];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x253] - lVar16,1);
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    param_1[0x253] = 0;
  }
  lVar16 = param_1[0x24e];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x250] - lVar16,1);
    param_1[0x24e] = 0;
    param_1[0x24f] = 0;
    param_1[0x250] = 0;
  }
  if ((void *)param_1[0x24b] != (void *)0x0) {
    free((void *)param_1[0x24b]);
  }
  param_1[0x24b] = 0;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  lVar16 = param_1[0x245];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x247] - lVar16 >> 2,4);
    param_1[0x245] = 0;
    param_1[0x246] = 0;
    param_1[0x247] = 0;
  }
  lVar16 = param_1[0x242];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x244] - lVar16 >> 2,4);
    param_1[0x242] = 0;
    param_1[0x243] = 0;
    param_1[0x244] = 0;
  }
  lVar16 = param_1[0x23f];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x241] - lVar16 >> 2,4);
    param_1[0x23f] = 0;
    param_1[0x240] = 0;
    param_1[0x241] = 0;
  }
  plVar5 = param_1 + 0x1b6;
  FUN_14000e930(plVar5);
  lVar16 = *plVar5;
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x1b8] - lVar16 >> 3,8);
    *plVar5 = 0;
    param_1[0x1b7] = 0;
    param_1[0x1b8] = 0;
  }
  lVar16 = param_1[0x1b3];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x1b5] - lVar16 >> 3,8);
    param_1[0x1b3] = 0;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
  }
  lVar16 = param_1[0x1b0];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x1b2] - lVar16 >> 3,8);
    param_1[0x1b0] = 0;
    param_1[0x1b1] = 0;
    param_1[0x1b2] = 0;
  }
  lVar16 = param_1[0x1a9];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x1ab] - lVar16 >> 2,4);
    param_1[0x1a9] = 0;
    param_1[0x1aa] = 0;
    param_1[0x1ab] = 0;
  }
  lVar16 = param_1[0x1a6];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x1a8] - lVar16 >> 3,8);
    param_1[0x1a6] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a8] = 0;
  }
  _eh_vector_destructor_iterator_(param_1 + 0x199,0x18,3,FUN_1400025c0);
  lVar16 = param_1[0x196];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x198] - lVar16 >> 1,2);
    param_1[0x196] = 0;
    param_1[0x197] = 0;
    param_1[0x198] = 0;
  }
  lVar16 = param_1[0x193];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x195] - lVar16 >> 2,4);
    param_1[0x193] = 0;
    param_1[0x194] = 0;
    param_1[0x195] = 0;
  }
  lVar16 = param_1[400];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x192] - lVar16 >> 3,8);
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
  }
  lVar16 = param_1[0x18d];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[399] - lVar16 >> 2,4);
    param_1[0x18d] = 0;
    param_1[0x18e] = 0;
    param_1[399] = 0;
  }
  lVar16 = param_1[0x18a];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x18c] - lVar16 >> 2,4);
    param_1[0x18a] = 0;
    param_1[0x18b] = 0;
    param_1[0x18c] = 0;
  }
  lVar16 = param_1[0x185];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x187] - lVar16 >> 3,8);
    param_1[0x185] = 0;
    param_1[0x186] = 0;
    param_1[0x187] = 0;
  }
  lVar16 = param_1[0x17f];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x181] - lVar16 >> 1,2);
    param_1[0x17f] = 0;
    param_1[0x180] = 0;
    param_1[0x181] = 0;
  }
  lVar16 = param_1[0x17c];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x17e] - lVar16 >> 1,2);
    param_1[0x17c] = 0;
    param_1[0x17d] = 0;
    param_1[0x17e] = 0;
  }
  lVar16 = param_1[0x179];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x17b] - lVar16 >> 1,2);
    param_1[0x179] = 0;
    param_1[0x17a] = 0;
    param_1[0x17b] = 0;
  }
  lVar16 = param_1[0x171];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x173] - lVar16 >> 3,8);
    param_1[0x171] = 0;
    param_1[0x172] = 0;
    param_1[0x173] = 0;
  }
  lVar16 = param_1[0x16e];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x170] - lVar16 >> 3,8);
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    param_1[0x170] = 0;
  }
  lVar16 = param_1[0x16b];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x16d] - lVar16 >> 3,8);
    param_1[0x16b] = 0;
    param_1[0x16c] = 0;
    param_1[0x16d] = 0;
  }
  lVar16 = param_1[0x168];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x16a] - lVar16 >> 3,8);
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    param_1[0x16a] = 0;
  }
  lVar16 = param_1[0x165];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x167] - lVar16 >> 3,8);
    param_1[0x165] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 0;
  }
  lVar16 = param_1[0x162];
  if (lVar16 != 0) {
    FUN_140002020(lVar16,param_1[0x164] - lVar16 >> 2,4);
    param_1[0x162] = 0;
    param_1[0x163] = 0;
    param_1[0x164] = 0;
  }
  FUN_1400030c0(param_1 + 0x15f);
  FUN_1400030c0(param_1 + 0x150);
  FUN_1400030c0(param_1 + 0x14c);
  FUN_140002740(param_1 + 0x13d);
  FUN_140002620(param_1 + 0x139);
  FUN_1400025c0(param_1 + 0x136);
  FUN_1400030c0(param_1 + 0x131);
  FUN_140c432f0(param_1 + 0x11b);
  FUN_1400025c0(param_1 + 0x115);
  FUN_1400025c0(param_1 + 0x112);
  FUN_14000c260(param_1 + 0x10c);
  FUN_14000c260(param_1 + 0x108);
  FUN_14000c260(param_1 + 0x104);
  FUN_1400030c0(param_1 + 0xf6);
  FUN_1400025c0(param_1 + 0xf3);
  FUN_1401b8730(param_1 + 0xef);
  FUN_1400025c0(param_1 + 0xec);
  FUN_1400025c0(param_1 + 0xe9);
  FUN_1400025c0(param_1 + 0xe6);
  FUN_1400025c0(param_1 + 0xe3);
  FUN_140002620(param_1 + 0xe0);
  FUN_1400025c0(param_1 + 0xdc);
  FUN_1400025c0(param_1 + 0xd9);
  FUN_1400030c0(param_1 + 0xd6);
  FUN_1400030c0(param_1 + 0xb2);
  FUN_1400025c0(param_1 + 0xaf);
  FUN_1400025c0(param_1 + 0xac);
  FUN_1400025c0(param_1 + 0xa9);
  FUN_1400025c0(param_1 + 0xa6);
  FUN_1400025c0(param_1 + 0xa3);
  FUN_1400025c0(param_1 + 0xa0);
  FUN_1400025c0(param_1 + 0x9d);
  FUN_1400025c0(param_1 + 0x9a);
  FUN_1400025c0(param_1 + 0x8b);
  FUN_1400030c0(param_1 + 0x88);
  FUN_1400025c0(param_1 + 0x85);
  FUN_1400025c0(param_1 + 0x82);
  FUN_1400030c0(plVar2);
  FUN_1400025c0(param_1 + 0x60);
  FUN_1400025c0(param_1 + 0x5d);
  FUN_1400025c0(param_1 + 0x5a);
  FUN_1400025c0(param_1 + 0x57);
  FUN_1400025c0(param_1 + 0x54);
  FUN_140c43210(param_1 + 0x3d);
  FUN_1400030c0(plVar1);
  FUN_1400030c0(param_1 + 0x35);
  FUN_140002620(param_1 + 0x31);
  FUN_140002620(param_1 + 0x2e);
  FUN_140002620(param_1 + 0x2b);
  FUN_140002620(param_1 + 0x1f);
  FUN_140002620(param_1 + 0x1c);
  FUN_140002620(param_1 + 0x19);
  FUN_14000c260(param_1 + 0x10);
  FUN_140002740(param_1 + 1);
  return;
}

