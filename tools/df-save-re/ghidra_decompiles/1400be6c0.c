// FUN_1400be6c0 @ 1400be6c0
// callees:
//   -> EXTERNAL:000000a5 _Lockit
//   -> EXTERNAL:00000094 operator_unsigned___int64
//   -> EXTERNAL:000000a6 _Getgloballocale
//   -> EXTERNAL:000000a9 _Getcat
//   -> 140dfc996 _CxxThrowException
//   -> 140dfb508 _Facet_Register
//   -> EXTERNAL:000000a4 ~_Lockit


_Facet_base * FUN_1400be6c0(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  _Facet_base *p_Var4;
  _Lockit local_res8 [8];
  _Facet_base *local_res10;
  undefined **local_20;
  char *local_18;
  undefined8 local_10;
  
  std::_Lockit::_Lockit(local_res8,0);
  local_res10 = DAT_14127eba0;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    p_Var4 = *(_Facet_base **)(*(longlong *)(lVar1 + 0x10) + _Var2 * 8);
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1400be7b1;
  }
  else {
    p_Var4 = (_Facet_base *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_1400be73f:
    if (p_Var4 != (_Facet_base *)0x0) goto LAB_1400be7b1;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      p_Var4 = *(_Facet_base **)(*(longlong *)(p_Var3 + 0x10) + _Var2 * 8);
      goto LAB_1400be73f;
    }
  }
  p_Var4 = local_res10;
  if (local_res10 == (_Facet_base *)0x0) {
    _Var2 = std::codecvt<char,char,_Mbstatet>::_Getcat((facet **)&local_res10,param_1);
    p_Var4 = local_res10;
    if (_Var2 == 0xffffffffffffffff) {
      local_10 = 0;
      local_18 = "bad cast";
      local_20 = std::bad_cast::vftable;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_20,(ThrowInfo *)&DAT_1410b1568);
    }
    DAT_14127eba0 = local_res10;
    (**(code **)(*(longlong *)local_res10 + 8))(local_res10);
    std::_Facet_Register(p_Var4);
  }
LAB_1400be7b1:
  std::_Lockit::~_Lockit(local_res8);
  return p_Var4;
}

