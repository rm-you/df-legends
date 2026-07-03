// FUN_14083bb60 @ 14083bb60
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 1408464c0 FUN_1408464c0
//   -> 14000c110 FUN_14000c110
//   -> EXTERNAL:00000115 atoi
//   -> 140002020 FUN_140002020
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000cb40 FUN_14000cb40
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14083bb60(undefined8 param_1,longlong *param_2,char param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  int local_e8;
  char local_e0;
  longlong local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined7 uStack_c7;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_d0 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_108;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    lVar10 = 0;
    local_d8 = (longlong)(int)(*(longlong *)(lVar5 + 0x50) - *(longlong *)(lVar5 + 0x48) >> 3);
    if (0 < local_d8) {
      do {
        puVar4 = *(undefined1 **)(*(longlong *)(*param_2 + 0x48) + lVar10 * 8);
        if (&local_88 != puVar4) {
          FUN_14000c8b0(&local_88,puVar4,0,0xffffffffffffffff);
        }
        iVar7 = 0;
        if (local_78 != 0) {
          do {
            puVar4 = &local_88;
            if (0xf < local_70) {
              puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
            }
            if (puVar4[iVar7] == '[') {
              local_90 = 0xf;
              local_98 = 0;
              local_a8 = 0;
              if (local_78 != 0) {
                iVar7 = iVar7 + 1;
                if ((ulonglong)(longlong)iVar7 <= local_78) {
                  puVar4 = &local_88;
                  if (0xf < local_70) {
                    puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
                  }
                  pcVar8 = puVar4 + local_78;
                  for (pcVar6 = puVar4 + iVar7;
                      ((pcVar6 < pcVar8 && (*pcVar6 != ':')) && (*pcVar6 != ']'));
                      pcVar6 = pcVar6 + 1) {
                    FUN_140050540(&local_a8,1);
                    iVar7 = iVar7 + 1;
                  }
                  if (((local_98 != 0) &&
                      ((param_2[1] == 0 ||
                       (local_e8 = iVar7, cVar2 = FUN_1408464c0(), cVar2 == '\0')))) &&
                     (local_e8 = iVar7, local_e0 = param_3,
                     cVar2 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,param_2),
                     cVar2 == '\0')) {
                    if (param_3 == '\0') {
LAB_14083bf1b:
                      FUN_14007b5f0(&local_68,*param_2 + 8,&DAT_140e7aaf8);
                      FUN_14000c9f0(&local_68,"Unrecognized Item Token: ");
                      FUN_14000cb40(&local_68,&local_a8);
                      FUN_14014a240(&local_68);
                      if (0xf < local_50) {
                        FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1);
                      }
                      local_50 = 0xf;
                      local_58 = 0;
                      local_68 = 0;
                    }
                    else {
                      iVar3 = FUN_14000c110(&local_a8,"GENERATED");
                      if (iVar3 == 0) {
                        if (0 < *(int *)(*param_2 + 0x38)) {
                          pbVar1 = *(byte **)(*param_2 + 0x30);
                          *pbVar1 = *pbVar1 | 1;
                        }
                      }
                      else {
                        iVar3 = FUN_14000c110(&local_a8,"SOURCE_HFID");
                        if (iVar3 == 0) {
                          local_b0 = 0xf;
                          local_b8 = 0;
                          local_c8 = '\0';
                          if (local_78 != 0) {
                            iVar7 = iVar7 + 1;
                            if ((ulonglong)(longlong)iVar7 <= local_78) {
                              puVar4 = &local_88;
                              if (0xf < local_70) {
                                puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
                              }
                              puVar9 = &local_88;
                              if (0xf < local_70) {
                                puVar9 = (undefined1 *)CONCAT71(uStack_87,local_88);
                              }
                              pcVar8 = puVar9 + local_78;
                              for (pcVar6 = puVar4 + iVar7;
                                  ((pcVar6 < pcVar8 && (*pcVar6 != ':')) && (*pcVar6 != ']'));
                                  pcVar6 = pcVar6 + 1) {
                                FUN_140050540(&local_c8,1);
                                iVar7 = iVar7 + 1;
                              }
                              if (local_b8 != 0) {
                                pcVar6 = &local_c8;
                                if (0xf < local_b0) {
                                  pcVar6 = (char *)CONCAT71(uStack_c7,local_c8);
                                }
                                iVar3 = atoi(pcVar6);
                                *(int *)(*param_2 + 0x40) = iVar3;
LAB_14083be03:
                                if (0xf < local_b0) {
                                  lVar5 = local_b0 + 1;
                                  goto LAB_14083be10;
                                }
                                goto LAB_14083be1f;
                              }
                            }
                          }
                          if (0xf < local_b0) {
                            lVar5 = local_b0 + 1;
LAB_14083be10:
                            FUN_140002020(CONCAT71(uStack_c7,local_c8),lVar5);
                          }
                        }
                        else {
                          iVar3 = FUN_14000c110(&local_a8,"SOURCE_ENID");
                          if (iVar3 != 0) goto LAB_14083bf1b;
                          local_b0 = 0xf;
                          local_b8 = 0;
                          local_c8 = '\0';
                          if (local_78 != 0) {
                            iVar7 = iVar7 + 1;
                            if ((ulonglong)(longlong)iVar7 <= local_78) {
                              puVar4 = &local_88;
                              if (0xf < local_70) {
                                puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
                              }
                              puVar9 = &local_88;
                              if (0xf < local_70) {
                                puVar9 = (undefined1 *)CONCAT71(uStack_87,local_88);
                              }
                              pcVar8 = puVar9 + local_78;
                              for (pcVar6 = puVar4 + iVar7;
                                  ((pcVar6 < pcVar8 && (*pcVar6 != ':')) && (*pcVar6 != ']'));
                                  pcVar6 = pcVar6 + 1) {
                                FUN_140050540(&local_c8,1);
                                iVar7 = iVar7 + 1;
                              }
                              if (local_b8 != 0) {
                                pcVar6 = &local_c8;
                                if (0xf < local_b0) {
                                  pcVar6 = (char *)CONCAT71(uStack_c7,local_c8);
                                }
                                iVar3 = atoi(pcVar6);
                                *(int *)(*param_2 + 0x44) = iVar3;
                                goto LAB_14083be03;
                              }
                            }
                          }
                          if (0xf < local_b0) {
                            lVar5 = local_b0 + 1;
                            goto LAB_14083be10;
                          }
                        }
LAB_14083be1f:
                        local_b0 = 0xf;
                        local_b8 = 0;
                        local_c8 = '\0';
                      }
                    }
                  }
                }
              }
              if (0xf < local_90) {
                FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1);
              }
            }
            iVar7 = iVar7 + 1;
          } while ((ulonglong)(longlong)iVar7 < local_78);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < local_d8);
    }
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
  }
  return;
}

