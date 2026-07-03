// FUN_14090bd30 @ 14090bd30
// callees:
//   -> 140dfc99c memset
//   -> 1407653b0 FUN_1407653b0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14090bd30(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  undefined4 local_3a0;
  undefined8 *local_398;
  undefined8 local_388;
  undefined8 local_378 [51];
  undefined4 local_1e0;
  undefined8 local_1c8;
  undefined4 local_170;
  int local_168 [5];
  undefined1 local_154 [136];
  undefined8 local_cc [16];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_388 = 0xfffffffffffffffe;
  local_28 = DAT_1410b5008 ^ (ulonglong)auStack_3c8;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x10), lVar3 != 0)) {
    local_378[0] = 0;
    local_1e0 = 0;
    local_1c8 = 0;
    local_170 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_168[0] = 0;
    local_168[1] = 0xffffffff;
    local_168[2] = 0;
    local_168[3] = 0;
    local_168[4] = 0xffffffff;
    memset(local_154,0,0x88);
    lVar5 = 2;
    puVar4 = local_cc;
    do {
      *puVar4 = 0xffffffffffffffff;
      puVar4[1] = 0xffffffffffffffff;
      puVar4[2] = 0xffffffffffffffff;
      puVar1 = puVar4 + 8;
      puVar4[3] = 0xffffffffffffffff;
      puVar4[4] = 0xffffffffffffffff;
      puVar4[5] = 0xffffffffffffffff;
      puVar4[6] = 0xffffffffffffffff;
      puVar4[7] = 0xffffffffffffffff;
      lVar5 = lVar5 + -1;
      puVar4 = puVar1;
    } while (lVar5 != 0);
    *(undefined4 *)puVar1 = 0xffffffff;
    local_398 = local_378;
    local_3a0 = 0;
    local_3a8 = lVar3;
    FUN_1407653b0(lVar2,local_168,0,0xffffffff);
    param_3 = local_168[0] / 10 + param_3;
    if (local_48 != 0) {
      FUN_140002020(local_48,local_38 - local_48 >> 2,4);
    }
  }
  return param_3;
}

