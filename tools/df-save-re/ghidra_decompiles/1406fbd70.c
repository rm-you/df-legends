// FUN_1406fbd70 @ 1406fbd70
// callees:


int * FUN_1406fbd70(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x130) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58), lVar2 != 0)) {
    iVar6 = 0;
    iVar5 = (int)(*(longlong *)(lVar2 + 0x20) - *(longlong *)(lVar2 + 0x18) >> 3) + -1;
    if (-1 < iVar5) {
      do {
        iVar4 = iVar5 + iVar6 >> 1;
        piVar3 = *(int **)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar4 * 8);
        iVar1 = *piVar3;
        if (iVar1 == param_2) {
          return piVar3;
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

