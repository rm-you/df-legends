// FUN_140d1f7a0 @ 140d1f7a0
// callees:


void FUN_140d1f7a0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  do {
    if (lVar2 >> 3 == 0) {
      return;
    }
    iVar4 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
    if (-1 < iVar4) {
      lVar2 = (longlong)iVar4;
      plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8);
      do {
        if (*plVar3 ==
            *(longlong *)
             (*(longlong *)(param_1 + 0x20) +
             (longlong)
             ((int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1) * 8))
        {
          lVar2 = (longlong)iVar4 * 8;
          puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8) + 0x24);
          *puVar1 = *puVar1 | 0x20;
          (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 8)) + 0x230))();
          plVar3 = *(longlong **)(lVar2 + *(longlong *)(param_1 + 8));
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x300))(plVar3,1);
          }
          break;
        }
        iVar4 = iVar4 + -1;
        plVar3 = plVar3 + -1;
        lVar2 = lVar2 + -1;
      } while (-1 < lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  } while( true );
}

