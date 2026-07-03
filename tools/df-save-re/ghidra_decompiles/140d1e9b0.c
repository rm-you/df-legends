// FUN_140d1e9b0 @ 140d1e9b0
// callees:
//   -> 14089b3e0 FUN_14089b3e0
//   -> 140dfb5b4 free
//   -> 14089b600 FUN_14089b600
//   -> 14089b870 FUN_14089b870


void FUN_140d1e9b0(longlong *param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(*param_1 + lVar3 * 8);
      if (((*(uint *)((longlong)pvVar1 + 0x148) & 0x10000) != 0) && (pvVar1 != (void *)0x0)) {
        FUN_14089b3e0(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar2 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[3] + lVar3 * 8);
      if (((*(byte *)((longlong)pvVar1 + 0x50) & 1) != 0) && (pvVar1 != (void *)0x0)) {
        FUN_14089b600(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  iVar2 = (int)(param_1[7] - param_1[6] >> 3) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      pvVar1 = *(void **)(param_1[6] + lVar3 * 8);
      if (((*(byte *)((longlong)pvVar1 + 0x68) & 1) != 0) && (pvVar1 != (void *)0x0)) {
        FUN_14089b870(pvVar1);
        free(pvVar1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}

