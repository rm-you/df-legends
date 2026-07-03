// FUN_1405ca730 @ 1405ca730
// callees:
//   -> 1407f0860 FUN_1407f0860


void FUN_1405ca730(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = param_1[1] - lVar1;
  while (lVar3 >> 3 != 0) {
    lVar3 = (longlong)((int)(lVar3 >> 3) + -1);
    lVar1 = *(longlong *)(lVar1 + lVar3 * 8);
    lVar3 = lVar3 * 8;
    if ((*(uint *)(lVar1 + 0x10) & 0x100000) == 0) {
      FUN_1407f0860(lVar1,0);
      (**(code **)(**(longlong **)(lVar3 + *param_1) + 800))();
    }
    plVar2 = *(longlong **)(lVar3 + *param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x770))(plVar2,1);
    }
    lVar1 = *param_1;
    lVar3 = param_1[1] - lVar1;
  }
  return;
}

