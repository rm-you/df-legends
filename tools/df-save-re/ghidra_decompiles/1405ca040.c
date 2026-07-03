// FUN_1405ca040 @ 1405ca040
// callees:


void FUN_1405ca040(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = param_1[1] - lVar1;
  while (lVar3 >> 3 != 0) {
    plVar2 = *(longlong **)(lVar1 + -8 + (lVar3 >> 3) * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    lVar1 = *param_1;
    lVar3 = param_1[1] - lVar1;
  }
  return;
}

