// FUN_140a33c20 @ 140a33c20
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 140a34050 FUN_140a34050
//   -> 140dfb5c4 operator_new
//   -> 140a38310 FUN_140a38310
//   -> 140002020 FUN_140002020
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140a33c20(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  int local_124;
  int local_120;
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
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
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_148;
  local_b0 = 0xf;
  local_b8 = 0;
  local_c8 = 0;
  local_100 = (undefined1 *)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  iVar9 = 0;
  local_124 = 1;
  local_128 = param_3;
  local_110 = param_2;
  local_108 = param_1;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_118 = 8;
    puVar4 = (undefined1 *)0x0;
    do {
      if (&local_c8 != *(undefined1 **)(local_118 + *param_2)) {
        FUN_14000c8b0(&local_c8,*(undefined1 **)(local_118 + *param_2),0,0xffffffffffffffff);
        param_2 = local_110;
      }
      iVar6 = 0;
      if (local_b8 != 0) {
        do {
          puVar3 = &local_c8;
          if (0xf < local_b0) {
            puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
          }
          if (puVar3[iVar6] == '[') {
            uVar11 = 0xf;
            local_50 = 0xf;
            local_58 = 0;
            local_68 = 0;
            local_120 = iVar6;
            if (local_b8 != 0) {
              iVar6 = iVar6 + 1;
              if ((ulonglong)(longlong)iVar6 <= local_b8) {
                puVar3 = &local_c8;
                if (0xf < local_b0) {
                  puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                }
                pcVar7 = puVar3 + local_b8;
                pcVar5 = puVar3 + iVar6;
                uVar11 = local_50;
                for (; ((local_50 = uVar11, pcVar5 < pcVar7 && (*pcVar5 != ':')) && (*pcVar5 != ']')
                       ); pcVar5 = pcVar5 + 1) {
                  FUN_140050540(&local_68,1);
                  iVar6 = iVar6 + 1;
                  uVar11 = local_50;
                }
                if (local_58 != 0) {
                  iVar2 = FUN_14000c110(&local_68,"REACTION");
                  if (iVar2 == 0) {
                    FUN_140a34050(local_108,&local_100);
                    local_90 = 0xf;
                    local_98 = 0;
                    local_a8 = 0;
                    puVar4 = local_100;
                    uVar10 = local_90;
                    if (local_b8 != 0) {
                      iVar6 = iVar6 + 1;
                      if ((ulonglong)(longlong)iVar6 <= local_b8) {
                        puVar3 = &local_c8;
                        if (0xf < local_b0) {
                          puVar3 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                        }
                        puVar8 = &local_c8;
                        if (0xf < local_b0) {
                          puVar8 = (undefined1 *)CONCAT71(uStack_c7,local_c8);
                        }
                        pcVar7 = puVar8 + local_b8;
                        for (pcVar5 = puVar3 + iVar6;
                            ((local_100 = puVar4, local_90 = uVar10, pcVar5 < pcVar7 &&
                             (*pcVar5 != ':')) && (*pcVar5 != ']')); pcVar5 = pcVar5 + 1) {
                          FUN_140050540(&local_a8,1);
                          iVar6 = iVar6 + 1;
                          uVar10 = local_90;
                          puVar4 = local_100;
                        }
                        if (local_98 != 0) {
                          uStack_f8 = 0;
                          local_f0 = 0;
                          uStack_e8 = 0;
                          local_e0 = 0;
                          local_d0 = operator_new(0x188);
                          puVar4 = (undefined1 *)FUN_140a38310(local_d0);
                          local_100 = puVar4;
                          if (puVar4 != &local_a8) {
                            FUN_14000c8b0(puVar4,&local_a8,0,0xffffffffffffffff);
                            uVar10 = local_90;
                          }
                        }
                      }
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_a7,local_a8),uVar10 + 1);
                    }
                    param_3 = local_128;
                    if (0xf < uVar11) {
                      FUN_140002020(CONCAT71(uStack_67,local_68),uVar11 + 1);
                      param_3 = local_128;
                    }
                    goto LAB_140a33fa8;
                  }
                  if (puVar4 != (undefined1 *)0x0) {
                    local_70 = 0xf;
                    local_78 = 0;
                    local_88 = 0;
                    cVar1 = FUN_14014a750(&local_88,&local_c8);
                    if (cVar1 != '\0') {
                      FUN_1402802d0(puVar4 + 0x128,iVar9);
                      iVar9 = iVar9 + 1;
                    }
                    iVar6 = local_120;
                    if (0xf < local_70) {
                      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1);
                    }
                    local_70 = 0xf;
                    local_78 = 0;
                    local_88 = 0;
                  }
                }
              }
            }
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_67,local_68),uVar11 + 1);
            }
          }
LAB_140a33fa8:
          iVar6 = iVar6 + 1;
          param_2 = local_110;
        } while ((ulonglong)(longlong)iVar6 < local_b8);
      }
      local_124 = local_124 + 1;
      local_118 = local_118 + 8;
    } while ((ulonglong)(longlong)local_124 < (ulonglong)(param_2[1] - *param_2 >> 3));
    if (puVar4 != (undefined1 *)0x0) {
      FUN_140a34050(local_108,&local_100,param_3);
    }
  }
  if (0xf < local_b0) {
    FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
  }
  return;
}

