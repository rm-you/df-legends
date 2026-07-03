// FUN_1400743a0 @ 1400743a0
// callees:
//   -> EXTERNAL:000000e1 memmove
//   -> 140002020 FUN_140002020


void FUN_1400743a0(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    iVar6 = 0;
    iVar5 = (int)(DAT_141d64de8 - DAT_141d64de0 >> 3) + -1;
    if (-1 < iVar5) {
      do {
        iVar3 = iVar5 + iVar6 >> 1;
        lVar4 = *(longlong *)(DAT_141d64de0 + (longlong)iVar3 * 8);
        if (lVar4 == param_1) {
          pvVar2 = (void *)(DAT_141d64de0 + (longlong)iVar3 * 8);
          pvVar1 = (void *)((longlong)pvVar2 + 8);
          memmove(pvVar2,pvVar1,DAT_141d64de8 - (longlong)pvVar1);
          DAT_141d64de8 = DAT_141d64de8 + -8;
          break;
        }
        if (*(int *)(param_1 + 0x50) < *(int *)(lVar4 + 0x50)) {
          iVar5 = iVar3 + -1;
        }
        else {
          iVar6 = iVar3 + 1;
        }
      } while (iVar6 <= iVar5);
    }
  }
  iVar5 = (int)(DAT_141d64dd0 - DAT_141d64dc8 >> 3) + -1;
  if (-1 < iVar5) {
    lVar4 = (longlong)iVar5;
    do {
      if (*(longlong *)(DAT_141d64dc8 + lVar4 * 8) == param_1) {
        pvVar2 = (void *)(DAT_141d64dc8 + (longlong)iVar5 * 8);
        pvVar1 = (void *)((longlong)pvVar2 + 8);
        memmove(pvVar2,pvVar1,DAT_141d64dd0 - (longlong)pvVar1);
        DAT_141d64dd0 = DAT_141d64dd0 + -8;
        break;
      }
      iVar5 = iVar5 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
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

