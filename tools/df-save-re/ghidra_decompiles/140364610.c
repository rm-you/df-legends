// FUN_140364610 @ 140364610
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020
//   -> 140b87300 FUN_140b87300


void FUN_140364610(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)(DAT_141c36ac0 - DAT_141c36ab8 >> 3) + -1;
  if (-1 < iVar2) {
    lVar4 = (longlong)iVar2 * 8;
    lVar1 = DAT_141c36ab8;
    lVar5 = DAT_141c36ac0;
    lVar6 = lVar4;
    do {
      if (*(longlong *)(lVar4 + lVar1) == param_1) {
        _Src = (void *)(lVar1 + lVar6 + 8);
        memmove((void *)(lVar1 + lVar6),_Src,lVar5 - (longlong)_Src);
        lVar5 = DAT_141c36ac0 + -8;
        lVar1 = DAT_141c36ab8;
        DAT_141c36ac0 = lVar5;
      }
      lVar6 = lVar6 + -8;
      lVar4 = lVar4 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  puVar3 = (undefined8 *)(param_1 + 0x58);
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    FUN_140002020(*puVar3,*(ulonglong *)(param_1 + 0x70) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x70) = 0xf;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x70)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  FUN_140b87300(param_1 + 0x28);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    FUN_140002020(*(undefined8 *)(param_1 + 8),*(ulonglong *)(param_1 + 0x20) + 1,1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(ulonglong *)(param_1 + 0x20) < 0x10) {
    *(undefined1 *)(param_1 + 8) = 0;
    return;
  }
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}

