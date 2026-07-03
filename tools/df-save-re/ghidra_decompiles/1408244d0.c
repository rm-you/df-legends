// FUN_1408244d0 @ 1408244d0
// callees:
//   -> EXTERNAL:000000e1 memmove


undefined8 FUN_1408244d0(longlong param_1,int param_2)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = 0;
  iVar3 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  if (-1 < iVar3) {
    lVar5 = (longlong)iVar3 * 8;
    lVar6 = lVar5;
    do {
      iVar2 = (**(code **)(**(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38)) + 0x10))();
      if (iVar2 == param_2) {
        plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x38));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x38) + lVar6);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
        uVar4 = 1;
      }
      lVar6 = lVar6 + -8;
      lVar5 = lVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
  return uVar4;
}

