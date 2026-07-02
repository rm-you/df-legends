// FUN_14014a3b0 @ 14014a3b0
// callees:
//   -> 14014cbe0 FUN_14014cbe0
//   -> 14000d180 FUN_14000d180
//   -> EXTERNAL:000000a1 operator<<
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014cb80 FUN_14014cb80
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>


void FUN_14014a3b0(undefined8 *param_1)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  longlong lVar1;
  longlong local_118;
  undefined1 local_110 [128];
  longlong local_90;
  basic_ios<char,std::char_traits<char>_> local_70 [104];
  
  if (param_1[2] != 0) {
    FUN_14014cbe0(&local_118,"gamelog.txt");
    if (local_90 != 0) {
      if (0xf < (ulonglong)param_1[3]) {
        param_1 = (undefined8 *)*param_1;
      }
      this = (basic_ostream<char,std::char_traits<char>_> *)FUN_14000d180(&local_118,param_1);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,FUN_14000d6f0);
    }
    lVar1 = FUN_1400be490(local_110);
    if (lVar1 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (local_110 + (longlong)*(int *)(local_118 + 4) + -8),2,false);
    }
    FUN_14014cb80(local_70);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_70)
    ;
  }
  return;
}

