// FUN_14000df00 @ 14000df00
// callees:


int * FUN_14000df00(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
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
        piVar2 = *(int **)(*param_1 + (longlong)iVar3 * 8);
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
  return (int *)0x0;
}

