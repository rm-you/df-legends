// FUN_140cee4c0 @ 140cee4c0
// callees:
//   -> 140cee3c0 FUN_140cee3c0
//   -> 140c881a0 FUN_140c881a0
//   -> EXTERNAL:000000e1 memmove


void FUN_140cee4c0(longlong param_1,short param_2,undefined8 param_3)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140cee3c0(param_1,param_2);
  param_1 = (longlong)param_2 * 0x20 + param_1;
  FUN_140c881a0(param_3,param_1 + 8);
  iVar1 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1 * 8;
    lVar3 = lVar2;
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar2) + 0x10) & 0x40000) != 0) {
        _Dst = (void *)(lVar3 + *(longlong *)(param_1 + 8));
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,*(longlong *)(param_1 + 0x10) - (longlong)_Src);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      }
      lVar3 = lVar3 + -8;
      lVar2 = lVar2 + -8;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}

