// FUN_1405bbda0 @ 1405bbda0
// callees:
//   -> 1400be490 FUN_1400be490
//   -> EXTERNAL:000000a0 setstate
//   -> EXTERNAL:00000092 clear
//   -> 14014d930 FUN_14014d930


bool FUN_1405bbda0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar2 = FUN_1400be490(param_1 + 0x20);
      if (lVar2 == 0) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 4) + param_1 + 8),2,false);
      }
    }
    plVar1 = (longlong *)(param_1 + 8);
    std::basic_ios<char,std::char_traits<char>_>::clear
              ((basic_ios<char,std::char_traits<char>_> *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 4) + 8 + param_1),0,false);
    lVar2 = FUN_14014d930(param_1 + 0x20);
    if (lVar2 == 0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1),2,false);
    }
    else {
      std::basic_ios<char,std::char_traits<char>_>::clear
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)*(int *)(*plVar1 + 4) + (longlong)plVar1),0,false);
    }
    return *(longlong *)(param_1 + 0xa0) != 0;
  }
  return false;
}

