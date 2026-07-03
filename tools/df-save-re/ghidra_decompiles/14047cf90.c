// FUN_14047cf90 @ 14047cf90
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfc99c memset
//   -> EXTERNAL:00000097 _Xbad_alloc
//   -> 140dfb5c4 operator_new
//   -> EXTERNAL:000000f1 _invalid_parameter_noinfo_noreturn
//   -> 140002020 FUN_140002020
//   -> EXTERNAL:00000099 _Xlength_error


void FUN_14047cf90(longlong param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *_Dst;
  size_t sVar5;
  size_t sVar6;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  uVar4 = 1;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  for (; (uVar4 == uVar3 || (uVar4 < 8)); uVar4 = uVar4 * 2) {
    if (0x1555555555555555 - uVar4 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("deque<T> too long");
    }
  }
  uVar4 = uVar4 - uVar3;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar3 = uVar3 + uVar4;
  if (uVar3 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    uVar3 = uVar3 * 8;
    if (uVar3 < 0x1000) {
      _Dst = operator_new(uVar3);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    else {
      if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      pvVar2 = operator_new(uVar3 + 0x27);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)_Dst + -8) = pvVar2;
    }
  }
  sVar6 = uVar1 * 8;
  pvVar2 = (void *)(*(longlong *)(param_1 + 8) + sVar6);
  sVar5 = (*(longlong *)(param_1 + 0x10) * 8 - (longlong)pvVar2) + *(longlong *)(param_1 + 8);
  memmove((void *)(sVar6 + (longlong)_Dst),pvVar2,sVar5);
  pvVar2 = (void *)(sVar5 + (longlong)(sVar6 + (longlong)_Dst));
  if (uVar4 < uVar1) {
    sVar5 = uVar4 * 8;
    memmove(pvVar2,*(void **)(param_1 + 8),sVar5);
    pvVar2 = (void *)(sVar5 + *(longlong *)(param_1 + 8));
    sVar6 = (*(longlong *)(param_1 + 8) - (longlong)pvVar2) + sVar6;
    memmove(_Dst,pvVar2,sVar6);
    pvVar2 = (void *)(sVar6 + (longlong)_Dst);
  }
  else {
    memmove(pvVar2,*(void **)(param_1 + 8),sVar6);
    memset((void *)(sVar6 + (longlong)pvVar2),0,(uVar4 - uVar1) * 8);
    pvVar2 = _Dst;
    sVar5 = sVar6;
  }
  memset(pvVar2,0,sVar5);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140002020(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),8);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar4;
  return;
}

