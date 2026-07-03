// FUN_140977750 @ 140977750
// callees:


int FUN_140977750(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = (int)(*(longlong *)(param_1 + 0x23a8) - *(longlong *)(param_1 + 0x23a0) >> 3) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x23a0) + lVar5 * 8);
      iVar2 = (int)(plVar3[1] - *plVar3 >> 3) + -1;
      if (-1 < iVar2) {
        lVar1 = (longlong)iVar2;
        plVar3 = (longlong *)
                 (**(longlong **)(*(longlong *)(param_1 + 0x23a0) + lVar5 * 8) + lVar1 * 8);
        do {
          if (*plVar3 == param_2) {
            return iVar4;
          }
          plVar3 = plVar3 + -1;
          lVar1 = lVar1 + -1;
        } while (-1 < lVar1);
      }
      iVar4 = iVar4 + -1;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  return -1;
}

