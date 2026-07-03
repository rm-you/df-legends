// FUN_1405b1b10 @ 1405b1b10
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1405b1b10(longlong *param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(DAT_141c53538 - DAT_141c53530 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(longlong **)(DAT_141c53530 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141c53530 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c53538 - (longlong)_Src);
        DAT_141c53538 = DAT_141c53538 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  lVar2 = param_1[8];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[10] - lVar2 >> 2,4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[5] - lVar2 >> 1,2);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140002020(lVar2,param_1[2] - lVar2 >> 1,2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

