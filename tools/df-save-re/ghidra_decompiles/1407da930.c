// FUN_1407da930 @ 1407da930
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1407db680 FUN_1407db680
//   -> 140dfb5c4 operator_new
//   -> 1407db0b0 FUN_1407db0b0
//   -> 140002020 FUN_140002020
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 1407dad90 FUN_1407dad90
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407da930(undefined8 param_1,longlong *param_2,undefined1 param_3)

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
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_d8 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  local_b0 = 0xf;
  iVar8 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_138 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_110 = 0;
  local_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e0 = 0;
  local_158 = (undefined1 *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_130 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_178 = 1;
  local_168 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_170 = 8;
    do {
      iVar5 = 0;
      if (&local_c8 != *(undefined1 **)(local_170 + *local_168)) {
        FUN_14000c8b0(&local_c8,*(undefined1 **)(local_170 + *local_168),0,0xffffffffffffffff);
      }
      if (local_b8 != 0) {
        do {
          puVar3 = &local_c8;
          if (0xf < local_b0) {
            puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
          }
          if (puVar3[iVar5] == '[') {
            uVar10 = 0xf;
            local_50 = 0xf;
            local_58 = 0;
            local_68 = 0;
            local_174 = iVar5;
            if (local_b8 != 0) {
              iVar5 = iVar5 + 1;
              if ((ulonglong)(longlong)iVar5 <= local_b8) {
                puVar3 = &local_c8;
                if (0xf < local_b0) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                }
                pcVar6 = puVar3 + local_b8;
                pcVar4 = puVar3 + iVar5;
                uVar10 = local_50;
                for (; ((local_50 = uVar10, pcVar4 < pcVar6 && (*pcVar4 != ':')) && (*pcVar4 != ']')
                       ); pcVar4 = pcVar4 + 1) {
                  FUN_140050540(&local_68,1);
                  iVar5 = iVar5 + 1;
                  uVar10 = local_50;
                }
                if (local_58 != 0) {
                  iVar2 = FUN_14000c110(&local_68,"INTERACTION");
                  if (iVar2 == 0) {
                    FUN_1407db680(extraout_XMM0_Da,&local_158);
                    local_90 = 0xf;
                    local_98 = 0;
                    local_a8 = 0;
                    uVar9 = 0xf;
                    if (local_b8 != 0) {
                      iVar5 = iVar5 + 1;
                      if ((ulonglong)(longlong)iVar5 <= local_b8) {
                        puVar3 = &local_c8;
                        if (0xf < local_b0) {
                          puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                        }
                        puVar7 = &local_c8;
                        if (0xf < local_b0) {
                          puVar7 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                        }
                        pcVar6 = puVar7 + local_b8;
                        uVar9 = local_90;
                        for (pcVar4 = puVar3 + iVar5;
                            ((local_90 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                            (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                          FUN_140050540(&local_a8,1);
                          iVar5 = iVar5 + 1;
                          uVar9 = local_90;
                        }
                        if (local_98 != 0) {
                          local_158 = (undefined1 *)0x0;
                          uStack_150 = 0;
                          local_148 = 0;
                          uStack_140 = 0;
                          local_130 = local_138;
                          local_118 = uStack_120;
                          local_100 = local_108;
                          local_e8 = uStack_f0;
                          local_d0 = operator_new(0xa0);
                          local_158 = (undefined1 *)FUN_1407db0b0(local_d0);
                          if (local_158 != &local_a8) {
                            FUN_14000c8b0(local_158,&local_a8,0,0xffffffffffffffff);
                            uVar9 = local_90;
                          }
                        }
                      }
                    }
                    if (0xf < uVar9) {
                      FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar9 + 1,1);
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_67,local_68),uVar10 + 1,1);
                    }
                    goto LAB_1407dacdb;
                  }
                  if (local_158 != (undefined1 *)0x0) {
                    local_70 = 0xf;
                    local_78 = 0;
                    local_88 = 0;
                    cVar1 = FUN_14014a750(&local_88,&local_c8,&local_174);
                    if (cVar1 != '\0') {
                      FUN_1402802d0(local_158 + 0x28,iVar8,&local_88);
                      iVar8 = iVar8 + 1;
                    }
                    iVar5 = local_174;
                    if (0xf < local_70) {
                      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
                    }
                    local_70 = 0xf;
                    local_78 = 0;
                    local_88 = 0;
                  }
                }
              }
            }
            if (0xf < uVar10) {
              FUN_140002020(CONCAT71(uStack_67,local_68),uVar10 + 1,1);
            }
          }
LAB_1407dacdb:
          iVar5 = iVar5 + 1;
        } while ((ulonglong)(longlong)iVar5 < local_b8);
      }
      local_178 = local_178 + 1;
      local_170 = local_170 + 8;
      uVar10 = local_168[1] - *local_168 >> 3;
    } while ((ulonglong)(longlong)local_178 < uVar10);
    if (local_158 != (undefined1 *)0x0) {
      FUN_1407db680(uVar10,&local_158,param_3);
    }
  }
  FUN_1407dad90(&local_158);
  if (0xf < local_b0) {
    FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
  }
  return;
}

