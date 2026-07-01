// FUN_1405bbd50 @ 1405bbd50
// callees:
//   -> 1400be490 FUN_1400be490


void FUN_1405bbd50(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = FUN_1400be490(param_1 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405bbd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 4) + param_1 + 8),2,false);
      return;
    }
  }
  return;
}

