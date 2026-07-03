// FUN_140d1eca0 @ 140d1eca0
// callees:
//   -> 1407f0860 FUN_1407f0860


void FUN_140d1eca0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18);
  while (lVar2 >> 3 != 0) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x18) +
              (longlong)
              ((int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) + -1) * 8);
    if (plVar1 != (longlong *)0x0) {
      if ((*(uint *)(plVar1 + 2) & 0x100000) == 0) {
        FUN_1407f0860(plVar1,0);
        (**(code **)(*plVar1 + 800))(plVar1);
      }
      (**(code **)(*plVar1 + 0x770))(plVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18);
  }
  return;
}

