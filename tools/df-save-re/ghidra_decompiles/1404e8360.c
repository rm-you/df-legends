// FUN_1404e8360 @ 1404e8360
// callees:
//   -> EXTERNAL:000000e1 memmove


void FUN_1404e8360(longlong param_1,int *param_2)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x1430) - *(longlong *)(param_1 + 0x1428) >> 3) + -1;
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4 * 8;
    lVar5 = lVar3;
    do {
      if (*(int **)(lVar3 + *(longlong *)(param_1 + 0x1428)) == param_2) {
        pvVar2 = (void *)(lVar5 + *(longlong *)(param_1 + 0x1428));
        pvVar1 = (void *)((longlong)pvVar2 + 8);
        memmove(pvVar2,pvVar1,*(longlong *)(param_1 + 0x1430) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x1430) = *(longlong *)(param_1 + 0x1430) + -8;
      }
      lVar5 = lVar5 + -8;
      lVar3 = lVar3 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = (int)(*(longlong *)(param_1 + 0x118) - *(longlong *)(param_1 + 0x110) >> 2) + -1;
  if (-1 < iVar4) {
    lVar3 = (longlong)iVar4 * 4;
    lVar5 = lVar3;
    do {
      if (*(int *)(lVar3 + *(longlong *)(param_1 + 0x110)) == *param_2) {
        pvVar2 = (void *)(*(longlong *)(param_1 + 0x110) + lVar5);
        pvVar1 = (void *)((longlong)pvVar2 + 4);
        memmove(pvVar2,pvVar1,*(longlong *)(param_1 + 0x118) - (longlong)pvVar1);
        *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x118) + -4;
      }
      lVar5 = lVar5 + -4;
      lVar3 = lVar3 + -4;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

