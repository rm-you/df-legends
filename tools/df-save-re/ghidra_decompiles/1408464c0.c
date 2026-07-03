// FUN_1408464c0 @ 1408464c0
// callees:
//   -> 14000c110 FUN_14000c110
//   -> 14014aad0 FUN_14014aad0
//   -> EXTERNAL:00000115 atoi
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1408464c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  char local_60;
  undefined7 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  char local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_68 = 0xfffffffffffffffe;
  local_20 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  iVar2 = FUN_14000c110(param_4,"ATTACK_PREPARE_AND_RECOVER");
  if (iVar2 == 0) {
    local_28 = 0xf;
    local_30 = 0;
    local_40 = '\0';
    local_48 = 0xf;
    local_50 = 0;
    local_60 = '\0';
    cVar1 = FUN_14014aad0(&local_40,param_3,&stack0x00000028,0x3a);
    if (cVar1 != '\0') {
      cVar1 = FUN_14014aad0(&local_60,param_3,&stack0x00000028,0x3a);
      if (cVar1 != '\0') {
        pcVar5 = &local_40;
        if (0xf < local_28) {
          pcVar5 = (char *)CONCAT71(uStack_3f,local_40);
        }
        iVar2 = atoi(pcVar5);
        pcVar5 = &local_60;
        if (0xf < local_48) {
          pcVar5 = (char *)CONCAT71(uStack_5f,local_60);
        }
        iVar3 = atoi(pcVar5);
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        *(int *)(param_1 + 0x70) = iVar2;
        *(int *)(param_1 + 0x74) = iVar3;
      }
    }
    if (0xf < local_48) {
      FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
    }
    local_48 = 0xf;
    local_50 = 0;
    local_60 = '\0';
    if (0xf < local_28) {
      FUN_140002020(CONCAT71(uStack_3f,local_40),local_28 + 1,1);
    }
    uVar4 = 1;
  }
  else {
    iVar2 = FUN_14000c110(param_4,"ATTACK_FLAG_INDEPENDENT_MULTIATTACK");
    if (iVar2 == 0) {
      *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
      uVar4 = 1;
    }
    else {
      iVar2 = FUN_14000c110(param_4,"ATTACK_FLAG_BAD_MULTIATTACK");
      if (iVar2 == 0) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 2;
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

