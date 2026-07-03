// FUN_140168410 @ 140168410
// callees:


void FUN_140168410(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  if (-1 < iVar4) {
    lVar2 = (longlong)iVar4;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8);
    while (*plVar3 != param_2) {
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + -1;
      lVar2 = lVar2 + -1;
      if (lVar2 < 0) {
        return;
      }
    }
    lVar2 = (longlong)iVar4 * 8;
    puVar1 = (uint *)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 8)) + 0x24);
    *puVar1 = *puVar1 | 0x20;
    (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 8)) + 0x230))();
    plVar3 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 8));
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140168496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x300))(plVar3,1);
      return;
    }
  }
  return;
}

