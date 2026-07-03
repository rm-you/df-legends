// FUN_140ced130 @ 140ced130
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb600 `eh_vector_destructor_iterator'


void FUN_140ced130(longlong param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141c67068 - DAT_141c67060 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(longlong *)(DAT_141c67060 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141c67060 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c67068 - (longlong)_Src);
        DAT_141c67068 = DAT_141c67068 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x20,100,FUN_1400030c0);
  return;
}

