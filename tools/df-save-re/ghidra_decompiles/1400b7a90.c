// FUN_1400b7a90 @ 1400b7a90
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1400b7a90(int *param_1)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(DAT_141d692b8 - DAT_141d692b0 >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      piVar1 = *(int **)(DAT_141d692b0 + (longlong)iVar3 * 8);
      if (piVar1 == param_1) {
        _Dst = (void *)(DAT_141d692b0 + (longlong)iVar3 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141d692b8 - (longlong)_Src);
        DAT_141d692b8 = DAT_141d692b8 + -8;
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
  lVar2 = *(longlong *)(param_1 + 0x14);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x18) - lVar2 >> 2,4);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xe);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x12) - lVar2 >> 2,4);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0xc) - lVar2 >> 2,4);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 6) - lVar2 >> 2,4);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

