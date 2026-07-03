// FUN_14084d1c0 @ 14084d1c0
// callees:
//   -> EXTERNAL:000000e1 memmove


undefined8 FUN_14084d1c0(longlong param_1,int param_2,int param_3)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0xb8) - *(longlong *)(param_1 + 0xb0) >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb0) + lVar4 * 8) + 0x10))();
      if ((iVar2 == param_2) &&
         ((iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb0) + lVar4 * 8) + 0x60))
                             (), iVar2 == param_3 || (param_3 == -1)))) {
        plVar1 = *(longlong **)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0xb0));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,1);
        }
        _Dst = (void *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0xb0));
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0xb8) - (longlong)_Src);
        *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + -8;
        return 1;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return 0;
}

