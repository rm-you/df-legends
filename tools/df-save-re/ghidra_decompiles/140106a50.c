// FUN_140106a50 @ 140106a50
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:00000097 _Xbad_alloc
//   -> 140dfb5c4 operator_new
//   -> EXTERNAL:000000f1 _invalid_parameter_noinfo_noreturn


void FUN_140106a50(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  void *_Dst;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar1 = param_2 * 8;
    if (uVar1 < 0x1000) {
      _Dst = operator_new(uVar1);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pvVar4 = operator_new(uVar1 + 0x27);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst + -8) = pvVar4;
    }
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 3,8);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar3 - lVar2 >> 3) * 8);
  *param_1 = (longlong)_Dst;
  return;
}

