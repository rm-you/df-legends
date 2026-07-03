// FUN_14000ce10 @ 14000ce10
// callees:
//   -> 14000cf60 FUN_14000cf60
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_14000ce10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  _Dst = (void *)FUN_14000cf60();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 1,2);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 2);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 1) * 2);
  *param_1 = (longlong)_Dst;
  return;
}

