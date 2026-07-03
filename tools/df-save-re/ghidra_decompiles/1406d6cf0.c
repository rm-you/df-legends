// FUN_1406d6cf0 @ 1406d6cf0
// callees:
//   -> 140300b20 FUN_140300b20
//   -> 14014cbe0 FUN_14014cbe0
//   -> EXTERNAL:00000072 operator<<
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014cb80 FUN_14014cb80
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>
//   -> 140300ac0 FUN_140300ac0


void FUN_1406d6cf0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong local_228;
  undefined1 local_220 [128];
  longlong local_1a0;
  basic_ios<char,std::char_traits<char>_> local_180 [104];
  longlong local_118 [2];
  basic_streambuf<char,std::char_traits<char>_> local_108 [128];
  longlong local_88;
  basic_ios<char,std::char_traits<char>_> local_68 [96];
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140300b20(local_118,param_2,0x20);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_14014cbe0(&local_228,param_3);
  if ((local_88 != 0) && (local_1a0 != 0)) {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)&local_228,local_108);
  }
  lVar1 = FUN_1400be490(local_108);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)),2,false);
  }
  lVar1 = FUN_1400be490(local_220);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (local_220 + (longlong)*(int *)(local_228 + 4) + -8),2,false);
  }
  FUN_14014cb80(local_180);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_180);
  FUN_140300ac0(local_68);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_68);
  return;
}

