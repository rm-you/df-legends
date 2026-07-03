// FUN_1404bd320 @ 1404bd320
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1404bd7c0 FUN_1404bd7c0
//   -> 140dfb5c4 operator_new
//   -> 1404bb680 FUN_1404bb680
//   -> 140002020 FUN_140002020
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404bd320(undefined8 param_1,longlong *param_2,undefined1 param_3)

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
  undefined1 auStack_138 [32];
  int local_118;
  int local_114;
  longlong local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
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
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_138;
  local_a0 = 0xf;
  iVar8 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 0;
  local_108 = (undefined1 *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_118 = 1;
  local_d0 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_110 = 8;
    do {
      iVar5 = 0;
      if (&local_b8 != *(undefined1 **)(local_110 + *local_d0)) {
        FUN_14000c8b0(&local_b8,*(undefined1 **)(local_110 + *local_d0),0,0xffffffffffffffff);
      }
      if (local_a8 != 0) {
        do {
          puVar3 = &local_b8;
          if (0xf < local_a0) {
            puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
          }
          if (puVar3[iVar5] == '[') {
            uVar10 = 0xf;
            local_40 = 0xf;
            local_48 = 0;
            local_58 = 0;
            local_114 = iVar5;
            if (local_a8 != 0) {
              iVar5 = iVar5 + 1;
              if ((ulonglong)(longlong)iVar5 <= local_a8) {
                puVar3 = &local_b8;
                if (0xf < local_a0) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                }
                pcVar6 = puVar3 + local_a8;
                pcVar4 = puVar3 + iVar5;
                uVar10 = local_40;
                for (; ((local_40 = uVar10, pcVar4 < pcVar6 && (*pcVar4 != ':')) && (*pcVar4 != ']')
                       ); pcVar4 = pcVar4 + 1) {
                  FUN_140050540(&local_58,1);
                  iVar5 = iVar5 + 1;
                  uVar10 = local_40;
                }
                if (local_48 != 0) {
                  iVar2 = FUN_14000c110(&local_58,"ENTITY");
                  if (iVar2 == 0) {
                    FUN_1404bd7c0(extraout_XMM0_Da,&local_108);
                    local_80 = 0xf;
                    local_88 = 0;
                    local_98 = 0;
                    uVar9 = 0xf;
                    if (local_a8 != 0) {
                      iVar5 = iVar5 + 1;
                      if ((ulonglong)(longlong)iVar5 <= local_a8) {
                        puVar3 = &local_b8;
                        if (0xf < local_a0) {
                          puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                        }
                        puVar7 = &local_b8;
                        if (0xf < local_a0) {
                          puVar7 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                        }
                        pcVar6 = puVar7 + local_a8;
                        uVar9 = local_80;
                        for (pcVar4 = puVar3 + iVar5;
                            ((local_80 = uVar9, pcVar4 < pcVar6 && (*pcVar4 != ':')) &&
                            (*pcVar4 != ']')); pcVar4 = pcVar4 + 1) {
                          FUN_140050540(&local_98,1);
                          iVar5 = iVar5 + 1;
                          uVar9 = local_80;
                        }
                        if (local_88 != 0) {
                          local_108 = (undefined1 *)0x0;
                          uStack_100 = 0;
                          local_f8 = 0;
                          lStack_e8 = local_f0;
                          local_c0 = operator_new(0x3ba0);
                          local_108 = (undefined1 *)FUN_1404bb680(local_c0);
                          if (local_108 != &local_98) {
                            FUN_14000c8b0(local_108,&local_98,0,0xffffffffffffffff);
                            uVar9 = local_80;
                          }
                        }
                      }
                    }
                    if (0xf < uVar9) {
                      FUN_140002020(CONCAT71(uStack_97,local_98),uVar9 + 1,1);
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_57,local_58),uVar10 + 1,1);
                    }
                    goto LAB_1404bd6a3;
                  }
                  if (local_108 != (undefined1 *)0x0) {
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                    cVar1 = FUN_14014a750(&local_78,&local_b8,&local_114);
                    if (cVar1 != '\0') {
                      FUN_1402802d0(local_108 + 0x28,iVar8,&local_78);
                      iVar8 = iVar8 + 1;
                    }
                    iVar5 = local_114;
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
            if (0xf < uVar10) {
              FUN_140002020(CONCAT71(uStack_57,local_58),uVar10 + 1,1);
            }
          }
LAB_1404bd6a3:
          iVar5 = iVar5 + 1;
        } while ((ulonglong)(longlong)iVar5 < local_a8);
      }
      local_118 = local_118 + 1;
      local_110 = local_110 + 8;
      uVar10 = local_d0[1] - *local_d0 >> 3;
    } while ((ulonglong)(longlong)local_118 < uVar10);
    if (local_108 != (undefined1 *)0x0) {
      FUN_1404bd7c0(uVar10,&local_108,param_3);
    }
  }
  if (local_f0 != 0) {
    FUN_140002020(local_f0,local_e0 - local_f0 >> 2,4);
    local_f0 = 0;
    lStack_e8 = 0;
    local_e0 = 0;
  }
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  return;
}

