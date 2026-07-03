// FUN_14014a5c0 @ 14014a5c0
// callees:
//   -> 14014a650 FUN_14014a650
//   -> 14000cb40 FUN_14000cb40
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14014a5c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_38 = 0xfffffffffffffffe;
  local_10 = DAT_1410b5008 ^ (ulonglong)auStack_58;
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  FUN_14014a650(param_1,&local_30);
  FUN_14000cb40(param_2,&local_30,0,0xffffffffffffffff);
  if (0xf < local_18) {
    FUN_140002020(CONCAT71(uStack_2f,local_30),local_18 + 1,1);
  }
  return;
}

