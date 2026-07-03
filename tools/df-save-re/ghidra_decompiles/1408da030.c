// FUN_1408da030 @ 1408da030
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1408d3ba0 FUN_1408d3ba0
//   -> 140dfb5c4 operator_new
//   -> 1408dde50 FUN_1408dde50
//   -> 140050410 FUN_140050410
//   -> 140002020 FUN_140002020
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 1408d2430 FUN_1408d2430
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408da030(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_198 [32];
  int local_178;
  int local_174;
  longlong local_170;
  longlong *local_168;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_c8 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  local_a0 = 0xf;
  iVar9 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_158 = (undefined1 *)0x0;
  uStack_150 = 0;
  local_d0 = 0;
  local_178 = 1;
  local_168 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_170 = 8;
    do {
      iVar6 = 0;
      if (&local_b8 != *(undefined1 **)(local_170 + *local_168)) {
        FUN_14000c8b0(&local_b8,*(undefined1 **)(local_170 + *local_168),0,0xffffffffffffffff);
      }
      if (local_a8 != 0) {
        do {
          puVar3 = &local_b8;
          if (0xf < local_a0) {
            puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
          }
          if (puVar3[iVar6] == '[') {
            uVar11 = 0xf;
            local_40 = 0xf;
            local_48 = 0;
            local_58 = 0;
            local_174 = iVar6;
            if (local_a8 != 0) {
              iVar6 = iVar6 + 1;
              if ((ulonglong)(longlong)iVar6 <= local_a8) {
                puVar3 = &local_b8;
                if (0xf < local_a0) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                }
                pcVar7 = puVar3 + local_a8;
                pcVar4 = puVar3 + iVar6;
                uVar11 = local_40;
                for (; ((local_40 = uVar11, pcVar4 < pcVar7 && (*pcVar4 != ':')) && (*pcVar4 != ']')
                       ); pcVar4 = pcVar4 + 1) {
                  FUN_140050540(&local_58,1);
                  iVar6 = iVar6 + 1;
                  uVar11 = local_40;
                }
                if (local_48 != 0) {
                  iVar2 = FUN_14000c110(&local_58,"PLANT");
                  if (iVar2 == 0) {
                    FUN_1408d3ba0(extraout_XMM0_Da,&local_158);
                    uVar10 = 0xf;
                    local_80 = 0xf;
                    local_88 = 0;
                    local_98 = 0;
                    if (local_a8 != 0) {
                      iVar6 = iVar6 + 1;
                      if ((ulonglong)(longlong)iVar6 <= local_a8) {
                        puVar3 = &local_b8;
                        if (0xf < local_a0) {
                          puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                        }
                        puVar8 = &local_b8;
                        if (0xf < local_a0) {
                          puVar8 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                        }
                        pcVar7 = puVar8 + local_a8;
                        uVar10 = local_80;
                        for (pcVar4 = puVar3 + iVar6;
                            ((local_80 = uVar10, pcVar4 < pcVar7 && (*pcVar4 != ':')) &&
                            (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                          FUN_140050540(&local_98,1);
                          iVar6 = iVar6 + 1;
                          uVar10 = local_80;
                        }
                        if (local_88 != 0) {
                          local_158 = (undefined1 *)0x0;
                          uStack_150 = 0;
                          local_d0 = 0;
                          uStack_140 = local_148;
                          local_128 = uStack_130;
                          uStack_110 = local_118;
                          local_f8 = uStack_100;
                          uStack_e0 = local_e8;
                          local_c0 = operator_new(0x748);
                          local_158 = (undefined1 *)FUN_1408dde50(local_c0);
                          if (local_158 != &local_98) {
                            FUN_14000c8b0(local_158,&local_98,0,0xffffffffffffffff);
                            uVar10 = local_80;
                          }
                          if ((&local_158 < DAT_141d6dc18) && (DAT_141d6dc10 <= &local_158)) {
                            lVar5 = (longlong)&local_158 - (longlong)DAT_141d6dc10;
                            if (DAT_141d6dc18 == DAT_141d6dc20) {
                              FUN_140050410(&DAT_141d6dc10);
                            }
                            if (DAT_141d6dc18 != (undefined1 **)0x0) {
                              puVar3 = DAT_141d6dc10[lVar5 >> 3];
LAB_1408da399:
                              *DAT_141d6dc18 = puVar3;
                            }
                          }
                          else {
                            if (DAT_141d6dc18 == DAT_141d6dc20) {
                              FUN_140050410(&DAT_141d6dc10);
                            }
                            puVar3 = local_158;
                            if (DAT_141d6dc18 != (undefined1 **)0x0) goto LAB_1408da399;
                          }
                          DAT_141d6dc18 = DAT_141d6dc18 + 1;
                        }
                      }
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_97,local_98),uVar10 + 1,1);
                    }
                    if (0xf < uVar11) {
                      FUN_140002020(CONCAT71(uStack_57,local_58),uVar11 + 1,1);
                    }
                    goto LAB_1408da47e;
                  }
                  if (local_158 != (undefined1 *)0x0) {
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                    cVar1 = FUN_14014a750(&local_78,&local_b8,&local_174);
                    if (cVar1 != '\0') {
                      FUN_1402802d0(local_158 + 0x28,iVar9,&local_78);
                      iVar9 = iVar9 + 1;
                    }
                    iVar6 = local_174;
                    if (0xf < local_60) {
                      FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1,1);
                    }
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                  }
                }
              }
            }
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_57,local_58),uVar11 + 1,1);
            }
          }
LAB_1408da47e:
          iVar6 = iVar6 + 1;
        } while ((ulonglong)(longlong)iVar6 < local_a8);
      }
      local_178 = local_178 + 1;
      local_170 = local_170 + 8;
      uVar11 = local_168[1] - *local_168 >> 3;
    } while ((ulonglong)(longlong)local_178 < uVar11);
    if (local_158 != (undefined1 *)0x0) {
      FUN_1408d3ba0(uVar11,&local_158,param_3);
    }
  }
  FUN_1408d2430(&local_158);
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  return;
}

