// FUN_140d22a50 @ 140d22a50
// callees:
//   -> 1405b1590 FUN_1405b1590
//   -> 140dfb5b4 free
//   -> 14014a480 FUN_14014a480


void FUN_140d22a50(longlong param_1,short param_2,short param_3,short param_4)

{
  void *_Memory;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)(*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78) >> 3) + -1;
  lVar4 = (longlong)iVar1;
  if (-1 < iVar1) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8);
      if (((*(short *)(lVar3 + 4) == param_2) && (*(short *)(lVar3 + 6) == param_3)) &&
         (*(short *)(lVar3 + 8) == param_4)) {
        iVar1 = (int)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60) >> 3) + -1;
        if (-1 < iVar1) {
          lVar3 = (longlong)iVar1;
          plVar2 = (longlong *)(*(longlong *)(param_1 + 0x60) + lVar3 * 8);
          do {
            if (*plVar2 == *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar4 * 8)) break;
            iVar1 = iVar1 + -1;
            plVar2 = plVar2 + -1;
            lVar3 = lVar3 + -1;
          } while (-1 < lVar3);
          if (-1 < iVar1) {
            _Memory = *(void **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8);
            if (_Memory != (void *)0x0) {
              FUN_1405b1590(_Memory);
              free(_Memory);
            }
            goto LAB_140d22b15;
          }
        }
        FUN_14014a480("failed vermin colony deletion");
      }
LAB_140d22b15:
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}

