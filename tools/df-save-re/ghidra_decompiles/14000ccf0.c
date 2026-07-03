// FUN_14000ccf0 @ 14000ccf0
// callees:
//   -> 14000d100 FUN_14000d100
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_14000ccf0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  
  _Dst = (void *)FUN_14000d100();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    FUN_140002020(lVar1,param_1[2] - lVar1 >> 3,8);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 3) * 8);
  *param_1 = (longlong)_Dst;
  return;
}

