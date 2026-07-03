// FUN_140190590 @ 140190590
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140190590(longlong param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *_Dst;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0xf0) - *(longlong *)(param_1 + 0xe8) >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = (longlong)iVar3;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe8) + lVar1 * 8);
    while (*(longlong *)*puVar2 != param_2) {
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
      lVar1 = lVar1 + -1;
      if (lVar1 < 0) {
        return;
      }
    }
    free(*(void **)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0xe8)));
    _Dst = (void *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar3 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,*(longlong *)(param_1 + 0xf0) - (longlong)_Src);
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -8;
  }
  return;
}

