// FUN_14014d930 @ 14014d930
// callees:
//   -> EXTERNAL:0000008e _Fiopen
//   -> 1400be3f0 FUN_1400be3f0
//   -> EXTERNAL:0000008c getloc
//   -> 1400be6c0 FUN_1400be6c0
//   -> EXTERNAL:00000095 always_noconv
//   -> EXTERNAL:000000aa _Init


basic_streambuf<char,std::char_traits<char>_> *
FUN_14014d930(basic_streambuf<char,std::char_traits<char>_> *param_1,char *param_2,int param_3)

{
  bool bVar1;
  _iobuf *p_Var2;
  undefined8 uVar3;
  codecvt_base *this;
  undefined8 *puVar4;
  longlong *local_18;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var2 = std::_Fiopen(param_2,param_3,0x40), p_Var2 != (_iobuf *)0x0)) {
    FUN_1400be3f0(param_1,p_Var2,1);
    uVar3 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
    this = (codecvt_base *)FUN_1400be6c0(uVar3);
    bVar1 = std::codecvt_base::always_noconv(this);
    if (bVar1) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(codecvt_base **)(param_1 + 0x68) = this;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    }
    if ((local_18 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*local_18 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  else {
    param_1 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  return param_1;
}

