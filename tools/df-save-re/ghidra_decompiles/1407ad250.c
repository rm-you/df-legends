// FUN_1407ad250 @ 1407ad250
// callees:


int * FUN_1407ad250(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (((*(longlong *)(param_1 + 0x130) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x58), lVar3 != 0)) &&
     (iVar1 = *(int *)(lVar3 + 0x30), iVar1 != -1)) {
    iVar7 = 0;
    iVar6 = (int)(DAT_141d69180 - DAT_141d69178 >> 3) + -1;
    if (-1 < iVar6) {
      do {
        iVar5 = iVar6 + iVar7 >> 1;
        piVar4 = *(int **)(DAT_141d69178 + (longlong)iVar5 * 8);
        iVar2 = *piVar4;
        if (iVar2 == iVar1) {
          return piVar4;
        }
        if (iVar1 < iVar2) {
          iVar6 = iVar5 + -1;
        }
        else {
          iVar7 = iVar5 + 1;
        }
      } while (iVar7 <= iVar6);
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}

