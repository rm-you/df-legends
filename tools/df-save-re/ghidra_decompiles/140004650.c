// FUN_140004650 @ 140004650
// callees:


longlong FUN_140004650(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (((*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) & 0xfffffffffffffff8U) != 0)
     && (param_2 != -1)) {
    iVar5 = 0;
    iVar4 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) + -1;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar4 + iVar5 >> 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8);
        iVar1 = *(int *)(lVar2 + 0xe0);
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

