// FUN_140ca8390 @ 140ca8390
// callees:


longlong FUN_140ca8390(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xc10);
  lVar3 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3;
  if ((lVar3 != 0) && (iVar1 != -1)) {
    iVar6 = 0;
    iVar5 = (int)lVar3 + -1;
    if (-1 < iVar5) {
      do {
        iVar4 = iVar5 + iVar6 >> 1;
        lVar3 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar4 * 8);
        iVar2 = *(int *)(lVar3 + 0xe0);
        if (iVar2 == iVar1) {
          return lVar3;
        }
        if (iVar1 < iVar2) {
          iVar5 = iVar4 + -1;
        }
        else {
          iVar6 = iVar4 + 1;
        }
      } while (iVar6 <= iVar5);
    }
    return 0;
  }
  return 0;
}

