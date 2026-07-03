// FUN_140300ac0 @ 140300ac0
// callees:
//   -> 1400bdfd0 FUN_1400bdfd0


void FUN_140300ac0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0 + param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb0) + 4);
  *(int *)((longlong)iVar1 + -0xb4 + param_1) = iVar1 + -0xb0;
  FUN_1400bdfd0(param_1 + -0xa0);
                    /* WARNING: Could not recover jumptable at 0x000140300b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(param_1 + -0x98));
  return;
}

