// FUN_1406d53a0 @ 1406d53a0
// callees:
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bc680 FUN_1405bc680
//   -> 14007b5f0 FUN_14007b5f0
//   -> 14007b6d0 FUN_14007b6d0
//   -> 140002020 FUN_140002020
//   -> 14007b2f0 FUN_14007b2f0
//   -> EXTERNAL:0000010f _unlink
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406d53a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_e0 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_118;
  local_f8 = (undefined8 *)0x0;
  lStack_f0 = 0;
  iVar4 = 0;
  local_e8 = 0;
  local_60 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  FUN_14000c8b0(&local_b8,param_2,0,0xffffffffffffffff);
  FUN_14000c9f0(&local_b8,&DAT_140eed730,4);
  puVar3 = &local_b8;
  if (0xf < local_a0) {
    puVar3 = (undefined1 *)CONCAT71(uStack_b7,local_b8);
  }
  FUN_1405bc680(puVar3,&local_f8);
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = '\0';
  uVar6 = lStack_f0 - (longlong)local_f8 >> 3;
  puVar5 = local_f8;
  if (uVar6 != 0) {
    do {
      uVar1 = FUN_14007b5f0(local_58,param_2,&DAT_140e5c854);
      pcVar2 = (char *)FUN_14007b6d0(&local_98,uVar1,*puVar5);
      if (&local_d8 != pcVar2) {
        if (0xf < local_c0) {
          FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1,1);
        }
        local_c0 = 0xf;
        local_c8 = 0;
        local_d8 = '\0';
        FUN_14007b2f0(&local_d8,pcVar2);
      }
      if (0xf < local_80) {
        FUN_140002020(CONCAT71(uStack_97,local_98),local_80 + 1,1);
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
      if (0xf < local_40) {
        FUN_140002020(local_58[0],local_40 + 1,1);
      }
      pcVar2 = &local_d8;
      if (0xf < local_c0) {
        pcVar2 = (char *)CONCAT71(uStack_d7,local_d8);
      }
      _unlink(pcVar2);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while ((ulonglong)(longlong)iVar4 < uVar6);
  }
  if (0xf < local_c0) {
    FUN_140002020(CONCAT71(uStack_d7,local_d8),local_c0 + 1,1);
  }
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = '\0';
  if (0xf < local_a0) {
    FUN_140002020(CONCAT71(uStack_b7,local_b8),local_a0 + 1,1);
  }
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  FUN_140051e20(&local_f8);
  if (local_f8 != (undefined8 *)0x0) {
    FUN_140002020(local_f8,local_e8 - (longlong)local_f8 >> 3,8);
  }
  return;
}

