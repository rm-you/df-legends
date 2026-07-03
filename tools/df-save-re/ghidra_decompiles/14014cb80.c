// FUN_14014cb80 @ 14014cb80
// callees:
//   -> 1400bdfd0 FUN_1400bdfd0


void FUN_14014cb80(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0xa8) + 4) + -0xa8 + param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xa8) + 4);
  *(int *)((longlong)iVar1 + -0xac + param_1) = iVar1 + -0xa8;
  FUN_1400bdfd0(param_1 + -0xa0);
                    /* WARNING: Could not recover jumptable at 0x00014014cbd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + -0x98));
  return;
}

