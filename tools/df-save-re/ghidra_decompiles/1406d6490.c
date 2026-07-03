// FUN_1406d6490 @ 1406d6490
// callees:
//   -> 140051b70 FUN_140051b70
//   -> EXTERNAL:0000006d CreateDirectoryA
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bc680 FUN_1405bc680
//   -> 14007b6d0 FUN_14007b6d0
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1406d6cf0 FUN_1406d6cf0
//   -> 1405bc7b0 FUN_1405bc7b0
//   -> 140dfb5c4 operator_new
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406d6490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  LPCSTR lpPathName;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 **ppuVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong local_160;
  undefined8 **local_158;
  undefined8 **ppuStack_150;
  undefined8 **local_148;
  undefined8 **local_140;
  undefined8 **ppuStack_138;
  undefined8 **local_130;
  int local_128;
  undefined8 *local_120;
  longlong lStack_118;
  longlong local_110;
  undefined8 *local_108;
  longlong lStack_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  ulonglong local_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_e8 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_188;
  local_140 = (undefined8 **)0x0;
  ppuStack_138 = (undefined8 **)0x0;
  local_130 = (undefined8 **)0x0;
  local_158 = (undefined8 **)0x0;
  ppuStack_150 = (undefined8 **)0x0;
  local_148 = (undefined8 **)0x0;
  FUN_140051b70(&local_140);
  FUN_140051b70(&local_158,param_3);
  local_128 = 0;
  if ((longlong)ppuStack_138 - (longlong)local_140 >> 3 != 0) {
    local_160 = 0;
    ppuVar6 = ppuStack_150;
    ppuVar7 = ppuStack_138;
    ppuVar9 = local_140;
    do {
      lVar12 = local_160;
      iVar11 = 0;
      lpPathName = (LPCSTR)local_158[local_160];
      if (0xf < *(ulonglong *)(lpPathName + 0x18)) {
        lpPathName = *(LPCSTR *)lpPathName;
      }
      CreateDirectoryA(lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
      local_108 = (undefined8 *)0x0;
      lStack_100 = 0;
      local_f8 = 0;
      FUN_14007b5f0(&local_80,ppuVar9[lVar12],&DAT_140eed7b0);
      FUN_14000c9f0(&local_80,&DAT_140eed7b4,2);
      puVar4 = &local_80;
      if (0xf < local_68) {
        puVar4 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      }
      FUN_1405bc680(puVar4,&local_108);
      ppuVar1 = local_158;
      lVar12 = local_160;
      local_a8 = 0xf;
      local_b0 = 0;
      local_c0[0]._0_1_ = 0;
      local_c8 = 0xf;
      local_d0 = 0;
      local_e0[0]._0_1_ = 0;
      uVar8 = lStack_100 - (longlong)local_108 >> 3;
      puVar10 = local_108;
      if (uVar8 != 0) {
        do {
          uVar2 = FUN_14007b5f0(local_60,ppuVar9[lVar12],&DAT_140e5c854);
          puVar3 = (undefined8 *)FUN_14007b6d0(&local_a0,uVar2,*puVar10);
          if (local_c0 != puVar3) {
            if (0xf < local_a8) {
              FUN_140002020(CONCAT71(local_c0[0]._1_7_,(undefined1)local_c0[0]),local_a8 + 1,1);
            }
            local_a8 = 0xf;
            local_b0 = 0;
            local_c0[0]._0_1_ = 0;
            FUN_14007b2f0(local_c0,puVar3);
          }
          if (0xf < local_88) {
            FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
          }
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          if (0xf < local_48) {
            FUN_140002020(local_60[0],local_48 + 1,1);
          }
          uVar2 = FUN_14007b5f0(local_60,ppuVar1[lVar12],&DAT_140e5c854);
          puVar3 = (undefined8 *)FUN_14007b6d0(&local_a0,uVar2,*puVar10);
          uVar14 = extraout_XMM0_Da;
          if (local_e0 != puVar3) {
            if (0xf < local_c8) {
              FUN_140002020(CONCAT71(local_e0[0]._1_7_,(undefined1)local_e0[0]),local_c8 + 1,1);
            }
            local_c8 = 0xf;
            local_d0 = 0;
            local_e0[0]._0_1_ = 0;
            uVar14 = FUN_14007b2f0(local_e0,puVar3);
          }
          if (0xf < local_88) {
            uVar14 = FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
          }
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          if (0xf < local_48) {
            uVar14 = FUN_140002020(local_60[0],local_48 + 1,1);
          }
          FUN_1406d6cf0(uVar14,local_c0,local_e0);
          iVar11 = iVar11 + 1;
          ppuVar6 = ppuStack_150;
          ppuVar7 = ppuStack_138;
          puVar10 = puVar10 + 1;
        } while ((ulonglong)(longlong)iVar11 < uVar8);
      }
      lVar12 = local_160;
      local_120 = (undefined8 *)0x0;
      lStack_118 = 0;
      local_110 = 0;
      puVar4 = (undefined1 *)FUN_14007b5f0(local_60,ppuVar9[local_160],&DAT_140eed7b0);
      if (&local_80 != puVar4) {
        if (0xf < local_68) {
          FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
        }
        local_68 = 0xf;
        local_70 = 0;
        local_80 = 0;
        FUN_14007b2f0(&local_80,puVar4);
      }
      if (0xf < local_48) {
        FUN_140002020(local_60[0],local_48 + 1,1);
      }
      puVar4 = &local_80;
      if (0xf < local_68) {
        puVar4 = (undefined1 *)CONCAT71(uStack_7f,local_80);
      }
      FUN_1405bc7b0(puVar4,&local_120);
      iVar11 = 0;
      local_f0 = lStack_118 - (longlong)local_120 >> 3;
      puVar10 = local_120;
      if (local_f0 != 0) {
        do {
          uVar2 = FUN_14007b5f0(local_60,ppuVar9[lVar12],&DAT_140e5c854);
          puVar3 = (undefined8 *)FUN_14007b6d0(&local_a0,uVar2,*puVar10);
          if (local_c0 != puVar3) {
            if (0xf < local_a8) {
              FUN_140002020(CONCAT71(local_c0[0]._1_7_,(undefined1)local_c0[0]),local_a8 + 1,1);
            }
            local_a8 = 0xf;
            local_b0 = 0;
            local_c0[0]._0_1_ = 0;
            FUN_14007b2f0(local_c0,puVar3);
          }
          if (0xf < local_88) {
            FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
          }
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          if (0xf < local_48) {
            FUN_140002020(local_60[0],local_48 + 1,1);
          }
          ppuVar1 = local_158;
          uVar2 = FUN_14007b5f0(local_60,local_158[local_160],&DAT_140e5c854);
          puVar3 = (undefined8 *)FUN_14007b6d0(&local_a0,uVar2,*puVar10);
          if (local_e0 != puVar3) {
            if (0xf < local_c8) {
              FUN_140002020(CONCAT71(local_e0[0]._1_7_,(undefined1)local_e0[0]),local_c8 + 1,1);
            }
            local_c8 = 0xf;
            local_d0 = 0;
            local_e0[0]._0_1_ = 0;
            FUN_14007b2f0(local_e0,puVar3);
          }
          if (0xf < local_88) {
            FUN_140002020(CONCAT71(uStack_9f,local_a0),local_88 + 1,1);
          }
          local_88 = 0xf;
          local_90 = 0;
          local_a0 = 0;
          if (0xf < local_48) {
            FUN_140002020(local_60[0],local_48 + 1,1);
          }
          puVar5 = operator_new(0x20);
          puVar5[3] = 0xf;
          puVar5[2] = 0;
          puVar3 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar3 = (undefined8 *)*puVar5;
          }
          *(undefined1 *)puVar3 = 0;
          local_168 = puVar5;
          if (puVar5 != local_c0) {
            FUN_14000c8b0(puVar5,local_c0,0,0xffffffffffffffff);
          }
          if ((&local_168 < ppuVar7) && (ppuVar9 <= &local_168)) {
            lVar12 = (longlong)&local_168 - (longlong)ppuVar9;
            if (ppuVar7 == local_130) {
              FUN_14000c2d0(&local_140,1);
              ppuVar7 = ppuStack_138;
              ppuVar9 = local_140;
            }
            if (ppuVar7 != (undefined8 **)0x0) {
              *ppuVar7 = ppuVar9[lVar12 >> 3];
            }
          }
          else {
            if (ppuVar7 == local_130) {
              FUN_14000c2d0(&local_140,1);
              ppuVar7 = ppuStack_138;
              ppuVar9 = local_140;
            }
            if (ppuVar7 != (undefined8 **)0x0) {
              *ppuVar7 = puVar5;
            }
          }
          ppuVar7 = ppuVar7 + 1;
          ppuStack_138 = ppuVar7;
          puVar5 = operator_new(0x20);
          puVar5[3] = 0xf;
          puVar5[2] = 0;
          puVar3 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar3 = (undefined8 *)*puVar5;
          }
          *(undefined1 *)puVar3 = 0;
          local_168 = puVar5;
          if (puVar5 != local_e0) {
            FUN_14000c8b0(puVar5,local_e0,0,0xffffffffffffffff);
          }
          if ((&local_168 < ppuVar6) && (ppuVar1 <= &local_168)) {
            ppuVar13 = ppuVar1;
            if (ppuVar6 == local_148) {
              FUN_14000c2d0(&local_158,1);
              ppuVar6 = ppuStack_150;
              ppuVar13 = local_158;
            }
            if (ppuVar6 != (undefined8 **)0x0) {
              *ppuVar6 = ppuVar13[(longlong)&local_168 - (longlong)ppuVar1 >> 3];
            }
          }
          else {
            if (ppuVar6 == local_148) {
              FUN_14000c2d0(&local_158,1);
              ppuVar6 = ppuStack_150;
            }
            if (ppuVar6 != (undefined8 **)0x0) {
              *ppuVar6 = puVar5;
            }
          }
          ppuVar6 = ppuVar6 + 1;
          iVar11 = iVar11 + 1;
          puVar10 = puVar10 + 1;
          lVar12 = local_160;
          ppuStack_150 = ppuVar6;
        } while ((ulonglong)(longlong)iVar11 < local_f0);
      }
      FUN_140051e20(&local_120);
      if (local_120 != (undefined8 *)0x0) {
        FUN_140002020(local_120,local_110 - (longlong)local_120 >> 3,8);
      }
      if (0xf < local_c8) {
        FUN_140002020(CONCAT71(local_e0[0]._1_7_,(undefined1)local_e0[0]),local_c8 + 1,1);
      }
      local_c8 = 0xf;
      local_d0 = 0;
      local_e0[0]._0_1_ = 0;
      if (0xf < local_a8) {
        FUN_140002020(CONCAT71(local_c0[0]._1_7_,(undefined1)local_c0[0]),local_a8 + 1,1);
      }
      local_a8 = 0xf;
      local_b0 = 0;
      local_c0[0]._0_1_ = 0;
      if (0xf < local_68) {
        FUN_140002020(CONCAT71(uStack_7f,local_80),local_68 + 1,1);
      }
      local_68 = 0xf;
      local_70 = 0;
      local_80 = 0;
      FUN_140051e20(&local_108);
      if (local_108 != (undefined8 *)0x0) {
        FUN_140002020(local_108,local_f8 - (longlong)local_108 >> 3,8);
      }
      local_128 = local_128 + 1;
      local_160 = lVar12 + 1;
    } while ((ulonglong)(longlong)local_128 <
             (ulonglong)((longlong)ppuVar7 - (longlong)ppuVar9 >> 3));
  }
  FUN_140051e20(&local_158);
  if (local_158 != (undefined8 **)0x0) {
    FUN_140002020(local_158,(longlong)local_148 - (longlong)local_158 >> 3,8);
  }
  FUN_140051e20(&local_140);
  if (local_140 != (undefined8 **)0x0) {
    FUN_140002020(local_140,(longlong)local_130 - (longlong)local_140 >> 3,8);
  }
  return;
}

