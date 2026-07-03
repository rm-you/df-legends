// FUN_14014a650 @ 14014a650
// callees:
//   -> 14014cdb0 FUN_14014cdb0
//   -> EXTERNAL:000000a2 operator<<
//   -> 14014cd00 FUN_14014cd00
//   -> 14014cac0 FUN_14014cac0
//   -> 140002020 FUN_140002020
//   -> 14014cd30 FUN_14014cd30
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14014a650(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  basic_ostream<char,std::char_traits<char>_> local_128 [136];
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  undefined8 local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_1410b5008 ^ (ulonglong)auStack_158;
  FUN_14014cdb0(local_128);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(local_128,param_1);
  uVar1 = FUN_14014cd00(local_128,local_38);
  FUN_14014cac0(param_2,uVar1);
  if (0xf < local_20) {
    FUN_140002020(local_38[0],local_20 + 1,1);
  }
  FUN_14014cd30(local_a0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  return;
}

