// FUN_140300ca0 @ 140300ca0
// callees:
//   -> EXTERNAL:00000082 _Ipfx
//   -> EXTERNAL:0000007f sgetc
//   -> EXTERNAL:00000080 sbumpc
//   -> 140050540 FUN_140050540
//   -> EXTERNAL:00000081 snextc
//   -> EXTERNAL:000000a0 setstate


basic_istream<char,std::char_traits<char>_> *
FUN_140300ca0(basic_istream<char,std::char_traits<char>_> *param_1,undefined8 *param_2,byte param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar3 = 0;
  bVar1 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar2 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,true);
  if (bVar2) {
    param_2[2] = 0;
    puVar4 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar4 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar4 = 0;
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_3) {
        bVar1 = true;
        std::basic_streambuf<char,std::char_traits<char>_>::sbumpc
                  (*(basic_streambuf<char,std::char_traits<char>_> **)
                    (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
        uVar3 = 0;
        goto LAB_140300d7c;
      }
      if (0xfffffffffffffffd < (ulonglong)param_2[2]) {
        uVar3 = 2;
        goto LAB_140300d7c;
      }
      FUN_140050540(param_2,1);
      bVar1 = true;
      uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
    uVar3 = 1;
LAB_140300d7c:
    if (bVar1) goto LAB_140300dcc;
  }
  uVar3 = uVar3 | 2;
LAB_140300dcc:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar3,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}

