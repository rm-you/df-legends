// FUN_14000de70 @ 14000de70
// callees:


longlong FUN_14000de70(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)(param_1[1] - *param_1 >> 3);
  if ((iVar4 != 0) && (param_2 != -1)) {
    iVar4 = iVar4 + -1;
    iVar5 = 0;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar5 + iVar4 >> 1;
        lVar2 = *(longlong *)(*param_1 + (longlong)iVar3 * 8);
        iVar1 = *(int *)(lVar2 + 0x1c);
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

