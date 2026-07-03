// FUN_140565fd0 @ 140565fd0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140565fd0(longlong *param_1,longlong param_2)

{
  void *_Src;
  
  _Src = (void *)(*param_1 + param_2 + 1);
  memmove((void *)(*param_1 + param_2),_Src,param_1[1] - (longlong)_Src);
  param_1[1] = param_1[1] + -1;
  return;
}

