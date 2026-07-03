// FUN_1400b29f0 @ 1400b29f0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1400b29f0(longlong *param_1,longlong param_2)

{
  void *_Src;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 2);
  _Src = (void *)((longlong)_Dst + 2);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  param_1[1] = param_1[1] + -2;
  return;
}

