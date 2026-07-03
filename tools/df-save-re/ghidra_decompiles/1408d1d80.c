// FUN_1408d1d80 @ 1408d1d80
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 140050540 FUN_140050540
//   -> 14000c110 FUN_14000c110
//   -> 1408d2530 FUN_1408d2530
//   -> 140dfb5c4 operator_new
//   -> 1408d19f0 FUN_1408d19f0
//   -> 1401069c0 FUN_1401069c0
//   -> 14000bae0 FUN_14000bae0
//   -> 140002020 FUN_140002020
//   -> 14014a750 FUN_14014a750
//   -> 1402802d0 FUN_1402802d0
//   -> 1408d2430 FUN_1408d2430
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408d1d80(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  int local_170;
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined1 **local_158;
  undefined1 **local_150;
  undefined1 **local_148;
  undefined1 **ppuStack_140;
  undefined1 **local_138;
  undefined1 **local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_d8;
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
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_198;
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  local_158 = (undefined1 **)0x0;
  local_148 = (undefined1 **)0x0;
  ppuStack_140 = (undefined1 **)0x0;
  local_130 = (undefined1 **)0x0;
  local_128 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_168 = (undefined1 *)0x0;
  puStack_160 = (undefined1 *)0x0;
  local_150 = (undefined1 **)0x0;
  local_138 = (undefined1 **)0x0;
  local_120 = 0;
  local_108 = 0;
  local_f0 = 0;
  iVar9 = 0;
  local_170 = 1;
  local_d0 = param_2;
  if (1 < (ulonglong)(param_2[1] - *param_2 >> 3)) {
    local_d8 = 1;
    do {
      puVar5 = *(undefined1 **)(*local_d0 + local_d8 * 8);
      if (&local_b8 != puVar5) {
        FUN_14000c8b0(&local_b8,puVar5,0,0xffffffffffffffff);
      }
      iVar6 = 0;
      if (local_a8 != 0) {
        do {
          puVar5 = &local_b8;
          if (0xf < local_a0) {
            puVar5 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
          }
          if (puVar5[iVar6] == '[') {
            local_178 = (undefined1 *)CONCAT44(local_178._4_4_,iVar6);
            uVar11 = 0xf;
            local_40 = 0xf;
            local_48 = 0;
            local_58 = 0;
            if (local_a8 != 0) {
              iVar6 = iVar6 + 1;
              if ((ulonglong)(longlong)iVar6 <= local_a8) {
                puVar5 = &local_b8;
                if (0xf < local_a0) {
                  puVar5 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                }
                pcVar7 = puVar5 + local_a8;
                uVar11 = local_40;
                for (pcVar3 = puVar5 + iVar6;
                    ((local_40 = uVar11, pcVar3 < pcVar7 && (*pcVar3 != ':')) && (*pcVar3 != ']'));
                    pcVar3 = pcVar3 + 1) {
                  FUN_140050540(&local_58,1);
                  iVar6 = iVar6 + 1;
                  uVar11 = local_40;
                }
                if (local_48 != 0) {
                  iVar2 = FUN_14000c110(&local_58,"INORGANIC");
                  if (iVar2 == 0) {
                    FUN_1408d2530(extraout_XMM0_Da,&local_168);
                    local_80 = 0xf;
                    local_88 = 0;
                    local_98 = 0;
                    if (local_a8 == 0) {
LAB_1408d2290:
                      local_168 = (undefined1 *)0x0;
                      puStack_160 = (undefined1 *)0x0;
                      local_150 = local_158;
                      local_138 = ppuStack_140;
                      local_120 = local_128;
                      local_108 = uStack_110;
                      local_f0 = local_f8;
                      uVar10 = local_80;
                    }
                    else {
                      iVar6 = iVar6 + 1;
                      if (local_a8 < (ulonglong)(longlong)iVar6) goto LAB_1408d2290;
                      puVar5 = &local_b8;
                      if (0xf < local_a0) {
                        puVar5 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                      }
                      puVar8 = &local_b8;
                      if (0xf < local_a0) {
                        puVar8 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
                      }
                      pcVar7 = puVar8 + local_a8;
                      uVar10 = local_80;
                      for (pcVar3 = puVar5 + iVar6;
                          ((local_80 = uVar10, pcVar3 < pcVar7 && (*pcVar3 != ':')) &&
                          (*pcVar3 != ']')); pcVar3 = pcVar3 + 1) {
                        FUN_140050540(&local_98,1);
                        iVar6 = iVar6 + 1;
                        uVar10 = local_80;
                      }
                      if (local_88 == 0) goto LAB_1408d2290;
                      local_168 = (undefined1 *)0x0;
                      puStack_160 = (undefined1 *)0x0;
                      local_150 = local_158;
                      local_138 = ppuStack_140;
                      local_120 = local_128;
                      local_108 = uStack_110;
                      local_f0 = local_f8;
                      local_c0 = operator_new(0x850);
                      local_168 = (undefined1 *)FUN_1408d19f0(local_c0);
                      if (local_168 != &local_98) {
                        FUN_14000c8b0(local_168,&local_98,0,0xffffffffffffffff);
                        uVar10 = local_80;
                      }
                      puStack_160 = local_168 + 0x1a8;
                      if ((&local_168 < DAT_141d6dbe8) && (DAT_141d6dbe0 <= &local_168)) {
                        lVar4 = (longlong)&local_168 - (longlong)DAT_141d6dbe0;
                        if (DAT_141d6dbe8 == DAT_141d6dbf0) {
                          FUN_1401069c0(&DAT_141d6dbe0);
                        }
                        if (DAT_141d6dbe8 != (undefined1 **)0x0) {
                          *DAT_141d6dbe8 = DAT_141d6dbe0[lVar4 >> 3];
                        }
                      }
                      else {
                        if (DAT_141d6dbe8 == DAT_141d6dbf0) {
                          FUN_1401069c0(&DAT_141d6dbe0);
                        }
                        if (DAT_141d6dbe8 != (undefined1 **)0x0) {
                          *DAT_141d6dbe8 = local_168;
                        }
                      }
                      DAT_141d6dbe8 = DAT_141d6dbe8 + 1;
                      if ((&puStack_160 < local_150) && (local_158 <= &puStack_160)) {
                        lVar4 = (longlong)&puStack_160 - (longlong)local_158;
                        if (local_150 == local_148) {
                          FUN_1401069c0(&local_158);
                        }
                        if (local_150 != (undefined1 **)0x0) {
                          puVar5 = local_158[lVar4 >> 3];
LAB_1408d21be:
                          *local_150 = puVar5;
                        }
                      }
                      else {
                        if (local_150 == local_148) {
                          FUN_1401069c0(&local_158);
                        }
                        puVar5 = puStack_160;
                        if (local_150 != (undefined1 **)0x0) goto LAB_1408d21be;
                      }
                      local_150 = local_150 + 1;
                      puVar5 = puStack_160 + 0x4d0;
                      local_178 = puVar5;
                      if ((&local_178 < local_138) && (ppuStack_140 <= &local_178)) {
                        lVar4 = (longlong)&local_178 - (longlong)ppuStack_140;
                        if (local_138 == local_130) {
                          FUN_1401069c0(&ppuStack_140);
                        }
                        if (local_138 != (undefined1 **)0x0) {
                          *local_138 = ppuStack_140[lVar4 >> 3];
                        }
                      }
                      else {
                        if (local_138 == local_130) {
                          FUN_1401069c0(&ppuStack_140);
                        }
                        if (local_138 != (undefined1 **)0x0) {
                          *local_138 = puVar5;
                        }
                      }
                      local_138 = local_138 + 1;
                      local_178 = (undefined1 *)0x0;
                      FUN_14000bae0(&local_128,&local_178);
                      local_178 = (undefined1 *)0x0;
                      FUN_14000bae0(&uStack_110,&local_178);
                    }
                    if (0xf < uVar10) {
                      FUN_140002020(CONCAT71(uStack_97,local_98),uVar10 + 1);
                    }
                  }
                  else if (local_168 != (undefined1 *)0x0) {
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                    cVar1 = FUN_14014a750(&local_78,&local_b8);
                    if (cVar1 != '\0') {
                      FUN_1402802d0(local_168 + 0x20,iVar9);
                      iVar9 = iVar9 + 1;
                    }
                    iVar6 = (int)local_178;
                    if (0xf < local_60) {
                      FUN_140002020(CONCAT71(uStack_77,local_78),local_60 + 1);
                    }
                    local_60 = 0xf;
                    local_68 = 0;
                    local_78 = 0;
                  }
                }
              }
            }
            if (0xf < uVar11) {
              FUN_140002020(CONCAT71(uStack_57,local_58),uVar11 + 1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ulonglong)(longlong)iVar6 < local_a8);
      }
      local_170 = local_170 + 1;
      local_d8 = local_d8 + 1;
      uVar11 = local_d0[1] - *local_d0 >> 3;
    } while ((ulonglong)(longlong)local_170 < uVar11);
    if (local_168 != (undefined1 *)0x0) {
      FUN_1408d2530(uVar11,&local_168,param_3);
    }
  }
  FUN_1408d2430(&local_168);
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  return;
}

