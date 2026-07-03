// FUN_1400de0d0 @ 1400de0d0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1400de0d0(longlong param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar1 = *param_2;
  iVar4 = (int)(param_2[1] - lVar1 >> 3) + -1;
  if (-1 < iVar4) {
    while( true ) {
      iVar3 = iVar4 + iVar5 >> 1;
      lVar2 = *(longlong *)(lVar1 + (longlong)iVar3 * 8);
      if (lVar2 == param_1) break;
      if (*(int *)(param_1 + 0xe0) < *(int *)(lVar2 + 0xe0)) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
      if (iVar4 < iVar5) {
        return;
      }
    }
    _Dst = (void *)(lVar1 + (longlong)iVar3 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,param_2[1] - (longlong)_Src);
    param_2[1] = param_2[1] + -8;
  }
  return;
}

