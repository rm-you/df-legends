// FUN_140071430 @ 140071430
// callees:
//   -> EXTERNAL:000000df memchr
//   -> 140dfdcc0 memcmp


ulonglong FUN_140071430(undefined8 *param_1,char *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Buf1;
  ulonglong uVar3;
  size_t _MaxCount;
  void *_Buf;
  
  if ((param_4 == 0) && (param_3 <= (ulonglong)param_1[2])) {
    return param_3;
  }
  if ((param_3 < (ulonglong)param_1[2]) && (uVar3 = param_1[2] - param_3, param_4 <= uVar3)) {
    _MaxCount = uVar3 + (1 - param_4);
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    _Buf = (void *)((longlong)puVar2 + param_3);
    while ((_MaxCount != 0 && (_Buf1 = memchr(_Buf,(int)*param_2,_MaxCount), _Buf1 != (void *)0x0)))
    {
      if ((param_4 == 0) || (iVar1 = memcmp(_Buf1,param_2,param_4), iVar1 == 0)) {
        if (0xf < (ulonglong)param_1[3]) {
          param_1 = (undefined8 *)*param_1;
        }
        return (longlong)_Buf1 - (longlong)param_1;
      }
      _MaxCount = (longlong)_Buf + _MaxCount + (-1 - (longlong)_Buf1);
      _Buf = (void *)((longlong)_Buf1 + 1);
    }
  }
  return 0xffffffffffffffff;
}

