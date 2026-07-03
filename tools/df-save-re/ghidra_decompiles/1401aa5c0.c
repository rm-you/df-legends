// FUN_1401aa5c0 @ 1401aa5c0
// callees:


undefined8 FUN_1401aa5c0(longlong param_1,short param_2,short param_3,short param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)(*(longlong *)(param_1 + 0x238) - *(longlong *)(param_1 + 0x230) >> 3) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x230);
      plVar2 = *(longlong **)(lVar1 + lVar4 * 8);
      if (((((int)plVar2[2] == (int)param_2) && (*(int *)((longlong)plVar2 + 0x1c) == (int)param_3))
          && ((int)plVar2[4] == (int)param_4)) &&
         (iVar3 = (**(code **)(*plVar2 + 0x128))(),
         *(short *)(*(longlong *)(lVar1 + lVar4 * 8) + 0x150) == iVar3)) {
        return 1;
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return 0;
}

