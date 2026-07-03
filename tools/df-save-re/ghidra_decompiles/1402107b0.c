// FUN_1402107b0 @ 1402107b0
// callees:


int * FUN_1402107b0(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4 + iVar5 >> 1;
      piVar2 = *(int **)(*(longlong *)(param_1 + 0x590) + (longlong)iVar3 * 8);
      iVar1 = *piVar2;
      if (iVar1 == param_2) {
        return piVar2;
      }
      if (param_2 < iVar1) {
        iVar4 = iVar3 + -1;
      }
      else {
        iVar5 = iVar3 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return (int *)0x0;
}

