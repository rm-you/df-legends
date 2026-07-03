// FUN_140071170 @ 140071170
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000d100 FUN_14000d100


longlong * FUN_140071170(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    pvVar1 = (void *)*param_2;
    pvVar2 = (void *)param_2[1];
    if (pvVar1 == pvVar2) {
      param_1[1] = *param_1;
      return param_1;
    }
    _Dst = (void *)*param_1;
    uVar4 = (longlong)pvVar2 - (longlong)pvVar1 >> 3;
    uVar7 = param_1[1] - (longlong)_Dst >> 3;
    if (uVar4 <= uVar7) {
      memmove(_Dst,pvVar1,(longlong)pvVar2 - (longlong)pvVar1);
      param_1[1] = *param_1 + (param_2[1] - *param_2 >> 3) * 8;
      return param_1;
    }
    uVar6 = param_1[2] - (longlong)_Dst >> 3;
    if (uVar4 <= uVar6) {
      pvVar2 = (void *)((longlong)pvVar1 + uVar7 * 8);
      memmove(_Dst,pvVar1,(longlong)pvVar2 - (longlong)pvVar1);
      lVar5 = param_2[1];
      pvVar1 = (void *)param_1[1];
      memmove(pvVar1,pvVar2,lVar5 - (longlong)pvVar2);
      param_1[1] = (lVar5 - (longlong)pvVar2) + (longlong)pvVar1;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      FUN_140002020(_Dst,uVar6,8);
    }
    lVar5 = param_2[1];
    lVar3 = *param_2;
    *param_1 = 0;
    uVar4 = lVar5 - lVar3 >> 3;
    param_1[1] = 0;
    param_1[2] = 0;
    if (uVar4 != 0) {
      if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      lVar5 = FUN_14000d100();
      *param_1 = lVar5;
      param_1[1] = lVar5;
      param_1[2] = *param_1 + uVar4 * 8;
      pvVar1 = (void *)*param_1;
      _Size = param_2[1] - *param_2;
      memmove(pvVar1,(void *)*param_2,_Size);
      param_1[1] = _Size + (longlong)pvVar1;
    }
  }
  return param_1;
}

