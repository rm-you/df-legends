// FUN_1407db680 @ 1407db680
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1407d7160 FUN_1407d7160
//   -> 14004ffe0 FUN_14004ffe0
//   -> 140002020 FUN_140002020
//   -> 1407d7350 FUN_1407d7350
//   -> 140dfb5c4 operator_new
//   -> 1407d76c0 FUN_1407d76c0
//   -> 1407d7800 FUN_1407d7800
//   -> 1407d7a60 FUN_1407d7a60
//   -> 1407d7c60 FUN_1407d7c60
//   -> 1407d7d50 FUN_1407d7d50
//   -> 1407d7e40 FUN_1407d7e40
//   -> 1407d7970 FUN_1407d7970
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 1407d8440 FUN_1407d8440
//   -> 140106910 FUN_140106910
//   -> 1407d87c0 FUN_1407d87c0
//   -> 14000ccd0 FUN_14000ccd0
//   -> 14000c620 FUN_14000c620
//   -> 14000d730 FUN_14000d730
//   -> 1407d8930 FUN_1407d8930
//   -> 14000c230 FUN_14000c230
//   -> 14000c260 FUN_14000c260
//   -> 1407d8cc0 FUN_1407d8cc0
//   -> 14000c1f0 FUN_14000c1f0
//   -> 140050380 FUN_140050380
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014aad0 FUN_14014aad0
//   -> 1407d9010 FUN_1407d9010
//   -> 14000bae0 FUN_14000bae0
//   -> 140050070 FUN_140050070
//   -> 1407d9360 FUN_1407d9360
//   -> 1407d9220 FUN_1407d9220
//   -> 1407da090 FUN_1407da090
//   -> 1407d9ad0 FUN_1407d9ad0
//   -> 1407d94a0 FUN_1407d94a0
//   -> 1407d9960 FUN_1407d9960
//   -> 1407da160 FUN_1407da160
//   -> 1407da2a0 FUN_1407da2a0
//   -> 1407da5f0 FUN_1407da5f0
//   -> 1407da450 FUN_1407da450
//   -> 1407da6b0 FUN_1407da6b0
//   -> 1407da770 FUN_1407da770
//   -> 1408be8a0 FUN_1408be8a0
//   -> 14007bda0 FUN_14007bda0
//   -> 14014a5a0 FUN_14014a5a0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407db680(undefined8 param_1,longlong *param_2,char param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  int local_138 [2];
  void *local_130;
  int local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  longlong local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_110 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_178;
  lVar8 = *param_2;
  if (lVar8 != 0) {
    local_b0 = 0xf;
    local_b8 = 0;
    local_c8 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = (longlong)(int)(*(longlong *)(lVar8 + 0x30) - *(longlong *)(lVar8 + 0x28) >> 3);
    if (0 < local_118) {
      do {
        puVar7 = *(undefined1 **)(*(longlong *)(*param_2 + 0x28) + local_120 * 8);
        if (&local_c8 != puVar7) {
          FUN_14000c8b0(&local_c8,puVar7,0,0xffffffffffffffff);
        }
        local_138[0] = 0;
        if (local_b8 != 0) {
          do {
            puVar7 = &local_c8;
            if (0xf < local_b0) {
              puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
            }
            if (puVar7[local_138[0]] != '[') goto LAB_1407dc433;
            local_f0 = 0xf;
            local_f8 = 0;
            local_108 = 0;
            uVar13 = 0xf;
            if (local_b8 == 0) {
LAB_1407dc419:
              if (0xf < uVar13) {
LAB_1407dc423:
                FUN_140002020(CONCAT71(uStack_107,local_108),uVar13 + 1,1);
              }
            }
            else {
              local_138[0] = local_138[0] + 1;
              if (local_b8 < (ulonglong)(longlong)local_138[0]) goto LAB_1407dc419;
              puVar7 = &local_c8;
              if (0xf < local_b0) {
                puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
              }
              pcVar11 = puVar7 + local_b8;
              uVar13 = local_f0;
              for (pcVar9 = puVar7 + local_138[0];
                  ((local_f0 = uVar13, pcVar9 < pcVar11 && (*pcVar9 != ':')) && (*pcVar9 != ']'));
                  pcVar9 = pcVar9 + 1) {
                FUN_140050540(&local_108,1);
                local_138[0] = local_138[0] + 1;
                uVar13 = local_f0;
              }
              if (local_f8 == 0) goto LAB_1407dc419;
              iVar5 = FUN_14000c110(&local_108,"EXPERIMENT_ONLY");
              if (iVar5 == 0) {
                if (0 < *(int *)(*param_2 + 0x48)) {
                  pbVar1 = *(byte **)(*param_2 + 0x40);
                  *pbVar1 = *pbVar1 | 2;
                  uVar13 = local_f0;
                }
                goto LAB_1407dc419;
              }
              iVar5 = FUN_14000c110(&local_108,"I_SOURCE");
              if (iVar5 == 0) {
                local_d0 = 0xf;
                local_d8 = 0;
                local_e8 = 0;
                uVar10 = 0xf;
                uVar3 = 0;
                if (local_b8 == 0) {
LAB_1407dbaef:
                  local_e8 = uVar3;
                  if (0xf < uVar10) {
                    FUN_140002020(CONCAT71(uStack_e7,local_e8),uVar10 + 1,1);
                    uVar13 = local_f0;
                  }
                  goto LAB_1407dc419;
                }
                local_138[0] = local_138[0] + 1;
                uVar3 = local_e8;
                if (local_b8 < (ulonglong)(longlong)local_138[0]) goto LAB_1407dbaef;
                puVar7 = &local_c8;
                if (0xf < local_b0) {
                  puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                }
                pcVar11 = puVar7 + local_b8;
                local_e8 = 0;
                uVar10 = local_d0;
                for (pcVar9 = puVar7 + local_138[0];
                    ((local_d0 = uVar10, pcVar9 < pcVar11 && (uVar13 = local_f0, *pcVar9 != ':')) &&
                    (*pcVar9 != ']')); pcVar9 = pcVar9 + 1) {
                  FUN_140050540(&local_e8,1);
                  local_138[0] = local_138[0] + 1;
                  uVar10 = local_d0;
                  uVar13 = local_f0;
                }
                uVar3 = local_e8;
                if (local_d8 == 0) goto LAB_1407dbaef;
                iVar5 = FUN_14000c110(&local_e8,"REGION");
                if (iVar5 == 0) {
                  lVar8 = FUN_1407d7160();
                }
                else {
                  iVar5 = FUN_14000c110(&local_e8,"UNDERGROUND_SPECIAL");
                  if (iVar5 == 0) {
                    lVar8 = FUN_1407d7350();
                  }
                  else {
                    iVar5 = FUN_14000c110(&local_e8,"SECRET");
                    if (iVar5 == 0) {
                      local_130 = operator_new(0x150);
                      lVar8 = FUN_1407d76c0(local_130);
                    }
                    else {
                      iVar5 = FUN_14000c110(&local_e8,"DISTURBANCE");
                      if (iVar5 == 0) {
                        lVar8 = FUN_1407d7800();
                      }
                      else {
                        iVar5 = FUN_14000c110(&local_e8,"DEITY");
                        if (iVar5 == 0) {
                          lVar8 = FUN_1407d7a60();
                        }
                        else {
                          iVar5 = FUN_14000c110(&local_e8,"ATTACK");
                          if (iVar5 == 0) {
                            lVar8 = FUN_1407d7c60();
                          }
                          else {
                            iVar5 = FUN_14000c110(&local_e8,"INGESTION");
                            if (iVar5 == 0) {
                              lVar8 = FUN_1407d7d50();
                            }
                            else {
                              iVar5 = FUN_14000c110(&local_e8,"CREATURE_ACTION");
                              if (iVar5 == 0) {
                                lVar8 = FUN_1407d7e40();
                              }
                              else {
                                iVar5 = FUN_14000c110(&local_e8,"EXPERIMENT");
                                if (iVar5 != 0) {
                                  FUN_14007b5f0(&local_a8,*param_2,&DAT_140e7aaf8);
                                  FUN_14000c9f0(&local_a8,"Unrecognized Interaction Source Type: ",
                                                0x26);
                                  FUN_14000cb40(&local_a8,&local_e8,0);
                                  FUN_14014a240(&local_a8);
                                  if (0xf < local_90) {
                                    FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
                                  }
                                  local_90 = 0xf;
                                  local_98 = 0;
                                  local_a8 = 0;
                                  uVar10 = local_d0;
                                  goto joined_r0x0001407dbae1;
                                }
                                lVar8 = FUN_1407d7970();
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                param_2[1] = lVar8;
                *(int *)(lVar8 + 8) =
                     (int)(*(longlong *)(*param_2 + 0x58) - *(longlong *)(*param_2 + 0x50) >> 3);
                FUN_14004ffe0(*param_2 + 0x50);
joined_r0x0001407dbae1:
                if (0xf < uVar10) {
                  FUN_140002020(CONCAT71(uStack_e7,local_e8),uVar10 + 1,1);
                }
                uVar13 = local_f0;
                if (local_f0 < 0x10) goto LAB_1407dc433;
                goto LAB_1407dc423;
              }
              iVar5 = FUN_14000c110(&local_108,"I_TARGET");
              if (iVar5 == 0) {
                local_d0 = 0xf;
                uVar12 = 0xf;
                local_90 = 0xf;
                local_98 = 0;
                local_a8 = 0;
                local_d8 = 0;
                local_e8 = 0;
                uVar10 = local_d0;
                uVar3 = local_e8;
                if (local_b8 != 0) {
                  local_138[0] = local_138[0] + 1;
                  if ((ulonglong)(longlong)local_138[0] <= local_b8) {
                    puVar7 = &local_c8;
                    if (0xf < local_b0) {
                      puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                    }
                    pcVar11 = puVar7 + local_b8;
                    for (pcVar9 = puVar7 + local_138[0];
                        ((local_d0 = uVar10, pcVar9 < pcVar11 && (uVar13 = local_f0, *pcVar9 != ':')
                         ) && (*pcVar9 != ']')); pcVar9 = pcVar9 + 1) {
                      FUN_140050540(&local_e8,1);
                      local_138[0] = local_138[0] + 1;
                      uVar10 = local_d0;
                      uVar13 = local_f0;
                    }
                    uVar3 = local_e8;
                    if (local_d8 == 0) goto LAB_1407dbaef;
                    local_98 = 0;
                    local_a8 = 0;
                    if (local_b8 == 0) {
LAB_1407dbf24:
                      uVar3 = local_e8;
                      if (0xf < uVar12) {
                        FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar12 + 1,1);
                        uVar13 = local_f0;
                        uVar3 = local_e8;
                      }
                      goto LAB_1407dbaef;
                    }
                    local_138[0] = local_138[0] + 1;
                    if (local_b8 < (ulonglong)(longlong)local_138[0]) goto LAB_1407dbf24;
                    puVar7 = &local_c8;
                    if (0xf < local_b0) {
                      puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                    }
                    pcVar11 = puVar7 + local_b8;
                    for (pcVar9 = puVar7 + local_138[0];
                        ((pcVar9 < pcVar11 && (uVar12 = local_90, uVar13 = local_f0, *pcVar9 != ':')
                         ) && (*pcVar9 != ']')); pcVar9 = pcVar9 + 1) {
                      FUN_140050540(&local_a8,1);
                      local_138[0] = local_138[0] + 1;
                      uVar12 = local_90;
                      uVar13 = local_f0;
                    }
                    if (local_98 == 0) goto LAB_1407dbf24;
                    iVar5 = FUN_14000c110(&local_a8,"CORPSE");
                    if (iVar5 == 0) {
                      local_130 = operator_new(0x170);
                      lVar8 = FUN_1407d8440(local_130);
                      param_2[2] = lVar8;
                      if ((undefined1 *)(lVar8 + 0x10) != &local_e8) {
                        FUN_14000c8b0((undefined1 *)(lVar8 + 0x10),&local_e8,0,0xffffffffffffffff);
                        uVar10 = local_d0;
                      }
                      *(int *)(param_2[2] + 8) =
                           (int)(*(longlong *)(*param_2 + 0x70) - *(longlong *)(*param_2 + 0x68) >>
                                3);
                      FUN_140106910(*param_2 + 0x68,param_2 + 2);
                      if (0xf < uVar12) {
                        FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar12 + 1,1);
                      }
                      goto joined_r0x0001407dbae1;
                    }
                    iVar5 = FUN_14000c110(&local_a8,"CREATURE");
                    if (iVar5 != 0) {
                      cVar4 = FUN_14000d730(&local_a8,"MATERIAL");
                      if (cVar4 == '\0') {
                        cVar4 = FUN_14000d730(&local_a8,"LOCATION");
                        if (cVar4 != '\0') {
                          lVar8 = FUN_1407d8cc0();
                          param_2[2] = lVar8;
                          FUN_14000c230(lVar8 + 0x10,&local_e8);
                          *(int *)(param_2[2] + 8) =
                               (int)(*(longlong *)(*param_2 + 0x70) - *(longlong *)(*param_2 + 0x68)
                                    >> 3);
                          FUN_140106910(*param_2 + 0x68,param_2 + 2);
                          FUN_14000c260(&local_a8);
                          FUN_14000c260(&local_e8);
                          FUN_14000c260(&local_108);
                          goto LAB_1407dc433;
                        }
                        FUN_14007b5f0(local_88,*param_2,&DAT_140e7aaf8);
                        FUN_14000c1f0(local_88,"Unrecognized Interaction Target Type: ");
                        FUN_140050380(local_88,&local_a8);
                        FUN_14014a240(local_88);
                        FUN_14000c260(local_88);
                      }
                      else {
                        lVar8 = FUN_1407d8930();
                        param_2[2] = lVar8;
                        FUN_14000c230(lVar8 + 0x10,&local_e8);
                        *(int *)(param_2[2] + 8) =
                             (int)(*(longlong *)(*param_2 + 0x70) - *(longlong *)(*param_2 + 0x68)
                                  >> 3);
                        FUN_140106910(*param_2 + 0x68,param_2 + 2);
                      }
                      FUN_14000c260(&local_a8);
                      goto LAB_1407dbe4e;
                    }
                    local_130 = operator_new(0x170);
                    lVar8 = FUN_1407d87c0(local_130);
                    param_2[2] = lVar8;
                    if ((undefined1 *)(lVar8 + 0x10) != &local_e8) {
                      FUN_14000c8b0((undefined1 *)(lVar8 + 0x10),&local_e8,0,0xffffffffffffffff);
                      uVar10 = local_d0;
                    }
                    *(int *)(param_2[2] + 8) =
                         (int)(*(longlong *)(*param_2 + 0x70) - *(longlong *)(*param_2 + 0x68) >> 3)
                    ;
                    FUN_140106910(*param_2 + 0x68,param_2 + 2);
                    if (0xf < uVar12) {
                      FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar12 + 1,1);
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_e7,local_e8),uVar10 + 1,1);
                    }
                    if (0xf < local_f0) {
                      FUN_14000ccd0();
                    }
                    local_f0 = 0xf;
                    FUN_14000c620(&local_108,0);
                    goto LAB_1407dc433;
                  }
                }
                goto LAB_1407dbaef;
              }
              cVar4 = FUN_14000d730(&local_108,"I_EFFECT");
              if (cVar4 != '\0') {
                param_2[5] = param_2[4];
                param_2[8] = param_2[7];
                param_2[0xb] = param_2[10];
                FUN_14000c2b0(&local_e8);
                cVar4 = FUN_14014aad0(&local_e8,&local_c8,local_138);
                if (cVar4 != '\0') {
                  cVar4 = FUN_14000d730(&local_e8,"ANIMATE");
                  if (cVar4 == '\0') {
                    cVar4 = FUN_14000d730(&local_e8,"RAISE_GHOST");
                    if (cVar4 != '\0') {
                      lVar8 = FUN_1407d9360();
LAB_1407dc048:
                      param_2[3] = lVar8;
                      *(int *)(lVar8 + 8) =
                           (int)(*(longlong *)(*param_2 + 0x88) - *(longlong *)(*param_2 + 0x80) >>
                                3);
                      goto LAB_1407dbfda;
                    }
                    cVar4 = FUN_14000d730(&local_e8,"RESURRECT");
                    if (cVar4 != '\0') {
                      lVar8 = FUN_1407d9220();
                      goto LAB_1407dc048;
                    }
                    cVar4 = FUN_14000d730(&local_e8,"PROPEL_UNIT");
                    if (cVar4 == '\0') {
                      cVar4 = FUN_14000d730(&local_e8,"SUMMON_UNIT");
                      if (cVar4 == '\0') {
                        cVar4 = FUN_14000d730(&local_e8,"CREATE_ITEM");
                        if (cVar4 == '\0') {
                          cVar4 = FUN_14000d730(&local_e8,"CHANGE_ITEM_QUALITY");
                          if (cVar4 == '\0') {
                            cVar4 = FUN_14000d730(&local_e8,"ADD_SYNDROME");
                            if (cVar4 != '\0') {
                              lVar8 = FUN_1407da160();
                              goto LAB_1407dc048;
                            }
                            cVar4 = FUN_14000d730(&local_e8,"CLEAN");
                            if (cVar4 == '\0') {
                              cVar4 = FUN_14000d730(&local_e8,&DAT_140f16a2c);
                              if (cVar4 == '\0') {
                                cVar4 = FUN_14000d730(&local_e8,"CHANGE_WEATHER");
                                if (cVar4 == '\0') {
                                  cVar4 = FUN_14000d730(&local_e8,"CONTACT");
                                  if (cVar4 == '\0') {
                                    cVar4 = FUN_14000d730(&local_e8,"MATERIAL_EMISSION");
                                    if (cVar4 == '\0') {
                                      FUN_14007b5f0(local_88,*param_2,&DAT_140e7aaf8);
                                      FUN_14000c1f0(local_88,
                                                  "Unrecognized Interaction Effect Type: ");
                                      FUN_140050380(local_88,&local_e8);
                                      FUN_14014a240(local_88);
                                      FUN_14000c260(local_88);
                                      goto LAB_1407dbe4e;
                                    }
                                    lVar8 = FUN_1407da770();
                                  }
                                  else {
                                    lVar8 = FUN_1407da6b0();
                                  }
                                }
                                else {
                                  lVar8 = FUN_1407da450();
                                }
                              }
                              else {
                                lVar8 = FUN_1407da5f0();
                              }
                            }
                            else {
                              lVar8 = FUN_1407da2a0();
                            }
                          }
                          else {
                            lVar8 = FUN_1407d9960();
                          }
                        }
                        else {
                          lVar8 = FUN_1407d94a0();
                        }
                      }
                      else {
                        lVar8 = FUN_1407d9ad0();
                      }
                    }
                    else {
                      lVar8 = FUN_1407da090();
                    }
                    param_2[3] = lVar8;
                    *(int *)(lVar8 + 8) =
                         (int)(*(longlong *)(*param_2 + 0x88) - *(longlong *)(*param_2 + 0x80) >> 3)
                    ;
                  }
                  else {
                    lVar8 = FUN_1407d9010();
                    param_2[3] = lVar8;
                    *(int *)(lVar8 + 8) =
                         (int)(*(longlong *)(*param_2 + 0x88) - *(longlong *)(*param_2 + 0x80) >> 3)
                    ;
LAB_1407dbfda:
                    local_130 = (void *)(lVar8 + 0x90);
                    FUN_140106910(param_2 + 4,&local_130);
                    local_130 = (void *)0x0;
                    FUN_14000bae0(param_2 + 7,&local_130);
                    local_130 = (void *)0x0;
                    FUN_14000bae0(param_2 + 10,&local_130);
                  }
                  FUN_140050070(*param_2 + 0x80,param_2 + 3);
                }
LAB_1407dbe4e:
                puVar7 = &local_e8;
                goto LAB_1407dbe52;
              }
              plVar2 = (longlong *)param_2[1];
              if (plVar2 == (longlong *)0x0) {
LAB_1407dc23f:
                plVar2 = (longlong *)param_2[2];
                if (plVar2 != (longlong *)0x0) {
                  local_150 = (longlong *)CONCAT71(local_150._1_7_,param_3);
                  local_158 = param_2;
                  cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_108,local_138);
                  if (cVar4 != '\0') goto LAB_1407dbe58;
                }
                plVar2 = (longlong *)param_2[3];
                if (plVar2 != (longlong *)0x0) {
                  local_150 = (longlong *)CONCAT71(local_150._1_7_,param_3);
                  local_158 = param_2;
                  cVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_108,local_138);
                  if (cVar4 != '\0') goto LAB_1407dbe58;
                }
                if (param_2[5] - param_2[4] >> 3 != 0) {
                  local_148 = param_2 + 0xd;
                  local_150 = param_2 + 10;
                  local_158 = param_2 + 7;
                  cVar4 = FUN_1408be8a0(&local_108,local_138,&local_c8);
                  if (cVar4 != '\0') goto LAB_1407dbe58;
                }
                if (param_3 == '\0') {
LAB_1407dc3d0:
                  FUN_14007b5f0(local_68,*param_2,&DAT_140e7aaf8);
                  FUN_14000c1f0(local_68,"Unrecognized Interaction Token: ");
                  FUN_140050380(local_68,&local_108);
                  FUN_14014a240(local_68);
                  puVar7 = local_68;
                }
                else {
                  cVar4 = FUN_14000d730(&local_108,"GENERATED");
                  if (cVar4 != '\0') {
                    FUN_14007bda0(*param_2 + 0x40,0);
                    goto LAB_1407dbe58;
                  }
                  cVar4 = FUN_14000d730(&local_108,"SOURCE_HFID");
                  if (cVar4 == '\0') {
                    cVar4 = FUN_14000d730(&local_108,"SOURCE_ENID");
                    if (cVar4 == '\0') goto LAB_1407dc3d0;
                    FUN_14000c2b0(local_88);
                    cVar4 = FUN_14014aad0(local_88,&local_c8,local_138);
                    if (cVar4 == '\0') {
                      puVar7 = local_88;
                    }
                    else {
                      uVar6 = FUN_14014a5a0(local_88);
                      *(undefined4 *)(*param_2 + 0x9c) = uVar6;
                      puVar7 = local_88;
                    }
                  }
                  else {
                    FUN_14000c2b0(local_88);
                    cVar4 = FUN_14014aad0(local_88,&local_c8,local_138);
                    if (cVar4 == '\0') {
                      puVar7 = local_88;
                    }
                    else {
                      uVar6 = FUN_14014a5a0(local_88);
                      *(undefined4 *)(*param_2 + 0x98) = uVar6;
                      puVar7 = local_88;
                    }
                  }
                }
LAB_1407dbe52:
                FUN_14000c260(puVar7);
              }
              else {
                local_150 = (longlong *)CONCAT71(local_150._1_7_,param_3);
                local_158 = param_2;
                cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_108,local_138);
                if (cVar4 == '\0') goto LAB_1407dc23f;
              }
LAB_1407dbe58:
              FUN_14000c260(&local_108);
            }
LAB_1407dc433:
            local_138[0] = local_138[0] + 1;
          } while ((ulonglong)(longlong)local_138[0] < local_b8);
        }
        local_128 = local_128 + 1;
        local_120 = local_120 + 1;
      } while (local_120 < local_118);
    }
    FUN_14000c260(&local_c8);
  }
  return;
}

