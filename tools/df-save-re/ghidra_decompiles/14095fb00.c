// FUN_14095fb00 @ 14095fb00
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140dfb5b4 free


void * FUN_14095fb00(void *param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141c36ad8 - DAT_141c36ad0 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(void **)(DAT_141c36ad0 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141c36ad0 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c36ad8 - (longlong)_Src);
        DAT_141c36ad8 = DAT_141c36ad8 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  free(param_1);
  return param_1;
}

