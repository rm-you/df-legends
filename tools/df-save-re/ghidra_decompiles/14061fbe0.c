// FUN_14061fbe0 @ 14061fbe0
// callees:
//   -> 140050540 FUN_140050540
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14014b430 FUN_14014b430
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14061fbe0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_68 = 0xfffffffffffffffe;
  local_40 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x72) != '\0') {
    uVar3 = 0;
    if (DAT_1410b67d8 < 10) {
      uVar3 = *(uint *)(&DAT_141c33fb0 + (longlong)(int)DAT_1410b67d8 * 4);
    }
    param_2[2] = 0;
    puVar2 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar2 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar2 = 0;
    if ((*(longlong *)(param_1 + 0x30) == 0) || ((uVar3 & 0xfffffffd) != 0)) {
      local_48 = 0xf;
      local_50 = 0;
      local_60 = 0;
      FUN_14000c8b0(&local_60,param_1,0,0xffffffffffffffff);
      FUN_14014b430(&local_60);
      FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
      bVar4 = *(longlong *)(param_1 + 0x10) != 0;
      if (0xf < local_48) {
        FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
      }
    }
    else {
      FUN_140050540(param_2,1,0x60);
      FUN_14000cb40(param_2,param_1 + 0x20,0,0xffffffffffffffff);
      FUN_140050540(param_2,1,0x27);
      bVar4 = true;
    }
    if ((*(longlong *)(param_1 + 0x30) != 0) && (uVar3 == 1)) {
      if (bVar4) {
        FUN_14000c9f0(param_2,&DAT_140e59864,1);
      }
      FUN_140050540(param_2,1,0x60);
      FUN_14000cb40(param_2,param_1 + 0x20,0,0xffffffffffffffff);
      FUN_140050540(param_2,1,0x27);
      bVar4 = true;
    }
    if ((*(longlong *)(param_1 + 0x30) == 0) || (uVar3 != 2)) {
      iVar1 = *(int *)(param_1 + 0x40);
      if ((iVar1 != -1) || (*(int *)(param_1 + 0x44) != -1)) {
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        iVar1 = *(int *)(param_1 + 0x44);
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        if (local_50 != 0) {
          if (bVar4) {
            FUN_14000c9f0(param_2,&DAT_140e59864,1);
          }
          FUN_14014b430(&local_60);
          FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
          bVar4 = true;
        }
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      if (((*(int *)(param_1 + 0x54) != -1) || (*(int *)(param_1 + 0x48) != -1)) ||
         (*(int *)(param_1 + 0x4c) != -1)) {
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        iVar1 = *(int *)(param_1 + 0x48);
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        iVar1 = *(int *)(param_1 + 0x4c);
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        iVar1 = *(int *)(param_1 + 0x50);
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        iVar1 = *(int *)(param_1 + 0x54);
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        if (local_50 != 0) {
          if (bVar4) {
            FUN_14000c9f0(param_2,&DAT_140e59864,1);
          }
          FUN_14014b430(&local_60);
          FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
          bVar4 = true;
        }
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 != -1) {
        local_48 = 0xf;
        local_50 = 0;
        local_60 = 0;
        if ((-1 < iVar1) &&
           ((ulonglong)(longlong)iVar1 < (ulonglong)(DAT_141d6e1b0 - DAT_141d6e1a8 >> 3))) {
          FUN_14000cb40(&local_60,
                        *(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(DAT_141d6e1d8 + (longlong)*(int *)(param_1 + 0x6c) * 8) +
                           0x50) + (longlong)iVar1 * 8),0,0xffffffffffffffff);
        }
        if (local_50 != 0) {
          if (bVar4) {
            FUN_14000c9f0(param_2,&DAT_140e59864,1);
          }
          FUN_14014b430(&local_60);
          FUN_14000cb40(param_2,&local_60,0,0xffffffffffffffff);
        }
        if (0xf < local_48) {
          FUN_140002020(CONCAT71(uStack_5f,local_60),local_48 + 1,1);
        }
      }
    }
  }
  return;
}

