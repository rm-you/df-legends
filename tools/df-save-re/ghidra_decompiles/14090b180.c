// FUN_14090b180 @ 14090b180
// callees:
//   -> 1408054d0 FUN_1408054d0
//   -> 140ca8390 FUN_140ca8390
//   -> 140740200 FUN_140740200
//   -> 140004650 FUN_140004650
//   -> 140dfb5c4 operator_new
//   -> 1400978f0 FUN_1400978f0
//   -> 14008f730 FUN_14008f730
//   -> 1400b3970 FUN_1400b3970
//   -> 1408246e0 FUN_1408246e0
//   -> 1400b5e90 FUN_1400b5e90
//   -> 14007e7f0 FUN_14007e7f0
//   -> 14007e740 FUN_14007e740
//   -> 14007e920 FUN_14007e920
//   -> 14007ef00 FUN_14007ef00
//   -> 140dfb5b4 free
//   -> 1400511c0 FUN_1400511c0
//   -> 140099940 FUN_140099940


void FUN_14090b180(longlong param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int *piVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  int *piVar26;
  short local_res10 [4];
  short local_res18 [4];
  undefined2 local_res20 [4];
  int *local_78;
  
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) != -1) {
    return;
  }
  local_res10[0] = -30000;
  if ((*(uint *)(lVar8 + 0x110) & 0x2000000) == 0) {
    local_res10[0] = *(short *)(lVar8 + 0xa8);
    local_res18[0] = *(short *)(lVar8 + 0xaa);
    local_res20[0] = *(undefined2 *)(lVar8 + 0xac);
  }
  else {
    puVar22 = *(undefined8 **)(lVar8 + 0x1c8);
    for (puVar19 = *(undefined8 **)(lVar8 + 0x1c0); puVar19 < puVar22; puVar19 = puVar19 + 1) {
      iVar5 = (**(code **)(*(longlong *)*puVar19 + 0x10))();
      if ((iVar5 == 0xb) && (lVar8 = (**(code **)(*(longlong *)*puVar19 + 0x18))(), lVar8 != 0)) {
        FUN_1408054d0(lVar8,local_res10,local_res18,local_res20);
        break;
      }
    }
  }
  iVar5 = (int)local_res10[0];
  sVar3 = (short)DAT_141d69560 * 3;
  iVar6 = (int)local_res18[0];
  sVar4 = (short)DAT_141d69564 * 3;
  piVar20 = (int *)0x0;
  local_78 = (int *)0x0;
  plVar15 = DAT_141d69250;
  if (DAT_1410b67dc == 0) {
    lVar8 = *(longlong *)(param_1 + 0x18);
    plVar15 = *(longlong **)(lVar8 + 0x1398);
    piVar23 = (int *)((ulonglong)
                      ((longlong)*(longlong **)(lVar8 + 0x13a0) + (7 - (longlong)plVar15)) >> 3);
    if (*(longlong **)(lVar8 + 0x13a0) < plVar15) {
      piVar23 = piVar20;
    }
    if (piVar23 != (int *)0x0) {
      piVar26 = (int *)0x0;
      local_78 = piVar20;
      do {
        iVar18 = *(int *)(*plVar15 + 0x3c);
        if ((iVar18 != -1) &&
           (iVar24 = (int)(DAT_141d69288 - DAT_141d69280 >> 3) + -1, piVar25 = piVar26,
           local_78 = piVar26, -1 < iVar24)) {
          do {
            iVar16 = iVar24 + (int)piVar25 >> 1;
            local_78 = *(int **)(DAT_141d69280 + (longlong)iVar16 * 8);
            iVar17 = *local_78;
            if (iVar17 == iVar18) break;
            if (iVar18 < iVar17) {
              iVar24 = iVar16 + -1;
            }
            else {
              piVar25 = (int *)(ulonglong)(iVar16 + 1);
            }
            local_78 = piVar26;
          } while ((int)piVar25 <= iVar24);
        }
        plVar15 = plVar15 + 1;
        piVar20 = (int *)((longlong)piVar20 + 1);
      } while (piVar20 < piVar23);
    }
    iVar18 = 0;
    iVar24 = *(int *)(lVar8 + 0x1d8);
    if (((iVar24 != -1) && (DAT_141d64d40 - DAT_141d64d38 >> 3 != 0)) &&
       (iVar17 = (int)(DAT_141d64d40 - DAT_141d64d38 >> 3) + -1, -1 < iVar17)) {
      do {
        iVar16 = iVar18 + iVar17 >> 1;
        piVar20 = *(int **)(DAT_141d64d38 + (longlong)iVar16 * 8);
        if (*piVar20 == iVar24) {
          if ((piVar20 != (int *)0x0) && (iVar18 = piVar20[0x72], iVar18 != -1)) {
            iVar17 = 0;
            iVar24 = (int)(DAT_141d69288 - DAT_141d69280 >> 3) + -1;
            if (-1 < iVar24) goto LAB_14090b401;
            goto LAB_14090b42c;
          }
          break;
        }
        if (iVar24 < *piVar20) {
          iVar17 = iVar16 + -1;
        }
        else {
          iVar18 = iVar16 + 1;
        }
      } while (iVar18 <= iVar17);
    }
    goto LAB_14090b434;
  }
  goto LAB_14090b75c;
  while( true ) {
    if (iVar18 < *local_78) {
      iVar24 = iVar16 + -1;
    }
    else {
      iVar17 = iVar16 + 1;
    }
    if (iVar24 < iVar17) break;
LAB_14090b401:
    iVar16 = iVar24 + iVar17 >> 1;
    local_78 = *(int **)(DAT_141d69280 + (longlong)iVar16 * 8);
    if (*local_78 == iVar18) goto LAB_14090b434;
  }
LAB_14090b42c:
  local_78 = (int *)0x0;
LAB_14090b434:
  if ((*(short *)(lVar8 + 0xa0) == 0x68) && (lVar8 = FUN_140ca8390(lVar8), lVar8 != 0)) {
    uVar7 = FUN_140740200(lVar8,0);
    lVar9 = FUN_140004650(&DAT_141d7a048,uVar7);
    if ((lVar9 != 0) &&
       (((*(longlong *)(lVar9 + 0x130) != 0 &&
         (psVar1 = *(short **)(*(longlong *)(lVar9 + 0x130) + 0x28), psVar1 != (short *)0x0)) &&
        (*psVar1 == 3)))) {
      iVar24 = 0;
      iVar18 = (int)((longlong)DAT_141d69258 - (longlong)DAT_141d69250 >> 3) + -1;
      if (-1 < iVar18) {
        do {
          iVar17 = iVar18 + iVar24 >> 1;
          piVar20 = (int *)DAT_141d69250[iVar17];
          if (*piVar20 == *(int *)(psVar1 + 8)) {
            if (((piVar20 != (int *)0x0) && (0 < piVar20[0x1c])) &&
               ((**(byte **)(piVar20 + 0x1a) & 0x80) != 0)) {
              local_78 = *(int **)(piVar20 + 0x18);
            }
            break;
          }
          if (*(int *)(psVar1 + 8) < *piVar20) {
            iVar18 = iVar17 + -1;
          }
          else {
            iVar24 = iVar17 + 1;
          }
        } while (iVar24 <= iVar18);
      }
    }
    if (local_78 == (int *)0x0) {
      uVar7 = FUN_140740200(lVar8,1);
      lVar8 = FUN_140004650(&DAT_141d7a048,uVar7);
      if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x130) != 0)) &&
         ((psVar1 = *(short **)(*(longlong *)(lVar8 + 0x130) + 0x28), psVar1 != (short *)0x0 &&
          (*psVar1 == 3)))) {
        iVar24 = 0;
        iVar18 = (int)((longlong)DAT_141d69258 - (longlong)DAT_141d69250 >> 3) + -1;
        if (-1 < iVar18) {
          do {
            iVar17 = iVar18 + iVar24 >> 1;
            piVar20 = (int *)DAT_141d69250[iVar17];
            if (*piVar20 == *(int *)(psVar1 + 8)) {
              if (((piVar20 != (int *)0x0) && (0 < piVar20[0x1c])) &&
                 ((**(byte **)(piVar20 + 0x1a) & 0x80) != 0)) {
                local_78 = *(int **)(piVar20 + 0x18);
              }
              break;
            }
            if (*(int *)(psVar1 + 8) < *piVar20) {
              iVar18 = iVar17 + -1;
            }
            else {
              iVar24 = iVar17 + 1;
            }
          } while (iVar24 <= iVar18);
        }
      }
    }
  }
  plVar15 = DAT_141d69250;
  if ((((ushort)(*(short *)(*(longlong *)(param_1 + 0x18) + 0xa0) - 0x62U) < 2) &&
      (lVar8 = FUN_140ca8390(), lVar8 != 0)) &&
     ((iVar18 = FUN_140740200(lVar8,0xd), plVar15 = DAT_141d69250,
      DAT_141d7a0b0 - DAT_141d7a0a8 >> 3 != 0 && (iVar18 != -1)))) {
    iVar17 = 0;
    iVar24 = (int)(DAT_141d7a0b0 - DAT_141d7a0a8 >> 3) + -1;
    if (-1 < iVar24) {
      do {
        iVar16 = iVar24 + iVar17 >> 1;
        lVar8 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar16 * 8);
        if (*(int *)(lVar8 + 0xe0) == iVar18) {
          if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x130) != 0)) &&
             ((psVar1 = *(short **)(*(longlong *)(lVar8 + 0x130) + 0x28), psVar1 != (short *)0x0 &&
              (*psVar1 == 3)))) {
            iVar24 = 0;
            iVar18 = (int)((longlong)DAT_141d69258 - (longlong)DAT_141d69250 >> 3) + -1;
            if (-1 < iVar18) goto LAB_14090b700;
          }
          break;
        }
        if (iVar18 < *(int *)(lVar8 + 0xe0)) {
          iVar24 = iVar16 + -1;
        }
        else {
          iVar17 = iVar16 + 1;
        }
      } while (iVar17 <= iVar24);
    }
  }
  goto LAB_14090b74e;
LAB_14090b937:
  puVar13 = puVar13 + 1;
  goto LAB_14090b905;
LAB_14090bb2f:
  if (plVar15 <= plVar21) goto LAB_14090bbe8;
  lVar9 = *plVar21;
  if ((((*(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) & 0xfffffffffffffff8U) != 0) &&
      (*(int *)(**(longlong **)(lVar9 + 0x28) + 0x18) == 0xd)) &&
     (puVar11 = *(undefined4 **)(**(longlong **)(lVar9 + 0x28) + 0x10), puVar11[2] == DAT_141c36b88)
     ) {
    lVar14 = FUN_1400511c0(*puVar11,lVar9 + 8);
    if (((lVar14 != 0) &&
        ((*(longlong *)(lVar14 + 0x10) - *(longlong *)(lVar14 + 8) & 0xfffffffffffffffcU) != 0)) &&
       ((**(int **)(lVar14 + 8) == *(int *)(*(longlong *)(param_1 + 0x10) + 0xe0) &&
        ((lVar9 = FUN_1400511c0(puVar11[1],lVar9 + 8), lVar9 != 0 &&
         ((*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 8) & 0xfffffffffffffffcU) != 0))))))
    {
      *(undefined4 *)(*(longlong *)(puVar12 + 0x2e) + 8) = **(undefined4 **)(lVar9 + 8);
      goto LAB_14090bbe8;
    }
  }
  plVar21 = plVar21 + 1;
  goto LAB_14090bb2f;
LAB_14090bbe8:
  *(uint *)(*(longlong *)(puVar12 + 0x2e) + 0xc) =
       *(uint *)(*(longlong *)(puVar12 + 0x2e) + 0xc) | 1;
  *(uint *)(*(longlong *)(puVar12 + 0x2e) + 0xc) =
       *(uint *)(*(longlong *)(puVar12 + 0x2e) + 0xc) | 2;
  *(undefined8 *)(puVar12 + 1) = 0xffffffffffffffff;
  puVar12[0xe] = DAT_1416b1980;
  puVar12[0xf] = DAT_1416b1974;
  *(undefined8 *)(puVar12 + 4) = 0xffffffffffffffff;
  puVar12[0x11] = *puVar12;
  *(undefined4 **)(*(longlong *)(param_1 + 0x18) + 0x11e8) = puVar12;
  *(undefined4 **)(lVar8 + 0x60) = puVar12;
  *(undefined4 *)(lVar8 + 0x5c) = *puVar12;
LAB_14090bc5c:
  if (*(longlong *)(lVar8 + 0x60) != 0) goto LAB_14090bc7c;
LAB_14090bc6a:
  puVar22 = puVar22 + 1;
  if (puVar19 <= puVar22) goto LAB_14090bc7c;
  goto LAB_14090b8e0;
  while( true ) {
    if (*(int *)(psVar1 + 8) < *piVar20) {
      iVar18 = iVar17 + -1;
    }
    else {
      iVar24 = iVar17 + 1;
    }
    if (iVar18 < iVar24) break;
LAB_14090b700:
    iVar17 = iVar18 + iVar24 >> 1;
    piVar20 = (int *)DAT_141d69250[iVar17];
    if (*piVar20 == *(int *)(psVar1 + 8)) {
      if (((piVar20 != (int *)0x0) && (0 < piVar20[0x1c])) &&
         ((**(byte **)(piVar20 + 0x1a) & 0x80) != 0)) {
        local_78 = *(int **)(piVar20 + 0x18);
      }
      break;
    }
  }
LAB_14090b74e:
  if (local_78 == (int *)0x0) {
LAB_14090b75c:
    local_78 = *(int **)(*(longlong *)(param_1 + 0x18) + 0x11e8);
    if (local_78 == (int *)0x0) goto LAB_14090b796;
  }
  for (; plVar15 < DAT_141d69258; plVar15 = plVar15 + 1) {
    lVar8 = *plVar15;
    if (*(int **)(lVar8 + 0x60) == local_78) goto LAB_14090bca7;
  }
LAB_14090b796:
  pvVar10 = operator_new(0x148);
  lVar8 = FUN_1400978f0(pvVar10,0);
  FUN_14008f730(lVar8,(short)((int)((iVar5 >> 0x1f & 0xfU) + iVar5) >> 4) + sVar3,
                (short)((int)((iVar6 >> 0x1f & 0xfU) + iVar6) >> 4) + sVar4,0);
  if (local_78 != (int *)0x0) {
    *(int **)(lVar8 + 0x60) = local_78;
    *(int *)(lVar8 + 0x5c) = *local_78;
    iVar5 = local_78[1];
    lVar9 = DAT_141c53720 - DAT_141c53718 >> 3;
    if ((lVar9 != 0) && (iVar5 != -1)) {
      iVar18 = 0;
      iVar6 = (int)lVar9 + -1;
      if (-1 < iVar6) {
        do {
          iVar24 = iVar6 + iVar18 >> 1;
          lVar9 = *(longlong *)(DAT_141c53718 + (longlong)iVar24 * 8);
          if (*(int *)(lVar9 + 4) == iVar5) {
            if (lVar9 != 0) {
              FUN_1400b3970(lVar8,lVar9 + 0x13e0);
              if (DAT_1410b67dc != 0) goto LAB_14090bca7;
              if ((*(int *)(lVar9 + 4) != DAT_141c36b88) || (*(int *)(lVar8 + 0x70) < 1))
              goto LAB_14090b883;
              **(byte **)(lVar8 + 0x68) = **(byte **)(lVar8 + 0x68) | 0x80;
            }
            break;
          }
          if (iVar5 < *(int *)(lVar9 + 4)) {
            iVar6 = iVar24 + -1;
          }
          else {
            iVar18 = iVar24 + 1;
          }
        } while (iVar18 <= iVar6);
      }
    }
    if (DAT_1410b67dc == 0) {
LAB_14090b883:
      if (local_78[1] != DAT_141c36b88) {
        if (local_78[0x30] == 0x18) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x11e8) = 0;
          *(undefined8 *)(lVar8 + 0x60) = 0;
          *(undefined4 *)(lVar8 + 0x5c) = 0xffffffff;
          puVar19 = DAT_141c3ce50;
          puVar22 = DAT_141c3ce48;
          if (DAT_141c3ce48 < DAT_141c3ce50) {
LAB_14090b8e0:
            piVar20 = (int *)*puVar22;
            lVar9 = *(longlong *)(param_1 + 0x18);
            if (piVar20[4] == *(int *)(lVar9 + 0x130)) {
              puVar13 = *(undefined8 **)(lVar9 + 0x3f8);
              puVar2 = *(undefined8 **)(lVar9 + 0x400);
LAB_14090b905:
              if (puVar13 < puVar2) {
                lVar9 = *(longlong *)*puVar13;
                if (((*(int *)(lVar9 + 0x1c) != *piVar20) ||
                    ((*(uint *)(lVar9 + 0x10) & 0x40000) == 0)) ||
                   (puVar11 = (undefined4 *)FUN_1408246e0(lVar9,1), puVar11 == (undefined4 *)0x0))
                goto LAB_14090b937;
                pvVar10 = operator_new(200);
                puVar12 = (undefined4 *)FUN_1400b5e90(pvVar10,0);
                if (puVar12[0x30] == 0x11) goto LAB_14090bb15;
                switch(puVar12[0x30]) {
                case 1:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 == (void *)0x0) break;
                  goto LAB_14090bada;
                case 2:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e7f0(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 4:
                case 0x12:
                case 0x15:
                case 0x16:
                  goto LAB_14090bad3;
                case 5:
                  goto LAB_14090bad3;
                case 6:
                  goto LAB_14090bad3;
                case 7:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e740(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0xb:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e740(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0xc:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e920(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0xd:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e920(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0xe:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e920(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0xf:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
                  if (pvVar10 != (void *)0x0) {
                    FUN_14007e740(pvVar10);
                    goto LAB_14090bada;
                  }
                  break;
                case 0x10:
                  goto LAB_14090bad3;
                case 0x11:
                case 0x17:
                case 0x18:
                  goto LAB_14090bad3;
                case 0x13:
                  if (*(longlong *)(puVar12 + 0x2e) != 0) {
                    FUN_14007ef00();
                  }
                  break;
                case 0x14:
LAB_14090bad3:
                  pvVar10 = *(void **)(puVar12 + 0x2e);
LAB_14090bada:
                  free(pvVar10);
                }
                puVar12[0x30] = 0x11;
                puVar13 = operator_new(0x10);
                *puVar13 = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 1) = 0xffffffff;
                *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
                *(undefined8 **)(puVar12 + 0x2e) = puVar13;
LAB_14090bb15:
                **(undefined4 **)(puVar12 + 0x2e) = *puVar11;
                plVar15 = DAT_141d69318;
                plVar21 = DAT_141d69310;
                goto LAB_14090bb2f;
              }
              goto LAB_14090bc5c;
            }
            goto LAB_14090bc6a;
          }
        }
LAB_14090bc7c:
        if ((local_78[0x30] == 0x11) && ((*(byte *)(*(longlong *)(local_78 + 0x2e) + 0xc) & 1) == 0)
           ) {
          local_78[4] = -1;
          local_78[5] = -1;
          local_78[2] = -1;
        }
      }
    }
  }
LAB_14090bca7:
  FUN_140099940(lVar8,param_1,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  return;
}

