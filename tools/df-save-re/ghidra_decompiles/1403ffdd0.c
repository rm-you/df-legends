// FUN_1403ffdd0 @ 1403ffdd0
// callees:


void FUN_1403ffdd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x8a70) - *(longlong *)(param_1 + 0x8a68) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8a68) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x8a70) = *(undefined8 *)(param_1 + 0x8a68);
  return;
}

