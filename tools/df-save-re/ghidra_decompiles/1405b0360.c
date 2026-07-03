// FUN_1405b0360 @ 1405b0360
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_1405b0360(longlong param_1,int param_2,longlong param_3,longlong param_4)

{
  void *_Src;
  int *_Memory;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1 * 8;
    lVar3 = lVar2;
    do {
      _Memory = *(int **)(lVar3 + *(longlong *)(param_1 + 0x20));
      if (((*_Memory == param_2) && ((*(longlong *)(_Memory + 2) == param_3 || (param_3 == 0)))) &&
         ((*(longlong *)(_Memory + 4) == param_4 || (param_4 == 0)))) {
        free(_Memory);
        _Dst = (void *)(*(longlong *)(param_1 + 0x20) + lVar2);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x28) - (longlong)_Src);
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -8;
      }
      lVar2 = lVar2 + -8;
      lVar3 = lVar3 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

