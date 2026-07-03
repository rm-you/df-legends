// FUN_140b85860 @ 140b85860
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_140b85860(longlong param_1)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3 != 0) {
    lVar1 = 0;
    do {
      free(*(void **)(lVar1 + *(longlong *)(param_1 + 8)));
      lVar1 = lVar1 + 8;
      iVar2 = iVar2 + 1;
    } while ((ulonglong)(longlong)iVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3));
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  iVar2 = (int)(DAT_141d64d10 - DAT_141d64d08 >> 3) + -1;
  if (-1 < iVar2) {
    lVar1 = (longlong)iVar2;
    do {
      if (*(longlong *)(DAT_141d64d08 + lVar1 * 8) == param_1) {
        _Dst = (void *)(DAT_141d64d08 + (longlong)iVar2 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d64d10 - (longlong)_Src);
        DAT_141d64d10 = DAT_141d64d10 + -8;
        break;
      }
      iVar2 = iVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140002020(lVar1,*(longlong *)(param_1 + 0x18) - lVar1 >> 3,8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

