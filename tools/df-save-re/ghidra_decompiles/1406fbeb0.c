// FUN_1406fbeb0 @ 1406fbeb0
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_1406fbeb0(longlong param_1,short param_2,int param_3)

{
  void *_Src;
  short *_Memory;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1 * 8;
    lVar3 = lVar2;
    do {
      _Memory = *(short **)(lVar3 + *(longlong *)(param_1 + 0x10));
      if (((*_Memory == param_2) || (param_2 == -1)) &&
         ((*(int *)(_Memory + 2) == param_3 || (param_3 == -1)))) {
        free(_Memory);
        _Dst = (void *)(*(longlong *)(param_1 + 0x10) + lVar2);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x18) - (longlong)_Src);
        *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
      }
      lVar2 = lVar2 + -8;
      lVar3 = lVar3 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return;
}

