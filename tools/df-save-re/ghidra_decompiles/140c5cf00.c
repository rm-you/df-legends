// FUN_140c5cf00 @ 140c5cf00
// callees:


undefined8 FUN_140c5cf00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 3) + -1;
  lVar2 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x38) + lVar2 * 8) + 0x10))();
      if (iVar1 == 0x12) {
        iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x38) + lVar2 * 8) + 0x60))();
        if (iVar1 != *(int *)(param_1 + 0x130)) {
          return 1;
        }
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return 0;
}

