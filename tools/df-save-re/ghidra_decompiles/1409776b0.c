// FUN_1409776b0 @ 1409776b0
// callees:
//   -> 140002020 FUN_140002020
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove


void FUN_1409776b0(longlong param_1,int param_2)

{
  void *_Src;
  longlong *_Memory;
  longlong lVar1;
  void *_Dst;
  
  _Memory = *(longlong **)((longlong)param_2 * 8 + *(longlong *)(param_1 + 0x23a0));
  if (_Memory != (longlong *)0x0) {
    lVar1 = *_Memory;
    if (lVar1 != 0) {
      FUN_140002020(lVar1,_Memory[2] - lVar1 >> 3,8);
      *_Memory = 0;
      _Memory[1] = 0;
      _Memory[2] = 0;
    }
    free(_Memory);
  }
  _Dst = (void *)(*(longlong *)(param_1 + 0x23a0) + (longlong)param_2 * 8);
  _Src = (void *)((longlong)_Dst + 8);
  memmove(_Dst,_Src,*(longlong *)(param_1 + 0x23a8) - (longlong)_Src);
  *(longlong *)(param_1 + 0x23a8) = *(longlong *)(param_1 + 0x23a8) + -8;
  return;
}

