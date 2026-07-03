// FUN_140d20020 @ 140d20020
// callees:
//   -> 140160d10 FUN_140160d10
//   -> 140dfb5b4 free
//   -> 140160ae0 FUN_140160ae0
//   -> 140d20100 FUN_140d20100


void FUN_140d20020(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(*(longlong *)(param_1 + 0x1160a0) - *(longlong *)(param_1 + 0x116098) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x116098) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140160d10(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x1160a0) = *(undefined8 *)(param_1 + 0x116098);
  iVar2 = (int)(*(longlong *)(param_1 + 0x1160c0) - *(longlong *)(param_1 + 0x1160b8) >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*(longlong *)(param_1 + 0x1160b8) + lVar3 * 8);
      if (pvVar1 != (void *)0x0) {
        FUN_140160ae0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined8 *)(param_1 + 0x1160c0) = *(undefined8 *)(param_1 + 0x1160b8);
  FUN_140d20100(param_1);
  return;
}

