// FUN_1405c73a0 @ 1405c73a0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1405c73a0(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = (int)(DAT_141d64d70 - DAT_141d64d68 >> 3) + -1;
  if (-1 < iVar3) {
    while( true ) {
      iVar2 = iVar3 + iVar4 >> 1;
      piVar1 = *(int **)(DAT_141d64d68 + (longlong)iVar2 * 8);
      if (piVar1 == param_1) break;
      if (*param_1 < *piVar1) {
        iVar3 = iVar2 + -1;
      }
      else {
        iVar4 = iVar2 + 1;
      }
      if (iVar3 < iVar4) {
        return;
      }
    }
    _Dst = (void *)(DAT_141d64d68 + (longlong)iVar2 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,DAT_141d64d70 - (longlong)_Src);
    DAT_141d64d70 = DAT_141d64d70 + -8;
  }
  return;
}

