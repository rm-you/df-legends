// FUN_140c844c0 @ 140c844c0
// callees:


ulonglong FUN_140c844c0(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if ((iVar1 != -1) && (lVar2 = DAT_141c53720 - DAT_141c53718 >> 3, lVar2 != 0)) {
    iVar5 = 0;
    iVar4 = (int)lVar2 + -1;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + iVar5 >> 1;
        lVar2 = *(longlong *)(DAT_141c53718 + (longlong)iVar3 * 8);
        if (*(int *)(lVar2 + 4) == iVar1) {
          if (lVar2 == 0) {
            return 0xffffffff;
          }
          return (ulonglong)*(ushort *)(lVar2 + 0xce4 + (longlong)param_2 * 2);
        }
        if (iVar1 < *(int *)(lVar2 + 4)) {
          iVar4 = iVar3 + -1;
        }
        else {
          iVar5 = iVar3 + 1;
        }
      } while (iVar5 <= iVar4);
    }
  }
  return 0xffffffff;
}

