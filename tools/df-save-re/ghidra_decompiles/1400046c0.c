// FUN_1400046c0 @ 1400046c0
// callees:


longlong FUN_1400046c0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x2b8) - *(longlong *)(param_1 + 0x2b0) >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + (longlong)iVar3 * 8);
      iVar1 = *(int *)(lVar2 + 8);
      if (iVar1 == param_2) {
        return lVar2;
      }
      if (param_2 < iVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return 0;
}

