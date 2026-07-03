// FUN_140019a10 @ 140019a10
// callees:


longlong FUN_140019a10(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) & 0xfffffffffffffff8U) != 0)
     && (param_2 != -1)) {
    iVar5 = 0;
    iVar4 = (int)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3) + -1;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + iVar5 >> 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8);
        iVar1 = *(int *)(lVar2 + 0x88);
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
  return 0;
}

