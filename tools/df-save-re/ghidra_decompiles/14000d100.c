// FUN_14000d100 @ 14000d100
// callees:
//   -> EXTERNAL:00000097 _Xbad_alloc
//   -> 140dfb5c4 operator_new
//   -> EXTERNAL:000000f1 _invalid_parameter_noinfo_noreturn


void * FUN_14000d100(undefined8 param_1,ulonglong param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    param_2 = param_2 * 8;
    if (0xfff < param_2) {
      if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pvVar1 = operator_new(param_2 + 0x27);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar2 = (void *)((longlong)pvVar1 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar2 - 8) = pvVar1;
      return pvVar2;
    }
    pvVar1 = operator_new(param_2);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  return pvVar1;
}

