// FUN_140802a10 @ 140802a10
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1408243e0 FUN_1408243e0
//   -> 140838f60 FUN_140838f60


void FUN_140802a10(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1;
  lVar4 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar4 * 8) + 0x10))();
      if (iVar2 == 0xb) {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff7;
        lVar4 = (longlong)iVar5 * 8;
        lVar3 = (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x38)) + 0x18))();
        plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x38));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x78))(plVar1,1);
        }
        _Dst = (void *)(*(longlong *)(param_1 + 0x38) + lVar4);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x40) - (longlong)_Src);
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -8;
        if (lVar3 != 0) {
          FUN_1408243e0(lVar3,10,*(undefined4 *)(param_1 + 0x1c));
        }
        break;
      }
      iVar5 = iVar5 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  if (*(int *)(param_1 + 0x50) != -1) {
    FUN_140838f60(param_1);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x7fffffff;
  return;
}

