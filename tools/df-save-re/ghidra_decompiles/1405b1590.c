// FUN_1405b1590 @ 1405b1590
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1405b1590(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  
  if (((*(byte *)(param_1 + 0x18) & 2) != 0) &&
     (iVar3 = (int)(DAT_141c534f0 - DAT_141c534e8 >> 3) + -1, -1 < iVar3)) {
    lVar4 = (longlong)iVar3;
    do {
      if (*(longlong *)(DAT_141c534e8 + lVar4 * 8) == param_1) {
        pvVar2 = (void *)(DAT_141c534e8 + (longlong)iVar3 * 8);
        pvVar1 = (void *)((longlong)pvVar2 + 8);
        memmove(pvVar2,pvVar1,DAT_141c534f0 - (longlong)pvVar1);
        DAT_141c534f0 = DAT_141c534f0 + -8;
        break;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar3 = (int)(DAT_141c534d8 - DAT_141c534d0 >> 3) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    while (*(longlong *)(DAT_141c534d0 + lVar4 * 8) != param_1) {
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
      if (lVar4 < 0) {
        return;
      }
    }
    pvVar2 = (void *)(DAT_141c534d0 + (longlong)iVar3 * 8);
    pvVar1 = (void *)((longlong)pvVar2 + 8);
    memmove(pvVar2,pvVar1,DAT_141c534d8 - (longlong)pvVar1);
    DAT_141c534d8 = DAT_141c534d8 + -8;
  }
  return;
}

