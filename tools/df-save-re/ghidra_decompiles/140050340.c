// FUN_140050340 @ 140050340
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140050340(longlong *param_1,longlong param_2)

{
  void *_Src;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  _Src = (void *)((longlong)_Dst + 4);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  param_1[1] = param_1[1] + -4;
  return;
}

