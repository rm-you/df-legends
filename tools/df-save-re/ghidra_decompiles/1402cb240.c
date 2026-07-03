// FUN_1402cb240 @ 1402cb240
// callees:
//   -> EXTERNAL:00000099 _Xlength_error
//   -> 14000cc60 FUN_14000cc60
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140dfc99c memset


undefined8 *
FUN_1402cb240(longlong *param_1,undefined8 *param_2,char *param_3,undefined8 param_4,char *param_5)

{
  char cVar1;
  longlong lVar2;
  char *_Dst;
  longlong lVar3;
  longlong lVar4;
  void *_Dst_00;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t _Size;
  char *pcVar7;
  
  lVar2 = *param_1;
  _Dst = (char *)param_1[1];
  if ((char *)param_1[2] == _Dst) {
    if (lVar2 - (longlong)_Dst == 1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar6 = param_1[2] - lVar2;
    uVar5 = uVar6 >> 1;
    pcVar7 = (char *)(uVar5 + uVar6);
    if (-uVar5 - 1 < uVar6) {
      pcVar7 = (char *)0x0;
    }
    if (pcVar7 < _Dst + (1 - lVar2)) {
      pcVar7 = _Dst + (1 - lVar2);
    }
    _Dst_00 = (void *)FUN_14000cc60(uVar5,pcVar7);
    lVar3 = *param_1;
    *(char *)(((longlong)param_3 - lVar3) + (longlong)_Dst_00) = *param_5;
    memmove(_Dst_00,(void *)*param_1,(longlong)param_3 - *param_1);
    memmove((void *)(((longlong)param_3 - lVar3) + 1 + (longlong)_Dst_00),param_3,
            param_1[1] - (longlong)param_3);
    lVar3 = *param_1;
    lVar4 = param_1[1];
    if (lVar3 != 0) {
      FUN_140002020(lVar3,param_1[2] - lVar3,1);
    }
    param_1[2] = (longlong)(pcVar7 + (longlong)_Dst_00);
    param_1[1] = (longlong)_Dst_00 + (lVar4 - lVar3) + 1;
    *param_1 = (longlong)_Dst_00;
  }
  else if (_Dst == param_3) {
    cVar1 = *param_5;
    memmove(param_3 + 1,param_3,0);
    memset((void *)param_1[1],(int)cVar1,(size_t)(param_3 + (1 - param_1[1])));
    param_1[1] = param_1[1] + 1;
    memset(param_3,(int)cVar1,(param_1[1] - (longlong)param_3) - 1);
  }
  else {
    _Size = (longlong)_Dst - (longlong)(_Dst + -1);
    cVar1 = *param_5;
    memmove(_Dst,_Dst + -1,_Size);
    param_1[1] = (longlong)(_Dst + _Size);
    memmove(_Dst + -(longlong)(_Dst + (-1 - (longlong)param_3)),param_3,
            (size_t)(_Dst + (-1 - (longlong)param_3)));
    *param_3 = cVar1;
  }
  *param_2 = param_3 + (*param_1 - lVar2);
  return param_2;
}

