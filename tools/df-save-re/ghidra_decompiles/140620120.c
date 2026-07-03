// FUN_140620120 @ 140620120
// callees:
//   -> 140050540 FUN_140050540
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014b430 FUN_14014b430
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14089b150 FUN_14089b150
//   -> 14007b5f0 FUN_14007b5f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140620120(longlong param_1,undefined8 *param_2,char param_3,char param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  int local_a8;
  char local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined7 uStack_87;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_90 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x72) == '\0') {
    return;
  }
  uVar6 = 0;
  if (DAT_1410b67d8 < 10) {
    uVar6 = *(uint *)(&DAT_141c33fb0 + (longlong)(int)DAT_1410b67d8 * 4);
  }
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  local_98 = param_4;
  if ((*(longlong *)(param_1 + 0x30) == 0) || ((uVar6 & 0xfffffffd) != 0)) {
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    FUN_14000c8b0(&local_88,param_1,0,0xffffffffffffffff);
    if (param_3 != '\0') {
      FUN_14014b430(&local_88);
    }
    FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
    bVar7 = *(longlong *)(param_1 + 0x10) != 0;
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
  }
  else {
    FUN_140050540(param_2,1,0x60);
    FUN_14000cb40(param_2,param_1 + 0x20,0,0xffffffffffffffff);
    FUN_140050540(param_2,1,0x27);
    bVar7 = true;
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar6 == 1)) {
    if (bVar7) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    FUN_140050540(param_2,1,0x60);
    FUN_14000cb40(param_2,param_1 + 0x20,0,0xffffffffffffffff);
    FUN_140050540(param_2,1,0x27);
    bVar7 = true;
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar6 == 2)) {
    return;
  }
  if (((*(int *)(param_1 + 0x40) != -1) || (*(int *)(param_1 + 0x44) != -1)) &&
     ((!bVar7 || (local_98 == '\0')))) {
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    local_a8 = (int)*(short *)(param_1 + 0x5c);
    FUN_14089b150();
    local_a8 = (int)*(short *)(param_1 + 0x5e);
    FUN_14089b150();
    if (local_78 != 0) {
      if (bVar7) {
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      if (param_3 != '\0') {
        FUN_14014b430(&local_88);
      }
      FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
      bVar7 = true;
    }
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
  }
  if ((((*(int *)(param_1 + 0x54) == -1) && (*(int *)(param_1 + 0x48) == -1)) &&
      (*(int *)(param_1 + 0x4c) == -1)) || ((bVar7 && (local_98 != '\0')))) goto LAB_1406206c5;
  bVar1 = false;
  local_70 = 0xf;
  local_78 = 0;
  local_88 = 0;
  local_a8 = (int)*(short *)(param_1 + 0x60);
  FUN_14089b150();
  if (local_78 != 0) {
    if (bVar7) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    if ((param_2[2] == 0) && (param_3 == '\x01')) {
      FUN_14000c9f0(param_2,&DAT_140e5de34,4);
LAB_140620458:
      FUN_14014b430(&local_88);
    }
    else {
      FUN_14000c9f0(param_2,&DAT_140e59f70,4);
      if (param_3 != '\0') goto LAB_140620458;
    }
    bVar1 = true;
    FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
    bVar7 = true;
    local_78 = 0;
    puVar4 = &local_88;
    if (0xf < local_70) {
      puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
    }
    *puVar4 = 0;
  }
  local_a8 = (int)*(short *)(param_1 + 0x62);
  FUN_14089b150();
  if (local_78 != 0) {
    if (bVar7) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    if (!bVar1) {
      if ((param_2[2] != 0) || (puVar5 = &DAT_140e5de34, param_3 != '\x01')) {
        puVar5 = &DAT_140e59f70;
      }
      FUN_14000c9f0(param_2,puVar5,4);
      bVar1 = true;
    }
    if (param_3 != '\0') {
      FUN_14014b430(&local_88);
    }
    FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
    bVar7 = true;
    local_78 = 0;
    puVar4 = &local_88;
    if (0xf < local_70) {
      puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
    }
    *puVar4 = 0;
  }
  local_a8 = (int)*(short *)(param_1 + 100);
  FUN_14089b150();
  if (local_78 != 0) {
    if (bVar7) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    if (!bVar1) {
      if ((param_2[2] != 0) || (puVar5 = &DAT_140e5de34, param_3 != '\x01')) {
        puVar5 = &DAT_140e59f70;
      }
      FUN_14000c9f0(param_2,puVar5,4);
      bVar1 = true;
    }
    if (param_3 != '\0') {
      FUN_14014b430(&local_88);
    }
    uVar3 = FUN_14007b5f0(local_68,&local_88,&DAT_140e7abd4);
    FUN_14000cb40(param_2,uVar3,0,0xffffffffffffffff);
    if (0xf < local_50) {
      FUN_140002020(local_68[0],local_50 + 1,1);
    }
    bVar7 = false;
    local_78 = 0;
    puVar4 = &local_88;
    if (0xf < local_70) {
      puVar4 = (undefined1 *)CONCAT71(uStack_87,local_88);
    }
    *puVar4 = 0;
  }
  local_a8 = (int)*(short *)(param_1 + 0x66);
  FUN_14089b150();
  if (local_78 != 0) {
    if (bVar7) {
      FUN_14000c9f0(param_2,&DAT_140e59864,1);
    }
    if (bVar1) {
LAB_140620688:
      if (param_3 != '\0') goto LAB_14062068d;
    }
    else {
      if ((param_2[2] != 0) || (param_3 != '\x01')) {
        FUN_14000c9f0(param_2,&DAT_140e59f70,4);
        goto LAB_140620688;
      }
      FUN_14000c9f0(param_2,&DAT_140e5de34,4);
LAB_14062068d:
      FUN_14014b430(&local_88);
    }
    FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
    bVar7 = true;
  }
  if (0xf < local_70) {
    FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
  }
LAB_1406206c5:
  if ((*(int *)(param_1 + 0x58) != -1) && ((!bVar7 || (local_98 == '\0')))) {
    local_70 = 0xf;
    local_78 = 0;
    local_88 = 0;
    local_a8 = (int)*(short *)(param_1 + 0x68);
    FUN_14089b150();
    if (local_78 != 0) {
      if (bVar7) {
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      puVar5 = &DAT_140ee701c;
      if (param_2[2] != 0) {
        puVar5 = &DAT_140ee7020;
      }
      FUN_14000c9f0(param_2,puVar5,3);
      if (param_3 != '\0') {
        FUN_14014b430(&local_88);
      }
      FUN_14000cb40(param_2,&local_88,0,0xffffffffffffffff);
    }
    if (0xf < local_70) {
      FUN_140002020(CONCAT71(uStack_87,local_88),local_70 + 1,1);
    }
  }
  return;
}

