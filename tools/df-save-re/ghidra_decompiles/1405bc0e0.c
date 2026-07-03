// FUN_1405bc0e0 @ 1405bc0e0
// callees:
//   -> EXTERNAL:0000008b basic_ios<char,std::char_traits<char>_>
//   -> EXTERNAL:00000074 basic_iostream<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008d basic_streambuf<char,std::char_traits<char>_>
//   -> EXTERNAL:000000aa _Init


basic_iostream<char,std::char_traits<char>_> *
FUN_1405bc0e0(basic_iostream<char,std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  
  *(undefined **)param_1 = &DAT_140edfc10;
  *(undefined **)(param_1 + 0x10) = &DAT_140e7ee90;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb8));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (param_1,this);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x94] = (basic_iostream<char,std::char_traits<char>_>)0x0;
  param_1[0x89] = (basic_iostream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x8c) = DAT_14127eb98;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}

