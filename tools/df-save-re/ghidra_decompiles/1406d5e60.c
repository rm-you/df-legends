// FUN_1406d5e60 @ 1406d5e60
// callees:
//   -> EXTERNAL:0000006d CreateDirectoryA
//   -> 1400be580 FUN_1400be580
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14000c780 FUN_14000c780
//   -> 14007b5f0 FUN_14007b5f0
//   -> 1406d6490 FUN_1406d6490
//   -> 140002020 FUN_140002020
//   -> 1405bc680 FUN_1405bc680
//   -> 14007b2f0 FUN_14007b2f0
//   -> 1406dbb90 FUN_1406dbb90
//   -> 1406d6cf0 FUN_1406d6cf0
//   -> EXTERNAL:0000010f _unlink
//   -> 140ae8de0 FUN_140ae8de0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1405bc7b0 FUN_1405bc7b0
//   -> 14000c110 FUN_14000c110
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406d5e60(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  LPCSTR **lpPathName;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 local_110;
  char local_108;
  undefined7 uStack_107;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  undefined8 *local_88;
  undefined8 *puStack_80;
  longlong local_78;
  ulonglong local_70;
  LPCSTR *local_68 [3];
  ulonglong local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_110 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_148;
  CreateDirectoryA("data",(LPSECURITY_ATTRIBUTES)0x0);
  CreateDirectoryA("data/save",(LPSECURITY_ATTRIBUTES)0x0);
  FUN_1400be580(local_68,"data/save/",&DAT_141ebec68);
  lpPathName = local_68;
  if (0xf < local_50) {
    lpPathName = (LPCSTR **)local_68[0];
  }
  CreateDirectoryA((LPCSTR)lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
  FUN_14000c9f0(local_68,&DAT_140e5c854,1);
  iVar5 = 0;
  if (DAT_1410b67dc == 3) {
    local_70 = 0xf;
    local_78 = 0;
    local_88 = (undefined8 *)((ulonglong)local_88 & 0xffffffffffffff00);
    FUN_14000c780(&local_88,&DAT_140eed72c,3);
    uVar7 = FUN_14007b5f0(&local_e8,local_68,&DAT_140eed72c);
    FUN_1406d6490(uVar7,&local_88,&local_e8);
    if (0xf < local_d0) {
      FUN_140002020(CONCAT71(uStack_e7,local_e8),local_d0 + 1,1);
    }
    local_d0 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    if (0xf < local_70) {
      FUN_140002020(local_88,local_70 + 1,1);
    }
  }
  local_128 = (undefined8 *)0x0;
  lStack_120 = 0;
  local_118 = 0;
  FUN_1405bc680("data/save/current/*.dat",&local_128);
  FUN_1405bc680("data/save/current/*.sav",&local_128);
  local_90 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  local_f0 = 0xf;
  local_f8 = 0;
  local_108 = '\0';
  uVar6 = lStack_120 - (longlong)local_128 >> 3;
  puVar4 = local_128;
  if (uVar6 != 0) {
    do {
      puVar2 = (undefined1 *)FUN_1400be580(&local_c8,"data/save/current/",*puVar4);
      if (&local_a8 != puVar2) {
        if (0xf < local_90) {
          FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
        }
        local_90 = 0xf;
        local_98 = 0;
        local_a8 = 0;
        FUN_14007b2f0(&local_a8,puVar2);
      }
      if (0xf < local_b0) {
        FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
      }
      pcVar3 = (char *)FUN_1406dbb90(&local_c8,local_68,*puVar4);
      uVar7 = extraout_XMM0_Da;
      if (&local_108 != pcVar3) {
        if (0xf < local_f0) {
          FUN_140002020(CONCAT71(uStack_107,local_108),local_f0 + 1,1);
        }
        local_f0 = 0xf;
        local_f8 = 0;
        local_108 = '\0';
        uVar7 = FUN_14007b2f0(&local_108,pcVar3);
      }
      if (0xf < local_b0) {
        uVar7 = FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
      }
      FUN_1406d6cf0(uVar7,&local_a8,&local_108);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while ((ulonglong)(longlong)iVar5 < uVar6);
  }
  if (param_3 == '\0') {
    pcVar3 = (char *)FUN_14007b5f0(&local_c8,local_68,"world.sav");
    if (&local_108 != pcVar3) {
      if (0xf < local_f0) {
        FUN_140002020(CONCAT71(uStack_107,local_108),local_f0 + 1,1);
      }
      local_f0 = 0xf;
      local_f8 = 0;
      local_108 = '\0';
      FUN_14007b2f0(&local_108,pcVar3);
    }
  }
  else {
    pcVar3 = (char *)FUN_14007b5f0(&local_c8,local_68,"world.dat");
    if (&local_108 != pcVar3) {
      if (0xf < local_f0) {
        FUN_140002020(CONCAT71(uStack_107,local_108),local_f0 + 1,1);
      }
      local_f0 = 0xf;
      local_f8 = 0;
      local_108 = '\0';
      FUN_14007b2f0(&local_108,pcVar3);
    }
  }
  if (0xf < local_b0) {
    FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
  }
  pcVar3 = &local_108;
  if (0xf < local_f0) {
    pcVar3 = (char *)CONCAT71(uStack_107,local_108);
  }
  _unlink(pcVar3);
  FUN_140ae8de0(DAT_141d6cfd0);
  if (DAT_1410b67d8 - 4U < 2) {
    local_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    local_78 = 0;
    local_d0 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    FUN_14000c8b0(&local_e8,local_68,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_e8,&DAT_140eed730,4);
    puVar2 = &local_e8;
    if (0xf < local_d0) {
      puVar2 = (undefined1 *)CONCAT71(uStack_e7,local_e8);
    }
    FUN_1405bc7b0(puVar2,&local_88);
    puVar1 = puStack_80;
    for (puVar4 = local_88; puVar4 < puVar1; puVar4 = puVar4 + 1) {
      iVar5 = FUN_14000c110(*puVar4,&DAT_140eed72c);
      if (iVar5 == 0) goto LAB_1406d6363;
    }
    local_b0 = 0xf;
    local_b8 = 0;
    local_c8 = 0;
    FUN_14000c780(&local_c8,&DAT_140eed72c,3);
    uVar7 = FUN_14007b5f0(&local_48,local_68,&DAT_140eed72c);
    FUN_1406d6490(uVar7,&local_c8,&local_48);
    if (0xf < local_30) {
      FUN_140002020(CONCAT71(uStack_47,local_48),local_30 + 1,1);
    }
    local_30 = 0xf;
    local_38 = 0;
    local_48 = 0;
    if (0xf < local_b0) {
      FUN_140002020(CONCAT71(uStack_c7,local_c8),local_b0 + 1,1);
    }
LAB_1406d6363:
    if (0xf < local_d0) {
      FUN_140002020(CONCAT71(uStack_e7,local_e8),local_d0 + 1,1);
    }
    local_d0 = 0xf;
    local_d8 = 0;
    local_e8 = 0;
    FUN_140051e20(&local_88);
    if (local_88 != (undefined8 *)0x0) {
      FUN_140002020(local_88,local_78 - (longlong)local_88 >> 3,8);
    }
  }
  if (0xf < local_f0) {
    FUN_140002020(CONCAT71(uStack_107,local_108),local_f0 + 1,1);
  }
  local_f0 = 0xf;
  local_f8 = 0;
  local_108 = '\0';
  if (0xf < local_90) {
    FUN_140002020(CONCAT71(uStack_a7,local_a8),local_90 + 1,1);
  }
  local_90 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  FUN_140051e20(&local_128);
  if (local_128 != (undefined8 *)0x0) {
    FUN_140002020(local_128,local_118 - (longlong)local_128 >> 3,8);
  }
  if (0xf < local_50) {
    FUN_140002020(local_68[0],local_50 + 1,1);
  }
  return;
}

