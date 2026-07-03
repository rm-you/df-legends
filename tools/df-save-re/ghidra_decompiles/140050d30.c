// FUN_140050d30 @ 140050d30
// callees:


int FUN_140050d30(int param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)(param_2[1] - *param_2 >> 2);
  if ((iVar3 != 0) && (param_1 != -1)) {
    iVar4 = 0;
    iVar3 = iVar3 + -1;
    if (-1 < iVar3) {
      do {
        iVar2 = iVar3 + iVar4 >> 1;
        iVar1 = *(int *)(*param_2 + (longlong)iVar2 * 4);
        if (iVar1 == param_1) {
          return iVar2;
        }
        if (param_1 < iVar1) {
          iVar3 = iVar2 + -1;
        }
        else {
          iVar4 = iVar2 + 1;
        }
      } while (iVar4 <= iVar3);
    }
  }
  return -1;
}

