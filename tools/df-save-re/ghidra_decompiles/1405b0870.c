// FUN_1405b0870 @ 1405b0870
// callees:
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1405b0870(longlong param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  uVar5 = 0;
  uVar4 = (*(longlong *)(param_1 + 0x50) - (longlong)puVar3) + 7U >> 3;
  if (*(undefined8 **)(param_1 + 0x50) < puVar3) {
    uVar4 = uVar5;
  }
  if (uVar4 != 0) {
    do {
      free((void *)*puVar3);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar5 < uVar4);
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)(DAT_141c534a8 - DAT_141c534a0 >> 3) + -1;
  if (-1 < iVar1) {
    lVar2 = (longlong)iVar1;
    do {
      if (*(longlong *)(DAT_141c534a0 + lVar2 * 8) == param_1) {
        _Dst = (void *)(DAT_141c534a0 + (longlong)iVar1 * 8);
        _Src = (void *)((longlong)_Dst + 8);
        memmove(_Dst,_Src,DAT_141c534a8 - (longlong)_Src);
        DAT_141c534a8 = DAT_141c534a8 + -8;
        break;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x58) - lVar2 >> 3,8);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x38) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    FUN_140002020(lVar2,*(longlong *)(param_1 + 0x18) - lVar2 >> 2,4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

