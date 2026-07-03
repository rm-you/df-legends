// FUN_1407ea070 @ 1407ea070
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1407ea070(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(DAT_141d69120 - DAT_141d69118 >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      piVar1 = *(int **)(DAT_141d69118 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69118 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d69120 - (longlong)_Src);
        DAT_141d69120 = DAT_141d69120 + -8;
        break;
      }
      if (*param_1 < *piVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  lVar2 = *(longlong *)(param_1 + 4);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 8) - lVar2 >> 2,4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}

