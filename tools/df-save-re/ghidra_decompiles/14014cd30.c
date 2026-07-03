// FUN_14014cd30 @ 14014cd30
// callees:
//   -> 14014da00 FUN_14014da00
//   -> EXTERNAL:000000af ~basic_streambuf<char,std::char_traits<char>_>


void FUN_14014cd30(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x88) + 4) + -0x88 + param_1) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x88) + 4);
  *(int *)((longlong)iVar1 + -0x8c + param_1) = iVar1 + -0x88;
  *(undefined ***)(param_1 + -0x80) =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_14014da00(param_1 + -0x80);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
                    /* WARNING: Could not recover jumptable at 0x00014014cd9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(param_1 + -0x78));
  return;
}

