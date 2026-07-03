// FUN_1400be490 @ 1400be490
// callees:
//   -> 1400be1d0 FUN_1400be1d0
//   -> EXTERNAL:0000010d fclose
//   -> EXTERNAL:000000aa _Init


basic_streambuf<char,std::char_traits<char>_> *
FUN_1400be490(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  int iVar2;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  else {
    cVar1 = FUN_1400be1d0();
    pbVar3 = param_1;
    if (cVar1 == '\0') {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    iVar2 = fclose(*(FILE **)(param_1 + 0x80));
    if (iVar2 != 0) {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
  }
  param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  *(undefined8 *)(param_1 + 0x74) = DAT_14127eb98;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return pbVar3;
}

