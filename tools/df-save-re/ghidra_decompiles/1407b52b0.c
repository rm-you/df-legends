// FUN_1407b52b0 @ 1407b52b0
// callees:


int * FUN_1407b52b0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x130) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x130) + 0x60), plVar2 != (longlong *)0x0)) {
    iVar6 = 0;
    iVar5 = (int)(plVar2[1] - *plVar2 >> 3) + -1;
    if (-1 < iVar5) {
      do {
        iVar4 = iVar5 + iVar6 >> 1;
        piVar3 = *(int **)(*plVar2 + (longlong)iVar4 * 8);
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

