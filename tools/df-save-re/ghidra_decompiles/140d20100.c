// FUN_140d20100 @ 140d20100
// callees:
//   -> 140dfb5b4 free


void FUN_140d20100(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  
  sVar5 = 0;
  if (*(longlong *)(param_1 + 0x1160b0) != 0) {
    sVar3 = sVar5;
    if (0 < *(int *)(param_1 + 0x1160d8)) {
      do {
        lVar1 = (longlong)sVar3 * 8;
        if (*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x1160b0)) != 0) {
          sVar4 = sVar5;
          if (0 < *(int *)(param_1 + 0x1160dc)) {
            do {
              pvVar2 = *(void **)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x1160b0)) +
                                 (longlong)sVar4 * 8);
              if (pvVar2 != (void *)0x0) {
                free(pvVar2);
              }
              sVar4 = sVar4 + 1;
            } while ((int)sVar4 < *(int *)(param_1 + 0x1160dc));
          }
          free(*(void **)(lVar1 + *(longlong *)(param_1 + 0x1160b0)));
        }
        sVar3 = sVar3 + 1;
      } while ((int)sVar3 < *(int *)(param_1 + 0x1160d8));
    }
    free(*(void **)(param_1 + 0x1160b0));
    *(undefined8 *)(param_1 + 0x1160b0) = 0;
  }
  if (*(longlong *)(param_1 + 0x1160d0) != 0) {
    if (0 < *(int *)(param_1 + 0x1160d8)) {
      do {
        pvVar2 = *(void **)(*(longlong *)(param_1 + 0x1160d0) + (longlong)sVar5 * 8);
        if (pvVar2 != (void *)0x0) {
          free(pvVar2);
        }
        sVar5 = sVar5 + 1;
      } while ((int)sVar5 < *(int *)(param_1 + 0x1160d8));
    }
    free(*(void **)(param_1 + 0x1160d0));
    *(undefined8 *)(param_1 + 0x1160d0) = 0;
  }
  if (*(void **)(param_1 + 0x119af8) != (void *)0x0) {
    free(*(void **)(param_1 + 0x119af8));
    *(undefined8 *)(param_1 + 0x119af8) = 0;
  }
  return;
}

