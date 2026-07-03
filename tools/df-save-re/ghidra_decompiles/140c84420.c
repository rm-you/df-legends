// FUN_140c84420 @ 140c84420
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 1405cc7f0 FUN_1405cc7f0


void FUN_140c84420(longlong param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141c66ff0 - DAT_141c66fe8 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(longlong *)(DAT_141c66fe8 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141c66fe8 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c66ff0 - (longlong)_Src);
        DAT_141c66ff0 = DAT_141c66ff0 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  if ((*(uint *)(param_1 + 0x1268) < 500) &&
     ((&DAT_141c708d0)[(int)*(uint *)(param_1 + 0x1268)] = 0, DAT_141d64d04 == -1)) {
    FUN_1405cc7f0();
  }
  *(undefined4 *)(param_1 + 0x1268) = 0xffffffff;
  return;
}

