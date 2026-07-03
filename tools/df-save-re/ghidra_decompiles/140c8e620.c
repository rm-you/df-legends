// FUN_140c8e620 @ 140c8e620
// callees:
//   -> EXTERNAL:000000e1 memmove


undefined8 FUN_140c8e620(longlong param_1,int param_2)

{
  void *_Src;
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  iVar3 = (int)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3) + -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3 * 8;
    lVar6 = lVar5;
    do {
      iVar2 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1c0)) + 0x10))();
      if (iVar2 == param_2) {
        plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x1c0));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,1);
        }
        _Dst = (void *)(lVar6 + *(longlong *)(param_1 + 0x1c0));
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x1c8) - (longlong)_Src);
        *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) + -8;
        uVar4 = 1;
      }
      lVar6 = lVar6 + -8;
      lVar5 = lVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar4;
}

