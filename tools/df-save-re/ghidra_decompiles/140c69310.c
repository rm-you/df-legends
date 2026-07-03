// FUN_140c69310 @ 140c69310
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140c69310(longlong param_1,longlong param_2)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x448) - *(longlong *)(param_1 + 0x440) >> 3 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x440);
    while (*plVar1 != param_2) {
      iVar2 = iVar2 + 1;
      plVar1 = plVar1 + 1;
      if ((ulonglong)(*(longlong *)(param_1 + 0x448) - *(longlong *)(param_1 + 0x440) >> 3) <=
          (ulonglong)(longlong)iVar2) {
        return;
      }
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0x440) + (longlong)iVar2 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,*(longlong *)(param_1 + 0x448) - (longlong)_Src);
    *(longlong *)(param_1 + 0x448) = *(longlong *)(param_1 + 0x448) + -8;
  }
  return;
}

