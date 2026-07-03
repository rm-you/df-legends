// FUN_14000d180 @ 14000d180
// callees:
//   -> EXTERNAL:0000009f flush
//   -> EXTERNAL:0000009d sputc
//   -> EXTERNAL:0000009a sputn
//   -> EXTERNAL:000000a0 setstate
//   -> EXTERNAL:00000096 uncaught_exception
//   -> EXTERNAL:0000009e _Osfx


basic_ostream<char,std::char_traits<char>_> *
FUN_14000d180(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  bool bVar1;
  int iVar2;
  __int64 _Var3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = 0;
  if (*param_2 == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != '\0');
  }
  lVar5 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar5 < 1) || (lVar5 <= lVar6)) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar5 - lVar6;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  if (((*(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) == 0) &&
      (this = *(basic_ostream<char,std::char_traits<char>_> **)
               (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50),
      this != (basic_ostream<char,std::char_traits<char>_> *)0x0)) && (this != param_1)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(this);
  }
  if (*(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x10) != 0) {
    iVar4 = 4;
    goto LAB_14000d2f7;
  }
  if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_14000d284:
    _Var3 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       lVar6);
    if (_Var3 == lVar6) {
      for (; 0 < lVar5; lVar5 = lVar5 + -1) {
        iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar2 == -1) goto LAB_14000d2d3;
      }
    }
    else {
LAB_14000d2d3:
      iVar4 = 4;
    }
  }
  else {
    for (; 0 < lVar5; lVar5 = lVar5 + -1) {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                         (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
      if (iVar2 == -1) {
        iVar4 = 4;
        break;
      }
    }
    if (iVar4 == 0) goto LAB_14000d284;
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
LAB_14000d2f7:
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  bVar1 = std::uncaught_exception();
  if (!bVar1) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}

