// FUN_140010e10 @ 140010e10
// callees:


int * FUN_140010e10(longlong *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  if ((lVar3 != 0) && (param_2 != -1)) {
    iVar5 = (int)lVar3 + -1;
    iVar6 = 0;
    if (-1 < iVar5) {
      do {
        iVar4 = iVar6 + iVar5 >> 1;
        piVar2 = *(int **)(*param_1 + (longlong)iVar4 * 8);
        iVar1 = *piVar2;
        if (iVar1 == param_2) {
          return piVar2;
        }
        if (param_2 < iVar1) {
          iVar5 = iVar4 + -1;
        }
        else {
          iVar6 = iVar4 + 1;
        }
      } while (iVar6 <= iVar5);
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

