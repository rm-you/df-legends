// FUN_140051210 @ 140051210
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_140051210(int param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar2 = *param_2;
  iVar4 = (int)(param_2[1] - lVar2 >> 2) + -1;
  if (-1 < iVar4) {
    while( true ) {
      iVar3 = iVar4 + iVar5 >> 1;
      iVar1 = *(int *)(lVar2 + (longlong)iVar3 * 4);
      if (iVar1 == param_1) break;
      if (param_1 < iVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
      if (iVar4 < iVar5) {
        return;
      }
    }
    _Dst = (void *)(lVar2 + (longlong)iVar3 * 4);
    _Src = (void *)((longlong)_Dst + 4);
    memmove(_Dst,_Src,param_2[1] - (longlong)_Src);
    param_2[1] = param_2[1] + -4;
  }
  return;
}

