// FUN_14014cdb0 @ 14014cdb0
// callees:
//   -> EXTERNAL:0000008b basic_ios<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008a basic_ostream<char,std::char_traits<char>_>
//   -> EXTERNAL:0000008d basic_streambuf<char,std::char_traits<char>_>


basic_ostream<char,std::char_traits<char>_> *
FUN_14014cdb0(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  basic_streambuf<char,std::char_traits<char>_> *this;
  
  *(undefined **)param_1 = &DAT_140e7ee98;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0x88));
  this = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (param_1,this,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this);
  *(undefined ***)this =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 4;
  return param_1;
}

