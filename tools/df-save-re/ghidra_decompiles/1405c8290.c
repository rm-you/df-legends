// FUN_1405c8290 @ 1405c8290
// callees:
//   -> 14089b3e0 FUN_14089b3e0
//   -> 140dfb5b4 free
//   -> 14089b600 FUN_14089b600
//   -> 14089b870 FUN_14089b870


void FUN_1405c8290(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3;
  while (lVar2 >> 3 != 0) {
    pvVar1 = *(void **)(lVar3 + -8 + (lVar2 >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_14089b3e0(pvVar1);
      free(pvVar1);
    }
    lVar3 = *param_1;
    lVar2 = param_1[1] - lVar3;
  }
  lVar3 = param_1[4] - param_1[3];
  while (lVar3 >> 3 != 0) {
    pvVar1 = *(void **)(param_1[3] + -8 + (param_1[4] - param_1[3] >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_14089b600(pvVar1);
      free(pvVar1);
    }
    lVar3 = param_1[4] - param_1[3];
  }
  lVar3 = param_1[7] - param_1[6];
  while (lVar3 >> 3 != 0) {
    pvVar1 = *(void **)(param_1[6] + -8 + (param_1[7] - param_1[6] >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_14089b870(pvVar1);
      free(pvVar1);
    }
    lVar3 = param_1[7] - param_1[6];
  }
  return;
}

