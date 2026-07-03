// FUN_140050150 @ 140050150
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 1400504b0 FUN_1400504b0


longlong * FUN_140050150(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *_Dst;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
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
    uVar5 = (longlong)pvVar2 - (longlong)pvVar1 >> 2;
    uVar7 = param_1[1] - (longlong)_Dst >> 2;
    if (uVar5 <= uVar7) {
      memmove(_Dst,pvVar1,(longlong)pvVar2 - (longlong)pvVar1);
      param_1[1] = *param_1 + (param_2[1] - *param_2 >> 2) * 4;
      return param_1;
    }
    uVar6 = param_1[2] - (longlong)_Dst >> 2;
    if (uVar5 <= uVar6) {
      pvVar2 = (void *)((longlong)pvVar1 + uVar7 * 4);
      memmove(_Dst,pvVar1,(longlong)pvVar2 - (longlong)pvVar1);
      lVar3 = param_2[1];
      pvVar1 = (void *)param_1[1];
      memmove(pvVar1,pvVar2,lVar3 - (longlong)pvVar2);
      param_1[1] = (lVar3 - (longlong)pvVar2) + (longlong)pvVar1;
      return param_1;
    }
    if (_Dst != (void *)0x0) {
      FUN_140002020(_Dst,uVar6,4);
    }
    cVar4 = FUN_1400504b0(param_1,param_2[1] - *param_2 >> 2);
    if (cVar4 != '\0') {
      pvVar1 = (void *)*param_1;
      _Size = param_2[1] - *param_2;
      memmove(pvVar1,(void *)*param_2,_Size);
      param_1[1] = _Size + (longlong)pvVar1;
    }
  }
  return param_1;
}

