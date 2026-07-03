// FUN_1407d4c00 @ 1407d4c00
// callees:


longlong FUN_1407d4c00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((iVar1 != -1) && (lVar2 = DAT_141d7a0b0 - DAT_141d7a0a8 >> 3, lVar2 != 0)) {
    iVar6 = 0;
    iVar5 = (int)lVar2 + -1;
    if (-1 < iVar5) {
      do {
        iVar4 = iVar5 + iVar6 >> 1;
        lVar2 = *(longlong *)(DAT_141d7a0a8 + (longlong)iVar4 * 8);
        if (*(int *)(lVar2 + 0xe0) == iVar1) goto LAB_1407d4c6b;
        if (iVar1 < *(int *)(lVar2 + 0xe0)) {
          iVar5 = iVar4 + -1;
        }
        else {
          iVar6 = iVar4 + 1;
        }
      } while (iVar6 <= iVar5);
    }
  }
  lVar2 = 0;
LAB_1407d4c6b:
  if ((lVar2 == 0) || (lVar3 = lVar2 + 0x38, *(char *)(lVar2 + 0xaa) == '\0')) {
    lVar3 = param_1 + 8;
  }
  return lVar3;
}

