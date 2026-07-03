// FUN_140d823e0 @ 140d823e0
// callees:
//   -> 14000c780 FUN_14000c780
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 14000c9f0 FUN_14000c9f0
//   -> 14014a240 FUN_14014a240
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d823e0(longlong param_1,short param_2,short param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_78 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x1160e4) <= (int)param_2)) || (param_3 < 0)) ||
     (*(int *)(param_1 + 0x1160e8) <= (int)param_3)) {
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_14000c780(&local_50,"column update out of bounds: ",0x1d);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14014a650((int)param_2,&local_70);
    FUN_14000cb40(&local_50,&local_70,0,0xffffffffffffffff);
    if (0xf < local_58) {
      FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
    }
    FUN_14000c9f0(&local_50,&DAT_140e6203c,1);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14014a650((int)param_3,&local_70);
    FUN_14000cb40(&local_50,&local_70,0,0xffffffffffffffff);
    if (0xf < local_58) {
      FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
    }
    FUN_14000c9f0(&local_50,&DAT_140e59864,1);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14014a650(*(int *)(param_1 + 0x1160d8) << 4,&local_70);
    FUN_14000cb40(&local_50,&local_70,0,0xffffffffffffffff);
    if (0xf < local_58) {
      FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
    }
    FUN_14000c9f0(&local_50,&DAT_140e6203c,1);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = 0;
    FUN_14014a650(*(int *)(param_1 + 0x1160dc) << 4,&local_70);
    FUN_14000cb40(&local_50,&local_70,0,0xffffffffffffffff);
    if (0xf < local_58) {
      FUN_140002020(CONCAT71(uStack_6f,local_70),local_58 + 1,1);
    }
    FUN_14014a240(&local_50);
    if (0xf < local_38) {
      FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
    }
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x1160d0) + (longlong)(param_2 >> 4) * 8) +
             (longlong)(param_3 >> 4) * 8);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0x1850)) {
        **(byte **)(lVar1 + 0x1848) = **(byte **)(lVar1 + 0x1848) | 1;
      }
      if (0 < *(int *)(param_1 + 0x1266e0)) {
        **(byte **)(param_1 + 0x1266d8) = **(byte **)(param_1 + 0x1266d8) | 1;
      }
    }
  }
  return;
}

