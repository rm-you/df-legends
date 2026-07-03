// FUN_1400516f0 @ 1400516f0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1400516f0(longlong param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)(param_2[1] - *param_2 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1 * 8;
    lVar3 = lVar2;
    do {
      if (*(longlong *)(lVar3 + *param_2) == param_1) {
        _Dst = (void *)(lVar2 + *param_2);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,param_2[1] - (longlong)_Src);
        param_2[1] = param_2[1] + -8;
      }
      lVar2 = lVar2 + -8;
      lVar3 = lVar3 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

