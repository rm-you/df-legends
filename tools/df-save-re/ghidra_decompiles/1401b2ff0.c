// FUN_1401b2ff0 @ 1401b2ff0
// callees:
//   -> 14000cc60 FUN_14000cc60
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1401b2ff0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  _Dst = (void *)FUN_14000cc60();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1,1);
  }
  param_1[2] = (longlong)_Dst + param_2;
  param_1[1] = (lVar2 - lVar1) + (longlong)_Dst;
  *param_1 = (longlong)_Dst;
  return;
}

