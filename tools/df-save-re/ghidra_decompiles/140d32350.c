// FUN_140d32350 @ 140d32350
// callees:
//   -> 1400b9420 FUN_1400b9420
//   -> 14000d8f0 FUN_14000d8f0
//   -> 1407587d0 FUN_1407587d0
//   -> 14000c390 FUN_14000c390
//   -> 14000d7e0 FUN_14000d7e0
//   -> 140019950 FUN_140019950
//   -> 140019a10 FUN_140019a10
//   -> 14053c490 FUN_14053c490
//   -> 1400199b0 FUN_1400199b0
//   -> 140dfb5c4 operator_new
//   -> 140050070 FUN_140050070
//   -> 140002020 FUN_140002020
//   -> 140004650 FUN_140004650
//   -> 140cc1de0 FUN_140cc1de0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140c8d830 FUN_140c8d830
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140052180 FUN_140052180
//   -> 14000c460 FUN_14000c460
//   -> 1408246e0 FUN_1408246e0
//   -> 14000bc60 FUN_14000bc60
//   -> 1407f3720 FUN_1407f3720
//   -> EXTERNAL:000000e1 memmove
//   -> 14000de70 FUN_14000de70
//   -> 140c21470 FUN_140c21470
//   -> 1400025a0 FUN_1400025a0
//   -> 140741450 FUN_140741450
//   -> 140050340 FUN_140050340
//   -> 1400b8ad0 FUN_1400b8ad0
//   -> 1400030c0 FUN_1400030c0
//   -> 1400025c0 FUN_1400025c0
//   -> 140ca8390 FUN_140ca8390
//   -> 14000d840 FUN_14000d840
//   -> 1400b4080 FUN_1400b4080
//   -> 1402f6b50 FUN_1402f6b50
//   -> 1400b9340 FUN_1400b9340
//   -> 1400b9180 FUN_1400b9180
//   -> 1402f78a0 FUN_1402f78a0
//   -> 14007c030 FUN_14007c030
//   -> 14000be20 FUN_14000be20
//   -> 140002620 FUN_140002620
//   -> 1408dc950 FUN_1408dc950
//   -> 1408dc5c0 FUN_1408dc5c0
//   -> 1400b9e90 FUN_1400b9e90


void FUN_140d32350(longlong *param_1,ulonglong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,short param_6,char param_7,char param_8,char param_9,
                  uint param_10,uint param_11,short param_12,int param_13,undefined4 param_14,
                  uint param_15)

{
  uint *puVar1;
  void *_Src;
  ushort uVar2;
  ulonglong uVar3;
  short *psVar4;
  longlong **pplVar5;
  bool bVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined4 uVar26;
  ulonglong *puVar27;
  uint *puVar28;
  longlong lVar29;
  uint uVar30;
  undefined4 uVar31;
  longlong *local_res8;
  ulonglong *local_res10;
  longlong local_res18;
  longlong local_res20;
  uint *local_1b0;
  uint *puStack_1a8;
  uint *local_1a0;
  uint *local_198;
  longlong local_190;
  int *piStack_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  longlong local_150;
  undefined1 local_140 [24];
  undefined8 local_128;
  undefined1 local_118 [28];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  
  uVar30 = param_11;
  local_128 = 0xfffffffffffffffe;
  *(int *)(param_1 + 0x24dcc) = (int)param_1[0x24dcc] + 1;
  if (param_11 == 0xffffffff) {
    *(undefined4 *)(param_2 + 0x1a) = DAT_1416b1980;
    *(undefined4 *)((longlong)param_2 + 0xd4) = DAT_1416b1974;
  }
  else {
    *(uint *)(param_2 + 0x1a) = param_11;
    *(undefined4 *)((longlong)param_2 + 0xd4) = 0xffffffff;
  }
  param_10 = CONCAT22(param_10._2_2_,0xffff);
  if (param_4 != 0) {
    param_10 = CONCAT22(param_10._2_2_,*(undefined2 *)(param_4 + 0x90));
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400b9420(param_2);
  if (param_13 == 1) {
    local_190 = 0;
    piStack_188 = (int *)0x0;
    lVar18 = 0;
    local_180 = 0;
    FUN_14000d8f0(local_118);
    local_f0 = param_14;
    iVar11 = FUN_1407587d0(param_1 + 0x24d7b,local_118,uVar30);
    if (iVar11 != -1) {
      FUN_14000c390(&local_190,1);
      if (piStack_188 != (int *)0x0) {
        *piStack_188 = iVar11;
      }
      piStack_188 = piStack_188 + 1;
      lVar18 = local_180;
    }
    lVar29 = local_190;
    if ((longlong)piStack_188 - local_190 >> 2 != 0) {
      iVar11 = FUN_14000d7e0();
      plVar14 = (longlong *)
                FUN_140019950(param_1 + 0x24d7b,*(undefined4 *)(lVar29 + (longlong)iVar11 * 4));
      if (plVar14 != (longlong *)0x0) {
        *(int *)(local_res10 + 6) = (int)plVar14[4];
        (**(code **)(*plVar14 + 0xe0))(plVar14);
        goto LAB_140d32685;
      }
    }
    lVar15 = FUN_140019a10(DAT_141d6cfd0);
    if ((lVar15 != 0) &&
       ((lVar15 = FUN_14053c490(lVar15), lVar15 != 0 ||
        (lVar15 = FUN_1400199b0(&DAT_141c53718), lVar15 != 0)))) {
      local_res8 = operator_new(0x20);
      *local_res8 = (longlong)art_image_element_creaturest::vftable;
      *(undefined4 *)(local_res8 + 2) = 0xffffffff;
      *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
      *(undefined4 *)(local_res8 + 3) = 0xffffffff;
      *(undefined4 *)(local_res8 + 1) = 1;
      *(int *)(local_res8 + 2) = (int)*(short *)(lVar15 + 0x90);
      *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
      *(undefined4 *)(local_res8 + 3) = 0xffffffff;
      FUN_140050070(local_res10,&local_res8);
    }
  }
  else {
    if (param_13 != 2) {
      if (param_13 == 0) {
        lVar18 = FUN_140004650(&DAT_141d7a048,param_14);
        if (lVar18 == 0) goto LAB_140d35700;
        local_190 = 0;
        piStack_188 = (int *)0x0;
        puVar25 = (uint *)0x0;
        local_res20 = 0;
        local_180 = 0;
        FUN_14000d8f0(local_118);
        local_f8 = *(undefined4 *)(lVar18 + 0xe0);
        iVar11 = FUN_1407587d0(param_1 + 0x24d7b,local_118,uVar30);
        if (iVar11 != -1) {
          FUN_14000c390(&local_190,1);
          if (piStack_188 != (int *)0x0) {
            *piStack_188 = iVar11;
          }
          piStack_188 = piStack_188 + 1;
          local_res20 = local_180;
        }
        lVar15 = local_190;
        lVar29 = local_res20;
        if ((longlong)piStack_188 - local_190 >> 2 == 0) {
LAB_140d327a2:
          local_198 = operator_new(0x20);
          *(undefined ***)local_198 = art_image_element_creaturest::vftable;
          local_198[4] = 0xffffffff;
          *(short *)(local_198 + 5) = -1;
          local_198[6] = 0xffffffff;
          local_198[2] = 1;
          local_198[4] = (int)*(short *)(lVar18 + 2);
          *(short *)(local_198 + 5) = *(short *)(lVar18 + 4);
          local_198[6] = *(uint *)(lVar18 + 0xe0);
          uVar23 = local_res10[1];
          uVar3 = *local_res10;
          FUN_140050070(local_res10,&local_198);
          lVar18 = FUN_140cc1de0(param_1 + 0x276c,*(undefined4 *)(lVar18 + 0xe0));
          param_1 = local_res8;
          if ((lVar18 != 0) && (lVar15 = *(longlong *)(lVar18 + 0xa78), lVar15 != 0)) {
            local_1b0 = (uint *)0x0;
            puStack_1a8 = (uint *)0x0;
            local_1a0 = (uint *)0x0;
            plVar14 = (longlong *)(lVar15 + 0x230);
            puVar21 = (uint *)0x0;
            puVar24 = (uint *)0x0;
            puVar22 = puVar25;
            puVar28 = puVar25;
            if (*(longlong *)(lVar15 + 0x238) - *plVar14 >> 3 != 0) {
              do {
                lVar29 = *plVar14;
                if ((*(byte *)(*(longlong *)(lVar29 + (longlong)puVar25) + 0x16) & 1) != 0) {
                  psVar4 = *(short **)((longlong)puVar25 + lVar29);
                  if ((((*psVar4 == 1) || (*psVar4 == 3)) || (*psVar4 == 5)) ||
                     ((*psVar4 == 6 || (*psVar4 == 4)))) {
                    puVar1 = (uint *)((longlong)puVar25 + lVar29);
                    if ((puVar1 < puVar21) && (puVar24 <= puVar1)) {
                      lVar29 = (longlong)puVar1 - (longlong)puVar24;
                      if (puVar21 == puVar22) {
                        FUN_14000c2d0(&local_1b0,1);
                        puVar21 = puStack_1a8;
                        puVar24 = local_1b0;
                        puVar22 = local_1a0;
                      }
                      if (puVar21 != (uint *)0x0) {
                        uVar19 = *(undefined8 *)(puVar24 + (lVar29 >> 3) * 2);
LAB_140d3291d:
                        *(undefined8 *)puVar21 = uVar19;
                      }
                    }
                    else {
                      if (puVar21 == puVar22) {
                        FUN_14000c2d0(&local_1b0,1);
                        puVar21 = puStack_1a8;
                        puVar24 = local_1b0;
                        puVar22 = local_1a0;
                      }
                      if (puVar21 != (uint *)0x0) {
                        uVar19 = *(undefined8 *)puVar1;
                        goto LAB_140d3291d;
                      }
                    }
                    puVar21 = puVar21 + 2;
                    puStack_1a8 = puVar21;
                  }
                  lVar29 = *(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                  if ((**(short **)((longlong)puVar25 + lVar29) == 2) &&
                     ((*(int *)(*(longlong *)(lVar29 + (longlong)puVar25) + 4) == 0x35 ||
                      (*(int *)(*(longlong *)(lVar29 + (longlong)puVar25) + 4) == 0x46)))) {
                    puVar1 = (uint *)((longlong)puVar25 + lVar29);
                    if ((puVar1 < puVar21) && (puVar24 <= puVar1)) {
                      lVar29 = (longlong)puVar1 - (longlong)puVar24;
                      if (puVar21 == puVar22) {
                        FUN_14000c2d0(&local_1b0,1);
                        puVar21 = puStack_1a8;
                        puVar24 = local_1b0;
                        puVar22 = local_1a0;
                      }
                      if (puVar21 != (uint *)0x0) {
                        uVar19 = *(undefined8 *)(puVar24 + (lVar29 >> 3) * 2);
LAB_140d329bf:
                        *(undefined8 *)puVar21 = uVar19;
                      }
                    }
                    else {
                      if (puVar21 == puVar22) {
                        FUN_14000c2d0(&local_1b0,1);
                        puVar21 = puStack_1a8;
                        puVar24 = local_1b0;
                        puVar22 = local_1a0;
                      }
                      if (puVar21 != (uint *)0x0) {
                        uVar19 = *(undefined8 *)puVar1;
                        goto LAB_140d329bf;
                      }
                    }
                    puVar21 = puVar21 + 2;
                    puStack_1a8 = puVar21;
                  }
                }
                uVar30 = (int)puVar28 + 1;
                puVar25 = puVar25 + 2;
                plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                lVar29 = local_res20;
                puVar28 = (uint *)(ulonglong)uVar30;
              } while ((ulonglong)(longlong)(int)uVar30 <
                       (ulonglong)
                       (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3));
            }
            uVar20 = (longlong)puVar21 - (longlong)puVar24 >> 3;
            if (uVar20 != 0) {
              iVar11 = FUN_14000d7e0(uVar20 & 0xffffffff);
              FUN_140c8d830(*(undefined8 *)(puVar24 + (longlong)iVar11 * 2),local_res10,
                            (longlong)(uVar23 - uVar3) >> 3 & 0xffffffff);
            }
            param_1 = local_res8;
            if (puVar24 != (uint *)0x0) {
              FUN_140002020(puVar24,(longlong)puVar22 - (longlong)puVar24 >> 3,8);
              param_1 = local_res8;
            }
          }
        }
        else {
          iVar11 = FUN_14000d7e0();
          plVar14 = (longlong *)
                    FUN_140019950(param_1 + 0x24d7b,*(undefined4 *)(lVar15 + (longlong)iVar11 * 4));
          if (plVar14 == (longlong *)0x0) goto LAB_140d327a2;
          *(int *)(local_res10 + 6) = (int)plVar14[4];
          (**(code **)(*plVar14 + 0xe0))(plVar14);
        }
        if (local_190 != 0) {
          FUN_140002020(local_190,lVar29 - local_190 >> 2,4);
        }
        goto LAB_140d35700;
      }
      bVar6 = false;
      if (param_6 == 1) {
        uVar12 = FUN_1409fc0c0();
        if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a == 0) {
          bVar6 = true;
        }
      }
      else if (param_6 == 2) {
        uVar12 = FUN_1409fc0c0();
        if (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
            == 0) {
          bVar6 = true;
        }
      }
      else if (param_6 == 3) {
        uVar12 = FUN_1409fc0c0();
        if ((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a != 0) {
          bVar6 = true;
        }
      }
      else if (param_6 == 4) {
        uVar12 = FUN_1409fc0c0();
        if (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1c
            != 0) {
          bVar6 = true;
        }
      }
      else if ((param_6 == 5) &&
              (uVar12 = FUN_1409fc0c0(),
              (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0xccccccd != 0)) {
        bVar6 = true;
      }
      puVar25 = (uint *)0x0;
      iVar11 = 0;
      if ((((param_7 != '\0') ||
           (uVar12 = FUN_1409fc0c0(),
           (uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0x2aaaaaab == 0)) && (bVar6)) && (param_9 != '\0')) {
        local_1b0 = (uint *)0x0;
        puStack_1a8 = (uint *)0x0;
        local_1a0 = (uint *)0x0;
        puVar21 = puVar25;
        if (param_4 != 0) {
          FUN_14000d8f0(local_118);
          local_fc = *(undefined4 *)(param_4 + 4);
          uVar12 = FUN_1407587d0(param_1 + 0x24d7b,local_118,uVar30);
          if (uVar12 != 0xffffffff) {
            FUN_14000c390(&local_1b0,1);
            if (puStack_1a8 != (uint *)0x0) {
              *puStack_1a8 = uVar12;
            }
            puStack_1a8 = puStack_1a8 + 1;
            puVar21 = local_1a0;
          }
        }
        puVar22 = puStack_1a8;
        puVar24 = local_1b0;
        param_1 = local_res8;
        if (param_5 != 0) {
          FUN_14000d8f0(local_118);
          local_f0 = *(undefined4 *)(param_5 + 0x88);
          param_11 = FUN_1407587d0(local_res8 + 0x24d7b,local_118,uVar30);
          if (param_11 != 0xffffffff) {
            if ((&param_11 < puVar22) && (local_1b0 <= &param_11)) {
              lVar18 = (longlong)&param_11 - (longlong)local_1b0;
              if (puVar22 == puVar21) {
                FUN_14000c390(&local_1b0,1);
                puVar22 = puStack_1a8;
                puVar21 = local_1a0;
              }
              if (puVar22 != (uint *)0x0) {
                *puVar22 = local_1b0[lVar18 >> 2];
              }
            }
            else {
              if (puVar22 == puVar21) {
                FUN_14000c390(&local_1b0,1);
                puVar22 = puStack_1a8;
                puVar21 = local_1a0;
              }
              if (puVar22 != (uint *)0x0) {
                *puVar22 = param_11;
              }
            }
            puVar22 = puVar22 + 1;
            puStack_1a8 = puVar22;
          }
          puVar24 = local_1b0;
          param_1 = local_res8;
          lVar18 = FUN_140052180(local_res8[0x2336c],(int)*(short *)(param_5 + 0x82),
                                 (int)*(short *)(param_5 + 0x84));
          if (lVar18 != 0) {
            FUN_14000d8f0(local_118);
            local_ec = *(undefined4 *)(lVar18 + 0x78);
            uVar30 = FUN_1407587d0(param_1 + 0x24d7b,local_118,uVar30);
            param_11 = uVar30;
            if (uVar30 != 0xffffffff) {
              if ((&param_11 < puVar22) && (puVar24 <= &param_11)) {
                puVar28 = puVar24;
                if (puVar22 == puVar21) {
                  FUN_14000c390(&local_1b0,1);
                  puVar22 = puStack_1a8;
                  puVar28 = local_1b0;
                  puVar21 = local_1a0;
                }
                if (puVar22 != (uint *)0x0) {
                  *puVar22 = puVar28[(longlong)&param_11 - (longlong)puVar24 >> 2];
                }
                puStack_1a8 = puVar22 + 1;
                puVar22 = puStack_1a8;
                puVar24 = puVar28;
              }
              else {
                if (puVar22 == puVar21) {
                  FUN_14000c390(&local_1b0,1);
                  puVar22 = puStack_1a8;
                  puVar24 = local_1b0;
                  puVar21 = local_1a0;
                }
                if (puVar22 != (uint *)0x0) {
                  *puVar22 = uVar30;
                }
                puStack_1a8 = puVar22 + 1;
                puVar22 = puStack_1a8;
              }
            }
          }
        }
        uVar23 = (longlong)puVar22 - (longlong)puVar24 >> 2;
        if (uVar23 == 0) {
LAB_140d32ed3:
          bVar6 = false;
        }
        else {
          iVar13 = FUN_14000d7e0(uVar23 & 0xffffffff);
          plVar14 = (longlong *)FUN_140019950(param_1 + 0x24d7b,puVar24[iVar13]);
          if (plVar14 == (longlong *)0x0) goto LAB_140d32ed3;
          *(int *)(local_res10 + 6) = (int)plVar14[4];
          (**(code **)(*plVar14 + 0xe0))(plVar14);
          bVar6 = true;
        }
        if (puVar24 != (uint *)0x0) {
          FUN_140002020(puVar24,(longlong)puVar21 - (longlong)puVar24 >> 2,4);
        }
        if (bVar6) goto LAB_140d35700;
      }
      bVar6 = true;
      uVar30 = FUN_1409fc0c0();
      param_15 = (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff)
                 / 0x1999999a;
      if ((param_4 != 0) && (*(longlong *)(param_4 + 8) != 0)) {
        piVar16 = (int *)(*(longlong *)(param_4 + 8) + 0x3378);
        lVar18 = 5;
        puVar21 = puVar25;
        do {
          uVar30 = (int)puVar21 + *piVar16;
          puVar21 = (uint *)(ulonglong)uVar30;
          piVar16 = piVar16 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        if (0 < (int)uVar30) {
          iVar13 = FUN_14000d7e0();
          puVar21 = puVar25;
          puVar24 = puVar25;
          do {
            sVar10 = (short)puVar21;
            uVar30 = (int)puVar24 +
                     *(int *)(*(longlong *)(param_4 + 8) + 0x3378 + (longlong)sVar10 * 4);
            puVar24 = (uint *)(ulonglong)uVar30;
            if (iVar13 < (int)uVar30) {
              param_15 = (uint)sVar10;
              break;
            }
            puVar21 = (uint *)(ulonglong)(ushort)(sVar10 + 1U);
          } while ((short)(sVar10 + 1U) < 5);
        }
      }
      lVar18 = local_res18;
      if (param_12 == 5) {
        param_15 = 0;
LAB_140d34814:
        if (local_res18 == 0) {
          sVar10 = FUN_140c21470(param_1 + 0x23518,0xffffffff);
        }
        else if (param_1[0x2351d] - param_1[0x2351c] >> 3 == 0) {
          sVar10 = -1;
        }
        else {
          sVar10 = FUN_14000d7e0(param_1[0x2351d] - param_1[0x2351c] >> 3);
        }
        param_11 = (uint)sVar10;
        iVar13 = FUN_14000d7e0(10);
        if (iVar13 < 4) {
          if ((short)param_10 != -1) {
            param_11 = (uint)(short)param_10;
          }
          if (param_6 == 1) {
            iVar11 = FUN_14000d7e0(3);
            if (iVar11 == 0) {
LAB_140d348f8:
              if (param_9 != '\0') {
                FUN_1400025a0(&local_190);
                FUN_1400025a0(&local_158);
                cVar7 = FUN_14000d7e0(2);
                if ((((param_7 != '\0') && (iVar11 = FUN_14000d7e0(10), iVar11 != 0)) ||
                    (puVar21 = puVar25, cVar7 != '\0')) &&
                   ((puVar21 = (uint *)0x0, param_8 != '\0' &&
                    (iVar11 = (int)(param_1[0x2770] - param_1[0x276f] >> 3) + -1,
                    lVar18 = (longlong)iVar11, puVar24 = puVar25, -1 < iVar11)))) {
                  do {
                    puVar21 = puVar24;
                    if ((*(int *)(*(longlong *)(param_1[0x276f] + lVar18 * 8) + 0xc10) != -1) &&
                       ((lVar29 = FUN_140004650(param_1 + 0x24d7b,
                                                *(undefined4 *)
                                                 (*(longlong *)(param_1[0x276f] + lVar18 * 8) +
                                                 0xc10)), lVar29 != 0 &&
                        (param_10 = FUN_140741450(lVar29,param_4), 0 < (int)param_10)))) {
                      if ((int)puVar21 < (int)param_10) {
                        puVar21 = (uint *)(ulonglong)param_10;
                      }
                      FUN_14000bc60(&local_190,*(longlong *)(param_1[0x276f] + lVar18 * 8) + 0xc10);
                      FUN_14000bc60(&local_158,&param_10);
                    }
                    lVar18 = lVar18 + -1;
                    puVar24 = puVar21;
                  } while (-1 < lVar18);
                }
                iVar11 = (int)puVar21;
                if (((longlong)piStack_188 - local_190 >> 2 == 0) &&
                   (iVar13 = (int)(param_1[0x24d88] - param_1[0x24d87] >> 3) + -1,
                   lVar18 = (longlong)iVar13, -1 < iVar13)) {
                  do {
                    lVar29 = *(longlong *)(param_1[0x24d87] + lVar18 * 8);
                    param_10 = FUN_140741450(lVar29,param_4);
                    if ((int)puVar21 < (int)param_10) {
                      puVar21 = (uint *)(ulonglong)param_10;
                    }
                    iVar11 = (int)puVar21;
                    FUN_14000bc60(&local_190,lVar29 + 0xe0);
                    FUN_14000bc60(&local_158,&param_10);
                    lVar18 = lVar18 + -1;
                  } while (-1 < lVar18);
                }
                iVar13 = (int)((longlong)piStack_188 - local_190 >> 2) + -1;
                if (-1 < iVar13) {
                  lVar29 = (longlong)iVar13;
                  lVar18 = lVar29 * 4;
                  do {
                    if (*(int *)(local_158 + lVar18) < iVar11 / 2) {
                      FUN_140050340(&local_190,lVar29);
                      FUN_140050340(&local_158,lVar29);
                    }
                    lVar29 = lVar29 + -1;
                    lVar18 = lVar18 + -4;
                    iVar13 = iVar13 + -1;
                  } while (-1 < iVar13);
                }
                lVar18 = local_190;
                uVar23 = (longlong)piStack_188 - local_190 >> 2;
                if (uVar23 == 0) {
LAB_140d34cb0:
                  bVar6 = true;
                }
                else {
                  iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
                  iVar11 = *(int *)(lVar18 + (longlong)iVar11 * 4);
                  if ((iVar11 == -1) ||
                     (lVar18 = FUN_140004650(param_1 + 0x24d7b,iVar11), lVar18 == 0))
                  goto LAB_140d34cb0;
                  local_res8 = operator_new(0x20);
                  local_res8 = (longlong *)FUN_1400b8ad0(local_res8);
                  puVar27 = local_res10;
                  *(undefined4 *)(local_res8 + 1) = 1;
                  *(int *)(local_res8 + 2) = (int)*(short *)(lVar18 + 2);
                  *(undefined2 *)((longlong)local_res8 + 0x14) = *(undefined2 *)(lVar18 + 4);
                  *(int *)(local_res8 + 3) = iVar11;
                  uVar23 = local_res10[1];
                  uVar3 = *local_res10;
                  FUN_140050070(local_res10,&local_res8);
                  lVar18 = FUN_140cc1de0(param_1 + 0x276c,iVar11);
                  if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xa78) != 0)) {
                    FUN_1400025a0(&local_1b0);
                    plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                    puVar21 = puVar25;
                    puVar24 = puVar25;
                    if (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3 != 0) {
                      do {
                        psVar4 = *(short **)((longlong)puVar25 + *plVar14);
                        if ((*(byte *)(psVar4 + 0xb) & 1) != 0) {
                          if ((((*psVar4 == 1) || (*psVar4 == 3)) || (*psVar4 == 5)) ||
                             ((*psVar4 == 6 || (*psVar4 == 4)))) {
                            FUN_140050070(&local_1b0,*plVar14 + (longlong)puVar21 * 8);
                          }
                          lVar29 = *(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                          if ((**(short **)((longlong)puVar25 + lVar29) == 2) &&
                             ((*(int *)(*(short **)((longlong)puVar25 + lVar29) + 2) == 0x35 ||
                              (*(int *)(*(longlong *)(lVar29 + (longlong)puVar25) + 4) == 0x46)))) {
                            FUN_140050070(&local_1b0,lVar29 + (longlong)puVar21 * 8);
                          }
                        }
                        uVar30 = (int)puVar24 + 1;
                        puVar25 = puVar25 + 2;
                        plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                        puVar27 = local_res10;
                        puVar21 = (uint *)(longlong)(int)uVar30;
                        puVar24 = (uint *)(ulonglong)uVar30;
                      } while ((uint *)(longlong)(int)uVar30 <
                               (uint *)(*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) -
                                        *plVar14 >> 3));
                    }
                    puVar25 = local_1b0;
                    uVar20 = (longlong)puStack_1a8 - (longlong)local_1b0 >> 3;
                    if (uVar20 != 0) {
                      iVar11 = FUN_14000d7e0(uVar20 & 0xffffffff);
                      FUN_140c8d830(*(undefined8 *)(puVar25 + (longlong)iVar11 * 2),puVar27,
                                    (longlong)(uVar23 - uVar3) >> 3 & 0xffffffff);
                    }
                    FUN_1400030c0(&local_1b0);
                  }
                  bVar6 = false;
                }
                FUN_1400025c0(&local_158);
                FUN_1400025c0(&local_190);
                goto LAB_140d35420;
              }
            }
          }
          else {
            if (param_6 == 2) {
              uVar19 = 2;
            }
            else if (param_6 == 3) {
              uVar19 = 3;
            }
            else if (param_6 == 4) {
              uVar19 = 4;
            }
            else {
              if (param_6 != 5) goto LAB_140d3564d;
              uVar19 = 5;
            }
            iVar11 = FUN_14000d7e0(uVar19);
            if (iVar11 != 0) goto LAB_140d348f8;
          }
        }
        else {
          iVar13 = FUN_14000d7e0(5);
          lVar18 = local_res18;
          if ((iVar13 == 0) || (local_res18 == 0)) goto LAB_140d3564d;
          lVar29 = FUN_140ca8390(local_res18);
          if (lVar29 != 0) {
            FUN_1400025a0(&local_178);
            FUN_1400025a0(local_140);
            iVar13 = (int)(*(longlong *)(lVar29 + 0x120) - *(longlong *)(lVar29 + 0x118) >> 3) + -1;
            lVar15 = (longlong)iVar13;
            puVar21 = puVar25;
            if (-1 < iVar13) {
              do {
                sVar10 = (**(code **)**(undefined8 **)(*(longlong *)(lVar29 + 0x118) + lVar15 * 8))
                                   ();
                if ((((sVar10 == 4) &&
                     (local_res8 = (longlong *)
                                   FUN_140004650(&DAT_141d7a048,
                                                 *(undefined4 *)
                                                  (*(longlong *)
                                                    (*(longlong *)(lVar29 + 0x118) + lVar15 * 8) + 8
                                                  )), local_res8 != (longlong *)0x0)) &&
                    (cVar7 = FUN_14000d840(local_res8 + 0x19,2), cVar7 != '\0')) &&
                   (0 < *(short *)(*(longlong *)(*(longlong *)(lVar29 + 0x118) + lVar15 * 8) + 0xc))
                   ) {
                  FUN_140050070(&local_178,&local_res8);
                  local_res8 = (longlong *)
                               CONCAT44(local_res8._4_4_,
                                        (int)*(short *)(*(longlong *)
                                                         (*(longlong *)(lVar29 + 0x118) + lVar15 * 8
                                                         ) + 0xc));
                  FUN_14000bc60(local_140,&local_res8);
                  if ((int)puVar21 <
                      (int)*(short *)(*(longlong *)(*(longlong *)(lVar29 + 0x118) + lVar15 * 8) +
                                     0xc)) {
                    puVar21 = (uint *)(ulonglong)
                                      (uint)(int)*(short *)(*(longlong *)
                                                             (*(longlong *)(lVar29 + 0x118) +
                                                             lVar15 * 8) + 0xc);
                  }
                }
                iVar11 = (int)puVar21;
                lVar15 = lVar15 + -1;
              } while (-1 < lVar15);
            }
            iVar13 = FUN_14000d7e0(0x6e);
            if (((iVar13 < iVar11) && (iVar11 = FUN_1400b4080(local_140), -1 < iVar11)) &&
               ((ulonglong)(longlong)iVar11 < (ulonglong)(local_170 - local_178 >> 3))) {
              lVar18 = *(longlong *)(local_178 + (longlong)iVar11 * 8);
              local_res8 = operator_new(0x20);
              local_res8 = (longlong *)FUN_1400b8ad0(local_res8);
              uVar26 = 1;
              *(undefined4 *)(local_res8 + 1) = 1;
              *(int *)(local_res8 + 2) = (int)*(short *)(lVar18 + 2);
              *(undefined2 *)((longlong)local_res8 + 0x14) = *(undefined2 *)(lVar18 + 4);
              *(undefined4 *)(local_res8 + 3) = *(undefined4 *)(lVar18 + 0xe0);
              uVar23 = local_res10[1];
              uVar3 = *local_res10;
              FUN_140050070(local_res10,&local_res8);
              if (((*(longlong **)(lVar18 + 0x130) != (longlong *)0x0) &&
                  (plVar14 = (longlong *)**(longlong **)(lVar18 + 0x130), plVar14 != (longlong *)0x0
                  )) && (plVar14[1] - *plVar14 >> 1 != 0)) {
                iVar11 = FUN_14000d7e0(plVar14[1] - *plVar14 >> 1 & 0xffffffff);
                sVar10 = *(short *)(*(longlong *)**(undefined8 **)(lVar18 + 0x130) +
                                   (longlong)iVar11 * 2);
                if (sVar10 != -1) {
                  iVar11 = FUN_14000d7e0(5);
                  uVar31 = (undefined4)((longlong)(uVar23 - uVar3) >> 3);
                  if (iVar11 == 0) {
                    FUN_1400025a0(&local_190);
                    FUN_1400025a0(&local_1b0);
                    FUN_1400025a0(&local_158);
                    FUN_1402f78a0(&local_190,&local_1b0,&local_158,sVar10);
                    uVar23 = (longlong)piStack_188 - local_190 >> 2;
                    if (uVar23 != 0) {
                      iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
                      lVar18 = (longlong)iVar11;
                      local_res8 = operator_new(0x20);
                      plVar14 = (longlong *)FUN_1400b8ad0(local_res8);
                      *(int *)(plVar14 + 2) = (int)(short)param_10;
                      iVar11 = FUN_14000d7e0(3);
                      if (iVar11 == 0) {
                        *(undefined4 *)(plVar14 + 1) = 0xffffffff;
                      }
                      else {
                        iVar11 = FUN_14000d7e0(5);
                        if (iVar11 == 0) {
                          uVar26 = 5;
                          iVar11 = FUN_14000d7e0(5);
                          if (iVar11 == 0) {
                            iVar11 = FUN_14000d7e0(5);
                            if (iVar11 == 0) {
                              iVar11 = FUN_14000d7e0(5);
                              if (iVar11 == 0) {
                                iVar11 = FUN_14000d7e0(5);
                                if (iVar11 != 0) goto LAB_140d3518f;
                              }
                              else {
                                *(undefined4 *)(plVar14 + 1) = 4;
                              }
                            }
                            else {
                              *(undefined4 *)(plVar14 + 1) = 3;
                            }
                          }
                          else {
                            *(undefined4 *)(plVar14 + 1) = 2;
                          }
                        }
                        else {
LAB_140d3518f:
                          *(undefined4 *)(plVar14 + 1) = uVar26;
                        }
                      }
                      puVar27 = local_res10;
                      uVar23 = local_res10[1];
                      uVar3 = *local_res10;
                      local_res8 = plVar14;
                      FUN_140050070(local_res10,&local_res8);
                      uVar26 = (undefined4)((longlong)(uVar23 - uVar3) >> 3);
                      if (*(char *)(local_158 + lVar18) < '\x02') {
                        local_res8 = operator_new(0x28);
                        local_res8 = (longlong *)FUN_1400b9180(local_res8);
                        if (*(char *)(local_158 + lVar18) == '\0') {
                          *(undefined4 *)(local_res8 + 3) = uVar26;
                          *(undefined4 *)((longlong)local_res8 + 0x1c) = uVar31;
                        }
                        else {
                          *(undefined4 *)(local_res8 + 3) = uVar31;
                          *(undefined4 *)((longlong)local_res8 + 0x1c) = uVar26;
                        }
                        *(undefined2 *)(local_res8 + 4) = *(undefined2 *)(local_190 + lVar18 * 4);
                      }
                      else {
                        if (*(char *)(local_158 + lVar18) == '\x02') {
                          local_res8 = operator_new(0x20);
                          local_res8 = (longlong *)FUN_1400b9340(local_res8);
                          *(undefined4 *)(local_res8 + 3) = uVar31;
                          *(undefined2 *)((longlong)local_res8 + 0x1c) =
                               *(undefined2 *)(local_190 + lVar18 * 4);
                          FUN_140050070(puVar27 + 3,&local_res8);
                          local_res8 = operator_new(0x20);
                          local_res8 = (longlong *)FUN_1400b9340(local_res8);
                          *(undefined4 *)(local_res8 + 3) = uVar26;
                        }
                        else {
                          local_res8 = operator_new(0x20);
                          local_res8 = (longlong *)FUN_1400b9340(local_res8);
                          *(undefined4 *)(local_res8 + 3) = uVar26;
                          *(undefined2 *)((longlong)local_res8 + 0x1c) =
                               *(undefined2 *)(local_190 + lVar18 * 4);
                          FUN_140050070(puVar27 + 3,&local_res8);
                          local_res8 = operator_new(0x20);
                          local_res8 = (longlong *)FUN_1400b9340(local_res8);
                          *(undefined4 *)(local_res8 + 3) = uVar31;
                        }
                        *(short *)((longlong)local_res8 + 0x1c) = (short)local_1b0[lVar18];
                      }
                      FUN_140050070(puVar27 + 3,&local_res8);
                    }
                    FUN_14007c030(&local_158);
                    FUN_1400025c0(&local_1b0);
                    plVar14 = &local_190;
                  }
                  else {
                    FUN_1400025a0(&local_158);
                    FUN_1402f6b50(&local_158,sVar10);
                    uVar23 = local_150 - local_158 >> 2;
                    if (uVar23 != 0) {
                      local_res8 = operator_new(0x20);
                      plVar14 = (longlong *)FUN_1400b9340(local_res8);
                      *(undefined4 *)(plVar14 + 3) = uVar31;
                      iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
                      puVar27 = local_res10;
                      *(undefined2 *)((longlong)plVar14 + 0x1c) =
                           *(undefined2 *)(local_158 + (longlong)iVar11 * 4);
                      local_res8 = plVar14;
                      FUN_140050070(local_res10 + 3,&local_res8);
                      iVar11 = FUN_14000d7e0(10);
                      if (iVar11 == 0) {
                        local_res8 = operator_new(0x20);
                        plVar14 = (longlong *)FUN_1400b8ad0(local_res8);
                        *(int *)(plVar14 + 2) = (int)(short)param_10;
                        iVar11 = FUN_14000d7e0(3);
                        if (iVar11 == 0) {
                          *(undefined4 *)(plVar14 + 1) = 0xffffffff;
                        }
                        else {
                          iVar11 = FUN_14000d7e0(5);
                          if (iVar11 == 0) {
                            iVar11 = FUN_14000d7e0(5);
                            if (iVar11 == 0) {
                              iVar11 = FUN_14000d7e0(5);
                              if (iVar11 != 0) {
                                *(undefined4 *)(plVar14 + 1) = 5;
                              }
                            }
                            else {
                              *(undefined4 *)(plVar14 + 1) = 4;
                            }
                          }
                          else {
                            *(undefined4 *)(plVar14 + 1) = 3;
                          }
                        }
                        uVar23 = local_res10[1];
                        uVar3 = *local_res10;
                        local_res8 = plVar14;
                        FUN_140050070(local_res10,&local_res8);
                        local_res8 = operator_new(0x28);
                        local_res8 = (longlong *)FUN_1400b9180(local_res8);
                        *(undefined4 *)(local_res8 + 3) = uVar31;
                        *(int *)((longlong)local_res8 + 0x1c) =
                             (int)((longlong)(uVar23 - uVar3) >> 3);
                        *(undefined2 *)(local_res8 + 4) = 1;
                        FUN_140050070(puVar27 + 3,&local_res8);
                      }
                    }
                    plVar14 = &local_158;
                  }
                  FUN_1400025c0(plVar14);
                }
              }
              bVar6 = false;
              lVar18 = local_res18;
            }
            else {
              bVar6 = true;
            }
            FUN_1400025c0(local_140);
            FUN_1400030c0(&local_178);
            if (!bVar6) goto LAB_140d35700;
          }
          if (*(longlong *)(lVar18 + 0xa78) != 0) {
            FUN_1400025a0(&local_178);
            plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
            puVar21 = puVar25;
            if (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3 != 0) {
              do {
                psVar4 = *(short **)((longlong)puVar25 + *plVar14);
                if (((*(byte *)(psVar4 + 0xb) & 1) != 0) && ((*psVar4 == 1 || (*psVar4 == 3)))) {
                  param_10 = CONCAT22(param_10._2_2_,
                                      *(undefined2 *)
                                       (*(longlong *)((longlong)puVar25 + *plVar14) + 4));
                  FUN_14000be20(&local_178,&param_10);
                }
                uVar30 = (int)puVar21 + 1;
                puVar25 = puVar25 + 2;
                plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                puVar21 = (uint *)(ulonglong)uVar30;
              } while ((ulonglong)(longlong)(int)uVar30 <
                       (ulonglong)
                       (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3));
            }
            uVar23 = local_170 - local_178 >> 1;
            if (uVar23 != 0) {
              iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
              param_11 = (uint)*(short *)(local_178 + (longlong)iVar11 * 2);
            }
            FUN_140002620(&local_178);
          }
LAB_140d35420:
          if (!bVar6) goto LAB_140d35700;
        }
LAB_140d3564d:
        plVar14 = (longlong *)FUN_1400b9e90(param_15);
        local_res8 = plVar14;
        (**(code **)(*plVar14 + 0x18))(plVar14,param_11);
        iVar11 = FUN_14000d7e0(3);
        if (iVar11 == 0) {
          *(undefined4 *)(plVar14 + 1) = 0xffffffff;
        }
        else {
          iVar11 = FUN_14000d7e0(5);
          if (iVar11 == 0) {
            iVar11 = FUN_14000d7e0(5);
            if (iVar11 == 0) {
              iVar11 = FUN_14000d7e0(5);
              if (iVar11 == 0) {
                iVar11 = FUN_14000d7e0(5);
                if (iVar11 == 0) {
                  iVar11 = FUN_14000d7e0(5);
                  if (iVar11 != 0) {
                    *(undefined4 *)(plVar14 + 1) = 5;
                  }
                }
                else {
                  *(undefined4 *)(plVar14 + 1) = 4;
                }
              }
              else {
                *(undefined4 *)(plVar14 + 1) = 3;
              }
            }
            else {
              *(undefined4 *)(plVar14 + 1) = 2;
            }
          }
          else {
            *(undefined4 *)(plVar14 + 1) = 1;
          }
        }
      }
      else {
        if (param_15 != 3) {
          if (param_15 == 4) {
            local_160 = -1;
            param_11 = CONCAT22(param_11._2_2_,0xffff);
            param_10 = CONCAT22(param_10._2_2_,0xffff);
            local_15c = 0xffffffff;
            do {
              uVar30 = FUN_1409fc0c0();
              switch((ulonglong)
                     (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) *
                               0x7fffffff) / 0x1e1e1e2) {
              case 0:
                if (param_1[0x2352d] - param_1[0x2352c] >> 3 != 0) {
                  uVar8 = 0x18;
                  param_11 = FUN_14000d7e0(param_1[0x2352d] - param_1[0x2352c] >> 3);
                  goto LAB_140d339cc;
                }
                break;
              case 1:
                if (param_1[0x2358d] - param_1[0x2358c] >> 3 != 0) {
                  uVar8 = 0x26;
                  uVar9 = FUN_14000d7e0(param_1[0x2358d] - param_1[0x2358c] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 2:
                goto switchD_140d3342d_caseD_2;
              case 3:
                uVar8 = 5;
                goto LAB_140d339cc;
              case 4:
                uVar8 = 6;
                goto LAB_140d339cc;
              case 5:
                uVar8 = 7;
                goto LAB_140d339cc;
              case 6:
                uVar8 = 8;
                goto LAB_140d339cc;
              case 7:
                uVar8 = 9;
                goto LAB_140d339cc;
              case 8:
                uVar8 = 10;
                goto LAB_140d339cc;
              case 9:
                uVar8 = 0xb;
                goto LAB_140d339cc;
              case 10:
                uVar8 = 0xc;
                goto LAB_140d339cc;
              case 0xb:
                if (param_1[0x23587] - param_1[0x23586] >> 3 != 0) {
                  uVar8 = 0xd;
                  uVar9 = FUN_14000d7e0(param_1[0x23587] - param_1[0x23586] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0xc:
                if (param_1[0x23533] - param_1[0x23532] >> 3 != 0) {
                  uVar8 = 0xe;
                  uVar9 = FUN_14000d7e0(param_1[0x23533] - param_1[0x23532] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0xd:
                uVar8 = 0xf;
                goto LAB_140d339cc;
              case 0xe:
                uVar8 = 0x10;
                goto LAB_140d339cc;
              case 0xf:
                uVar8 = 0x11;
                goto LAB_140d339cc;
              case 0x10:
                uVar8 = 0x12;
                goto LAB_140d339cc;
              case 0x11:
                uVar8 = 0x13;
                goto LAB_140d339cc;
              case 0x12:
                uVar8 = 0x14;
                goto LAB_140d339cc;
              case 0x13:
                uVar8 = 0x15;
                goto LAB_140d339cc;
              case 0x14:
                uVar8 = 0x16;
                goto LAB_140d339cc;
              case 0x15:
                if (param_1[0x2358a] - param_1[0x23589] >> 3 != 0) {
                  uVar8 = 0x19;
                  uVar9 = FUN_14000d7e0(param_1[0x2358a] - param_1[0x23589] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x16:
                if (param_1[0x23596] - param_1[0x23595] >> 3 != 0) {
                  uVar8 = 0x1a;
                  uVar9 = FUN_14000d7e0(param_1[0x23596] - param_1[0x23595] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x17:
                if (param_1[0x23599] - param_1[0x23598] >> 3 != 0) {
                  uVar8 = 0x1b;
                  uVar9 = FUN_14000d7e0(param_1[0x23599] - param_1[0x23598] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x18:
                uVar8 = 0x49;
                goto LAB_140d339cc;
              case 0x19:
                if (param_1[0x2359c] - param_1[0x2359b] >> 3 != 0) {
                  uVar8 = 0x1c;
                  uVar9 = FUN_14000d7e0(param_1[0x2359c] - param_1[0x2359b] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x1a:
                if (param_1[0x23593] - param_1[0x23592] >> 3 != 0) {
                  uVar8 = 0x1d;
                  uVar9 = FUN_14000d7e0(param_1[0x23593] - param_1[0x23592] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x1b:
                uVar8 = 0x1f;
                goto LAB_140d339cc;
              case 0x1c:
                uVar8 = 0x20;
                goto LAB_140d339cc;
              case 0x1d:
                uVar8 = 0x21;
                goto LAB_140d339cc;
              case 0x1e:
                uVar8 = 0x22;
                goto LAB_140d339cc;
              case 0x1f:
                uVar8 = 0x23;
                goto LAB_140d339cc;
              case 0x20:
                uVar8 = 0x24;
                goto LAB_140d339cc;
              case 0x21:
                uVar8 = 0x25;
                goto LAB_140d339cc;
              case 0x22:
                uVar8 = 0x27;
                goto LAB_140d339cc;
              case 0x23:
                uVar8 = 0x28;
                goto LAB_140d339cc;
              case 0x24:
                uVar8 = 0x29;
                goto LAB_140d339cc;
              case 0x25:
                uVar8 = 0x2a;
                goto LAB_140d339cc;
              case 0x26:
                uVar8 = 0x2c;
                goto LAB_140d339cc;
              case 0x27:
                uVar8 = 0x36;
                goto LAB_140d339cc;
              case 0x28:
                uVar8 = 0x37;
                goto LAB_140d339cc;
              case 0x29:
                uVar8 = 0x38;
                goto LAB_140d339cc;
              case 0x2a:
                uVar8 = 0x39;
                goto LAB_140d339cc;
              case 0x2b:
                uVar8 = 0x3a;
                goto LAB_140d339cc;
              case 0x2c:
                uVar8 = 0x3b;
                goto LAB_140d339cc;
              case 0x2d:
                uVar8 = 0x3c;
                goto LAB_140d339cc;
              case 0x2e:
                uVar8 = 0x3d;
                goto LAB_140d339cc;
              case 0x2f:
                uVar8 = 0x3e;
                goto LAB_140d339cc;
              case 0x30:
                uVar8 = 0x3f;
                goto LAB_140d339cc;
              case 0x31:
                if (param_1[0x23590] - param_1[0x2358f] >> 3 != 0) {
                  uVar8 = 0x40;
                  uVar9 = FUN_14000d7e0(param_1[0x23590] - param_1[0x2358f] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x32:
                uVar8 = 0x41;
                goto LAB_140d339cc;
              case 0x33:
                uVar8 = 0x42;
                goto LAB_140d339cc;
              case 0x34:
                if (param_1[0x23530] - param_1[0x2352f] >> 3 != 0) {
                  uVar8 = 0x43;
                  uVar9 = FUN_14000d7e0(param_1[0x23530] - param_1[0x2352f] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x35:
                uVar8 = 0x46;
                goto LAB_140d339cc;
              case 0x36:
                uVar8 = 0x4c;
                goto LAB_140d339cc;
              case 0x37:
                uVar8 = 0x4d;
                goto LAB_140d339cc;
              case 0x38:
                uVar8 = 0x4e;
                goto LAB_140d339cc;
              case 0x39:
                uVar8 = 0x4f;
                goto LAB_140d339cc;
              case 0x3a:
                uVar8 = 0x50;
                goto LAB_140d339cc;
              case 0x3b:
                uVar8 = 0x51;
                goto LAB_140d339cc;
              case 0x3c:
                uVar8 = 0x52;
                goto LAB_140d339cc;
              case 0x3d:
                uVar8 = 0x53;
                goto LAB_140d339cc;
              case 0x3e:
                uVar8 = 0x54;
                goto LAB_140d339cc;
              case 0x3f:
                if (param_1[0x23536] - param_1[0x23535] >> 3 != 0) {
                  uVar8 = 0x55;
                  uVar9 = FUN_14000d7e0(param_1[0x23536] - param_1[0x23535] >> 3);
                  param_11 = CONCAT22(param_11._2_2_,uVar9);
                  goto LAB_140d339cc;
                }
                break;
              case 0x40:
                uVar8 = 0x56;
                goto LAB_140d339cc;
              case 0x41:
                uVar8 = 0x58;
                goto LAB_140d339cc;
              case 0x42:
                uVar8 = 0x59;
                goto LAB_140d339cc;
              case 0x43:
                uVar8 = 0x5a;
                goto LAB_140d339cc;
              }
            } while( true );
          }
          if (param_15 == 0) goto LAB_140d34814;
          if (param_15 == 1) {
            param_11 = FUN_1408dc950(param_1 + 0x234f4);
            iVar11 = FUN_14000d7e0(5);
            if (((iVar11 != 0) && (lVar18 != 0)) && (*(longlong *)(lVar18 + 0xa78) != 0)) {
              FUN_1400025a0(&local_178);
              plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
              puVar21 = puVar25;
              if (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3 != 0) {
                do {
                  psVar4 = *(short **)((longlong)puVar25 + *plVar14);
                  if (((*(byte *)(psVar4 + 0xb) & 1) != 0) && (*psVar4 == 5)) {
                    param_10 = CONCAT22(param_10._2_2_,psVar4[2]);
                    FUN_14000be20(&local_178,&param_10);
                  }
                  uVar30 = (int)puVar21 + 1;
                  puVar25 = puVar25 + 2;
                  plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                  puVar21 = (uint *)(ulonglong)uVar30;
                } while ((ulonglong)(longlong)(int)uVar30 <
                         (ulonglong)
                         (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3));
              }
              uVar23 = local_170 - local_178 >> 1;
              if (uVar23 != 0) {
                iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
                param_11 = (uint)*(short *)(local_178 + (longlong)iVar11 * 2);
              }
LAB_140d3563d:
              FUN_140002620(&local_178);
            }
          }
          else if (param_15 == 2) {
            param_11 = FUN_1408dc5c0(param_1 + 0x234f4);
            iVar11 = FUN_14000d7e0(5);
            if (((iVar11 != 0) && (lVar18 != 0)) && (*(longlong *)(lVar18 + 0xa78) != 0)) {
              FUN_1400025a0(&local_178);
              plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
              puVar21 = puVar25;
              if (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3 != 0) {
                do {
                  psVar4 = *(short **)((longlong)puVar25 + *plVar14);
                  if (((*(byte *)(psVar4 + 0xb) & 1) != 0) && (*psVar4 == 6)) {
                    param_10 = CONCAT22(param_10._2_2_,psVar4[2]);
                    FUN_14000be20(&local_178,&param_10);
                  }
                  uVar30 = (int)puVar21 + 1;
                  puVar25 = puVar25 + 2;
                  plVar14 = (longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x230);
                  puVar21 = (uint *)(ulonglong)uVar30;
                } while ((ulonglong)(longlong)(int)uVar30 <
                         (ulonglong)
                         (*(longlong *)(*(longlong *)(lVar18 + 0xa78) + 0x238) - *plVar14 >> 3));
              }
              uVar23 = local_170 - local_178 >> 1;
              if (uVar23 != 0) {
                iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
                param_11 = (uint)*(short *)(local_178 + (longlong)iVar11 * 2);
              }
              goto LAB_140d3563d;
            }
          }
          else {
            param_11 = param_10;
          }
          goto LAB_140d3564d;
        }
        iVar11 = FUN_14000d7e0(param_1[0x2488c] - param_1[0x2488b] >> 3);
        uVar30 = FUN_1409fc0c0();
        if ((((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x1999999a != 0) && (local_res18 != 0)) &&
           (lVar18 = *(longlong *)(local_res18 + 0xa78), lVar18 != 0)) {
          local_1b0 = (uint *)0x0;
          puStack_1a8 = (uint *)0x0;
          local_1a0 = (uint *)0x0;
          plVar14 = (longlong *)(lVar18 + 0x230);
          puVar21 = (uint *)0x0;
          puVar24 = (uint *)0x0;
          lVar29 = local_res18;
          puVar22 = puVar25;
          puVar28 = puVar25;
          if (*(longlong *)(lVar18 + 0x238) - *plVar14 >> 3 != 0) {
            do {
              psVar4 = *(short **)((longlong)puVar22 + *plVar14);
              if (((*(byte *)(psVar4 + 0xb) & 1) != 0) && (*psVar4 == 8)) {
                sVar10 = psVar4[2];
                param_10 = CONCAT22(param_10._2_2_,sVar10);
                if ((&param_10 < puVar21) && (puVar24 <= &param_10)) {
                  lVar18 = (longlong)&param_10 - (longlong)puVar24;
                  if (puVar21 == puVar25) {
                    FUN_14000c460(&local_1b0,1);
                    puVar21 = puStack_1a8;
                    puVar24 = local_1b0;
                    puVar25 = local_1a0;
                    lVar29 = local_res18;
                  }
                  if (puVar21 != (uint *)0x0) {
                    *(short *)puVar21 = *(short *)((longlong)puVar24 + (lVar18 >> 1) * 2);
                  }
                }
                else {
                  if (puVar21 == puVar25) {
                    FUN_14000c460(&local_1b0,1);
                    puVar21 = puStack_1a8;
                    puVar24 = local_1b0;
                    puVar25 = local_1a0;
                    lVar29 = local_res18;
                  }
                  if (puVar21 != (uint *)0x0) {
                    *(short *)puVar21 = sVar10;
                  }
                }
                puVar21 = (uint *)((longlong)puVar21 + 2);
                puStack_1a8 = puVar21;
              }
              uVar30 = (int)puVar28 + 1;
              plVar14 = (longlong *)(*(longlong *)(lVar29 + 0xa78) + 0x230);
              param_1 = local_res8;
              puVar22 = puVar22 + 2;
              puVar28 = (uint *)(ulonglong)uVar30;
            } while ((ulonglong)(longlong)(int)uVar30 <
                     (ulonglong)
                     (*(longlong *)(*(longlong *)(lVar29 + 0xa78) + 0x238) - *plVar14 >> 3));
          }
          uVar23 = (longlong)puVar21 - (longlong)puVar24 >> 1;
          if (uVar23 != 0) {
            iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
            iVar11 = (int)*(short *)((longlong)puVar24 + (longlong)iVar11 * 2);
          }
          if (puVar24 != (uint *)0x0) {
            FUN_140002020(puVar24,(longlong)puVar25 - (longlong)puVar24 >> 1,2);
          }
        }
        plVar14 = operator_new(0x18);
        *(undefined4 *)(plVar14 + 1) = 0xffffffff;
        *plVar14 = (longlong)art_image_element_shapest::vftable;
        *(undefined4 *)(plVar14 + 2) = 0xffffffff;
        *(undefined2 *)((longlong)plVar14 + 0x14) = 0xffff;
        local_res8 = plVar14;
        uVar30 = FUN_1409fc0c0();
        if (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
            == 0) {
          uVar30 = FUN_1409fc0c0();
          if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x1999999a == 0) {
            uVar30 = FUN_1409fc0c0();
            if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                0x1999999a == 0) {
              uVar30 = FUN_1409fc0c0();
              if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff)
                  / 0x1999999a == 0) {
                uVar30 = FUN_1409fc0c0();
                if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) *
                              0x7fffffff) / 0x1999999a == 0) {
                  uVar30 = FUN_1409fc0c0();
                  if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) *
                                0x7fffffff) / 0x1999999a != 0) {
                    *(undefined4 *)(plVar14 + 1) = 5;
                  }
                }
                else {
                  *(undefined4 *)(plVar14 + 1) = 4;
                }
              }
              else {
                *(undefined4 *)(plVar14 + 1) = 3;
              }
            }
            else {
              *(undefined4 *)(plVar14 + 1) = 2;
            }
          }
          else {
            *(undefined4 *)(plVar14 + 1) = 1;
          }
        }
        else {
          *(undefined4 *)(plVar14 + 1) = 0xffffffff;
        }
        *(int *)(plVar14 + 2) = iVar11;
        sVar10 = (short)iVar11;
        uVar8 = 0xffff;
        if (((-1 < sVar10) &&
            (uVar8 = 0xffff,
            (ulonglong)(longlong)sVar10 < (ulonglong)(param_1[0x2488c] - param_1[0x2488b] >> 3))) &&
           (lVar18 = (longlong)sVar10 * 8, lVar29 = *(longlong *)(param_1[0x2488b] + lVar18),
           *(longlong *)(lVar29 + 0x98) - *(longlong *)(lVar29 + 0x90) >> 3 != 0)) {
          lVar18 = *(longlong *)(lVar18 + param_1[0x2488b]);
          uVar8 = FUN_14000d7e0(*(longlong *)(lVar18 + 0x98) - *(longlong *)(lVar18 + 0x90) >> 3);
        }
        *(undefined2 *)((longlong)plVar14 + 0x14) = uVar8;
        local_res8 = plVar14;
      }
      FUN_140050070(local_res10,&local_res8);
      goto LAB_140d35700;
    }
    local_190 = 0;
    piStack_188 = (int *)0x0;
    lVar18 = 0;
    local_180 = 0;
    FUN_14000d8f0(local_118);
    local_fc = param_14;
    iVar11 = FUN_1407587d0(param_1 + 0x24d7b,local_118,uVar30);
    if (iVar11 != -1) {
      FUN_14000c390(&local_190,1);
      if (piStack_188 != (int *)0x0) {
        *piStack_188 = iVar11;
      }
      piStack_188 = piStack_188 + 1;
      lVar18 = local_180;
    }
    lVar29 = local_190;
    if ((longlong)piStack_188 - local_190 >> 2 != 0) {
      iVar11 = FUN_14000d7e0();
      plVar14 = (longlong *)
                FUN_140019950(param_1 + 0x24d7b,*(undefined4 *)(lVar29 + (longlong)iVar11 * 4));
      if (plVar14 != (longlong *)0x0) {
        *(int *)(local_res10 + 6) = (int)plVar14[4];
        (**(code **)(*plVar14 + 0xe0))(plVar14);
        goto LAB_140d32685;
      }
    }
    lVar15 = FUN_1400199b0(&DAT_141c53718);
    if (lVar15 != 0) {
      local_res8 = operator_new(0x20);
      *local_res8 = (longlong)art_image_element_creaturest::vftable;
      *(undefined4 *)(local_res8 + 2) = 0xffffffff;
      *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
      *(undefined4 *)(local_res8 + 3) = 0xffffffff;
      *(undefined4 *)(local_res8 + 1) = 1;
      *(int *)(local_res8 + 2) = (int)*(short *)(lVar15 + 0x90);
      *(undefined2 *)((longlong)local_res8 + 0x14) = 0xffff;
      *(undefined4 *)(local_res8 + 3) = 0xffffffff;
      FUN_140050070(local_res10,&local_res8);
    }
  }
LAB_140d32685:
  if (lVar29 != 0) {
    FUN_140002020(lVar29,lVar18 - lVar29 >> 2,4);
  }
LAB_140d35700:
  if (((local_res18 != 0) && (*(int *)(local_res18 + 0xc10) != -1)) &&
     (lVar18 = FUN_140004650(param_1 + 0x24d7b), lVar18 != 0)) {
    *(int *)(lVar18 + 0xe4) = *(int *)(lVar18 + 0xe4) + 1;
  }
  return;
switchD_140d3342d_caseD_2:
  uVar8 = 1;
LAB_140d339cc:
  if ((param_4 != 0) &&
     (uVar30 = FUN_1409fc0c0(),
     (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) / 0x1999999a
     != 0)) {
    switch(uVar8) {
    case 0xd:
      if (*(longlong *)(param_4 + 0x250) - *(longlong *)(param_4 + 0x248) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x250) - *(longlong *)(param_4 + 0x248) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x248);
LAB_140d33d8d:
        uVar2 = *(ushort *)(lVar18 + lVar29 * 2);
LAB_140d33d91:
        param_11 = (uint)uVar2;
      }
      break;
    case 0xe:
      if (*(longlong *)(param_4 + 0x238) - *(longlong *)(param_4 + 0x230) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x238) - *(longlong *)(param_4 + 0x230) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x230);
        goto LAB_140d33d8d;
      }
      break;
    case 0x18:
      if ((*(longlong *)(param_4 + 0x148) - *(longlong *)(param_4 + 0x140) >> 1 != 0) ||
         (*(longlong *)(param_4 + 0x130) - *(longlong *)(param_4 + 0x128) >> 1 != 0)) {
        iVar13 = FUN_14000d7e0((int)(*(longlong *)(param_4 + 0x148) - *(longlong *)(param_4 + 0x140)
                                    >> 1) +
                               (int)(*(longlong *)(param_4 + 0x130) - *(longlong *)(param_4 + 0x128)
                                    >> 1));
        if ((ulonglong)(*(longlong *)(param_4 + 0x148) - *(longlong *)(param_4 + 0x140) >> 1) <=
            (ulonglong)(longlong)iVar13) {
          lVar29 = (longlong)
                   (iVar13 - (int)(*(longlong *)(param_4 + 0x148) - *(longlong *)(param_4 + 0x140)
                                  >> 1));
          lVar18 = *(longlong *)(param_4 + 0x128);
          goto LAB_140d33d8d;
        }
        uVar2 = *(ushort *)(*(longlong *)(param_4 + 0x140) + (longlong)iVar13 * 2);
        goto LAB_140d33d91;
      }
      break;
    case 0x19:
      if (*(longlong *)(param_4 + 0x178) - *(longlong *)(param_4 + 0x170) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x178) - *(longlong *)(param_4 + 0x170) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x170);
        goto LAB_140d33d8d;
      }
      break;
    case 0x1a:
      if (*(longlong *)(param_4 + 0x1d8) - *(longlong *)(param_4 + 0x1d0) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x1d8) - *(longlong *)(param_4 + 0x1d0) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x1d0);
        goto LAB_140d33d8d;
      }
      break;
    case 0x1b:
      if (*(longlong *)(param_4 + 0x208) - *(longlong *)(param_4 + 0x200) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x208) - *(longlong *)(param_4 + 0x200) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x200);
        goto LAB_140d33d8d;
      }
      break;
    case 0x1c:
      if (*(longlong *)(param_4 + 0x1a8) - *(longlong *)(param_4 + 0x1a0) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x1a8) - *(longlong *)(param_4 + 0x1a0) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x1a0);
        goto LAB_140d33d8d;
      }
      break;
    case 0x1d:
      if (*(longlong *)(param_4 + 0x1c0) - *(longlong *)(param_4 + 0x1b8) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x1c0) - *(longlong *)(param_4 + 0x1b8) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x1b8);
        goto LAB_140d33d8d;
      }
      break;
    case 0x26:
      if (*(longlong *)(param_4 + 400) - *(longlong *)(param_4 + 0x188) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 400) - *(longlong *)(param_4 + 0x188) >> 1);
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x188);
        goto LAB_140d33d8d;
      }
      break;
    case 0x3b:
      if (*(longlong *)(param_4 + 0x1f0) - *(longlong *)(param_4 + 0x1e8) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x1f0) - *(longlong *)(param_4 + 0x1e8) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x1e8);
        goto LAB_140d33d8d;
      }
      break;
    case 0x40:
      if (*(longlong *)(param_4 + 0x268) - *(longlong *)(param_4 + 0x260) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x268) - *(longlong *)(param_4 + 0x260) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x260);
        goto LAB_140d33d8d;
      }
      break;
    case 0x43:
      if (*(longlong *)(param_4 + 0x220) - *(longlong *)(param_4 + 0x218) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x220) - *(longlong *)(param_4 + 0x218) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x218);
        goto LAB_140d33d8d;
      }
      break;
    case 0x55:
      if (*(longlong *)(param_4 + 0x280) - *(longlong *)(param_4 + 0x278) >> 1 != 0) {
        iVar13 = FUN_14000d7e0(*(longlong *)(param_4 + 0x280) - *(longlong *)(param_4 + 0x278) >> 1)
        ;
        lVar29 = (longlong)iVar13;
        lVar18 = *(longlong *)(param_4 + 0x278);
        goto LAB_140d33d8d;
      }
    }
  }
  bVar6 = false;
  if (param_6 == 1) {
    uVar30 = FUN_1409fc0c0();
    if (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e ==
        0) {
      bVar6 = true;
    }
  }
  else if (param_6 == 2) {
    uVar30 = FUN_1409fc0c0();
    if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
        0x2aaaaaab != 0) {
      bVar6 = true;
    }
  }
  else if (param_6 == 3) {
    uVar30 = FUN_1409fc0c0();
    if (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1d !=
        0) {
      bVar6 = true;
    }
  }
  else if (param_6 == 4) {
    uVar30 = FUN_1409fc0c0();
    if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
        0x1999999a != 0) {
      bVar6 = true;
    }
  }
  else if (param_6 == 5) {
    uVar30 = FUN_1409fc0c0();
    bVar6 = false;
    if (uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1c !=
        0) {
      bVar6 = true;
    }
  }
  if (((param_1[0x2975] - param_1[0x2974] >> 3 == 0) || (!bVar6)) || (param_9 == '\0')) {
    uVar12 = FUN_1409fc0c0();
    uVar30 = param_11;
    if (((uVar12 + (int)((longlong)((ulonglong)uVar12 * 0x100000003) >> 0x3f) * 0x7fffffff >> 0x1e
          != 0) && (local_res18 != 0)) && (lVar18 = *(longlong *)(local_res18 + 0xa78), lVar18 != 0)
       ) {
      local_1b0 = (uint *)0x0;
      puStack_1a8 = (uint *)0x0;
      local_1a0 = (uint *)0x0;
      plVar14 = (longlong *)(lVar18 + 0x230);
      puVar21 = (uint *)0x0;
      puVar24 = (uint *)0x0;
      lVar29 = local_res18;
      puVar22 = puVar25;
      puVar28 = puVar25;
      if (*(longlong *)(lVar18 + 0x238) - *plVar14 >> 3 != 0) {
        do {
          psVar4 = *(short **)((longlong)puVar25 + *plVar14);
          if (((*(byte *)(psVar4 + 0xb) & 1) != 0) && (*psVar4 == 4)) {
            puVar1 = (uint *)((longlong)puVar25 + *plVar14);
            if ((puVar1 < puVar21) && (puVar24 <= puVar1)) {
              lVar18 = (longlong)puVar1 - (longlong)puVar24;
              if (puVar21 == puVar28) {
                FUN_14000c2d0(&local_1b0,1);
                puVar21 = puStack_1a8;
                lVar29 = local_res18;
                puVar24 = local_1b0;
                puVar28 = local_1a0;
              }
              if (puVar21 != (uint *)0x0) {
                uVar19 = *(undefined8 *)(puVar24 + (lVar18 >> 3) * 2);
LAB_140d34493:
                *(undefined8 *)puVar21 = uVar19;
              }
            }
            else {
              if (puVar21 == puVar28) {
                FUN_14000c2d0(&local_1b0,1);
                puVar21 = puStack_1a8;
                lVar29 = local_res18;
                puVar24 = local_1b0;
                puVar28 = local_1a0;
              }
              if (puVar21 != (uint *)0x0) {
                uVar19 = *(undefined8 *)puVar1;
                goto LAB_140d34493;
              }
            }
            puVar21 = puVar21 + 2;
            puStack_1a8 = puVar21;
          }
          uVar30 = (int)puVar22 + 1;
          puVar25 = puVar25 + 2;
          plVar14 = (longlong *)(*(longlong *)(lVar29 + 0xa78) + 0x230);
          puVar22 = (uint *)(ulonglong)uVar30;
        } while ((ulonglong)(longlong)(int)uVar30 <
                 (ulonglong)(*(longlong *)(*(longlong *)(lVar29 + 0xa78) + 0x238) - *plVar14 >> 3));
      }
      uVar23 = (longlong)puVar21 - (longlong)puVar24 >> 3;
      uVar30 = param_11;
      if (uVar23 != 0) {
        iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
        lVar18 = *(longlong *)(puVar24 + (longlong)iVar11 * 2);
        uVar8 = *(undefined2 *)(lVar18 + 4);
        param_10 = CONCAT22(param_10._2_2_,*(undefined2 *)(lVar18 + 0xc));
        local_15c = *(undefined4 *)(lVar18 + 0x10);
        uVar30 = (uint)*(ushort *)(lVar18 + 8);
      }
      param_1 = local_res8;
      if (puVar24 != (uint *)0x0) {
        FUN_140002020(puVar24,(longlong)puVar28 - (longlong)puVar24 >> 3,8);
        param_1 = local_res8;
      }
    }
  }
  else {
    local_190 = 0;
    piStack_188 = (int *)0x0;
    local_180 = 0;
    local_1b0 = (uint *)0x0;
    puStack_1a8 = (uint *)0x0;
    local_1a0 = (uint *)0x0;
    uVar30 = FUN_1409fc0c0();
    plVar14 = local_res8;
    puVar21 = puStack_1a8;
    puVar24 = puVar25;
    puVar22 = local_1b0;
    if ((((param_7 != '\0') ||
         ((byte)(uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff >>
                0x1e) != 0)) && (param_8 != '\0')) &&
       (iVar13 = (int)(local_res8[0x27e3] - local_res8[0x27e2] >> 3) + -1,
       puVar28 = (uint *)(longlong)iVar13, local_198 = puVar28, -1 < iVar13)) {
      do {
        lVar18 = *(longlong *)(plVar14[0x27e2] + (longlong)puVar28 * 8);
        if (((*(uint *)(lVar18 + 0x10) & 0x40000) != 0) &&
           (local_198 = puVar28, lVar18 = FUN_1408246e0(lVar18,1), lVar18 != 0)) {
          FUN_14000bc60(&local_190,*(longlong *)(plVar14[0x27e2] + (longlong)puVar28 * 8) + 0x1c);
          param_15 = 0;
          if ((&param_15 < puVar21) && (puVar22 <= &param_15)) {
            lVar18 = (longlong)&param_15 - (longlong)puVar22;
            if (puVar21 == puVar24) {
              FUN_14000c390(&local_1b0,1);
              puVar21 = puStack_1a8;
              puVar24 = local_1a0;
              puVar22 = local_1b0;
            }
            if (puVar21 != (uint *)0x0) {
              *puVar21 = puVar22[lVar18 >> 2];
            }
          }
          else {
            if (puVar21 == puVar24) {
              FUN_14000c390(&local_1b0,1);
              puVar21 = puStack_1a8;
              puVar24 = local_1a0;
              puVar22 = local_1b0;
            }
            local_198 = puVar28;
            if (puVar21 != (uint *)0x0) {
              *puVar21 = 0;
            }
          }
          puVar21 = puVar21 + 1;
          puVar28 = local_198;
          puStack_1a8 = puVar21;
        }
        puVar28 = (uint *)((longlong)puVar28 + -1);
        param_4 = local_res20;
        local_198 = puVar28;
      } while (-1 < (longlong)puVar28);
    }
    plVar14 = local_res8;
    piVar16 = piStack_188;
    if ((longlong)piStack_188 - local_190 >> 2 == 0) {
      param_15 = 0;
      iVar13 = (int)(local_res8[0x2975] - local_res8[0x2974] >> 3) + -1;
      local_198 = (uint *)(longlong)iVar13;
      puVar28 = puVar25;
      if (-1 < iVar13) {
        do {
          local_res20 = *(longlong *)(plVar14[0x2974] + (longlong)local_198 * 8);
          plVar17 = *(longlong **)(local_res20 + 0x90);
          if (param_4 == 0) {
LAB_140d3414f:
            param_15 = FUN_1407f3720(plVar17,0,0);
            puVar28 = (uint *)(ulonglong)param_15;
          }
          else {
            sVar10 = (**(code **)(*plVar17 + 0x5a0))();
            if (sVar10 == *(short *)(param_4 + 0x90)) {
              plVar17 = *(longlong **)(local_res20 + 0x90);
              goto LAB_140d3414f;
            }
          }
          if ((int)puVar25 < (int)(uint)puVar28) {
            puVar25 = puVar28;
          }
          FUN_14000bc60(&local_190,*(longlong *)(local_res20 + 0x90) + 0x1c);
          if ((&param_15 < puVar21) && (puVar22 <= &param_15)) {
            lVar18 = (longlong)&param_15 - (longlong)puVar22;
            if (puVar21 == puVar24) {
              FUN_14000c390(&local_1b0,1);
              puVar21 = puStack_1a8;
              puVar24 = local_1a0;
              puVar22 = local_1b0;
            }
            if (puVar21 != (uint *)0x0) {
              *puVar21 = puVar22[lVar18 >> 2];
            }
            puVar28 = (uint *)(ulonglong)param_15;
          }
          else {
            if (puVar21 == puVar24) {
              FUN_14000c390(&local_1b0,1);
              puVar21 = puStack_1a8;
              puVar24 = local_1a0;
              puVar22 = local_1b0;
            }
            if (puVar21 != (uint *)0x0) {
              *puVar21 = (uint)puVar28;
            }
          }
          puVar21 = puVar21 + 1;
          local_198 = (uint *)((longlong)local_198 + -1);
          puStack_1a8 = puVar21;
        } while (-1 < (longlong)local_198);
        iVar11 = (int)puVar25;
        local_res20 = CONCAT44(local_res20._4_4_,iVar11);
      }
      iVar11 = iVar11 / 2;
      local_res20 = CONCAT44(local_res20._4_4_,iVar11);
      param_15 = (int)((longlong)piStack_188 - local_190 >> 2) - 1;
      piVar16 = piStack_188;
      if (-1 < (int)param_15) {
        local_198 = puVar22 + (int)param_15;
        puVar25 = puVar22 + (longlong)(int)param_15 + 1;
        lVar18 = local_190 - (longlong)puVar22;
        do {
          if ((int)*local_198 < iVar11) {
            _Src = (void *)(lVar18 + (longlong)puVar25);
            memmove((void *)(lVar18 + -4 + (longlong)puVar25),_Src,
                    (longlong)piVar16 - (longlong)_Src);
            piVar16 = piVar16 + -1;
            memmove(puVar25 + -1,puVar25,(longlong)puVar21 - (longlong)puVar25);
            puVar21 = puVar21 + -1;
            iVar11 = (int)local_res20;
          }
          param_15 = param_15 - 1;
          puVar25 = puVar25 + -1;
          local_198 = local_198 + -1;
          puVar22 = local_1b0;
        } while (-1 < (int)param_15);
      }
    }
    lVar18 = local_190;
    uVar23 = (longlong)piVar16 - local_190 >> 2;
    if (uVar23 != 0) {
      iVar11 = FUN_14000d7e0(uVar23 & 0xffffffff);
      local_160 = *(int *)(lVar18 + (longlong)iVar11 * 4);
    }
    if (puVar22 != (uint *)0x0) {
      FUN_140002020(puVar22,(longlong)puVar24 - (longlong)puVar22 >> 2,4);
    }
    param_1 = local_res8;
    uVar30 = param_11;
    if (lVar18 != 0) {
      FUN_140002020(lVar18,local_180 - lVar18 >> 2,4);
      param_1 = local_res8;
      uVar30 = param_11;
    }
  }
  plVar14 = operator_new(0x20);
  iVar11 = local_160;
  *(undefined4 *)(plVar14 + 1) = 0xffffffff;
  *plVar14 = (longlong)art_image_element_itemst::vftable;
  *(undefined2 *)(plVar14 + 2) = 0xffff;
  *(undefined2 *)((longlong)plVar14 + 0x12) = 0xffff;
  *(undefined2 *)((longlong)plVar14 + 0x14) = 0xffff;
  *(undefined2 *)((longlong)plVar14 + 0x16) = 0xffff;
  *(undefined4 *)(plVar14 + 3) = 0;
  *(int *)((longlong)plVar14 + 0x1c) = local_160;
  local_res8 = plVar14;
  if (local_160 == -1) {
    *(undefined2 *)(plVar14 + 2) = uVar8;
    *(short *)((longlong)plVar14 + 0x12) = (short)uVar30;
    *(short *)((longlong)plVar14 + 0x14) = (short)param_10;
    *(short *)((longlong)plVar14 + 0x16) = (short)local_15c;
    *(undefined4 *)(plVar14 + 3) = 0;
  }
  else {
    plVar17 = (longlong *)FUN_14000de70(param_1 + 0x27df,local_160);
    if (plVar17 != (longlong *)0x0) {
      uVar8 = (**(code **)*plVar17)(plVar17);
      *(undefined2 *)(plVar14 + 2) = uVar8;
      uVar8 = (**(code **)(*plVar17 + 8))(plVar17);
      *(undefined2 *)((longlong)plVar14 + 0x12) = uVar8;
      uVar8 = (**(code **)(*plVar17 + 0x10))(plVar17);
      *(undefined2 *)((longlong)plVar14 + 0x14) = uVar8;
      uVar8 = (**(code **)(*plVar17 + 0x18))(plVar17);
      *(undefined2 *)((longlong)plVar14 + 0x16) = uVar8;
      *(int *)(plVar14 + 3) = (int)plVar17[2];
    }
  }
  *(undefined4 *)(plVar14 + 1) = 1;
  uVar30 = FUN_1409fc0c0();
  if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
      0x2aaaaaab == 0) {
    *(undefined4 *)(plVar14 + 1) = 0xffffffff;
  }
  else {
    uVar30 = FUN_1409fc0c0();
    if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
        0x1999999a == 0) {
      uVar30 = FUN_1409fc0c0();
      if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x1999999a == 0) {
        uVar30 = FUN_1409fc0c0();
        if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
            0x1999999a == 0) {
          uVar30 = FUN_1409fc0c0();
          if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
              0x1999999a == 0) {
            uVar30 = FUN_1409fc0c0();
            if ((uVar30 + (int)((longlong)((ulonglong)uVar30 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                0x1999999a != 0) {
              *(undefined4 *)(plVar14 + 1) = 5;
            }
          }
          else {
            *(undefined4 *)(plVar14 + 1) = 4;
          }
        }
        else {
          *(undefined4 *)(plVar14 + 1) = 3;
        }
      }
      else {
        *(undefined4 *)(plVar14 + 1) = 2;
      }
    }
    else {
      *(undefined4 *)(plVar14 + 1) = 1;
    }
  }
  puVar27 = local_res10;
  if (iVar11 != -1) {
    *(undefined4 *)(plVar14 + 1) = 1;
  }
  if ((&local_res8 < (longlong **)local_res10[1]) &&
     (pplVar5 = (longlong **)*local_res10, pplVar5 <= &local_res8)) {
    local_res8 = plVar14;
    if (local_res10[1] == local_res10[2]) {
      FUN_14000c2d0(local_res10,1);
    }
    if ((undefined8 *)puVar27[1] != (undefined8 *)0x0) {
      *(undefined8 *)puVar27[1] =
           *(undefined8 *)(*puVar27 + ((longlong)&local_res8 - (longlong)pplVar5 >> 3) * 8);
    }
    puVar27[1] = puVar27[1] + 8;
  }
  else {
    local_res8 = plVar14;
    if (local_res10[1] == local_res10[2]) {
      FUN_14000c2d0(local_res10,1);
    }
    if ((undefined8 *)puVar27[1] != (undefined8 *)0x0) {
      *(undefined8 *)puVar27[1] = plVar14;
    }
    puVar27[1] = puVar27[1] + 8;
  }
  goto LAB_140d35700;
}

