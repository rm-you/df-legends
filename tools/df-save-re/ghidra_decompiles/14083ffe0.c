// FUN_14083ffe0 @ 14083ffe0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 14083bb60 FUN_14083bb60
//   -> 140dfb5c4 operator_new
//   -> 14083c2a0 FUN_14083c2a0
//   -> 140002020 FUN_140002020
//   -> 14083cb50 FUN_14083cb50
//   -> 14083ce30 FUN_14083ce30
//   -> 14083d580 FUN_14083d580
//   -> 14083c740 FUN_14083c740
//   -> 14083df80 FUN_14083df80
//   -> 14083e400 FUN_14083e400
//   -> 14083e880 FUN_14083e880
//   -> 14000c9e0 FUN_14000c9e0
//   -> 14000c260 FUN_14000c260
//   -> 14000d730 FUN_14000d730
//   -> 14000c2b0 FUN_14000c2b0
//   -> 14014aad0 FUN_14014aad0
//   -> 14083b9f0 FUN_14083b9f0
//   -> 14000c230 FUN_14000c230
//   -> 14083ba20 FUN_14083ba20
//   -> 14083ba50 FUN_14083ba50
//   -> 14083ba80 FUN_14083ba80
//   -> 14083bab0 FUN_14083bab0
//   -> 14083bae0 FUN_14083bae0
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14083ffe0(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined1 auStack_138 [32];
  int local_118 [2];
  longlong local_110;
  undefined8 uStack_108;
  int local_100;
  int local_fc;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  longlong local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  ulonglong local_70;
  ulonglong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_e8 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_138;
  local_68 = 0xf;
  local_70 = 0;
  local_80 = 0;
  local_110 = 0;
  uStack_108 = 0;
  iVar8 = 0;
  local_100 = 1;
  local_f0 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_f8 = 1;
    do {
      puVar3 = *(undefined1 **)(*local_f0 + local_f8 * 8);
      if (&local_80 != puVar3) {
        FUN_14000c8b0(&local_80,puVar3,0,0xffffffffffffffff);
      }
      iVar5 = 0;
      if (local_70 != 0) {
        do {
          puVar3 = &local_80;
          if (0xf < local_68) {
            puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
          }
          if (puVar3[iVar5] == '[') {
            uVar10 = 0xf;
            local_48 = 0xf;
            local_50 = 0;
            local_60 = 0;
            local_fc = iVar5;
            if (local_70 != 0) {
              iVar5 = iVar5 + 1;
              local_118[0] = iVar5;
              if ((ulonglong)(longlong)iVar5 <= local_70) {
                puVar3 = &local_80;
                if (0xf < local_68) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                }
                pcVar6 = puVar3 + local_70;
                uVar10 = local_48;
                for (pcVar4 = puVar3 + iVar5;
                    ((local_118[0] = iVar5, local_48 = uVar10, pcVar4 < pcVar6 && (*pcVar4 != ':'))
                    && (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                  FUN_140050540(&local_60,1);
                  iVar5 = iVar5 + 1;
                  uVar10 = local_48;
                }
                if (local_50 != 0) {
                  iVar2 = FUN_14000c110(&local_60,"ITEM_WEAPON");
                  if (iVar2 == 0) {
                    FUN_14083bb60(extraout_XMM0_Da,&local_110,param_3);
                    local_88 = 0xf;
                    local_90 = 0;
                    local_a0 = 0;
                    uVar9 = 0xf;
                    if (local_70 != 0) {
                      iVar5 = iVar5 + 1;
                      if ((ulonglong)(longlong)iVar5 <= local_70) {
                        puVar3 = &local_80;
                        if (0xf < local_68) {
                          puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                        }
                        pcVar6 = puVar3 + local_70;
                        uVar9 = local_88;
                        for (pcVar4 = puVar3 + iVar5;
                            ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                            (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                          FUN_140050540(&local_a0,1);
                          iVar5 = iVar5 + 1;
                          uVar9 = local_88;
                        }
                        if (local_90 != 0) {
                          local_110 = 0;
                          uStack_108 = 0;
                          local_e0 = operator_new(0x130);
                          local_110 = FUN_14083c2a0(local_e0);
                          if ((undefined1 *)(local_110 + 8) != &local_a0) {
                            FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                          0xffffffffffffffff);
                            uVar9 = local_88;
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar2 = FUN_14000c110(&local_60,"ITEM_TOY");
                    if (iVar2 == 0) {
                      FUN_14083bb60(extraout_XMM0_Da_00,&local_110,param_3);
                      local_88 = 0xf;
                      local_90 = 0;
                      local_a0 = 0;
                      uVar9 = 0xf;
                      if (local_70 != 0) {
                        iVar5 = iVar5 + 1;
                        if ((ulonglong)(longlong)iVar5 <= local_70) {
                          puVar3 = &local_80;
                          if (0xf < local_68) {
                            puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                          }
                          pcVar6 = puVar3 + local_70;
                          uVar9 = local_88;
                          for (pcVar4 = puVar3 + iVar5;
                              ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                              (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                            FUN_140050540(&local_a0,1);
                            iVar5 = iVar5 + 1;
                            uVar9 = local_88;
                          }
                          if (local_90 != 0) {
                            local_110 = 0;
                            uStack_108 = 0;
                            local_d8 = operator_new(0xb0);
                            local_110 = FUN_14083cb50(local_d8);
                            if ((undefined1 *)(local_110 + 8) != &local_a0) {
                              FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                            0xffffffffffffffff);
                              uVar9 = local_88;
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar2 = FUN_14000c110(&local_60,"ITEM_TOOL");
                      if (iVar2 == 0) {
                        FUN_14083bb60(extraout_XMM0_Da_01,&local_110,param_3);
                        local_88 = 0xf;
                        local_90 = 0;
                        local_a0 = 0;
                        uVar9 = 0xf;
                        if (local_70 != 0) {
                          iVar5 = iVar5 + 1;
                          if ((ulonglong)(longlong)iVar5 <= local_70) {
                            puVar3 = &local_80;
                            if (0xf < local_68) {
                              puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                            }
                            pcVar6 = puVar3 + local_70;
                            uVar9 = local_88;
                            for (pcVar4 = puVar3 + iVar5;
                                ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                                (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                              FUN_140050540(&local_a0,1);
                              iVar5 = iVar5 + 1;
                              uVar9 = local_88;
                            }
                            if (local_90 != 0) {
                              local_110 = 0;
                              uStack_108 = 0;
                              local_d0 = operator_new(0x1b8);
                              local_110 = FUN_14083ce30(local_d0);
                              if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                              0xffffffffffffffff);
                                uVar9 = local_88;
                              }
                            }
                          }
                        }
                      }
                      else {
                        iVar2 = FUN_14000c110(&local_60,"ITEM_INSTRUMENT");
                        if (iVar2 == 0) {
                          FUN_14083bb60(extraout_XMM0_Da_02,&local_110,param_3);
                          local_88 = 0xf;
                          local_90 = 0;
                          local_a0 = 0;
                          uVar9 = 0xf;
                          if (local_70 != 0) {
                            iVar5 = iVar5 + 1;
                            if ((ulonglong)(longlong)iVar5 <= local_70) {
                              puVar3 = &local_80;
                              if (0xf < local_68) {
                                puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                              }
                              pcVar6 = puVar3 + local_70;
                              uVar9 = local_88;
                              for (pcVar4 = puVar3 + iVar5;
                                  ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                                  (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                                FUN_140050540(&local_a0,1);
                                iVar5 = iVar5 + 1;
                                uVar9 = local_88;
                              }
                              if (local_90 != 0) {
                                local_110 = 0;
                                uStack_108 = 0;
                                local_c8 = operator_new(0x290);
                                local_110 = FUN_14083d580(local_c8);
                                if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                  FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                                0xffffffffffffffff);
                                  uVar9 = local_88;
                                }
                              }
                            }
                          }
                        }
                        else {
                          iVar2 = FUN_14000c110(&local_60,"ITEM_TRAPCOMP");
                          if (iVar2 == 0) {
                            FUN_14083bb60(extraout_XMM0_Da_03,&local_110,param_3);
                            local_88 = 0xf;
                            local_90 = 0;
                            local_a0 = 0;
                            uVar9 = 0xf;
                            if (local_70 != 0) {
                              iVar5 = iVar5 + 1;
                              if ((ulonglong)(longlong)iVar5 <= local_70) {
                                puVar3 = &local_80;
                                if (0xf < local_68) {
                                  puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                                }
                                pcVar6 = puVar3 + local_70;
                                uVar9 = local_88;
                                for (pcVar4 = puVar3 + iVar5;
                                    ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                                    (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                                  FUN_140050540(&local_a0,1);
                                  iVar5 = iVar5 + 1;
                                  uVar9 = local_88;
                                }
                                if (local_90 != 0) {
                                  local_110 = 0;
                                  uStack_108 = 0;
                                  local_c0 = operator_new(0xf8);
                                  local_110 = FUN_14083c740(local_c0);
                                  if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                    FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                                  0xffffffffffffffff);
                                    uVar9 = local_88;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            iVar2 = FUN_14000c110(&local_60,"ITEM_ARMOR");
                            if (iVar2 == 0) {
                              FUN_14083bb60(extraout_XMM0_Da_04,&local_110,param_3);
                              local_88 = 0xf;
                              local_90 = 0;
                              local_a0 = 0;
                              uVar9 = 0xf;
                              if (local_70 != 0) {
                                iVar5 = iVar5 + 1;
                                if ((ulonglong)(longlong)iVar5 <= local_70) {
                                  puVar3 = &local_80;
                                  if (0xf < local_68) {
                                    puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                                  }
                                  pcVar6 = puVar3 + local_70;
                                  uVar9 = local_88;
                                  for (pcVar4 = puVar3 + iVar5;
                                      ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                                      (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                                    FUN_140050540(&local_a0,1);
                                    iVar5 = iVar5 + 1;
                                    uVar9 = local_88;
                                  }
                                  if (local_90 != 0) {
                                    local_110 = 0;
                                    uStack_108 = 0;
                                    local_b8 = operator_new(0x140);
                                    local_110 = FUN_14083df80(local_b8);
                                    if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                      FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                                    0xffffffffffffffff);
                                      uVar9 = local_88;
                                    }
                                  }
                                }
                              }
                            }
                            else {
                              iVar2 = FUN_14000c110(&local_60,"ITEM_AMMO");
                              if (iVar2 != 0) {
                                iVar2 = FUN_14000c110(&local_60,"ITEM_SIEGEAMMO");
                                if (iVar2 == 0) {
                                  FUN_14083bb60(extraout_XMM0_Da_06,&local_110,param_3);
                                  local_88 = 0xf;
                                  local_90 = 0;
                                  local_a0 = 0;
                                  if (local_70 != 0) {
                                    iVar5 = iVar5 + 1;
                                    if ((ulonglong)(longlong)iVar5 <= local_70) {
                                      puVar3 = &local_80;
                                      if (0xf < local_68) {
                                        puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                                      }
                                      puVar7 = &local_80;
                                      if (0xf < local_68) {
                                        puVar7 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                                      }
                                      pcVar6 = puVar7 + local_70;
                                      for (pcVar4 = puVar3 + iVar5;
                                          ((pcVar4 < pcVar6 && (*pcVar4 != ':')) && (*pcVar4 != ']')
                                          ); pcVar4 = pcVar4 + 1) {
                                        FUN_140050540(&local_a0,1);
                                        iVar5 = iVar5 + 1;
                                      }
                                      if (local_90 != 0) {
                                        local_110 = 0;
                                        uStack_108 = 0;
                                        local_a8 = operator_new(0xc0);
                                        local_110 = FUN_14083e880(local_a8);
                                        if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                          FUN_14000c9e0((undefined1 *)(local_110 + 8),&local_a0);
                                        }
                                      }
                                    }
                                  }
LAB_140840982:
                                  FUN_14000c260(&local_a0);
LAB_14084098c:
                                  FUN_14000c260(&local_60);
                                }
                                else {
                                  cVar1 = FUN_14000d730(&local_60,"ITEM_GLOVES");
                                  if (cVar1 == '\0') {
                                    cVar1 = FUN_14000d730(&local_60,"ITEM_SHOES");
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_14000d730(&local_60,"ITEM_SHIELD");
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_14000d730(&local_60,"ITEM_HELM");
                                        if (cVar1 == '\0') {
                                          cVar1 = FUN_14000d730(&local_60,"ITEM_PANTS");
                                          if (cVar1 == '\0') {
                                            cVar1 = FUN_14000d730(&local_60,"ITEM_FOOD");
                                            if (cVar1 == '\0') {
                                              if (local_110 != 0) {
                                                FUN_14000c2b0(&local_a0);
                                                cVar1 = FUN_14014a750(&local_a0,&local_80,&local_fc)
                                                ;
                                                iVar5 = local_fc;
                                                if (cVar1 != '\0') {
                                                  FUN_1402802d0(local_110 + 0x48,iVar8,&local_a0);
                                                  iVar8 = iVar8 + 1;
                                                  iVar5 = local_fc;
                                                }
                                                goto LAB_140840982;
                                              }
                                              goto LAB_14084098c;
                                            }
                                            FUN_14083bb60(extraout_XMM0_Da_12,&local_110,param_3);
                                            FUN_14000c2b0(&local_a0);
                                            cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a
                                                                 );
                                            if (cVar1 != '\0') {
                                              local_110 = 0;
                                              uStack_108 = 0;
                                              local_110 = FUN_14083bae0();
                                              FUN_14000c230(local_110 + 8,&local_a0);
                                            }
                                          }
                                          else {
                                            FUN_14083bb60(extraout_XMM0_Da_11,&local_110,param_3);
                                            FUN_14000c2b0(&local_a0);
                                            cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a
                                                                 );
                                            if (cVar1 != '\0') {
                                              local_110 = 0;
                                              uStack_108 = 0;
                                              local_110 = FUN_14083bab0();
                                              FUN_14000c230(local_110 + 8,&local_a0);
                                            }
                                          }
                                        }
                                        else {
                                          FUN_14083bb60(extraout_XMM0_Da_10,&local_110,param_3);
                                          FUN_14000c2b0(&local_a0);
                                          cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a);
                                          if (cVar1 != '\0') {
                                            local_110 = 0;
                                            uStack_108 = 0;
                                            local_110 = FUN_14083ba80();
                                            FUN_14000c230(local_110 + 8,&local_a0);
                                          }
                                        }
                                      }
                                      else {
                                        FUN_14083bb60(extraout_XMM0_Da_09,&local_110,param_3);
                                        FUN_14000c2b0(&local_a0);
                                        cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a);
                                        if (cVar1 != '\0') {
                                          local_110 = 0;
                                          uStack_108 = 0;
                                          local_110 = FUN_14083ba50();
                                          FUN_14000c230(local_110 + 8,&local_a0);
                                        }
                                      }
                                    }
                                    else {
                                      FUN_14083bb60(extraout_XMM0_Da_08,&local_110,param_3);
                                      FUN_14000c2b0(&local_a0);
                                      cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a);
                                      if (cVar1 != '\0') {
                                        local_110 = 0;
                                        uStack_108 = 0;
                                        local_110 = FUN_14083ba20();
                                        FUN_14000c230(local_110 + 8,&local_a0);
                                      }
                                    }
                                  }
                                  else {
                                    FUN_14083bb60(extraout_XMM0_Da_07,&local_110,param_3);
                                    FUN_14000c2b0(&local_a0);
                                    cVar1 = FUN_14014aad0(&local_a0,&local_80,local_118,0x3a);
                                    if (cVar1 != '\0') {
                                      local_110 = 0;
                                      uStack_108 = 0;
                                      local_110 = FUN_14083b9f0();
                                      FUN_14000c230(local_110 + 8,&local_a0);
                                    }
                                  }
                                  FUN_14000c260(&local_a0);
                                  FUN_14000c260(&local_60);
                                  iVar5 = local_118[0];
                                }
                                goto LAB_140840c99;
                              }
                              FUN_14083bb60(extraout_XMM0_Da_05,&local_110,param_3);
                              local_88 = 0xf;
                              local_90 = 0;
                              local_a0 = 0;
                              uVar9 = 0xf;
                              if (local_70 != 0) {
                                iVar5 = iVar5 + 1;
                                if ((ulonglong)(longlong)iVar5 <= local_70) {
                                  puVar3 = &local_80;
                                  if (0xf < local_68) {
                                    puVar3 = (undefined1 *)CONCAT71(uStack_7f,local_80);
                                  }
                                  pcVar6 = puVar3 + local_70;
                                  uVar9 = local_88;
                                  for (pcVar4 = puVar3 + iVar5;
                                      ((local_88 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                                      (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                                    FUN_140050540(&local_a0,1);
                                    iVar5 = iVar5 + 1;
                                    uVar9 = local_88;
                                  }
                                  if (local_90 != 0) {
                                    local_110 = 0;
                                    uStack_108 = 0;
                                    local_b0 = operator_new(0x110);
                                    local_110 = FUN_14083e400(local_b0);
                                    if ((undefined1 *)(local_110 + 8) != &local_a0) {
                                      FUN_14000c8b0((undefined1 *)(local_110 + 8),&local_a0,0,
                                                    0xffffffffffffffff);
                                      uVar9 = local_88;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if (0xf < uVar9) {
                    FUN_140002020(CONCAT71(uStack_9f,local_a0),uVar9 + 1,1);
                  }
                }
              }
            }
            if (0xf < uVar10) {
              FUN_140002020(CONCAT71(uStack_5f,local_60),uVar10 + 1,1);
            }
          }
LAB_140840c99:
          iVar5 = iVar5 + 1;
        } while ((ulonglong)(longlong)iVar5 < local_70);
      }
      local_100 = local_100 + 1;
      local_f8 = local_f8 + 1;
      uVar10 = local_f0[1] - *local_f0 >> 3;
    } while ((ulonglong)(longlong)local_100 < uVar10);
    if (local_110 != 0) {
      FUN_14083bb60(uVar10,&local_110,param_3);
    }
  }
  FUN_14000c260(&local_80);
  return;
}

