// FUN_14007c7a0 @ 14007c7a0
// callees:
//   -> 1407f0860 FUN_1407f0860
//   -> 14007c7a0 FUN_14007c7a0


void FUN_14007c7a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80000;
  FUN_1407f0860(param_1,3);
  if (((*(byte *)(param_1 + 0x10) & 0x40) != 0) &&
     (iVar1 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 3) + -1,
     lVar3 = (longlong)iVar1, -1 < iVar1)) {
    do {
      iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) + 0x10))();
      if ((iVar1 == 10) &&
         (lVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x38) + lVar3 * 8) + 0x18))()
         , lVar2 != 0)) {
        FUN_14007c7a0(lVar2);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}

