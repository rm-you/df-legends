// FUN_1402cdae0 @ 1402cdae0
// callees:


undefined8 FUN_1402cdae0(longlong param_1,short param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x3b0) - *(longlong *)(param_1 + 0x3a8) >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = (longlong)iVar3;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x3a8) + lVar1 * 8);
    do {
      if (*(short *)(*plVar2 + 0x28) == param_2) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x3a8) + (longlong)iVar3 * 8);
      }
      iVar3 = iVar3 + -1;
      plVar2 = plVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return 0;
}

