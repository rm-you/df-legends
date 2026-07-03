// FUN_1405cd7c0 @ 1405cd7c0
// callees:


void FUN_1405cd7c0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8);
  while (lVar3 >> 3 != 0) {
    lVar3 = (longlong)((int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1)
            * 8;
    puVar1 = (uint *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 8)) + 0x24);
    *puVar1 = *puVar1 | 0x20;
    (**(code **)(**(longlong **)(lVar3 + *(longlong *)(param_1 + 8)) + 0x230))();
    plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 8));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x300))(plVar2,1);
    }
    lVar3 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8);
  }
  return;
}

