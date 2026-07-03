// FUN_140c840a0 @ 140c840a0
// callees:
//   -> 14000de70 FUN_14000de70
//   -> 1405b0360 FUN_1405b0360
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_140c840a0(longlong param_1,int param_2)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((-1 < param_2) &&
     (uVar3 = (ulonglong)param_2,
     uVar3 < (ulonglong)(*(longlong *)(param_1 + 0xb00) - *(longlong *)(param_1 + 0xaf8) >> 3))) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xaf8) + uVar3 * 8);
    if ((*(int *)(lVar1 + 0x14) != -1) && (lVar2 = FUN_14000de70(&DAT_141c67368), lVar2 != 0)) {
      FUN_1405b0360(lVar2,0xe,param_1,lVar1);
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xaf8) + uVar3 * 8);
    if ((*(int *)(lVar1 + 0x18) != -1) && (lVar2 = FUN_14000de70(&DAT_141c67368), lVar2 != 0)) {
      FUN_1405b0360(lVar2,0xe,param_1,lVar1);
    }
    free(*(void **)(*(longlong *)(param_1 + 0xaf8) + uVar3 * 8));
    _Dst = (void *)(*(longlong *)(param_1 + 0xaf8) + uVar3 * 8);
    _Src = (void *)((longlong)_Dst + 8);
    memmove(_Dst,_Src,*(longlong *)(param_1 + 0xb00) - (longlong)_Src);
    *(longlong *)(param_1 + 0xb00) = *(longlong *)(param_1 + 0xb00) + -8;
  }
  return;
}

