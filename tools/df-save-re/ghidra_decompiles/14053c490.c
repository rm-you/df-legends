// FUN_14053c490 @ 14053c490
// callees:


longlong FUN_14053c490(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x428);
  while( true ) {
    if (*(longlong **)(param_1 + 0x430) <= plVar3) {
      return 0;
    }
    lVar4 = *plVar3;
    if ((((*(byte *)(lVar4 + 0x18) & 1) != 0) && (*(int *)(lVar4 + 0xc) == 0)) &&
       (*(int *)(lVar4 + 0x10) == -1)) break;
    plVar3 = plVar3 + 1;
  }
  iVar1 = *(int *)(lVar4 + 4);
  lVar4 = DAT_141c53720 - DAT_141c53718 >> 3;
  if (lVar4 == 0) {
    return 0;
  }
  if (iVar1 == -1) {
    return 0;
  }
  iVar7 = 0;
  iVar6 = (int)lVar4 + -1;
  if (iVar6 < 0) {
    return 0;
  }
  do {
    iVar5 = iVar6 + iVar7 >> 1;
    lVar4 = *(longlong *)(DAT_141c53718 + (longlong)iVar5 * 8);
    iVar2 = *(int *)(lVar4 + 4);
    if (iVar2 == iVar1) {
      return lVar4;
    }
    if (iVar1 < iVar2) {
      iVar6 = iVar5 + -1;
    }
    else {
      iVar7 = iVar5 + 1;
    }
  } while (iVar7 <= iVar6);
  return 0;
}

