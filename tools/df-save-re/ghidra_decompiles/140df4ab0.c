// FUN_140df4ab0 @ 140df4ab0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140df4960 FUN_140df4960
//   -> 140002020 FUN_140002020


void FUN_140df4ab0(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(DAT_141d69150 - DAT_141d69148 >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      piVar1 = *(int **)(DAT_141d69148 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d69148 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d69150 - (longlong)_Src);
        DAT_141d69150 = DAT_141d69150 + -8;
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
  FUN_140df4960(param_1);
  lVar2 = *(longlong *)(param_1 + 0x22);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x26) - lVar2 >> 2,4);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x1c);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x20) - lVar2 >> 2,4);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x12);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x16) - lVar2 >> 2,4);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x10) - lVar2 >> 3,8);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    FUN_140002020(*(undefined8 *)(param_1 + 2),*(ulonglong *)(param_1 + 8) + 1,1);
  }
  param_1[8] = 0xf;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(ulonglong *)(param_1 + 8) < 0x10) {
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  **(undefined1 **)(param_1 + 2) = 0;
  return;
}

