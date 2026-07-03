// FUN_1400bd590 @ 1400bd590
// callees:
//   -> 1400bdfd0 FUN_1400bdfd0


void FUN_1400bd590(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0xb8) + 4) + -0xb8 + param_1) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0xb8) + 4);
  *(int *)((longlong)iVar1 + -0xbc + param_1) = iVar1 + -0xb8;
  FUN_1400bdfd0(param_1 + -0xa0);
                    /* WARNING: Could not recover jumptable at 0x0001400bd5e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(param_1 + -0x98));
  return;
}

