// FUN_1403bd390 @ 1403bd390
// callees:


void FUN_1403bd390(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x8a88) - *(longlong *)(param_1 + 0x8a80) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8a80) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x8a88) = *(undefined8 *)(param_1 + 0x8a80);
  return;
}

