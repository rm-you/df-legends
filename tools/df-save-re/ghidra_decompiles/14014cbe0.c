// FUN_14014cbe0 @ 14014cbe0
// callees:
//   -> EXTERNAL:0000008b basic_ios<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008a basic_ostream<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008d basic_streambuf<char,std::char_traits<char>_>
//   -> EXTERNAL:000000aa _Init
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000a0 setstate


basic_ostream<char,std::char_traits<char>_> *
FUN_14014cbe0(basic_ostream<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong lVar1;
  
  *(undefined **)param_1 = &DAT_140e7ee90;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xa8));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x84] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  param_1[0x79] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x7c) = DAT_14127eb98;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = FUN_14014d930(this,param_2);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}

