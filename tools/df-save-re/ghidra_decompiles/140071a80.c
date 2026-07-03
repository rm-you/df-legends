// FUN_140071a80 @ 140071a80
// callees:


longlong FUN_140071a80(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(param_2[1] - *param_2 >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      lVar2 = *(longlong *)(*param_2 + (longlong)iVar3 * 8);
      iVar1 = *(int *)(lVar2 + 0x20);
      if (iVar1 == param_1) {
        return lVar2;
      }
      if (param_1 < iVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0;
}

