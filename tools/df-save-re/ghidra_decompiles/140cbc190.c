// FUN_140cbc190 @ 140cbc190
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c110 FUN_14000c110
//   -> 1402eb910 FUN_1402eb910
//   -> 14000c460 FUN_14000c460
//   -> 1402107b0 FUN_1402107b0
//   -> 14000be20 FUN_14000be20
//   -> 140002020 FUN_140002020


void FUN_140cbc190(longlong param_1,ulonglong *param_2,ulonglong *param_3,longlong *param_4,
                  short param_5,int param_6,short param_7)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  short *psVar6;
  longlong lVar7;
  uint uVar8;
  short *psVar9;
  int iVar10;
  longlong lVar11;
  short sVar12;
  short *psVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  short local_c8 [4];
  longlong *local_c0;
  short *local_b8;
  undefined2 *local_b0;
  short *psStack_a8;
  short *local_a0;
  undefined2 *local_98;
  short *psStack_90;
  short *local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  sVar12 = *(short *)(param_1 + 0xa4);
  if (((-1 < sVar12) &&
      ((ulonglong)(longlong)sVar12 < (ulonglong)(DAT_141d6dd58 - DAT_141d6dd50 >> 3))) &&
     (local_60 = *(longlong *)(DAT_141d6dd50 + (longlong)sVar12 * 8), local_60 != 0)) {
    plVar4 = (longlong *)(**(code **)(*param_4 + 0x28))(param_4);
    local_c0 = plVar4;
    plVar5 = (longlong *)(**(code **)(*param_4 + 0x30))(param_4);
    local_78 = plVar5;
    local_68 = (longlong *)(**(code **)(*param_4 + 0x38))(param_4);
    plVar16 = (longlong *)0x0;
    local_b8 = (short *)0x0;
    if (((plVar4 == (longlong *)0x0) || (plVar4[1] - *plVar4 >> 1 == 0)) ||
       ((*(byte *)(param_4 + 1) & 0x20) != 0)) {
      local_b0 = (undefined2 *)0x0;
      psStack_a8 = (short *)0x0;
      local_a0 = (short *)0x0;
      local_98 = (undefined2 *)0x0;
      psStack_90 = (short *)0x0;
      local_c0 = (longlong *)0x0;
      local_88 = (short *)0x0;
      psVar6 = (short *)plVar16;
      if (param_6 == -1) {
        psVar9 = psStack_a8;
        plVar4 = local_c0;
        puVar17 = local_98;
        puVar19 = local_b0;
        psVar13 = local_b8;
        if ((param_7 != -1) &&
           (lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)param_7 * 8),
           sVar12 = (short)(*(longlong *)(lVar7 + 0x60) - *(longlong *)(lVar7 + 0x58) >> 3) + -1,
           psVar6 = (short *)0x0, param_5 = sVar12, -1 < sVar12)) {
          psVar9 = (short *)0x0;
          puVar19 = (undefined2 *)0x0;
          puVar17 = (undefined2 *)0x0;
          psVar6 = (short *)plVar16;
          do {
            psVar13 = psStack_90;
            param_5 = sVar12;
            if ((&param_7 < psVar9) && (puVar19 <= &param_7)) {
              lVar7 = (longlong)&param_7 - (longlong)puVar19;
              if (psVar9 == psVar6) {
                FUN_14000c460(&local_b0,1);
                psVar9 = psStack_a8;
                plVar16 = local_c0;
                psVar6 = local_a0;
                puVar19 = local_b0;
              }
              if (psVar9 != (short *)0x0) {
                *psVar9 = puVar19[lVar7 >> 1];
              }
            }
            else {
              if (psVar9 == psVar6) {
                FUN_14000c460(&local_b0,1);
                psVar9 = psStack_a8;
                plVar16 = local_c0;
                psVar6 = local_a0;
                puVar19 = local_b0;
              }
              if (psVar9 != (short *)0x0) {
                *psVar9 = param_7;
              }
            }
            psVar9 = psVar9 + 1;
            psStack_a8 = psVar9;
            if ((&param_5 < psVar13) && (puVar17 <= &param_5)) {
              lVar7 = (longlong)&param_5 - (longlong)puVar17;
              if ((longlong *)psVar13 == plVar16) {
                FUN_14000c460(&local_98,1);
                local_c0 = (longlong *)local_88;
                psVar13 = psStack_90;
                plVar16 = (longlong *)local_88;
                puVar17 = local_98;
              }
              if (psVar13 != (short *)0x0) {
                *psVar13 = puVar17[lVar7 >> 1];
              }
            }
            else {
              if ((longlong *)psVar13 == plVar16) {
                FUN_14000c460(&local_98,1);
                local_c0 = (longlong *)local_88;
                psVar13 = psStack_90;
                plVar16 = (longlong *)local_88;
                puVar17 = local_98;
              }
              if (psVar13 != (short *)0x0) {
                *psVar13 = sVar12;
              }
            }
            psStack_90 = psVar13 + 1;
            sVar12 = sVar12 + -1;
            plVar4 = plVar16;
            param_5 = sVar12;
            psVar13 = psVar6;
          } while (-1 < sVar12);
        }
      }
      else {
        lVar7 = FUN_1402107b0(param_1);
        psVar9 = psStack_a8;
        plVar4 = local_c0;
        puVar17 = local_98;
        puVar19 = local_b0;
        psVar13 = local_b8;
        if ((lVar7 != 0) &&
           (iVar3 = (int)(*(longlong *)(lVar7 + 0x10) - *(longlong *)(lVar7 + 8) >> 3) + -1,
           lVar14 = (longlong)iVar3, -1 < iVar3)) {
          do {
            lVar15 = *(longlong *)(*(longlong *)(lVar7 + 8) + lVar14 * 8);
            if ((*(short *)(lVar15 + 4) != -1) && (psVar6 = (short *)(lVar15 + 6), *psVar6 != -1)) {
              FUN_14000be20(&local_b0);
              FUN_14000be20(&local_98,psVar6);
            }
            lVar14 = lVar14 + -1;
          } while (-1 < lVar14);
          local_b8 = local_a0;
          local_c0 = (longlong *)local_88;
          psVar9 = psStack_a8;
          plVar4 = (longlong *)local_88;
          puVar17 = local_98;
          psVar6 = local_a0;
          puVar19 = local_b0;
          psVar13 = local_b8;
        }
      }
      local_b8 = psVar13;
      iVar3 = (int)((longlong)psVar9 - (longlong)puVar19 >> 1) + -1;
      lVar7 = (longlong)iVar3;
      puVar18 = puVar17;
      puVar20 = puVar19;
      if (-1 < iVar3) {
        psVar9 = puVar17 + lVar7;
        do {
          sVar12 = *(short *)(((longlong)puVar19 - (longlong)puVar17) + (longlong)psVar9);
          sVar1 = *psVar9;
          lVar14 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)sVar12 * 8) + 0x58
                      ) + (longlong)sVar1 * 8);
          lVar15 = *(longlong *)
                    (*(longlong *)(local_60 + 0x24c8) + (longlong)*(int *)(lVar14 + 0x20) * 8);
          param_5 = sVar1;
          local_c8[0] = sVar12;
          if ((((*(uint *)(param_4 + 1) & 4) == 0) || (*(int *)(lVar14 + 0x40) != 0)) &&
             (((*(uint *)(param_4 + 1) & 8) == 0 ||
              ((0 < *(int *)(lVar15 + 0x28) && ((**(byte **)(lVar15 + 0x20) & 0x80) != 0)))))) {
            psVar6 = (short *)param_2[1];
            if ((local_c8 < psVar6) && (psVar13 = (short *)*param_2, psVar13 <= local_c8)) {
              if (psVar6 == (short *)param_2[2]) {
                FUN_14000c460(param_2,1);
              }
              if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
                *(undefined2 *)param_2[1] =
                     *(undefined2 *)(*param_2 + ((longlong)local_c8 - (longlong)psVar13 >> 1) * 2);
              }
            }
            else {
              if (psVar6 == (short *)param_2[2]) {
                FUN_14000c460(param_2,1);
              }
              if ((short *)param_2[1] != (short *)0x0) {
                *(short *)param_2[1] = sVar12;
              }
            }
            param_2[1] = param_2[1] + 2;
            puVar18 = (undefined2 *)param_3[1];
            if ((&param_5 < puVar18) && (puVar20 = (undefined2 *)*param_3, puVar20 <= &param_5)) {
              if (puVar18 == (undefined2 *)param_3[2]) {
                FUN_14000c460(param_3,1);
              }
              if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
                *(undefined2 *)param_3[1] =
                     *(undefined2 *)(*param_3 + ((longlong)&param_5 - (longlong)puVar20 >> 1) * 2);
              }
            }
            else {
              if (puVar18 == (undefined2 *)param_3[2]) {
                FUN_14000c460(param_3,1);
              }
              if ((short *)param_3[1] != (short *)0x0) {
                *(short *)param_3[1] = sVar1;
              }
            }
            param_3[1] = param_3[1] + 2;
          }
          psVar9 = psVar9 + -1;
          lVar7 = lVar7 + -1;
          plVar4 = local_c0;
          puVar18 = local_98;
          psVar6 = local_b8;
          puVar20 = local_b0;
        } while (-1 < lVar7);
      }
      if (puVar18 != (undefined2 *)0x0) {
        FUN_140002020(puVar18,(longlong)plVar4 - (longlong)puVar18 >> 1,2);
      }
      if (puVar20 != (undefined2 *)0x0) {
        FUN_140002020(puVar20,(longlong)psVar6 - (longlong)puVar20 >> 1,2);
      }
    }
    else {
      uVar8 = (*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8);
      param_5 = (short)((longlong)(ulonglong)uVar8 >> 3) + -1;
      local_b8 = (short *)CONCAT62((int6)(uint6)(ushort)(uVar8 >> 0x10) >> 3,param_5);
      plVar16 = local_68;
      while (-1 < param_5) {
        lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x5d8) + (longlong)(short)local_b8 * 8);
        iVar3 = (int)(plVar4[1] - *plVar4 >> 1) + -1;
        local_68 = plVar16;
        if (-1 < iVar3) {
          lVar14 = (longlong)iVar3;
          local_70 = lVar7;
          do {
            sVar12 = *(short *)(*plVar4 + lVar14 * 2);
            lVar15 = lVar14;
            local_80 = lVar14;
            if (sVar12 == 0) {
              iVar3 = FUN_1402eb910(*(undefined8 *)(lVar14 * 8 + *plVar5),1);
              plVar4 = local_c0;
              if ((((-1 < iVar3) && (iVar10 = iVar3 >> 3, -1 < iVar10)) &&
                  (iVar10 < *(int *)(lVar7 + 0x50))) &&
                 ((*(byte *)((longlong)iVar10 + *(longlong *)(lVar7 + 0x48)) &
                  (byte)(1 << ((byte)iVar3 & 7))) != 0)) goto LAB_140cbc3a5;
            }
            else {
              if (sVar12 == 1) {
                iVar3 = FUN_140071310(lVar7,*(undefined8 *)(*plVar5 + lVar14 * 8));
              }
              else {
                if (sVar12 != 2) goto LAB_140cbc477;
                uVar2 = *(undefined8 *)(lVar14 * 8 + *plVar5);
                iVar3 = FUN_140071310(lVar7 + 0x20,uVar2);
                lVar15 = local_80;
                if (iVar3 == 0) goto LAB_140cbc3a5;
                iVar3 = FUN_14000c110(uVar2,&DAT_140ea7b80);
                lVar15 = local_80;
              }
              plVar4 = local_c0;
              if (iVar3 == 0) {
LAB_140cbc3a5:
                uVar2 = *(undefined8 *)(lVar14 * 8 + *plVar16);
                iVar3 = FUN_14000c110(uVar2,"RESERVED_WHOLE_PART");
                if (iVar3 == 0) {
                  puVar19 = (undefined2 *)param_2[1];
                  if ((&param_5 < puVar19) &&
                     (puVar17 = (undefined2 *)*param_2, puVar17 <= &param_5)) {
                    if (puVar19 == (undefined2 *)param_2[2]) {
                      FUN_14000c460(param_2,1);
                    }
                    if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
                      *(undefined2 *)param_2[1] =
                           *(undefined2 *)
                            (*param_2 + ((longlong)&param_5 - (longlong)puVar17 >> 1) * 2);
                    }
                  }
                  else {
                    if (puVar19 == (undefined2 *)param_2[2]) {
                      FUN_14000c460(param_2,1);
                    }
                    if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
                      *(undefined2 *)param_2[1] = (short)local_b8;
                    }
                  }
                  param_2[1] = param_2[1] + 2;
                  param_5 = -1;
                  psVar6 = (short *)param_3[1];
                  if ((&param_5 < psVar6) && (psVar9 = (short *)*param_3, psVar9 <= &param_5)) {
                    psVar13 = &param_5;
LAB_140cbc521:
                    if (psVar6 == (short *)param_3[2]) {
                      FUN_14000c460(param_3,1);
                    }
                    if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
                      *(undefined2 *)param_3[1] =
                           *(undefined2 *)
                            (*param_3 + ((longlong)psVar13 - (longlong)psVar9 >> 1) * 2);
                    }
                  }
                  else {
                    if (psVar6 == (short *)param_3[2]) {
                      FUN_14000c460(param_3,1);
                    }
                    if ((undefined2 *)param_3[1] != (undefined2 *)0x0) {
                      *(undefined2 *)param_3[1] = 0xffff;
                    }
                  }
LAB_140cbc640:
                  param_3[1] = param_3[1] + 2;
                  break;
                }
                sVar12 = (short)((longlong)
                                 (ulonglong)(uint)(*(int *)(lVar7 + 0x60) - *(int *)(lVar7 + 0x58))
                                >> 3) + -1;
                plVar4 = local_c0;
                plVar5 = local_78;
                local_c8[0] = sVar12;
                if (-1 < sVar12) {
                  lVar14 = *(longlong *)(lVar7 + 0x58);
                  lVar11 = *(longlong *)(local_60 + 0x24c8);
                  uVar8 = *(uint *)(param_4 + 1);
                  local_58 = lVar11;
                  do {
                    lVar7 = *(longlong *)(lVar14 + (longlong)sVar12 * 8);
                    lVar15 = *(longlong *)(lVar11 + (longlong)*(int *)(lVar7 + 0x20) * 8);
                    if (((((uVar8 & 4) == 0) || (*(int *)(lVar7 + 0x40) != 0)) &&
                        (((uVar8 & 8) == 0 ||
                         ((0 < *(int *)(lVar15 + 0x28) && ((**(byte **)(lVar15 + 0x20) & 0x80) != 0)
                          ))))) &&
                       ((local_c8[0] = sVar12, iVar3 = FUN_14000c110(uVar2,&DAT_140ea7b80),
                        iVar3 == 0 ||
                        (iVar3 = FUN_140071310(lVar15,uVar2), lVar11 = local_58, iVar3 == 0)))) {
                      puVar19 = (undefined2 *)param_2[1];
                      if ((&param_5 < puVar19) &&
                         (puVar17 = (undefined2 *)*param_2, puVar17 <= &param_5)) {
                        if (puVar19 == (undefined2 *)param_2[2]) {
                          FUN_14000c460(param_2,1);
                        }
                        if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
                          *(undefined2 *)param_2[1] =
                               *(undefined2 *)
                                (*param_2 + ((longlong)&param_5 - (longlong)puVar17 >> 1) * 2);
                        }
                      }
                      else {
                        if (puVar19 == (undefined2 *)param_2[2]) {
                          FUN_14000c460(param_2,1);
                        }
                        if ((undefined2 *)param_2[1] != (undefined2 *)0x0) {
                          *(undefined2 *)param_2[1] = (short)local_b8;
                        }
                      }
                      param_2[1] = param_2[1] + 2;
                      psVar6 = (short *)param_3[1];
                      if ((local_c8 < psVar6) && (psVar9 = (short *)*param_3, psVar9 <= local_c8)) {
                        psVar13 = local_c8;
                        goto LAB_140cbc521;
                      }
                      if (psVar6 == (short *)param_3[2]) {
                        FUN_14000c460(param_3,1);
                      }
                      if ((short *)param_3[1] != (short *)0x0) {
                        *(short *)param_3[1] = sVar12;
                      }
                      goto LAB_140cbc640;
                    }
                    sVar12 = sVar12 + -1;
                    plVar4 = local_c0;
                    plVar5 = local_78;
                    lVar15 = local_80;
                    plVar16 = local_68;
                    lVar7 = local_70;
                    local_c8[0] = sVar12;
                  } while (-1 < sVar12);
                }
              }
            }
LAB_140cbc477:
            lVar14 = lVar15 + -1;
          } while (-1 < lVar14);
        }
        param_5 = (short)local_b8 + -1;
        local_b8 = (short *)CONCAT62((int6)((ulonglong)local_b8 >> 0x10),param_5);
        plVar4 = local_c0;
        plVar5 = local_78;
        plVar16 = local_68;
      }
    }
  }
  return;
}

