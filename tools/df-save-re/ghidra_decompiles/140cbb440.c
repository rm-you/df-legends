// FUN_140cbb440 @ 140cbb440
// callees:
//   -> 140071310 FUN_140071310
//   -> 1405668d0 FUN_1405668d0
//   -> 140cbc190 FUN_140cbc190
//   -> 14000c460 FUN_14000c460
//   -> 14000c390 FUN_14000c390
//   -> 140002020 FUN_140002020
//   -> 140cd1b40 FUN_140cd1b40
//   -> 140dfb5b4 free
//   -> 140073930 FUN_140073930
//   -> 140c24510 FUN_140c24510
//   -> 14000bc60 FUN_14000bc60
//   -> 140dfb5c4 operator_new
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14000bd10 FUN_14000bd10
//   -> 140566990 FUN_140566990


void FUN_140cbb440(longlong param_1,longlong param_2,undefined4 param_3,int param_4,
                  undefined8 param_5,int param_6,char param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  short *psVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  short *psVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  void *pvVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  short *psVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong *plVar26;
  short sVar27;
  int *piVar28;
  int iVar29;
  undefined4 local_res18 [2];
  int local_res20 [2];
  short local_c4 [2];
  int local_c0 [2];
  longlong local_b8;
  int *local_b0;
  int local_a8;
  int *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 local_58;
  
  lVar22 = DAT_141d799b0;
  local_58 = 0xfffffffffffffffe;
  local_c0[0] = 0;
  if (0 < *(int *)(param_2 + 0x108)) {
    local_c0[0] = (*(int *)(param_2 + 0x104) * param_6) / 100;
    if (((local_c0[0] == 0) && (0 < *(int *)(param_2 + 0x104))) && (0 < param_6)) {
      local_c0[0] = 1;
    }
  }
  iVar14 = local_c0[0];
  local_90 = (longlong *)(param_1 + 0xc80);
  piVar20 = (int *)(param_2 + 0x10c);
  iVar7 = *piVar20;
  iVar29 = 0;
  iVar23 = (int)(*(longlong *)(param_1 + 0xc88) - *local_90 >> 3) + -1;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (-1 < iVar23) {
    do {
      iVar21 = iVar23 + iVar29 >> 1;
      piVar28 = *(int **)(*local_90 + (longlong)iVar21 * 8);
      if (*piVar28 == iVar7) goto LAB_140cbb5b3;
      if (iVar7 < *piVar28) {
        iVar23 = iVar21 + -1;
      }
      else {
        iVar29 = iVar21 + 1;
      }
      local_b0 = piVar28;
    } while (iVar29 <= iVar23);
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0xc88);
    for (puVar24 = *(undefined8 **)(param_1 + 0xc80); puVar24 < puVar8; puVar24 = puVar24 + 1) {
      iVar23 = FUN_140071310(*(longlong *)(lVar22 + (longlong)*(int *)*puVar24 * 8) + 0xe0,
                             param_2 + 0xe0);
      if (iVar23 == 0) {
        piVar28 = (int *)*puVar24;
        local_b0 = piVar28;
        if (piVar28 != (int *)0x0) goto LAB_140cbb5b3;
        break;
      }
    }
  }
  sVar27 = 0;
  if (iVar7 != -1) {
    for (piVar28 = *(int **)(param_1 + 0xc98); piVar28 < *(int **)(param_1 + 0xca0);
        piVar28 = piVar28 + 1) {
      if (*piVar28 == iVar7) {
        iVar23 = (int)((longlong)piVar28 - (longlong)*(int **)(param_1 + 0xc98) >> 2);
        if (iVar23 != -1) {
          psVar4 = (short *)(*(longlong *)(param_1 + 0xcb0) + (longlong)iVar23 * 2);
          sVar27 = *psVar4;
          if (sVar27 < 10000) {
            *psVar4 = sVar27 + 1;
          }
          goto LAB_140cbbded;
        }
        break;
      }
    }
    FUN_14000bc60(param_1 + 0xc98,piVar20);
    local_res18[0] = CONCAT22(local_res18[0]._2_2_,1);
    puVar3 = (ulonglong *)(param_1 + 0xcb0);
    puVar11 = *(undefined4 **)(param_1 + 0xcb8);
    if ((local_res18 < puVar11) && (puVar12 = (undefined4 *)*puVar3, puVar12 <= local_res18)) {
      if (puVar11 == *(undefined4 **)(param_1 + 0xcc0)) {
        FUN_14000c460(puVar3);
      }
      if (*(undefined2 **)(param_1 + 0xcb8) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0xcb8) =
             *(undefined2 *)(*puVar3 + ((longlong)local_res18 - (longlong)puVar12 >> 1) * 2);
      }
      *(longlong *)(param_1 + 0xcb8) = *(longlong *)(param_1 + 0xcb8) + 2;
    }
    else {
      if (puVar11 == *(undefined4 **)(param_1 + 0xcc0)) {
        FUN_14000c460(puVar3);
      }
      if (*(undefined2 **)(param_1 + 0xcb8) != (undefined2 *)0x0) {
        **(undefined2 **)(param_1 + 0xcb8) = 1;
      }
      *(longlong *)(param_1 + 0xcb8) = *(longlong *)(param_1 + 0xcb8) + 2;
    }
  }
LAB_140cbbded:
  piVar19 = operator_new(0x68);
  piVar28 = piVar19 + 4;
  piVar28[0] = 0;
  piVar28[1] = 0;
  piVar19[6] = 0;
  piVar19[7] = 0;
  piVar19[8] = 0;
  piVar19[9] = 0;
  plVar26 = (longlong *)(piVar19 + 0xc);
  *plVar26 = 0;
  piVar19[0xe] = 0;
  piVar19[0xf] = 0;
  piVar19[0x10] = 0;
  piVar19[0x11] = 0;
  piVar19[0x14] = 0;
  piVar19[0x15] = 0;
  piVar19[0x16] = 0;
  piVar19[0x17] = 0;
  piVar19[0x18] = 0;
  piVar19[0x19] = 0;
  piVar19[0] = -1;
  piVar19[1] = -1;
  piVar19[2] = -1;
  piVar19[3] = 0;
  piVar19[10] = -1;
  *(undefined2 *)(piVar19 + 0x12) = 0;
  piVar19[0x13] = 0;
  *piVar19 = *piVar20;
  piVar19[1] = DAT_1416b1980;
  piVar19[2] = DAT_1416b1974;
  *(short *)(piVar19 + 0x12) = sVar27;
  local_a0 = piVar19;
  local_98 = plVar26;
  if (local_res20[0] != -1) {
    FUN_14000bc60(piVar28,local_res20);
  }
  FUN_14000b9d0(plVar26,*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3);
  iVar23 = (int)(*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 3) + -1;
  lVar22 = (longlong)iVar23;
  local_b8 = lVar22;
  if (-1 < iVar23) {
    do {
      local_b8 = lVar22;
      piVar20 = operator_new(0x98);
      piVar20[4] = 0;
      piVar20[5] = 0;
      piVar20[6] = 0;
      piVar20[7] = 0;
      piVar20[8] = 0;
      piVar20[9] = 0;
      piVar20[10] = 0;
      piVar20[0xb] = 0;
      piVar20[0xc] = 0;
      piVar20[0xd] = 0;
      piVar20[0xe] = 0;
      piVar20[0xf] = 0;
      plVar9 = (longlong *)(piVar20 + 0x10);
      *plVar9 = 0;
      piVar20[0x12] = 0;
      piVar20[0x13] = 0;
      piVar20[0x14] = 0;
      piVar20[0x15] = 0;
      plVar1 = (longlong *)(piVar20 + 0x16);
      *plVar1 = 0;
      piVar20[0x18] = 0;
      piVar20[0x19] = 0;
      piVar20[0x1a] = 0;
      piVar20[0x1b] = 0;
      plVar2 = (longlong *)(piVar20 + 0x1c);
      *plVar2 = 0;
      piVar20[0x1e] = 0;
      piVar20[0x1f] = 0;
      piVar20[0x20] = 0;
      piVar20[0x21] = 0;
      piVar20[0x22] = 0;
      piVar20[0] = 0;
      piVar20[1] = 0;
      piVar20[2] = 0;
      piVar20[0x23] = -1;
      piVar20[0x24] = -1;
      *(int **)(*plVar26 + lVar22 * 8) = piVar20;
      plVar26 = *(longlong **)(*(longlong *)(param_2 + 0x20) + lVar22 * 8);
      local_b0 = piVar20;
      uVar16 = FUN_1409fc0c0();
      if ((int)((uVar16 + (int)((longlong)((ulonglong)uVar16 * 0x100000003) >> 0x3f) * 0x7fffffff) /
               0x147ae15) < *(int *)((longlong)plVar26 + 0xc)) {
        cVar15 = (**(code **)(*plVar26 + 0x20))(plVar26);
        if (cVar15 == '\0') {
          FUN_140cbc190(param_1,piVar20 + 4,piVar20 + 10,plVar26);
          iVar23 = (int)(*(longlong *)(piVar20 + 6) - *(longlong *)(piVar20 + 4) >> 1);
          if (0 < iVar23) {
            lVar25 = (longlong)iVar23;
            FUN_14000bd10(plVar9,lVar25);
            FUN_14000bd10(plVar1,lVar25);
            FUN_14000bd10(plVar2,lVar25);
            lVar25 = (longlong)(iVar23 + -1);
            if (-1 < iVar23 + -1) {
              do {
                lVar22 = lVar25 * 4;
                iVar23 = iVar14;
                if (*(int *)(param_2 + 0x108) < 1) {
                  iVar23 = param_6;
                }
                *(int *)(lVar22 + *plVar9) = iVar23;
                *(undefined4 *)(lVar22 + *plVar1) = 0;
                *(undefined4 *)(lVar22 + *plVar2) = 0;
                lVar25 = lVar25 + -1;
                lVar22 = local_b8;
              } while (-1 < lVar25);
            }
          }
        }
        else {
          iVar23 = param_6;
          if (0 < *(int *)(param_2 + 0x108)) {
            iVar23 = iVar14;
          }
          *piVar20 = iVar23;
          piVar20[1] = 0;
          piVar20[2] = 0;
        }
      }
      else {
        piVar20[0x22] = piVar20[0x22] | 1;
      }
      lVar22 = lVar22 + -1;
      plVar26 = local_98;
      piVar19 = local_a0;
      local_b8 = lVar22;
    } while (-1 < lVar22);
  }
  if ((param_7 == '\0') || (cVar15 = FUN_140cd1b40(param_1,piVar19), cVar15 == '\0')) {
    FUN_140566990(piVar19,local_90);
  }
  else {
    iVar23 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
    lVar22 = (longlong)iVar23;
    if (-1 < iVar23) {
      do {
        lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8);
        if (*(int *)(lVar25 + 0x30) == *piVar19) {
          lVar25 = *(longlong *)(lVar25 + 0x50);
          if (lVar25 != 0) {
            pvVar13 = *(void **)(lVar25 + 0x90);
            if (pvVar13 != (void *)0x0) {
              free(pvVar13);
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50) +
               0x90) = 0;
            }
            pvVar13 = *(void **)(*(longlong *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50
                                  ) + 0x98);
            if (pvVar13 != (void *)0x0) {
              free(pvVar13);
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50) +
               0x98) = 0;
            }
          }
          *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x30) =
               0xffffffff;
        }
        lVar22 = lVar22 + -1;
      } while (-1 < lVar22);
    }
    FUN_140c24510(piVar19);
    free(piVar19);
  }
  return;
LAB_140cbb5b3:
  local_b0 = piVar28;
  if (local_res20[0] != -1) {
    FUN_1405668d0(local_res20[0],piVar28 + 4);
    lVar22 = DAT_141d799b0;
  }
  lVar22 = *(longlong *)(lVar22 + (longlong)*piVar28 * 8);
  iVar23 = (int)(*(longlong *)(lVar22 + 0x28) - *(longlong *)(lVar22 + 0x20) >> 3) + -1;
  plVar26 = (longlong *)(longlong)iVar23;
  local_b8 = lVar22;
  local_98 = plVar26;
  if (-1 < iVar23) {
    do {
      piVar20 = *(int **)(*(longlong *)(piVar28 + 0xc) + (longlong)plVar26 * 8);
      plVar9 = *(longlong **)(*(longlong *)(lVar22 + 0x20) + (longlong)plVar26 * 8);
      if ((*(byte *)(piVar20 + 0x22) & 1) == 0) {
        local_a8 = 1;
        if (DAT_1410b67dc == 0) {
          local_a8 = *(int *)((longlong)plVar9 + 0x1c);
        }
        iVar23 = local_a8;
        local_98 = plVar26;
        cVar15 = (**(code **)(*plVar9 + 0x20))(plVar9);
        lVar22 = local_b8;
        piVar28 = local_b0;
        if (cVar15 == '\0') {
          if ((*(byte *)(plVar9 + 1) & 0x20) == 0) {
            iVar29 = (int)(*(longlong *)(piVar20 + 6) - *(longlong *)(piVar20 + 4) >> 1) + -1;
            lVar25 = (longlong)iVar29;
            if (-1 < iVar29) {
              do {
                lVar5 = lVar25 * 4;
                lVar18 = *(longlong *)(piVar20 + 0x10);
                if (*(int *)(param_2 + 0x108) < 1) {
                  iVar29 = param_6;
                  if (*(int *)(lVar5 + lVar18) < param_6) goto LAB_140cbbb97;
                }
                else {
                  *(int *)(lVar5 + lVar18) = *(int *)(lVar5 + lVar18) + iVar14;
                  lVar18 = *(longlong *)(piVar20 + 0x10);
                  iVar29 = *(int *)(param_2 + 0x108);
                  if (iVar29 < *(int *)(lVar5 + lVar18)) {
LAB_140cbbb97:
                    *(int *)(lVar5 + lVar18) = iVar29;
                  }
                }
                if ((int)plVar9[3] != -1) {
                  iVar29 = (*(int *)((longlong)plVar9 + 0x14) - (int)plVar9[2]) * iVar23;
                  if (iVar29 < *(int *)(lVar5 + *(longlong *)(piVar20 + 0x1c))) {
                    *(int *)(lVar5 + *(longlong *)(piVar20 + 0x1c)) = iVar29;
                  }
                }
                lVar25 = lVar25 + -1;
              } while (-1 < lVar25);
            }
          }
          else {
            local_88 = 0;
            lStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            FUN_140cbc190(param_1,&local_88,&local_70,plVar9);
            iVar23 = (int)(lStack_80 - local_88 >> 1);
            if ((0 < iVar23) &&
               (iVar23 = iVar23 + -1, local_a0 = (int *)(longlong)iVar23, -1 < iVar23)) {
              do {
                sVar27 = *(short *)(local_88 + (longlong)local_a0 * 2);
                local_res18[0] = CONCAT22(local_res18[0]._2_2_,sVar27);
                sVar6 = *(short *)(local_70 + (longlong)local_a0 * 2);
                psVar4 = *(short **)(piVar20 + 4);
                psVar10 = *(short **)(piVar20 + 6);
                local_c4[0] = sVar6;
                if (psVar4 < psVar10) {
                  psVar17 = psVar4;
                  do {
                    if ((*psVar17 == sVar27) &&
                       (*(short *)((*(longlong *)(piVar20 + 10) - (longlong)psVar4) +
                                  (longlong)psVar17) == sVar6)) {
                      iVar23 = (int)((longlong)psVar17 - (longlong)psVar4 >> 1);
                      if (iVar23 != -1) {
                        lVar22 = (longlong)iVar23 * 4;
                        lVar25 = *(longlong *)(piVar20 + 0x10);
                        if (*(int *)(param_2 + 0x108) < 1) {
                          iVar23 = param_6;
                          if (*(int *)(lVar22 + lVar25) < param_6) goto LAB_140cbb7a4;
                        }
                        else {
                          *(int *)(lVar22 + lVar25) = *(int *)(lVar22 + lVar25) + iVar14;
                          lVar25 = *(longlong *)(piVar20 + 0x10);
                          iVar23 = *(int *)(param_2 + 0x108);
                          if (iVar23 < *(int *)(lVar22 + lVar25)) {
LAB_140cbb7a4:
                            *(int *)(lVar22 + lVar25) = iVar23;
                          }
                        }
                        if ((int)plVar9[3] != -1) {
                          iVar23 = (*(int *)((longlong)plVar9 + 0x14) - (int)plVar9[2]) * local_a8;
                          if (iVar23 < *(int *)(lVar22 + *(longlong *)(piVar20 + 0x1c))) {
                            *(int *)(lVar22 + *(longlong *)(piVar20 + 0x1c)) = iVar23;
                          }
                        }
                        goto LAB_140cbbae3;
                      }
                      break;
                    }
                    psVar17 = psVar17 + 1;
                  } while (psVar17 < psVar10);
                }
                if ((local_res18 < psVar10) &&
                   (puVar11 = *(undefined4 **)(piVar20 + 4), puVar11 <= local_res18)) {
                  if (psVar10 == *(short **)(piVar20 + 8)) {
                    FUN_14000c460(piVar20 + 4,1);
                  }
                  if (*(undefined2 **)(piVar20 + 6) != (undefined2 *)0x0) {
                    **(undefined2 **)(piVar20 + 6) =
                         *(undefined2 *)
                          (*(longlong *)(piVar20 + 4) +
                          ((longlong)local_res18 - (longlong)puVar11 >> 1) * 2);
                  }
                }
                else {
                  if (psVar10 == *(short **)(piVar20 + 8)) {
                    FUN_14000c460(piVar20 + 4,1);
                  }
                  if (*(short **)(piVar20 + 6) != (short *)0x0) {
                    **(short **)(piVar20 + 6) = sVar27;
                  }
                }
                *(longlong *)(piVar20 + 6) = *(longlong *)(piVar20 + 6) + 2;
                psVar4 = *(short **)(piVar20 + 0xc);
                if ((local_c4 < psVar4) &&
                   (psVar10 = *(short **)(piVar20 + 10), psVar10 <= local_c4)) {
                  if (psVar4 == *(short **)(piVar20 + 0xe)) {
                    FUN_14000c460(piVar20 + 10,1);
                  }
                  if (*(undefined2 **)(piVar20 + 0xc) != (undefined2 *)0x0) {
                    **(undefined2 **)(piVar20 + 0xc) =
                         *(undefined2 *)
                          (*(longlong *)(piVar20 + 10) +
                          ((longlong)local_c4 - (longlong)psVar10 >> 1) * 2);
                  }
                }
                else {
                  if (psVar4 == *(short **)(piVar20 + 0xe)) {
                    FUN_14000c460(piVar20 + 10,1);
                  }
                  if (*(short **)(piVar20 + 0xc) != (short *)0x0) {
                    **(short **)(piVar20 + 0xc) = sVar6;
                  }
                }
                *(longlong *)(piVar20 + 0xc) = *(longlong *)(piVar20 + 0xc) + 2;
                piVar28 = *(int **)(piVar20 + 0x12);
                if (*(int *)(param_2 + 0x108) < 1) {
                  if ((piVar28 <= &param_6) ||
                     (puVar11 = *(undefined4 **)(piVar20 + 0x10), &param_6 < puVar11)) {
                    if (piVar28 == *(int **)(piVar20 + 0x14)) {
                      FUN_14000c390(piVar20 + 0x10,1);
                    }
                    piVar28 = *(int **)(piVar20 + 0x12);
                    iVar23 = param_6;
                    goto joined_r0x000140cbb9c5;
                  }
                  if (piVar28 == *(int **)(piVar20 + 0x14)) {
                    FUN_14000c390(piVar20 + 0x10,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x12) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x12) =
                         *(undefined4 *)
                          (*(longlong *)(piVar20 + 0x10) +
                          ((longlong)&param_6 - (longlong)puVar11 >> 2) * 4);
                  }
                }
                else if ((local_c0 < piVar28) &&
                        (piVar19 = *(int **)(piVar20 + 0x10), piVar19 <= local_c0)) {
                  if (piVar28 == *(int **)(piVar20 + 0x14)) {
                    FUN_14000c390(piVar20 + 0x10,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x12) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x12) =
                         *(undefined4 *)
                          (*(longlong *)(piVar20 + 0x10) +
                          ((longlong)local_c0 - (longlong)piVar19 >> 2) * 4);
                  }
                }
                else {
                  if (piVar28 == *(int **)(piVar20 + 0x14)) {
                    FUN_14000c390(piVar20 + 0x10,1);
                  }
                  piVar28 = *(int **)(piVar20 + 0x12);
                  iVar23 = iVar14;
joined_r0x000140cbb9c5:
                  if (piVar28 != (int *)0x0) {
                    *piVar28 = iVar23;
                  }
                }
                *(longlong *)(piVar20 + 0x12) = *(longlong *)(piVar20 + 0x12) + 4;
                local_res18[0] = 0;
                puVar11 = *(undefined4 **)(piVar20 + 0x18);
                if ((local_res18 < puVar11) &&
                   (puVar12 = *(undefined4 **)(piVar20 + 0x16), puVar12 <= local_res18)) {
                  if (puVar11 == *(undefined4 **)(piVar20 + 0x1a)) {
                    FUN_14000c390(piVar20 + 0x16,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x18) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x18) =
                         *(undefined4 *)
                          (*(longlong *)(piVar20 + 0x16) +
                          ((longlong)local_res18 - (longlong)puVar12 >> 2) * 4);
                  }
                }
                else {
                  if (puVar11 == *(undefined4 **)(piVar20 + 0x1a)) {
                    FUN_14000c390(piVar20 + 0x16,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x18) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x18) = 0;
                  }
                }
                *(longlong *)(piVar20 + 0x18) = *(longlong *)(piVar20 + 0x18) + 4;
                local_res18[0] = 0;
                puVar11 = *(undefined4 **)(piVar20 + 0x1e);
                if ((local_res18 < puVar11) &&
                   (puVar12 = *(undefined4 **)(piVar20 + 0x1c), puVar12 <= local_res18)) {
                  if (puVar11 == *(undefined4 **)(piVar20 + 0x20)) {
                    FUN_14000c390(piVar20 + 0x1c,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x1e) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x1e) =
                         *(undefined4 *)
                          (*(longlong *)(piVar20 + 0x1c) +
                          ((longlong)local_res18 - (longlong)puVar12 >> 2) * 4);
                  }
                }
                else {
                  if (puVar11 == *(undefined4 **)(piVar20 + 0x20)) {
                    FUN_14000c390(piVar20 + 0x1c,1);
                  }
                  if (*(undefined4 **)(piVar20 + 0x1e) != (undefined4 *)0x0) {
                    **(undefined4 **)(piVar20 + 0x1e) = 0;
                  }
                }
                *(longlong *)(piVar20 + 0x1e) = *(longlong *)(piVar20 + 0x1e) + 4;
LAB_140cbbae3:
                local_a0 = (int *)((longlong)local_a0 + -1);
                plVar26 = local_98;
              } while (-1 < (longlong)local_a0);
            }
            lVar25 = local_88;
            if (local_70 != 0) {
              FUN_140002020(local_70,local_60 - local_70 >> 1,2);
            }
            lVar22 = local_b8;
            piVar28 = local_b0;
            if (lVar25 != 0) {
              FUN_140002020(lVar25,local_78 - lVar25 >> 1,2);
              lVar22 = local_b8;
              piVar28 = local_b0;
            }
          }
        }
        else {
          if (*(int *)(param_2 + 0x108) < 1) {
            iVar29 = param_6;
            if (*piVar20 < param_6) goto LAB_140cbb66d;
          }
          else {
            *piVar20 = *piVar20 + iVar14;
            iVar29 = *(int *)(param_2 + 0x108);
            if (iVar29 < *piVar20) {
LAB_140cbb66d:
              *piVar20 = iVar29;
            }
          }
          iVar23 = (*(int *)((longlong)plVar9 + 0x14) - (int)plVar9[2]) * iVar23;
          if (iVar23 < piVar20[2]) {
            piVar20[2] = iVar23;
          }
        }
      }
      plVar26 = (longlong *)((longlong)plVar26 + -1);
      local_98 = plVar26;
    } while (-1 < (longlong)plVar26);
  }
  if (param_7 == '\0') {
    return;
  }
  cVar15 = FUN_140cd1b40(param_1,piVar28);
  if (cVar15 == '\0') {
    return;
  }
  iVar23 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  lVar22 = (longlong)iVar23;
  if (-1 < iVar23) {
    do {
      lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8);
      if (*(int *)(lVar25 + 0x30) == *piVar28) {
        lVar25 = *(longlong *)(lVar25 + 0x50);
        if (lVar25 != 0) {
          pvVar13 = *(void **)(lVar25 + 0x90);
          if (pvVar13 != (void *)0x0) {
            free(pvVar13);
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50) +
             0x90) = 0;
          }
          pvVar13 = *(void **)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50)
                              + 0x98);
          if (pvVar13 != (void *)0x0) {
            free(pvVar13);
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x50) +
             0x98) = 0;
          }
        }
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x590) + lVar22 * 8) + 0x30) =
             0xffffffff;
      }
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  FUN_140073930(piVar28,local_90);
  FUN_140c24510(piVar28);
  free(piVar28);
  return;
}

