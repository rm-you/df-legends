// FUN_1408243e0 @ 1408243e0
// callees:
//   -> EXTERNAL:000000e1 memmove


ulonglong FUN_1408243e0(longlong param_1,int param_2,int param_3)

{
  void *_Src;
  longlong *plVar1;
  ulonglong in_RAX;
  void *_Dst;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      in_RAX = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) + 0x10))();
      if (((int)in_RAX == param_2) &&
         ((in_RAX = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) + 0x60))
                              (), (int)in_RAX == param_3 || (param_3 == -1)))) {
        plVar1 = *(longlong **)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x38));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
        if (param_2 - 9U < 2) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xdfffffff;
        }
        return CONCAT71((uint7)(uint3)(param_2 - 9U >> 8),1);
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return in_RAX & 0xffffffffffffff00;
}

