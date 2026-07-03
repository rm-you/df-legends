// FUN_1402cd700 @ 1402cd700
// callees:


undefined8 FUN_1402cd700(longlong param_1,short param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x20) - *(longlong *)(param_1 + 0x18) >> 3) + -1;
  if (-1 < iVar3) {
    lVar1 = (longlong)iVar3;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8);
    do {
      if (*(short *)(*plVar2 + 0x28) == param_2) {
        return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
      }
      iVar3 = iVar3 + -1;
      plVar2 = plVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return 0;
}

