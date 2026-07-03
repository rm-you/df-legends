// FUN_1408a5730 @ 1408a5730
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1408a5e50 FUN_1408a5e50
//   -> 140dfb5c4 operator_new
//   -> 14089b2b0 FUN_14089b2b0
//   -> 140002020 FUN_140002020
//   -> 14089b4f0 FUN_14089b4f0
//   -> 14089b750 FUN_14089b750
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408a5730(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_168 [32];
  int local_148;
  int local_144;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 local_118;
  void *local_110;
  void *local_108;
  void *local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  longlong local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_118 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_168;
  local_e0 = 0xf;
  iVar9 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_140 = (undefined1 *)0x0;
  puStack_138 = (undefined1 *)0x0;
  local_130 = (undefined1 *)0x0;
  local_144 = 1;
  local_120 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_128 = 1;
    do {
      iVar6 = 0;
      puVar4 = *(undefined1 **)(*local_120 + local_128 * 8);
      if (&local_f8 != puVar4) {
        FUN_14000c8b0(&local_f8,puVar4,0,0xffffffffffffffff);
      }
      if (local_e8 != 0) {
        do {
          puVar4 = &local_f8;
          if (0xf < local_e0) {
            puVar4 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
          }
          if (puVar4[iVar6] == '[') {
            uVar11 = 0xf;
            local_a0 = 0xf;
            local_a8 = 0;
            local_b8 = 0;
            local_148 = iVar6;
            if (local_e8 != 0) {
              iVar6 = iVar6 + 1;
              if ((ulonglong)(longlong)iVar6 <= local_e8) {
                puVar4 = &local_f8;
                if (0xf < local_e0) {
                  puVar4 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                }
                pcVar7 = puVar4 + local_e8;
                pcVar5 = puVar4 + iVar6;
                uVar11 = local_a0;
                for (; ((local_a0 = uVar11, pcVar5 < pcVar7 && (*pcVar5 != ':')) && (*pcVar5 != ']')
                       ); pcVar5 = pcVar5 + 1) {
                  FUN_140050540(&local_b8,1);
                  iVar6 = iVar6 + 1;
                  uVar11 = local_a0;
                }
                if (local_a8 != 0) {
                  iVar3 = FUN_14000c110(&local_b8,&DAT_140ec3400);
                  if (iVar3 == 0) {
                    FUN_1408a5e50(extraout_XMM0_Da,&local_140,param_3);
                    local_c0 = 0xf;
                    local_c8 = 0;
                    local_d8 = 0;
                    uVar10 = 0xf;
                    if (local_e8 != 0) {
                      iVar6 = iVar6 + 1;
                      if ((ulonglong)(longlong)iVar6 <= local_e8) {
                        puVar4 = &local_f8;
                        if (0xf < local_e0) {
                          puVar4 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                        }
                        puVar8 = &local_f8;
                        if (0xf < local_e0) {
                          puVar8 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                        }
                        pcVar7 = puVar8 + local_e8;
                        uVar10 = local_c0;
                        for (pcVar5 = puVar4 + iVar6;
                            ((local_c0 = uVar10, pcVar5 < pcVar7 && (*pcVar5 != ':')) &&
                            (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                          FUN_140050540(&local_d8,1);
                          iVar6 = iVar6 + 1;
                          uVar10 = local_c0;
                        }
                        if (local_c8 != 0) {
                          puStack_138 = (undefined1 *)0x0;
                          local_130 = (undefined1 *)0x0;
                          local_110 = operator_new(0x168);
                          local_140 = (undefined1 *)FUN_14089b2b0(local_110);
                          if (local_140 != &local_d8) {
                            FUN_14000c8b0(local_140,&local_d8,0,0xffffffffffffffff);
                            uVar10 = local_c0;
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar3 = FUN_14000c110(&local_b8,"SYMBOL");
                    if (iVar3 == 0) {
                      FUN_1408a5e50(extraout_XMM0_Da_00,&local_140,param_3);
                      local_c0 = 0xf;
                      local_c8 = 0;
                      local_d8 = 0;
                      uVar10 = 0xf;
                      if (local_e8 != 0) {
                        iVar6 = iVar6 + 1;
                        if ((ulonglong)(longlong)iVar6 <= local_e8) {
                          puVar4 = &local_f8;
                          if (0xf < local_e0) {
                            puVar4 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                          }
                          puVar8 = &local_f8;
                          if (0xf < local_e0) {
                            puVar8 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                          }
                          pcVar7 = puVar8 + local_e8;
                          uVar10 = local_c0;
                          for (pcVar5 = puVar4 + iVar6;
                              ((local_c0 = uVar10, pcVar5 < pcVar7 && (*pcVar5 != ':')) &&
                              (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                            FUN_140050540(&local_d8,1);
                            iVar6 = iVar6 + 1;
                            uVar10 = local_c0;
                          }
                          if (local_c8 != 0) {
                            local_140 = (undefined1 *)0x0;
                            local_130 = (undefined1 *)0x0;
                            local_108 = operator_new(0x70);
                            puStack_138 = (undefined1 *)FUN_14089b4f0(local_108);
                            if (puStack_138 != &local_d8) {
                              FUN_14000c8b0(puStack_138,&local_d8,0,0xffffffffffffffff);
                              uVar10 = local_c0;
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar3 = FUN_14000c110(&local_b8,"TRANSLATION");
                      puVar1 = local_130;
                      puVar8 = puStack_138;
                      puVar4 = local_140;
                      if (iVar3 != 0) {
                        if (local_140 == (undefined1 *)0x0) {
                          if (puStack_138 == (undefined1 *)0x0) {
                            if (local_130 != (undefined1 *)0x0) {
                              local_40 = 0xf;
                              local_48 = 0;
                              local_58 = 0;
                              cVar2 = FUN_14014a750(&local_58,&local_f8,&local_148);
                              if (cVar2 != '\0') {
                                FUN_1402802d0(puVar1 + 0x70,iVar9,&local_58);
                                iVar9 = iVar9 + 1;
                              }
                              iVar6 = local_148;
                              if (0xf < local_40) {
                                FUN_140002020(CONCAT71(uStack_57,local_58),local_40 + 1,1);
                              }
                              local_40 = 0xf;
                              local_48 = 0;
                              local_58 = 0;
                            }
                          }
                          else {
                            local_60 = 0xf;
                            local_68 = 0;
                            local_78 = 0;
                            cVar2 = FUN_14014a750(&local_78,&local_f8,&local_148);
                            if (cVar2 != '\0') {
                              FUN_1402802d0(puVar8 + 0x58,iVar9,&local_78);
                              iVar9 = iVar9 + 1;
                            }
                            iVar6 = local_148;
                            if (0xf < local_60) {
                              FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                            }
                            local_60 = 0xf;
                            local_68 = 0;
                            local_78 = 0;
                          }
                        }
                        else {
                          local_80 = 0xf;
                          local_88 = 0;
                          local_98 = 0;
                          cVar2 = FUN_14014a750(&local_98,&local_f8,&local_148);
                          if (cVar2 != '\0') {
                            FUN_1402802d0(puVar4 + 0x150,iVar9,&local_98);
                            iVar9 = iVar9 + 1;
                          }
                          iVar6 = local_148;
                          if (0xf < local_80) {
                            FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
                          }
                          local_80 = 0xf;
                          local_88 = 0;
                          local_98 = 0;
                        }
                        goto LAB_1408a5d70;
                      }
                      FUN_1408a5e50(extraout_XMM0_Da_01,&local_140,param_3);
                      local_c0 = 0xf;
                      local_c8 = 0;
                      local_d8 = 0;
                      uVar10 = 0xf;
                      if (local_e8 != 0) {
                        iVar6 = iVar6 + 1;
                        if ((ulonglong)(longlong)iVar6 <= local_e8) {
                          puVar4 = &local_f8;
                          if (0xf < local_e0) {
                            puVar4 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                          }
                          puVar8 = &local_f8;
                          if (0xf < local_e0) {
                            puVar8 = (undefined1 *)CONCAT71(uStack_f7,local_f8);
                          }
                          pcVar7 = puVar8 + local_e8;
                          uVar10 = local_c0;
                          for (pcVar5 = puVar4 + iVar6;
                              ((local_c0 = uVar10, pcVar5 < pcVar7 && (*pcVar5 != ':')) &&
                              (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                            FUN_140050540(&local_d8,1);
                            iVar6 = iVar6 + 1;
                            uVar10 = local_c0;
                          }
                          if (local_c8 != 0) {
                            local_140 = (undefined1 *)0x0;
                            puStack_138 = (undefined1 *)0x0;
                            local_100 = operator_new(0x88);
                            local_130 = (undefined1 *)FUN_14089b750(local_100);
                            if (local_130 != &local_d8) {
                              FUN_14000c8b0(local_130,&local_d8,0,0xffffffffffffffff);
                              uVar10 = local_c0;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (0xf < uVar10) {
                    FUN_140002020(CONCAT71(uStack_d7,local_d8),uVar10 + 1,1);
                  }
                  if (0xf < uVar11) {
                    FUN_140002020(CONCAT71(uStack_b7,local_b8),uVar11 + 1,1);
                  }
                  goto LAB_1408a5d8e;
                }
              }
            }
LAB_1408a5d70:
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_b7,local_b8),uVar11 + 1,1);
            }
          }
LAB_1408a5d8e:
          iVar6 = iVar6 + 1;
        } while ((ulonglong)(longlong)iVar6 < local_e8);
      }
      local_144 = local_144 + 1;
      local_128 = local_128 + 1;
      uVar11 = local_120[1] - *local_120 >> 3;
    } while ((ulonglong)(longlong)local_144 < uVar11);
    if (((local_140 != (undefined1 *)0x0) || (puStack_138 != (undefined1 *)0x0)) ||
       (local_130 != (undefined1 *)0x0)) {
      FUN_1408a5e50(uVar11,&local_140,param_3);
    }
  }
  if (0xf < local_e0) {
    FUN_140002020(CONCAT71(uStack_f7,local_f8),local_e0 + 1,1);
  }
  return;
}

