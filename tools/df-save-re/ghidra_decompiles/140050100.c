// FUN_140050100 @ 140050100
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140050100(longlong *param_1,longlong param_2)

{
  void *_Src;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 8);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,param_1[1] - (longlong)_Src);
  param_1[1] = param_1[1] + -8;
  return;
}

