// FUN_1400390b0 @ 1400390b0
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1400390b0(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar4 * 8);
      if (((*(byte *)((longlong)plVar1 + 0x14) & 1) == 0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x20))(), cVar2 != '\0')) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar4 * 8);
        (**(code **)(*plVar1 + 0x40))(plVar1,1);
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar3 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 8;
    lVar5 = lVar4;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 8));
      if ((*(byte *)((longlong)plVar1 + 0x14) & 1) != 0) {
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 8) + lVar5);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x10) - (longlong)_Src);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      }
      lVar5 = lVar5 + -8;
      lVar4 = lVar4 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

