// FUN_14014a480 @ 14014a480
// callees:
//   -> 14014cbe0 FUN_14014cbe0
//   -> 14000d180 FUN_14000d180
//   -> EXTERNAL:000000a1 operator<<
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> 14014cb80 FUN_14014cb80
//   -> EXTERNAL:000000ae ~basic_ios<char,std::char_traits<char>_>


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014a480(longlong param_1)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong local_118;
  undefined1 local_110 [128];
  longlong local_90;
  basic_ios<char,std::char_traits<char>_> local_70 [104];
  
  if (param_1 != 0) {
    FUN_14014cbe0(&local_118,"errorlog.txt");
    if (local_90 != 0) {
      if (DAT_141c3d428 != 0) {
        puVar3 = &DAT_141c3d418;
        if (0xf < DAT_141c3d430) {
          puVar3 = _DAT_141c3d418;
        }
        pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_14000d180(&local_118,puVar3);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,FUN_14000d6f0);
        DAT_141c3d428 = 0;
        puVar3 = &DAT_141c3d418;
        if (0xf < DAT_141c3d430) {
          puVar3 = _DAT_141c3d418;
        }
        *puVar3 = 0;
      }
      pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_14000d180(&local_118,param_1);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,FUN_14000d6f0);
    }
    lVar2 = FUN_1400be490(local_110);
    if (lVar2 == 0) {
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

