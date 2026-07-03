// FUN_140300b20 @ 140300b20
// callees:
//   -> EXTERNAL:0000008b basic_ios<char,std::char_traits<char>_>
//   -> EXTERNAL:0000007e basic_istream<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008d basic_streambuf<char,std::char_traits<char>_>
//   -> EXTERNAL:000000aa _Init
//   -> 14014d930 FUN_14014d930
//   -> EXTERNAL:000000a0 setstate


basic_istream<char,std::char_traits<char>_> *
FUN_140300b20(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  longlong lVar1;
  
  *(undefined **)param_1 = &DAT_140ebe5a8;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb0));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_14127eb98;
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar1 = FUN_14014d930(this,param_2);
  if (lVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  return param_1;
}

