// FUN_1405c84a0 @ 1405c84a0
// callees:
//   -> 140362720 FUN_140362720
//   -> 140dfb5b4 free
//   -> 1403629e0 FUN_1403629e0
//   -> 140362ce0 FUN_140362ce0


void FUN_1405c84a0(longlong *param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3;
  while (lVar2 >> 3 != 0) {
    pvVar1 = *(void **)(lVar3 + -8 + (lVar2 >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_140362720(pvVar1);
      free(pvVar1);
    }
    lVar3 = *param_1;
    lVar2 = param_1[1] - lVar3;
  }
  lVar3 = param_1[4] - param_1[3];
  while (lVar3 >> 3 != 0) {
    pvVar1 = *(void **)(param_1[3] + -8 + (param_1[4] - param_1[3] >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_1403629e0(pvVar1);
      free(pvVar1);
    }
    lVar3 = param_1[4] - param_1[3];
  }
  lVar3 = param_1[7] - param_1[6];
  while (lVar3 >> 3 != 0) {
    pvVar1 = *(void **)(param_1[6] + -8 + (param_1[7] - param_1[6] >> 3) * 8);
    if (pvVar1 != (void *)0x0) {
      FUN_140362ce0(pvVar1);
      free(pvVar1);
    }
    lVar3 = param_1[7] - param_1[6];
  }
  param_1[10] = param_1[9];
  param_1[0xd] = param_1[0xc];
  return;
}

