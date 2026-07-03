// FUN_1407efc10 @ 1407efc10
// callees:
//   -> 14015e1e0 FUN_14015e1e0
//   -> 140dfb5b4 free
//   -> 1407ef5e0 FUN_1407ef5e0


void FUN_1407efc10(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 8) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_14015e1e0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    FUN_1407ef5e0(pvVar1);
    free(pvVar1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}

